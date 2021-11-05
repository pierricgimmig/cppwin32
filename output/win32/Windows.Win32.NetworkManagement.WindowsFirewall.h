// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkManagement_WindowsFirewall_H
#define WIN32_Windows_Win32_NetworkManagement_WindowsFirewall_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.NetworkManagement.WindowsFirewall.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::WindowsFirewall
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_NetworkIsolationSetupAppContainerBinaries(win32::Windows::Win32::Foundation::PSID applicationContainerSid, win32::Windows::Win32::Foundation::PWSTR packageFullName, win32::Windows::Win32::Foundation::PWSTR packageFolder, win32::Windows::Win32::Foundation::PWSTR displayName, win32::Windows::Win32::Foundation::BOOL bBinariesFullyComputed, win32::Windows::Win32::Foundation::PWSTR* binaries, uint32_t binariesCount) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NetworkIsolationRegisterForAppContainerChanges(uint32_t flags, win32::Windows::Win32::NetworkManagement::WindowsFirewall::PAC_CHANGES_CALLBACK_FN* callback, void* context, win32::Windows::Win32::Foundation::HANDLE* registrationObject) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NetworkIsolationUnregisterForAppContainerChanges(win32::Windows::Win32::Foundation::HANDLE registrationObject) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NetworkIsolationFreeAppContainers(win32::Windows::Win32::NetworkManagement::WindowsFirewall::INET_FIREWALL_APP_CONTAINER* pPublicAppCs) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NetworkIsolationEnumAppContainers(uint32_t Flags, uint32_t* pdwNumPublicAppCs, win32::Windows::Win32::NetworkManagement::WindowsFirewall::INET_FIREWALL_APP_CONTAINER** ppPublicAppCs) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NetworkIsolationGetAppContainerConfig(uint32_t* pdwNumPublicAppCs, win32::Windows::Win32::Security::SID_AND_ATTRIBUTES** appContainerSids) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NetworkIsolationSetAppContainerConfig(uint32_t dwNumPublicAppCs, win32::Windows::Win32::Security::SID_AND_ATTRIBUTES* appContainerSids) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NetworkIsolationDiagnoseConnectFailureAndGetInfo(win32::Windows::Win32::Foundation::PWSTR wszServerName, win32::Windows::Win32::NetworkManagement::WindowsFirewall::NETISO_ERROR_TYPE* netIsoError) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *NetworkIsolationSetupAppContainerBinaries)(win32::Windows::Win32::Foundation::PSID applicationContainerSid, win32::Windows::Win32::Foundation::PWSTR packageFullName, win32::Windows::Win32::Foundation::PWSTR packageFolder, win32::Windows::Win32::Foundation::PWSTR displayName, win32::Windows::Win32::Foundation::BOOL bBinariesFullyComputed, win32::Windows::Win32::Foundation::PWSTR* binaries, uint32_t binariesCount) noexcept;
    uint32_t (__stdcall *NetworkIsolationRegisterForAppContainerChanges)(uint32_t flags, win32::Windows::Win32::NetworkManagement::WindowsFirewall::PAC_CHANGES_CALLBACK_FN* callback, void* context, win32::Windows::Win32::Foundation::HANDLE* registrationObject) noexcept;
    uint32_t (__stdcall *NetworkIsolationUnregisterForAppContainerChanges)(win32::Windows::Win32::Foundation::HANDLE registrationObject) noexcept;
    uint32_t (__stdcall *NetworkIsolationFreeAppContainers)(win32::Windows::Win32::NetworkManagement::WindowsFirewall::INET_FIREWALL_APP_CONTAINER* pPublicAppCs) noexcept;
    uint32_t (__stdcall *NetworkIsolationEnumAppContainers)(uint32_t Flags, uint32_t* pdwNumPublicAppCs, win32::Windows::Win32::NetworkManagement::WindowsFirewall::INET_FIREWALL_APP_CONTAINER** ppPublicAppCs) noexcept;
    uint32_t (__stdcall *NetworkIsolationGetAppContainerConfig)(uint32_t* pdwNumPublicAppCs, win32::Windows::Win32::Security::SID_AND_ATTRIBUTES** appContainerSids) noexcept;
    uint32_t (__stdcall *NetworkIsolationSetAppContainerConfig)(uint32_t dwNumPublicAppCs, win32::Windows::Win32::Security::SID_AND_ATTRIBUTES* appContainerSids) noexcept;
    uint32_t (__stdcall *NetworkIsolationDiagnoseConnectFailureAndGetInfo)(win32::Windows::Win32::Foundation::PWSTR wszServerName, win32::Windows::Win32::NetworkManagement::WindowsFirewall::NETISO_ERROR_TYPE* netIsoError) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif