// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Management_MobileDeviceManagementRegistration_H
#define WIN32_Windows_Win32_Management_MobileDeviceManagementRegistration_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Management.MobileDeviceManagementRegistration.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Management::MobileDeviceManagementRegistration
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetDeviceRegistrationInfo(win32::Windows::Win32::Management::MobileDeviceManagementRegistration::REGISTRATION_INFORMATION_CLASS DeviceInformationClass, void** ppDeviceRegistrationInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_IsDeviceRegisteredWithManagement(win32::Windows::Win32::Foundation::BOOL* pfIsDeviceRegisteredWithManagement, uint32_t cchUPN, win32::Windows::Win32::Foundation::PWSTR pszUPN) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_IsManagementRegistrationAllowed(win32::Windows::Win32::Foundation::BOOL* pfIsManagementRegistrationAllowed) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_IsMdmUxWithoutAadAllowed(win32::Windows::Win32::Foundation::BOOL* isEnrollmentAllowed) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetManagedExternally(win32::Windows::Win32::Foundation::BOOL IsManagedExternally) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DiscoverManagementService(win32::Windows::Win32::Foundation::PWSTR pszUPN, win32::Windows::Win32::Management::MobileDeviceManagementRegistration::MANAGEMENT_SERVICE_INFO** ppMgmtInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterDeviceWithManagementUsingAADCredentials(win32::Windows::Win32::Foundation::HANDLE UserToken) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterDeviceWithManagementUsingAADDeviceCredentials() noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterDeviceWithManagementUsingAADDeviceCredentials2(win32::Windows::Win32::Foundation::PWSTR MDMApplicationID) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterDeviceWithManagement(win32::Windows::Win32::Foundation::PWSTR pszUPN, win32::Windows::Win32::Foundation::PWSTR ppszMDMServiceUri, win32::Windows::Win32::Foundation::PWSTR ppzsAccessToken) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_UnregisterDeviceWithManagement(win32::Windows::Win32::Foundation::PWSTR enrollmentID) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetDeviceManagementConfigInfo(win32::Windows::Win32::Foundation::PWSTR providerID, uint32_t* configStringBufferLength, win32::Windows::Win32::Foundation::PWSTR configString) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetDeviceManagementConfigInfo(win32::Windows::Win32::Foundation::PWSTR providerID, win32::Windows::Win32::Foundation::PWSTR configString) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetManagementAppHyperlink(uint32_t cchHyperlink, win32::Windows::Win32::Foundation::PWSTR pszHyperlink) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DiscoverManagementServiceEx(win32::Windows::Win32::Foundation::PWSTR pszUPN, win32::Windows::Win32::Foundation::PWSTR pszDiscoveryServiceCandidate, win32::Windows::Win32::Management::MobileDeviceManagementRegistration::MANAGEMENT_SERVICE_INFO** ppMgmtInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterDeviceWithLocalManagement(win32::Windows::Win32::Foundation::BOOL* alreadyRegistered) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ApplyLocalManagementSyncML(win32::Windows::Win32::Foundation::PWSTR syncMLRequest, win32::Windows::Win32::Foundation::PWSTR* syncMLResult) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_UnregisterDeviceWithLocalManagement() noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetDeviceRegistrationInfo)(win32::Windows::Win32::Management::MobileDeviceManagementRegistration::REGISTRATION_INFORMATION_CLASS DeviceInformationClass, void** ppDeviceRegistrationInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *IsDeviceRegisteredWithManagement)(win32::Windows::Win32::Foundation::BOOL* pfIsDeviceRegisteredWithManagement, uint32_t cchUPN, win32::Windows::Win32::Foundation::PWSTR pszUPN) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *IsManagementRegistrationAllowed)(win32::Windows::Win32::Foundation::BOOL* pfIsManagementRegistrationAllowed) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *IsMdmUxWithoutAadAllowed)(win32::Windows::Win32::Foundation::BOOL* isEnrollmentAllowed) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetManagedExternally)(win32::Windows::Win32::Foundation::BOOL IsManagedExternally) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *DiscoverManagementService)(win32::Windows::Win32::Foundation::PWSTR pszUPN, win32::Windows::Win32::Management::MobileDeviceManagementRegistration::MANAGEMENT_SERVICE_INFO** ppMgmtInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RegisterDeviceWithManagementUsingAADCredentials)(win32::Windows::Win32::Foundation::HANDLE UserToken) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RegisterDeviceWithManagementUsingAADDeviceCredentials)() noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RegisterDeviceWithManagementUsingAADDeviceCredentials2)(win32::Windows::Win32::Foundation::PWSTR MDMApplicationID) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RegisterDeviceWithManagement)(win32::Windows::Win32::Foundation::PWSTR pszUPN, win32::Windows::Win32::Foundation::PWSTR ppszMDMServiceUri, win32::Windows::Win32::Foundation::PWSTR ppzsAccessToken) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *UnregisterDeviceWithManagement)(win32::Windows::Win32::Foundation::PWSTR enrollmentID) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetDeviceManagementConfigInfo)(win32::Windows::Win32::Foundation::PWSTR providerID, uint32_t* configStringBufferLength, win32::Windows::Win32::Foundation::PWSTR configString) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetDeviceManagementConfigInfo)(win32::Windows::Win32::Foundation::PWSTR providerID, win32::Windows::Win32::Foundation::PWSTR configString) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetManagementAppHyperlink)(uint32_t cchHyperlink, win32::Windows::Win32::Foundation::PWSTR pszHyperlink) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *DiscoverManagementServiceEx)(win32::Windows::Win32::Foundation::PWSTR pszUPN, win32::Windows::Win32::Foundation::PWSTR pszDiscoveryServiceCandidate, win32::Windows::Win32::Management::MobileDeviceManagementRegistration::MANAGEMENT_SERVICE_INFO** ppMgmtInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RegisterDeviceWithLocalManagement)(win32::Windows::Win32::Foundation::BOOL* alreadyRegistered) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ApplyLocalManagementSyncML)(win32::Windows::Win32::Foundation::PWSTR syncMLRequest, win32::Windows::Win32::Foundation::PWSTR* syncMLResult) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *UnregisterDeviceWithLocalManagement)() noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
