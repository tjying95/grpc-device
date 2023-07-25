//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-RFMXINSTR-RESTRICTED
//---------------------------------------------------------------------
#ifndef NIRFMXINSTR_RESTRICTED_GRPC_MOCK_LIBRARY_H
#define NIRFMXINSTR_RESTRICTED_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nirfmxinstr_restricted_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiRFmxInstrRestrictedMockLibrary : public nirfmxinstr_restricted_grpc::NiRFmxInstrRestrictedLibraryInterface {
 public:
  MOCK_METHOD(int32, ConvertForPowerUnitsUtility, (niRFmxInstrHandle instrumentHandle, float64 referenceOrTriggerLevelIn, int32 inputPowerUnits, int32 outputPowerUnits, int32 terminalConfiguration, float64 bandwidth, float64* referenceOrTriggerLevelOut), (override));
  MOCK_METHOD(int32, DeleteSnapshot, (niRFmxInstrHandle instrumentHandle, int32 personality, char selectorString[]), (override));
  MOCK_METHOD(int32, GetActiveResultName, (niRFmxInstrHandle instrumentHandle, char signalName[], uInt32 signalType, int32 resultSize, char resultName[], int32* actualResultSize, int32* resultState), (override));
  MOCK_METHOD(int32, GetActiveTableName, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char activeTableName[]), (override));
  MOCK_METHOD(int32, GetAttributeAuthor, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 attributeID, int32* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeDesiredF32, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float32* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeDesiredF32Array, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float32 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeDesiredF64, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float64* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeDesiredF64Array, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, float64 attrVal[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, GetAttributeDesiredI32, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int32* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeDesiredI64, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int64* attrVal), (override));
  MOCK_METHOD(int32, GetAttributeDesiredString, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attributeID, int32 arraySize, char attrVal[]), (override));
  MOCK_METHOD(int32, GetCalibrationPlaneEnabled, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32* calibrationPlaneEnabled), (override));
  MOCK_METHOD(int32, GetCalibrationPlaneNames, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char calibrationPlaneNames[]), (override));
  MOCK_METHOD(int32, GetError, (niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]), (override));
  MOCK_METHOD(int32, GetErrorString, (niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]), (override));
  MOCK_METHOD(int32, GetExternalAttenuationTableNames, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32 arraySize, char externalAttenuationTableNames[]), (override));
  MOCK_METHOD(int32, GetForceAllTracesEnabled, (niRFmxInstrHandle instrumentHandle, char channelName[], int32* attrVal), (override));
  MOCK_METHOD(int32, GetInitiaitedSnapshotStrings, (niRFmxInstrHandle instrumentHandle, uInt64* snapshotInfoCacheIndex, int32 personalityIDArray[], int32 personalityIDArraySize, int32* personalityIDArrayActualSize, char signalNames[], int32 signalNamesSize, int32* signalNamesActualSize, char resultNames[], int32 resultNamesSize, int32* resultNamesActualSize, char snapshotIdentifiers[], int32 snapshotIdentifiersSize, int32* snapshotIdentifiersActualSize, uInt64 snapshotTimestampArray[], int32 snapshotTimestampArraySize, int32* snapshotTimestampArrayActualSize), (override));
  MOCK_METHOD(int32, GetLatestConfigurationSnapshot, (niRFmxInstrHandle instrumentHandle, uInt64* snapshotInfoCacheIndex, int32* personalityID, char signalName[], int32 signalNameSize, int32* signalNameActualSize, char snapshotIdentifier[], int32 snapshotIdentifierSize, int32* snapshotIdentifierActualSize, int32* signalConfigurationState, uInt64* signalTimestamp), (override));
  MOCK_METHOD(int32, GetOpenSessionsInformation, (char resourceName[], int32 infoJsonSize, char infoJson[]), (override));
  MOCK_METHOD(int32, GetPrivilegeLevel, (niRFmxInstrHandle instrumentHandle, int32* isConnectionAlive, int32* privilegeLevel), (override));
  MOCK_METHOD(int32, GetRFmxVersion, (niRFmxInstrHandle instrumentHandle, int32 arraySize, char RFmxVersion[]), (override));
  MOCK_METHOD(int32, GetSessionUniqueIdentifier, (char resourceNames[], char optionString[], int32 sessionUniqueIdentifierSize, char sessionUniqueIdentifier[]), (override));
  MOCK_METHOD(int32, GetSignalConfigurationState64, (niRFmxInstrHandle instrumentHandle, char signalName[], uInt32 signalType, int32* signalState, uInt64* timeStamp), (override));
  MOCK_METHOD(int32, GetSnapshotInfoFromCache, (niRFmxInstrHandle instrumentHandle, uInt64 snapshotInfoCacheIndex, int32 personalityIDArray[], int32 personalityIDArraySize, int32* personalityIDArrayActualSize, char signalNames[], int32 signalNamesSize, int32* signalNamesActualSize, char resultNames[], int32 resultNamesSize, int32* resultNamesActualSize, char snapshotIdentifiers[], int32 snapshotIdentifiersSize, int32* snapshotIdentifiersActualSize, uInt64 snapshotTimestampArray[], int32 snapshotTimestampArraySize, int32* snapshotTimestampArrayActualSize), (override));
  MOCK_METHOD(int32, GetSnapshotState, (niRFmxInstrHandle instrumentHandle, int32 personality, char selectorString[], int32* snapshotState), (override));
  MOCK_METHOD(int32, GetTracesInfoForMonitorSnapshot, (niRFmxInstrHandle instrumentHandle, char selectorString[], int32* allTracesEnabled), (override));
  MOCK_METHOD(int32, LoadAllForRevert, (niRFmxInstrHandle instrumentHandle, char filePath[]), (override));
  MOCK_METHOD(int32, LoadConfigurationsFromJSON, (niRFmxInstrHandle instrumentHandle, char jsonString[], int32 arraySize), (override));
  MOCK_METHOD(int32, RegisterSpecialClientSnapshotInterest, (char resourceName[]), (override));
  MOCK_METHOD(int32, RequestPrivilege, (niRFmxInstrHandle instrumentHandle, int32 privilegeLevel), (override));
  MOCK_METHOD(int32, SaveAllForRevert, (niRFmxInstrHandle instrumentHandle, char filePath[]), (override));
  MOCK_METHOD(int32, SaveConfigurationsToJSON, (niRFmxInstrHandle instrumentHandle, char signalNames[], char jsonStringOut[], int32 arraySize, int32* actualArraySize), (override));
  MOCK_METHOD(int32, SetForceAllTracesEnabled, (niRFmxInstrHandle instrumentHandle, char channelName[], int32 attrVal), (override));
  MOCK_METHOD(int32, SetIOTraceStatus, (niRFmxInstrHandle instrumentHandle, int32 IOTraceStatus), (override));
  MOCK_METHOD(int32, UnregisterSpecialClientSnapshotInterest, (char resourceName[]), (override));
  MOCK_METHOD(int32, GetSFPSessionAccessEnabled, (char selectorString[], int32* isSFPSessionAccessEnabled), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIRFMXINSTR_RESTRICTED_GRPC_MOCK_LIBRARY_H
