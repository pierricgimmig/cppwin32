// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_OperationRecorder_H
#define WIN32_Windows_Win32_Storage_OperationRecorder_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Storage.OperationRecorder.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::OperationRecorder
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_OperationStart(win32::Windows::Win32::Storage::OperationRecorder::OPERATION_START_PARAMETERS* OperationStartParams) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_OperationEnd(win32::Windows::Win32::Storage::OperationRecorder::OPERATION_END_PARAMETERS* OperationEndParams) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::BOOL (__stdcall *OperationStart)(win32::Windows::Win32::Storage::OperationRecorder::OPERATION_START_PARAMETERS* OperationStartParams) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *OperationEnd)(win32::Windows::Win32::Storage::OperationRecorder::OPERATION_END_PARAMETERS* OperationEndParams) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
