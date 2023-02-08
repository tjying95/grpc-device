
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-RFMXGSM Metadata
//---------------------------------------------------------------------
#ifndef NIRFMXGSM_GRPC_SERVICE_H
#define NIRFMXGSM_GRPC_SERVICE_H

#include <nirfmxgsm.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nirfmxgsm_library_interface.h"

namespace nirfmxgsm_grpc {

struct NiRFmxGSMFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiRFmxGSMFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiRFmxGSMService final : public NiRFmxGSM::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>;
  using ViSessionResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiRFmxGSMService(
    NiRFmxGSMLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    ViSessionResourceRepositorySharedPtr vi_session_resource_repository,
    const NiRFmxGSMFeatureToggles& feature_toggles = {});
  virtual ~NiRFmxGSMService();
  
  ::grpc::Status AbortMeasurements(::grpc::ServerContext* context, const AbortMeasurementsRequest* request, AbortMeasurementsResponse* response) override;
  ::grpc::Status AnalyzeIQ1Waveform(::grpc::ServerContext* context, const AnalyzeIQ1WaveformRequest* request, AnalyzeIQ1WaveformResponse* response) override;
  ::grpc::Status AutoLevel(::grpc::ServerContext* context, const AutoLevelRequest* request, AutoLevelResponse* response) override;
  ::grpc::Status BuildOffsetString(::grpc::ServerContext* context, const BuildOffsetStringRequest* request, BuildOffsetStringResponse* response) override;
  ::grpc::Status BuildSignalString(::grpc::ServerContext* context, const BuildSignalStringRequest* request, BuildSignalStringResponse* response) override;
  ::grpc::Status BuildSlotString(::grpc::ServerContext* context, const BuildSlotStringRequest* request, BuildSlotStringResponse* response) override;
  ::grpc::Status CfgAutoTSCDetectionEnabled(::grpc::ServerContext* context, const CfgAutoTSCDetectionEnabledRequest* request, CfgAutoTSCDetectionEnabledResponse* response) override;
  ::grpc::Status CfgBand(::grpc::ServerContext* context, const CfgBandRequest* request, CfgBandResponse* response) override;
  ::grpc::Status CfgBurstSynchronizationType(::grpc::ServerContext* context, const CfgBurstSynchronizationTypeRequest* request, CfgBurstSynchronizationTypeResponse* response) override;
  ::grpc::Status CfgDigitalEdgeTrigger(::grpc::ServerContext* context, const CfgDigitalEdgeTriggerRequest* request, CfgDigitalEdgeTriggerResponse* response) override;
  ::grpc::Status CfgExternalAttenuation(::grpc::ServerContext* context, const CfgExternalAttenuationRequest* request, CfgExternalAttenuationResponse* response) override;
  ::grpc::Status CfgFrequency(::grpc::ServerContext* context, const CfgFrequencyRequest* request, CfgFrequencyResponse* response) override;
  ::grpc::Status CfgFrequencyARFCN(::grpc::ServerContext* context, const CfgFrequencyARFCNRequest* request, CfgFrequencyARFCNResponse* response) override;
  ::grpc::Status CfgFrequencyReference(::grpc::ServerContext* context, const CfgFrequencyReferenceRequest* request, CfgFrequencyReferenceResponse* response) override;
  ::grpc::Status CfgIQPowerEdgeTrigger(::grpc::ServerContext* context, const CfgIQPowerEdgeTriggerRequest* request, CfgIQPowerEdgeTriggerResponse* response) override;
  ::grpc::Status CfgLinkDirection(::grpc::ServerContext* context, const CfgLinkDirectionRequest* request, CfgLinkDirectionResponse* response) override;
  ::grpc::Status CfgMechanicalAttenuation(::grpc::ServerContext* context, const CfgMechanicalAttenuationRequest* request, CfgMechanicalAttenuationResponse* response) override;
  ::grpc::Status CfgNumberOfTimeslots(::grpc::ServerContext* context, const CfgNumberOfTimeslotsRequest* request, CfgNumberOfTimeslotsResponse* response) override;
  ::grpc::Status CfgPowerControlLevel(::grpc::ServerContext* context, const CfgPowerControlLevelRequest* request, CfgPowerControlLevelResponse* response) override;
  ::grpc::Status CfgRF(::grpc::ServerContext* context, const CfgRFRequest* request, CfgRFResponse* response) override;
  ::grpc::Status CfgRFAttenuation(::grpc::ServerContext* context, const CfgRFAttenuationRequest* request, CfgRFAttenuationResponse* response) override;
  ::grpc::Status CfgReferenceLevel(::grpc::ServerContext* context, const CfgReferenceLevelRequest* request, CfgReferenceLevelResponse* response) override;
  ::grpc::Status CfgSignalType(::grpc::ServerContext* context, const CfgSignalTypeRequest* request, CfgSignalTypeResponse* response) override;
  ::grpc::Status CfgSoftwareEdgeTrigger(::grpc::ServerContext* context, const CfgSoftwareEdgeTriggerRequest* request, CfgSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status CfgTSC(::grpc::ServerContext* context, const CfgTSCRequest* request, CfgTSCResponse* response) override;
  ::grpc::Status CheckMeasurementStatus(::grpc::ServerContext* context, const CheckMeasurementStatusRequest* request, CheckMeasurementStatusResponse* response) override;
  ::grpc::Status ClearAllNamedResults(::grpc::ServerContext* context, const ClearAllNamedResultsRequest* request, ClearAllNamedResultsResponse* response) override;
  ::grpc::Status ClearNamedResult(::grpc::ServerContext* context, const ClearNamedResultRequest* request, ClearNamedResultResponse* response) override;
  ::grpc::Status CloneSignalConfiguration(::grpc::ServerContext* context, const CloneSignalConfigurationRequest* request, CloneSignalConfigurationResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status CreateSignalConfiguration(::grpc::ServerContext* context, const CreateSignalConfigurationRequest* request, CreateSignalConfigurationResponse* response) override;
  ::grpc::Status DeleteSignalConfiguration(::grpc::ServerContext* context, const DeleteSignalConfigurationRequest* request, DeleteSignalConfigurationResponse* response) override;
  ::grpc::Status DisableTrigger(::grpc::ServerContext* context, const DisableTriggerRequest* request, DisableTriggerResponse* response) override;
  ::grpc::Status GetAllNamedResultNames(::grpc::ServerContext* context, const GetAllNamedResultNamesRequest* request, GetAllNamedResultNamesResponse* response) override;
  ::grpc::Status GetAttributeF32(::grpc::ServerContext* context, const GetAttributeF32Request* request, GetAttributeF32Response* response) override;
  ::grpc::Status GetAttributeF32Array(::grpc::ServerContext* context, const GetAttributeF32ArrayRequest* request, GetAttributeF32ArrayResponse* response) override;
  ::grpc::Status GetAttributeF64(::grpc::ServerContext* context, const GetAttributeF64Request* request, GetAttributeF64Response* response) override;
  ::grpc::Status GetAttributeF64Array(::grpc::ServerContext* context, const GetAttributeF64ArrayRequest* request, GetAttributeF64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI16(::grpc::ServerContext* context, const GetAttributeI16Request* request, GetAttributeI16Response* response) override;
  ::grpc::Status GetAttributeI32(::grpc::ServerContext* context, const GetAttributeI32Request* request, GetAttributeI32Response* response) override;
  ::grpc::Status GetAttributeI32Array(::grpc::ServerContext* context, const GetAttributeI32ArrayRequest* request, GetAttributeI32ArrayResponse* response) override;
  ::grpc::Status GetAttributeI64(::grpc::ServerContext* context, const GetAttributeI64Request* request, GetAttributeI64Response* response) override;
  ::grpc::Status GetAttributeI64Array(::grpc::ServerContext* context, const GetAttributeI64ArrayRequest* request, GetAttributeI64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI8(::grpc::ServerContext* context, const GetAttributeI8Request* request, GetAttributeI8Response* response) override;
  ::grpc::Status GetAttributeI8Array(::grpc::ServerContext* context, const GetAttributeI8ArrayRequest* request, GetAttributeI8ArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const GetAttributeNIComplexDoubleArrayRequest* request, GetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const GetAttributeNIComplexSingleArrayRequest* request, GetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status GetAttributeString(::grpc::ServerContext* context, const GetAttributeStringRequest* request, GetAttributeStringResponse* response) override;
  ::grpc::Status GetAttributeU16(::grpc::ServerContext* context, const GetAttributeU16Request* request, GetAttributeU16Response* response) override;
  ::grpc::Status GetAttributeU32(::grpc::ServerContext* context, const GetAttributeU32Request* request, GetAttributeU32Response* response) override;
  ::grpc::Status GetAttributeU32Array(::grpc::ServerContext* context, const GetAttributeU32ArrayRequest* request, GetAttributeU32ArrayResponse* response) override;
  ::grpc::Status GetAttributeU64Array(::grpc::ServerContext* context, const GetAttributeU64ArrayRequest* request, GetAttributeU64ArrayResponse* response) override;
  ::grpc::Status GetAttributeU8(::grpc::ServerContext* context, const GetAttributeU8Request* request, GetAttributeU8Response* response) override;
  ::grpc::Status GetAttributeU8Array(::grpc::ServerContext* context, const GetAttributeU8ArrayRequest* request, GetAttributeU8ArrayResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetErrorString(::grpc::ServerContext* context, const GetErrorStringRequest* request, GetErrorStringResponse* response) override;
  ::grpc::Status Initialize(::grpc::ServerContext* context, const InitializeRequest* request, InitializeResponse* response) override;
  ::grpc::Status InitializeFromNIRFSASession(::grpc::ServerContext* context, const InitializeFromNIRFSASessionRequest* request, InitializeFromNIRFSASessionResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status ModAccCfgAveraging(::grpc::ServerContext* context, const ModAccCfgAveragingRequest* request, ModAccCfgAveragingResponse* response) override;
  ::grpc::Status ModAccCfgDroopCompensationEnabled(::grpc::ServerContext* context, const ModAccCfgDroopCompensationEnabledRequest* request, ModAccCfgDroopCompensationEnabledResponse* response) override;
  ::grpc::Status ModAccFetchConstellationTrace(::grpc::ServerContext* context, const ModAccFetchConstellationTraceRequest* request, ModAccFetchConstellationTraceResponse* response) override;
  ::grpc::Status ModAccFetchDemodulatedBits(::grpc::ServerContext* context, const ModAccFetchDemodulatedBitsRequest* request, ModAccFetchDemodulatedBitsResponse* response) override;
  ::grpc::Status ModAccFetchDetectedTSC(::grpc::ServerContext* context, const ModAccFetchDetectedTSCRequest* request, ModAccFetchDetectedTSCResponse* response) override;
  ::grpc::Status ModAccFetchDetectedTSCArray(::grpc::ServerContext* context, const ModAccFetchDetectedTSCArrayRequest* request, ModAccFetchDetectedTSCArrayResponse* response) override;
  ::grpc::Status ModAccFetchEVM(::grpc::ServerContext* context, const ModAccFetchEVMRequest* request, ModAccFetchEVMResponse* response) override;
  ::grpc::Status ModAccFetchEVMAmplitudeDroop(::grpc::ServerContext* context, const ModAccFetchEVMAmplitudeDroopRequest* request, ModAccFetchEVMAmplitudeDroopResponse* response) override;
  ::grpc::Status ModAccFetchEVMMagnitudeError(::grpc::ServerContext* context, const ModAccFetchEVMMagnitudeErrorRequest* request, ModAccFetchEVMMagnitudeErrorResponse* response) override;
  ::grpc::Status ModAccFetchEVMPhaseError(::grpc::ServerContext* context, const ModAccFetchEVMPhaseErrorRequest* request, ModAccFetchEVMPhaseErrorResponse* response) override;
  ::grpc::Status ModAccFetchEVMTrace(::grpc::ServerContext* context, const ModAccFetchEVMTraceRequest* request, ModAccFetchEVMTraceResponse* response) override;
  ::grpc::Status ModAccFetchIQImpairments(::grpc::ServerContext* context, const ModAccFetchIQImpairmentsRequest* request, ModAccFetchIQImpairmentsResponse* response) override;
  ::grpc::Status ModAccFetchMagnitudeErrorTrace(::grpc::ServerContext* context, const ModAccFetchMagnitudeErrorTraceRequest* request, ModAccFetchMagnitudeErrorTraceResponse* response) override;
  ::grpc::Status ModAccFetchPFER(::grpc::ServerContext* context, const ModAccFetchPFERRequest* request, ModAccFetchPFERResponse* response) override;
  ::grpc::Status ModAccFetchPhaseErrorTrace(::grpc::ServerContext* context, const ModAccFetchPhaseErrorTraceRequest* request, ModAccFetchPhaseErrorTraceResponse* response) override;
  ::grpc::Status ORFSCfgAveraging(::grpc::ServerContext* context, const ORFSCfgAveragingRequest* request, ORFSCfgAveragingResponse* response) override;
  ::grpc::Status ORFSCfgEvaluationSymbols(::grpc::ServerContext* context, const ORFSCfgEvaluationSymbolsRequest* request, ORFSCfgEvaluationSymbolsResponse* response) override;
  ::grpc::Status ORFSCfgMeasurementType(::grpc::ServerContext* context, const ORFSCfgMeasurementTypeRequest* request, ORFSCfgMeasurementTypeResponse* response) override;
  ::grpc::Status ORFSCfgModulationCustomOffsetFrequencyArray(::grpc::ServerContext* context, const ORFSCfgModulationCustomOffsetFrequencyArrayRequest* request, ORFSCfgModulationCustomOffsetFrequencyArrayResponse* response) override;
  ::grpc::Status ORFSCfgNoiseCompensationEnabled(::grpc::ServerContext* context, const ORFSCfgNoiseCompensationEnabledRequest* request, ORFSCfgNoiseCompensationEnabledResponse* response) override;
  ::grpc::Status ORFSCfgOffsetFrequencyMode(::grpc::ServerContext* context, const ORFSCfgOffsetFrequencyModeRequest* request, ORFSCfgOffsetFrequencyModeResponse* response) override;
  ::grpc::Status ORFSCfgSwitchingCustomOffsetFrequencyArray(::grpc::ServerContext* context, const ORFSCfgSwitchingCustomOffsetFrequencyArrayRequest* request, ORFSCfgSwitchingCustomOffsetFrequencyArrayResponse* response) override;
  ::grpc::Status ORFSFetchModulationPowerTrace(::grpc::ServerContext* context, const ORFSFetchModulationPowerTraceRequest* request, ORFSFetchModulationPowerTraceResponse* response) override;
  ::grpc::Status ORFSFetchModulationResultsArray(::grpc::ServerContext* context, const ORFSFetchModulationResultsArrayRequest* request, ORFSFetchModulationResultsArrayResponse* response) override;
  ::grpc::Status ORFSFetchSwitchingPowerTrace(::grpc::ServerContext* context, const ORFSFetchSwitchingPowerTraceRequest* request, ORFSFetchSwitchingPowerTraceResponse* response) override;
  ::grpc::Status ORFSFetchSwitchingResultsArray(::grpc::ServerContext* context, const ORFSFetchSwitchingResultsArrayRequest* request, ORFSFetchSwitchingResultsArrayResponse* response) override;
  ::grpc::Status PVTCfgAveraging(::grpc::ServerContext* context, const PVTCfgAveragingRequest* request, PVTCfgAveragingResponse* response) override;
  ::grpc::Status PVTFetchMeasurementStatus(::grpc::ServerContext* context, const PVTFetchMeasurementStatusRequest* request, PVTFetchMeasurementStatusResponse* response) override;
  ::grpc::Status PVTFetchPowerTrace(::grpc::ServerContext* context, const PVTFetchPowerTraceRequest* request, PVTFetchPowerTraceResponse* response) override;
  ::grpc::Status PVTFetchSlotMeasurement(::grpc::ServerContext* context, const PVTFetchSlotMeasurementRequest* request, PVTFetchSlotMeasurementResponse* response) override;
  ::grpc::Status PVTFetchSlotMeasurementArray(::grpc::ServerContext* context, const PVTFetchSlotMeasurementArrayRequest* request, PVTFetchSlotMeasurementArrayResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetToDefault(::grpc::ServerContext* context, const ResetToDefaultRequest* request, ResetToDefaultResponse* response) override;
  ::grpc::Status SelectMeasurements(::grpc::ServerContext* context, const SelectMeasurementsRequest* request, SelectMeasurementsResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeF32(::grpc::ServerContext* context, const SetAttributeF32Request* request, SetAttributeF32Response* response) override;
  ::grpc::Status SetAttributeF32Array(::grpc::ServerContext* context, const SetAttributeF32ArrayRequest* request, SetAttributeF32ArrayResponse* response) override;
  ::grpc::Status SetAttributeF64(::grpc::ServerContext* context, const SetAttributeF64Request* request, SetAttributeF64Response* response) override;
  ::grpc::Status SetAttributeF64Array(::grpc::ServerContext* context, const SetAttributeF64ArrayRequest* request, SetAttributeF64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI16(::grpc::ServerContext* context, const SetAttributeI16Request* request, SetAttributeI16Response* response) override;
  ::grpc::Status SetAttributeI32(::grpc::ServerContext* context, const SetAttributeI32Request* request, SetAttributeI32Response* response) override;
  ::grpc::Status SetAttributeI32Array(::grpc::ServerContext* context, const SetAttributeI32ArrayRequest* request, SetAttributeI32ArrayResponse* response) override;
  ::grpc::Status SetAttributeI64(::grpc::ServerContext* context, const SetAttributeI64Request* request, SetAttributeI64Response* response) override;
  ::grpc::Status SetAttributeI64Array(::grpc::ServerContext* context, const SetAttributeI64ArrayRequest* request, SetAttributeI64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI8(::grpc::ServerContext* context, const SetAttributeI8Request* request, SetAttributeI8Response* response) override;
  ::grpc::Status SetAttributeI8Array(::grpc::ServerContext* context, const SetAttributeI8ArrayRequest* request, SetAttributeI8ArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const SetAttributeNIComplexDoubleArrayRequest* request, SetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const SetAttributeNIComplexSingleArrayRequest* request, SetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status SetAttributeString(::grpc::ServerContext* context, const SetAttributeStringRequest* request, SetAttributeStringResponse* response) override;
  ::grpc::Status SetAttributeU16(::grpc::ServerContext* context, const SetAttributeU16Request* request, SetAttributeU16Response* response) override;
  ::grpc::Status SetAttributeU32(::grpc::ServerContext* context, const SetAttributeU32Request* request, SetAttributeU32Response* response) override;
  ::grpc::Status SetAttributeU32Array(::grpc::ServerContext* context, const SetAttributeU32ArrayRequest* request, SetAttributeU32ArrayResponse* response) override;
  ::grpc::Status SetAttributeU64Array(::grpc::ServerContext* context, const SetAttributeU64ArrayRequest* request, SetAttributeU64ArrayResponse* response) override;
  ::grpc::Status SetAttributeU8(::grpc::ServerContext* context, const SetAttributeU8Request* request, SetAttributeU8Response* response) override;
  ::grpc::Status SetAttributeU8Array(::grpc::ServerContext* context, const SetAttributeU8ArrayRequest* request, SetAttributeU8ArrayResponse* response) override;
  ::grpc::Status WaitForAcquisitionComplete(::grpc::ServerContext* context, const WaitForAcquisitionCompleteRequest* request, WaitForAcquisitionCompleteResponse* response) override;
  ::grpc::Status WaitForMeasurementComplete(::grpc::ServerContext* context, const WaitForMeasurementCompleteRequest* request, WaitForMeasurementCompleteResponse* response) override;
private:
  NiRFmxGSMLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  ViSessionResourceRepositorySharedPtr vi_session_resource_repository_;
  ::grpc::Status ConvertApiErrorStatusForNiRFmxInstrHandle(::grpc::ServerContext* context, int32_t status, niRFmxInstrHandle instrumentHandle);
  std::map<std::int32_t, std::string> digitaledgetriggersource_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PXI_Trig0"},{4, "PXI_Trig1"},{5, "PXI_Trig2"},{6, "PXI_Trig3"},{7, "PXI_Trig4"},{8, "PXI_Trig5"},{9, "PXI_Trig6"},{10, "PXI_Trig7"},{11, "PXI_STAR"},{12, "PXIe_DStarB"},{13, "TimerEvent"}, };
  std::map<std::string, std::int32_t> digitaledgetriggersource_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PXI_Trig0", 3},{"PXI_Trig1", 4},{"PXI_Trig2", 5},{"PXI_Trig3", 6},{"PXI_Trig4", 7},{"PXI_Trig5", 8},{"PXI_Trig6", 9},{"PXI_Trig7", 10},{"PXI_STAR", 11},{"PXIe_DStarB", 12},{"TimerEvent", 13}, };
  std::map<std::int32_t, std::string> frequencyreferencesource_input_map_ { {1, "OnboardClock"},{2, "RefIn"},{3, "PXI_Clk"},{4, "ClkIn"}, };
  std::map<std::string, std::int32_t> frequencyreferencesource_output_map_ { {"OnboardClock", 1},{"RefIn", 2},{"PXI_Clk", 3},{"ClkIn", 4}, };
  std::map<std::int32_t, std::string> nirfmxgsmstringattributevaluesmapped_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PXI_Trig0"},{4, "PXI_Trig1"},{5, "PXI_Trig2"},{6, "PXI_Trig3"},{7, "PXI_Trig4"},{8, "PXI_Trig5"},{9, "PXI_Trig6"},{10, "PXI_Trig7"},{11, "PXI_STAR"},{12, "PXIe_DStarB"},{13, "TimerEvent"}, };
  std::map<std::string, std::int32_t> nirfmxgsmstringattributevaluesmapped_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PXI_Trig0", 3},{"PXI_Trig1", 4},{"PXI_Trig2", 5},{"PXI_Trig3", 6},{"PXI_Trig4", 7},{"PXI_Trig5", 8},{"PXI_Trig6", 9},{"PXI_Trig7", 10},{"PXI_STAR", 11},{"PXIe_DStarB", 12},{"TimerEvent", 13}, };

  NiRFmxGSMFeatureToggles feature_toggles_;
};

} // namespace nirfmxgsm_grpc

#endif  // NIRFMXGSM_GRPC_SERVICE_H
