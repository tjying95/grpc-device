<%
import common_helpers
import service_helpers

attributes = data['attributes']
enums = data['enums']
config = data['config']
functions = data['functions']

function_enums = common_helpers.get_function_enums(functions)
enums_to_map = [e for e in function_enums if enums[e].get("generate-mappings", False)]
service_class_prefix = config["service_class_prefix"]
include_guard_name = service_helpers.get_include_guard_name(config, "_SERVICE_H")
namespace_prefix = config["namespace_component"] + "_grpc::"
if len(config["custom_types"]) > 0:
  custom_types = config["custom_types"]
(input_custom_types, output_custom_types) = common_helpers.get_input_and_output_custom_types(functions)
resource_handle_type = config.get("resource_handle_type", "ViSession")
resource_repository_type = f"nidevice_grpc::SessionResourceRepository<{resource_handle_type}>"
resource_repository_ptr = f"std::shared_ptr<{resource_repository_type}>"

async_functions = service_helpers.get_async_functions(functions)
has_async_functions = any(async_functions)
base_class_name = f"{service_class_prefix}::Service"
for async_function in async_functions.keys():
  base_class_name = f"{service_class_prefix}::ExperimentalWithCallbackMethod_{async_function}<{base_class_name}>"
%>\

//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the ${config["driver_name"]} Metadata
//---------------------------------------------------------------------
#ifndef ${include_guard_name}
#define ${include_guard_name}

#include <${config["module_name"]}.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "${config["module_name"]}_library_interface.h"

namespace ${config["namespace_component"]}_grpc {

class ${service_class_prefix}Service final : public ${base_class_name} {
public:
  using ResourceRepositorySharedPtr = ${resource_repository_ptr};

  ${service_class_prefix}Service(${service_class_prefix}LibraryInterface* library, ResourceRepositorySharedPtr session_repository);
  virtual ~${service_class_prefix}Service();
  
% for function in common_helpers.filter_proto_rpc_functions(functions):
<%
  f = functions[function]
  method_name = common_helpers.snake_to_pascal(function)
  request_type = service_helpers.get_request_type(method_name)
  response_type = service_helpers.get_response_type(method_name)
%>\
% if function in async_functions:
  ::grpc::experimental::ServerWriteReactor<${response_type}>* ${method_name}(::grpc::CallbackServerContext* context, const ${request_type}* request) override;
% else:
  ::grpc::Status ${method_name}(::grpc::ServerContext* context, const ${request_type}* request, ${response_type}* response) override;
% endif
% endfor
private:
  ${service_class_prefix}LibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
% if common_helpers.has_viboolean_array_param(functions):
  void Copy(const std::vector<ViBoolean>& input, google::protobuf::RepeatedField<bool>* output);
% endif
% if common_helpers.has_enum_array_string_out_param(functions):
  template <typename TEnum>
  void CopyBytesToEnums(const std::string& input, google::protobuf::RepeatedField<TEnum>* output);
% endif
% if 'custom_types' in locals():
%   for custom_type in custom_types:
	% if custom_type["name"] in output_custom_types:
  void Copy(const ${custom_type["name"]}& input, ${namespace_prefix}${custom_type["grpc_name"]}* output);
  void Copy(const std::vector<${custom_type["name"]}>& input, google::protobuf::RepeatedPtrField<${namespace_prefix}${custom_type["grpc_name"]}>* output);
	% endif
	% if custom_type["name"] in input_custom_types:
  ${custom_type["name"]} ConvertMessage(const ${namespace_prefix}${custom_type["grpc_name"]}& input);
  void Copy(const google::protobuf::RepeatedPtrField<${namespace_prefix}${custom_type["grpc_name"]}>& input, std::vector<${custom_type["name"]}>* output);
	%endif
%   endfor
% endif
% for enum in enums_to_map:
<%
  enum_value = service_helpers.python_to_c(enums[enum])
%>\
  std::map<std::int32_t, ${enum_value}> ${enum.lower()}_input_map_ { ${service_helpers.get_input_lookup_values(enums[enum])} };
  std::map<${enum_value}, std::int32_t> ${enum.lower()}_output_map_ { ${service_helpers.get_output_lookup_values(enums[enum])} };
% endfor
};

} // namespace ${config["namespace_component"]}_grpc

#endif  // ${include_guard_name}
