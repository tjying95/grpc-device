
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar header for the NI-RFMXGSM Metadata
//---------------------------------------------------------------------
#ifndef NIRFMXGSM_GRPC_SERVICE_REGISTRAR_H
#define NIRFMXGSM_GRPC_SERVICE_REGISTRAR_H
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>

#include <memory>

#include <niRFmxGSM.h> // for niRFmxInstrHandle

namespace grpc {
class ServerBuilder;
}

namespace nirfmxgsm_grpc {
using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& server_builder, 
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles);

} // nirfmxgsm_grpc

#endif  // NIRFMXGSM_GRPC_SERVICE_REGISTRAR_H
