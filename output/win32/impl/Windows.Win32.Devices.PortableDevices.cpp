// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_PortableDevices_2_H
#define WIN32_Windows_Win32_Devices_PortableDevices_2_H
#include "win32/Windows.Win32.Devices.PortableDevices.h"
#include "win32/impl/Windows.Win32.Devices.PortableDevices.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Devices::PortableDevices
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DMProcessConfigXMLFiltered(win32::Windows::Win32::Foundation::PWSTR pszXmlIn, win32::Windows::Win32::Foundation::PWSTR* rgszAllowedCspNodes, uint32_t dwNumAllowedCspNodes, win32::Windows::Win32::Foundation::BSTR* pbstrXmlOut) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszXmlIn);
        ORBIT_TRACK_PARAM(rgszAllowedCspNodes);
        ORBIT_TRACK_PARAM(dwNumAllowedCspNodes);
        ORBIT_TRACK_PARAM(pbstrXmlOut);

        auto win32_impl_result = g_api_table.DMProcessConfigXMLFiltered(pszXmlIn, rgszAllowedCspNodes, dwNumAllowedCspNodes, pbstrXmlOut);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
