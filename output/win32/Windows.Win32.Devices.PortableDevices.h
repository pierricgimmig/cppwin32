// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_PortableDevices_H
#define WIN32_Windows_Win32_Devices_PortableDevices_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Devices.PortableDevices.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Devices::PortableDevices
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DMProcessConfigXMLFiltered(win32::Windows::Win32::Foundation::PWSTR pszXmlIn, win32::Windows::Win32::Foundation::PWSTR* rgszAllowedCspNodes, uint32_t dwNumAllowedCspNodes, win32::Windows::Win32::Foundation::BSTR* pbstrXmlOut) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *DMProcessConfigXMLFiltered)(win32::Windows::Win32::Foundation::PWSTR pszXmlIn, win32::Windows::Win32::Foundation::PWSTR* rgszAllowedCspNodes, uint32_t dwNumAllowedCspNodes, win32::Windows::Win32::Foundation::BSTR* pbstrXmlOut) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif