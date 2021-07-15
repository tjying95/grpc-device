//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-FAKE-NON-IVI
//---------------------------------------------------------------------
#ifndef NIFAKE_NON_IVI_GRPC_LIBRARY_H
#define NIFAKE_NON_IVI_GRPC_LIBRARY_H

#include "nifake_non_ivi_library_interface.h"

#include <server/shared_library.h>

namespace nifake_non_ivi_grpc {

class NiFakeNonIviLibrary : public nifake_non_ivi_grpc::NiFakeNonIviLibraryInterface {
 public:
  NiFakeNonIviLibrary();
  virtual ~NiFakeNonIviLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  int32 Close(FakeHandle handle);
  int32 Init(const char sessionName[], FakeHandle* handle);
  int32 InitWithHandleNameAsSessionName(const char handleName[], FakeHandle* handle);
  int32 InputArraysWithNarrowIntegerTypes(const myUInt16 u16Array[], const myInt16 i16Array[], const myInt8 i8Array[]);
  int32 OutputArraysWithNarrowIntegerTypes(int32 numberOfU16Samples, myUInt16 u16Data[], int32 numberOfI16Samples, myInt16 i16Data[], int32 numberOfI8Samples, myInt8 i8Data[]);
  int32 InputArrayOfBytes(const myUInt8 u8Array[]);
  int32 OutputArrayOfBytes(int32 numberOfU8Samples, myUInt8 u8Data[]);

 private:
  using ClosePtr = int32 (*)(FakeHandle handle);
  using InitPtr = int32 (*)(const char sessionName[], FakeHandle* handle);
  using InitWithHandleNameAsSessionNamePtr = int32 (*)(const char handleName[], FakeHandle* handle);
  using InputArraysWithNarrowIntegerTypesPtr = int32 (*)(const myUInt16 u16Array[], const myInt16 i16Array[], const myInt8 i8Array[]);
  using OutputArraysWithNarrowIntegerTypesPtr = int32 (*)(int32 numberOfU16Samples, myUInt16 u16Data[], int32 numberOfI16Samples, myInt16 i16Data[], int32 numberOfI8Samples, myInt8 i8Data[]);
  using InputArrayOfBytesPtr = int32 (*)(const myUInt8 u8Array[]);
  using OutputArrayOfBytesPtr = int32 (*)(int32 numberOfU8Samples, myUInt8 u8Data[]);

  typedef struct FunctionPointers {
    ClosePtr Close;
    InitPtr Init;
    InitWithHandleNameAsSessionNamePtr InitWithHandleNameAsSessionName;
    InputArraysWithNarrowIntegerTypesPtr InputArraysWithNarrowIntegerTypes;
    OutputArraysWithNarrowIntegerTypesPtr OutputArraysWithNarrowIntegerTypes;
    InputArrayOfBytesPtr InputArrayOfBytes;
    OutputArrayOfBytesPtr OutputArrayOfBytes;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nifake_non_ivi_grpc

#endif  // NIFAKE_NON_IVI_GRPC_LIBRARY_H
