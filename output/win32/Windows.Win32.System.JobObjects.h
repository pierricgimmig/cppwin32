// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_JobObjects_H
#define WIN32_Windows_Win32_System_JobObjects_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.JobObjects.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::JobObjects
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_IsProcessInJob(win32::Windows::Win32::Foundation::HANDLE ProcessHandle, win32::Windows::Win32::Foundation::HANDLE JobHandle, win32::Windows::Win32::Foundation::BOOL* Result) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_CreateJobObjectW(win32::Windows::Win32::Security::SECURITY_ATTRIBUTES* lpJobAttributes, win32::Windows::Win32::Foundation::PWSTR lpName) noexcept;
    void __stdcall ORBIT_IMPL_FreeMemoryJobObject(void* Buffer) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_OpenJobObjectW(uint32_t dwDesiredAccess, win32::Windows::Win32::Foundation::BOOL bInheritHandle, win32::Windows::Win32::Foundation::PWSTR lpName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_AssignProcessToJobObject(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::Foundation::HANDLE hProcess) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_TerminateJobObject(win32::Windows::Win32::Foundation::HANDLE hJob, uint32_t uExitCode) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetInformationJobObject(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::System::SystemServices::JOBOBJECTINFOCLASS JobObjectInformationClass, void* lpJobObjectInformation, uint32_t cbJobObjectInformationLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_SetIoRateControlInformationJobObject(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::System::JobObjects::JOBOBJECT_IO_RATE_CONTROL_INFORMATION* IoRateControlInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryInformationJobObject(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::System::SystemServices::JOBOBJECTINFOCLASS JobObjectInformationClass, void* lpJobObjectInformation, uint32_t cbJobObjectInformationLength, uint32_t* lpReturnLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_QueryIoRateControlInformationJobObject(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::Foundation::PWSTR VolumeName, win32::Windows::Win32::System::JobObjects::JOBOBJECT_IO_RATE_CONTROL_INFORMATION** InfoBlocks, uint32_t* InfoBlockCount) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_UserHandleGrantAccess(win32::Windows::Win32::Foundation::HANDLE hUserHandle, win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::Foundation::BOOL bGrant) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_CreateJobObjectA(win32::Windows::Win32::Security::SECURITY_ATTRIBUTES* lpJobAttributes, win32::Windows::Win32::Foundation::PSTR lpName) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_OpenJobObjectA(uint32_t dwDesiredAccess, win32::Windows::Win32::Foundation::BOOL bInheritHandle, win32::Windows::Win32::Foundation::PSTR lpName) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::BOOL (__stdcall *IsProcessInJob)(win32::Windows::Win32::Foundation::HANDLE ProcessHandle, win32::Windows::Win32::Foundation::HANDLE JobHandle, win32::Windows::Win32::Foundation::BOOL* Result) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *CreateJobObjectW)(win32::Windows::Win32::Security::SECURITY_ATTRIBUTES* lpJobAttributes, win32::Windows::Win32::Foundation::PWSTR lpName) noexcept;
    void (__stdcall *FreeMemoryJobObject)(void* Buffer) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *OpenJobObjectW)(uint32_t dwDesiredAccess, win32::Windows::Win32::Foundation::BOOL bInheritHandle, win32::Windows::Win32::Foundation::PWSTR lpName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *AssignProcessToJobObject)(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::Foundation::HANDLE hProcess) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *TerminateJobObject)(win32::Windows::Win32::Foundation::HANDLE hJob, uint32_t uExitCode) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetInformationJobObject)(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::System::SystemServices::JOBOBJECTINFOCLASS JobObjectInformationClass, void* lpJobObjectInformation, uint32_t cbJobObjectInformationLength) noexcept;
    uint32_t (__stdcall *SetIoRateControlInformationJobObject)(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::System::JobObjects::JOBOBJECT_IO_RATE_CONTROL_INFORMATION* IoRateControlInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryInformationJobObject)(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::System::SystemServices::JOBOBJECTINFOCLASS JobObjectInformationClass, void* lpJobObjectInformation, uint32_t cbJobObjectInformationLength, uint32_t* lpReturnLength) noexcept;
    uint32_t (__stdcall *QueryIoRateControlInformationJobObject)(win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::Foundation::PWSTR VolumeName, win32::Windows::Win32::System::JobObjects::JOBOBJECT_IO_RATE_CONTROL_INFORMATION** InfoBlocks, uint32_t* InfoBlockCount) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *UserHandleGrantAccess)(win32::Windows::Win32::Foundation::HANDLE hUserHandle, win32::Windows::Win32::Foundation::HANDLE hJob, win32::Windows::Win32::Foundation::BOOL bGrant) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *CreateJobObjectA)(win32::Windows::Win32::Security::SECURITY_ATTRIBUTES* lpJobAttributes, win32::Windows::Win32::Foundation::PSTR lpName) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *OpenJobObjectA)(uint32_t dwDesiredAccess, win32::Windows::Win32::Foundation::BOOL bInheritHandle, win32::Windows::Win32::Foundation::PSTR lpName) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
