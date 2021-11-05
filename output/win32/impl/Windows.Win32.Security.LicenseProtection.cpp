// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_LicenseProtection_2_H
#define WIN32_Windows_Win32_Security_LicenseProtection_2_H
#include "win32/Windows.Win32.Security.LicenseProtection.h"
#include "win32/impl/Windows.Win32.Security.LicenseProtection.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Security::LicenseProtection
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterLicenseKeyWithExpiration(win32::Windows::Win32::Foundation::PWSTR licenseKey, uint32_t validityInDays, win32::Windows::Win32::Security::LicenseProtection::LicenseProtectionStatus* status) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(licenseKey);
        ORBIT_TRACK_PARAM(validityInDays);
        ORBIT_TRACK_PARAM(status);

        auto win32_impl_result = g_api_table.RegisterLicenseKeyWithExpiration(licenseKey, validityInDays, status);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ValidateLicenseKeyProtection(win32::Windows::Win32::Foundation::PWSTR licenseKey, win32::Windows::Win32::Foundation::FILETIME* notValidBefore, win32::Windows::Win32::Foundation::FILETIME* notValidAfter, win32::Windows::Win32::Security::LicenseProtection::LicenseProtectionStatus* status) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(licenseKey);
        ORBIT_TRACK_PARAM(notValidBefore);
        ORBIT_TRACK_PARAM(notValidAfter);
        ORBIT_TRACK_PARAM(status);

        auto win32_impl_result = g_api_table.ValidateLicenseKeyProtection(licenseKey, notValidBefore, notValidAfter, status);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif