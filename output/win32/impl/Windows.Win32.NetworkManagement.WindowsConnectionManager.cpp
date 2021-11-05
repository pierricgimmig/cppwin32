// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkManagement_WindowsConnectionManager_2_H
#define WIN32_Windows_Win32_NetworkManagement_WindowsConnectionManager_2_H
#include "win32/Windows.Win32.NetworkManagement.WindowsConnectionManager.h"
#include "win32/impl/Windows.Win32.NetworkManagement.WindowsConnectionManager.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::WindowsConnectionManager
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall ORBIT_IMPL_WcmQueryProperty(::win32::guid* pInterface, win32::Windows::Win32::Foundation::PWSTR strProfileName, win32::Windows::Win32::NetworkManagement::WindowsConnectionManager::WCM_PROPERTY Property, void* pReserved, uint32_t* pdwDataSize, uint8_t** ppData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pInterface);
        ORBIT_TRACK_PARAM(strProfileName);
        ORBIT_TRACK_PARAM(Property);
        ORBIT_TRACK_PARAM(pReserved);
        ORBIT_TRACK_PARAM(pdwDataSize);
        ORBIT_TRACK_PARAM(ppData);

        auto win32_impl_result = g_api_table.WcmQueryProperty(pInterface, strProfileName, Property, pReserved, pdwDataSize, ppData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_WcmSetProperty(::win32::guid* pInterface, win32::Windows::Win32::Foundation::PWSTR strProfileName, win32::Windows::Win32::NetworkManagement::WindowsConnectionManager::WCM_PROPERTY Property, void* pReserved, uint32_t dwDataSize, uint8_t* pbData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pInterface);
        ORBIT_TRACK_PARAM(strProfileName);
        ORBIT_TRACK_PARAM(Property);
        ORBIT_TRACK_PARAM(pReserved);
        ORBIT_TRACK_PARAM(dwDataSize);
        ORBIT_TRACK_PARAM(pbData);

        auto win32_impl_result = g_api_table.WcmSetProperty(pInterface, strProfileName, Property, pReserved, dwDataSize, pbData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_WcmGetProfileList(void* pReserved, win32::Windows::Win32::NetworkManagement::WindowsConnectionManager::WCM_PROFILE_INFO_LIST** ppProfileList) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pReserved);
        ORBIT_TRACK_PARAM(ppProfileList);

        auto win32_impl_result = g_api_table.WcmGetProfileList(pReserved, ppProfileList);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_WcmSetProfileList(win32::Windows::Win32::NetworkManagement::WindowsConnectionManager::WCM_PROFILE_INFO_LIST* pProfileList, uint32_t dwPosition, win32::Windows::Win32::Foundation::BOOL fIgnoreUnknownProfiles, void* pReserved) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pProfileList);
        ORBIT_TRACK_PARAM(dwPosition);
        ORBIT_TRACK_PARAM(fIgnoreUnknownProfiles);
        ORBIT_TRACK_PARAM(pReserved);

        auto win32_impl_result = g_api_table.WcmSetProfileList(pProfileList, dwPosition, fIgnoreUnknownProfiles, pReserved);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_WcmFreeMemory(void* pMemory) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMemory);

        g_api_table.WcmFreeMemory(pMemory);
        
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_OnDemandGetRoutingHint(win32::Windows::Win32::Foundation::PWSTR destinationHostName, uint32_t* interfaceIndex) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(destinationHostName);
        ORBIT_TRACK_PARAM(interfaceIndex);

        auto win32_impl_result = g_api_table.OnDemandGetRoutingHint(destinationHostName, interfaceIndex);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_OnDemandRegisterNotification(win32::Windows::Win32::NetworkManagement::WindowsConnectionManager::ONDEMAND_NOTIFICATION_CALLBACK* callback, void* callbackContext, win32::Windows::Win32::Foundation::HANDLE* registrationHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(callback);
        ORBIT_TRACK_PARAM(callbackContext);
        ORBIT_TRACK_PARAM(registrationHandle);

        auto win32_impl_result = g_api_table.OnDemandRegisterNotification(callback, callbackContext, registrationHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_OnDemandUnRegisterNotification(win32::Windows::Win32::Foundation::HANDLE registrationHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(registrationHandle);

        auto win32_impl_result = g_api_table.OnDemandUnRegisterNotification(registrationHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetInterfaceContextTableForHostName(win32::Windows::Win32::Foundation::PWSTR HostName, win32::Windows::Win32::Foundation::PWSTR ProxyName, uint32_t Flags, uint8_t* ConnectionProfileFilterRawData, uint32_t ConnectionProfileFilterRawDataSize, win32::Windows::Win32::NetworkManagement::WindowsConnectionManager::NET_INTERFACE_CONTEXT_TABLE** InterfaceContextTable) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(HostName);
        ORBIT_TRACK_PARAM(ProxyName);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(ConnectionProfileFilterRawData);
        ORBIT_TRACK_PARAM(ConnectionProfileFilterRawDataSize);
        ORBIT_TRACK_PARAM(InterfaceContextTable);

        auto win32_impl_result = g_api_table.GetInterfaceContextTableForHostName(HostName, ProxyName, Flags, ConnectionProfileFilterRawData, ConnectionProfileFilterRawDataSize, InterfaceContextTable);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_FreeInterfaceContextTable(win32::Windows::Win32::NetworkManagement::WindowsConnectionManager::NET_INTERFACE_CONTEXT_TABLE* InterfaceContextTable) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(InterfaceContextTable);

        g_api_table.FreeInterfaceContextTable(InterfaceContextTable);
        
    }

}

#pragma endregion abi_methods

}
#endif
