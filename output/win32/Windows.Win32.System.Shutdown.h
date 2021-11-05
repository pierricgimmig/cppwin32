// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Shutdown_H
#define WIN32_Windows_Win32_System_Shutdown_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.Shutdown.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::Shutdown
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_InitiateSystemShutdownA(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_InitiateSystemShutdownW(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_AbortSystemShutdownA(win32::Windows::Win32::Foundation::PSTR lpMachineName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_AbortSystemShutdownW(win32::Windows::Win32::Foundation::PWSTR lpMachineName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_InitiateSystemShutdownExA(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_InitiateSystemShutdownExW(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    uint32_t __stdcall ORBIT_IMPL_InitiateShutdownA(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpMessage, uint32_t dwGracePeriod, win32::Windows::Win32::System::Shutdown::SHUTDOWN_FLAGS dwShutdownFlags, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    uint32_t __stdcall ORBIT_IMPL_InitiateShutdownW(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpMessage, uint32_t dwGracePeriod, win32::Windows::Win32::System::Shutdown::SHUTDOWN_FLAGS dwShutdownFlags, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    uint32_t __stdcall ORBIT_IMPL_CheckForHiberboot(win32::Windows::Win32::Foundation::BOOLEAN* pHiberboot, win32::Windows::Win32::Foundation::BOOLEAN bClearFlag) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ExitWindowsEx(win32::Windows::Win32::System::Shutdown::EXIT_WINDOWS_FLAGS uFlags, uint32_t dwReason) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_LockWorkStation() noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ShutdownBlockReasonCreate(win32::Windows::Win32::Foundation::HWND hWnd, win32::Windows::Win32::Foundation::PWSTR pwszReason) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ShutdownBlockReasonQuery(win32::Windows::Win32::Foundation::HWND hWnd, win32::Windows::Win32::Foundation::PWSTR pwszBuff, uint32_t* pcchBuff) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ShutdownBlockReasonDestroy(win32::Windows::Win32::Foundation::HWND hWnd) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::BOOL (__stdcall *InitiateSystemShutdownA)(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *InitiateSystemShutdownW)(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *AbortSystemShutdownA)(win32::Windows::Win32::Foundation::PSTR lpMachineName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *AbortSystemShutdownW)(win32::Windows::Win32::Foundation::PWSTR lpMachineName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *InitiateSystemShutdownExA)(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *InitiateSystemShutdownExW)(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpMessage, uint32_t dwTimeout, win32::Windows::Win32::Foundation::BOOL bForceAppsClosed, win32::Windows::Win32::Foundation::BOOL bRebootAfterShutdown, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    uint32_t (__stdcall *InitiateShutdownA)(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpMessage, uint32_t dwGracePeriod, win32::Windows::Win32::System::Shutdown::SHUTDOWN_FLAGS dwShutdownFlags, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    uint32_t (__stdcall *InitiateShutdownW)(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpMessage, uint32_t dwGracePeriod, win32::Windows::Win32::System::Shutdown::SHUTDOWN_FLAGS dwShutdownFlags, win32::Windows::Win32::System::Shutdown::SHUTDOWN_REASON dwReason) noexcept;
    uint32_t (__stdcall *CheckForHiberboot)(win32::Windows::Win32::Foundation::BOOLEAN* pHiberboot, win32::Windows::Win32::Foundation::BOOLEAN bClearFlag) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ExitWindowsEx)(win32::Windows::Win32::System::Shutdown::EXIT_WINDOWS_FLAGS uFlags, uint32_t dwReason) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *LockWorkStation)() noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ShutdownBlockReasonCreate)(win32::Windows::Win32::Foundation::HWND hWnd, win32::Windows::Win32::Foundation::PWSTR pwszReason) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ShutdownBlockReasonQuery)(win32::Windows::Win32::Foundation::HWND hWnd, win32::Windows::Win32::Foundation::PWSTR pwszBuff, uint32_t* pcchBuff) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ShutdownBlockReasonDestroy)(win32::Windows::Win32::Foundation::HWND hWnd) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
