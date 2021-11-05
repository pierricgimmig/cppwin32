// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_Bluetooth_2_H
#define WIN32_Windows_Win32_Devices_Bluetooth_2_H
#include "win32/Windows.Win32.Devices.Bluetooth.h"
#include "win32/impl/Windows.Win32.Devices.Bluetooth.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Devices::Bluetooth
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    intptr_t __stdcall ORBIT_IMPL_BluetoothFindFirstRadio(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_FIND_RADIO_PARAMS* pbtfrp, win32::Windows::Win32::Foundation::HANDLE* phRadio) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pbtfrp);
        ORBIT_TRACK_PARAM(phRadio);

        auto win32_impl_result = g_api_table.BluetoothFindFirstRadio(pbtfrp, phRadio);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindNextRadio(intptr_t hFind, win32::Windows::Win32::Foundation::HANDLE* phRadio) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hFind);
        ORBIT_TRACK_PARAM(phRadio);

        auto win32_impl_result = g_api_table.BluetoothFindNextRadio(hFind, phRadio);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindRadioClose(intptr_t hFind) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hFind);

        auto win32_impl_result = g_api_table.BluetoothFindRadioClose(hFind);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothGetRadioInfo(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_RADIO_INFO* pRadioInfo) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(pRadioInfo);

        auto win32_impl_result = g_api_table.BluetoothGetRadioInfo(hRadio, pRadioInfo);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_BluetoothFindFirstDevice(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_SEARCH_PARAMS* pbtsp, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pbtsp);
        ORBIT_TRACK_PARAM(pbtdi);

        auto win32_impl_result = g_api_table.BluetoothFindFirstDevice(pbtsp, pbtdi);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindNextDevice(intptr_t hFind, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hFind);
        ORBIT_TRACK_PARAM(pbtdi);

        auto win32_impl_result = g_api_table.BluetoothFindNextDevice(hFind, pbtdi);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindDeviceClose(intptr_t hFind) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hFind);

        auto win32_impl_result = g_api_table.BluetoothFindDeviceClose(hFind);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothGetDeviceInfo(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(pbtdi);

        auto win32_impl_result = g_api_table.BluetoothGetDeviceInfo(hRadio, pbtdi);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothUpdateDeviceRecord(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pbtdi);

        auto win32_impl_result = g_api_table.BluetoothUpdateDeviceRecord(pbtdi);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothRemoveDevice(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_ADDRESS* pAddress) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAddress);

        auto win32_impl_result = g_api_table.BluetoothRemoveDevice(pAddress);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothSelectDevices(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_SELECT_DEVICE_PARAMS* pbtsdp) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pbtsdp);

        auto win32_impl_result = g_api_table.BluetoothSelectDevices(pbtsdp);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothSelectDevicesFree(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_SELECT_DEVICE_PARAMS* pbtsdp) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pbtsdp);

        auto win32_impl_result = g_api_table.BluetoothSelectDevicesFree(pbtsdp);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothDisplayDeviceProperties(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwndParent);
        ORBIT_TRACK_PARAM(pbtdi);

        auto win32_impl_result = g_api_table.BluetoothDisplayDeviceProperties(hwndParent, pbtdi);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothAuthenticateDevice(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtbi, win32::Windows::Win32::Foundation::PWSTR pszPasskey, uint32_t ulPasskeyLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwndParent);
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(pbtbi);
        ORBIT_TRACK_PARAM(pszPasskey);
        ORBIT_TRACK_PARAM(ulPasskeyLength);

        auto win32_impl_result = g_api_table.BluetoothAuthenticateDevice(hwndParent, hRadio, pbtbi, pszPasskey, ulPasskeyLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothAuthenticateDeviceEx(win32::Windows::Win32::Foundation::HWND hwndParentIn, win32::Windows::Win32::Foundation::HANDLE hRadioIn, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdiInout, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_OOB_DATA_INFO* pbtOobData, win32::Windows::Win32::Devices::Bluetooth::AUTHENTICATION_REQUIREMENTS authenticationRequirement) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwndParentIn);
        ORBIT_TRACK_PARAM(hRadioIn);
        ORBIT_TRACK_PARAM(pbtdiInout);
        ORBIT_TRACK_PARAM(pbtOobData);
        ORBIT_TRACK_PARAM(authenticationRequirement);

        auto win32_impl_result = g_api_table.BluetoothAuthenticateDeviceEx(hwndParentIn, hRadioIn, pbtdiInout, pbtOobData, authenticationRequirement);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothAuthenticateMultipleDevices(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Foundation::HANDLE hRadio, uint32_t cDevices, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* rgbtdi) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwndParent);
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(cDevices);
        ORBIT_TRACK_PARAM(rgbtdi);

        auto win32_impl_result = g_api_table.BluetoothAuthenticateMultipleDevices(hwndParent, hRadio, cDevices, rgbtdi);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSetServiceState(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, ::win32::guid* pGuidService, uint32_t dwServiceFlags) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(pbtdi);
        ORBIT_TRACK_PARAM(pGuidService);
        ORBIT_TRACK_PARAM(dwServiceFlags);

        auto win32_impl_result = g_api_table.BluetoothSetServiceState(hRadio, pbtdi, pGuidService, dwServiceFlags);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothEnumerateInstalledServices(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, uint32_t* pcServiceInout, ::win32::guid* pGuidServices) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(pbtdi);
        ORBIT_TRACK_PARAM(pcServiceInout);
        ORBIT_TRACK_PARAM(pGuidServices);

        auto win32_impl_result = g_api_table.BluetoothEnumerateInstalledServices(hRadio, pbtdi, pcServiceInout, pGuidServices);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothEnableDiscovery(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(fEnabled);

        auto win32_impl_result = g_api_table.BluetoothEnableDiscovery(hRadio, fEnabled);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothIsDiscoverable(win32::Windows::Win32::Foundation::HANDLE hRadio) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);

        auto win32_impl_result = g_api_table.BluetoothIsDiscoverable(hRadio);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothEnableIncomingConnections(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(fEnabled);

        auto win32_impl_result = g_api_table.BluetoothEnableIncomingConnections(hRadio, fEnabled);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothIsConnectable(win32::Windows::Win32::Foundation::HANDLE hRadio) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);

        auto win32_impl_result = g_api_table.BluetoothIsConnectable(hRadio);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothRegisterForAuthentication(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, intptr_t* phRegHandle, win32::Windows::Win32::Devices::Bluetooth::PFN_AUTHENTICATION_CALLBACK* pfnCallback, void* pvParam) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pbtdi);
        ORBIT_TRACK_PARAM(phRegHandle);
        ORBIT_TRACK_PARAM(pfnCallback);
        ORBIT_TRACK_PARAM(pvParam);

        auto win32_impl_result = g_api_table.BluetoothRegisterForAuthentication(pbtdi, phRegHandle, pfnCallback, pvParam);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothRegisterForAuthenticationEx(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdiIn, intptr_t* phRegHandleOut, win32::Windows::Win32::Devices::Bluetooth::PFN_AUTHENTICATION_CALLBACK_EX* pfnCallbackIn, void* pvParam) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pbtdiIn);
        ORBIT_TRACK_PARAM(phRegHandleOut);
        ORBIT_TRACK_PARAM(pfnCallbackIn);
        ORBIT_TRACK_PARAM(pvParam);

        auto win32_impl_result = g_api_table.BluetoothRegisterForAuthenticationEx(pbtdiIn, phRegHandleOut, pfnCallbackIn, pvParam);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothUnregisterAuthentication(intptr_t hRegHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRegHandle);

        auto win32_impl_result = g_api_table.BluetoothUnregisterAuthentication(hRegHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSendAuthenticationResponse(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, win32::Windows::Win32::Foundation::PWSTR pszPasskey) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadio);
        ORBIT_TRACK_PARAM(pbtdi);
        ORBIT_TRACK_PARAM(pszPasskey);

        auto win32_impl_result = g_api_table.BluetoothSendAuthenticationResponse(hRadio, pbtdi, pszPasskey);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSendAuthenticationResponseEx(win32::Windows::Win32::Foundation::HANDLE hRadioIn, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_AUTHENTICATE_RESPONSE* pauthResponse) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadioIn);
        ORBIT_TRACK_PARAM(pauthResponse);

        auto win32_impl_result = g_api_table.BluetoothSendAuthenticationResponseEx(hRadioIn, pauthResponse);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetElementData(uint8_t* pSdpStream, uint32_t cbSdpStreamLength, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSdpStream);
        ORBIT_TRACK_PARAM(cbSdpStreamLength);
        ORBIT_TRACK_PARAM(pData);

        auto win32_impl_result = g_api_table.BluetoothSdpGetElementData(pSdpStream, cbSdpStreamLength, pData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetContainerElementData(uint8_t* pContainerStream, uint32_t cbContainerLength, intptr_t* pElement, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pContainerStream);
        ORBIT_TRACK_PARAM(cbContainerLength);
        ORBIT_TRACK_PARAM(pElement);
        ORBIT_TRACK_PARAM(pData);

        auto win32_impl_result = g_api_table.BluetoothSdpGetContainerElementData(pContainerStream, cbContainerLength, pElement, pData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetAttributeValue(uint8_t* pRecordStream, uint32_t cbRecordLength, uint16_t usAttributeId, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pAttributeData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pRecordStream);
        ORBIT_TRACK_PARAM(cbRecordLength);
        ORBIT_TRACK_PARAM(usAttributeId);
        ORBIT_TRACK_PARAM(pAttributeData);

        auto win32_impl_result = g_api_table.BluetoothSdpGetAttributeValue(pRecordStream, cbRecordLength, usAttributeId, pAttributeData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetString(uint8_t* pRecordStream, uint32_t cbRecordLength, win32::Windows::Win32::Devices::Bluetooth::SDP_STRING_TYPE_DATA* pStringData, uint16_t usStringOffset, win32::Windows::Win32::Foundation::PWSTR pszString, uint32_t* pcchStringLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pRecordStream);
        ORBIT_TRACK_PARAM(cbRecordLength);
        ORBIT_TRACK_PARAM(pStringData);
        ORBIT_TRACK_PARAM(usStringOffset);
        ORBIT_TRACK_PARAM(pszString);
        ORBIT_TRACK_PARAM(pcchStringLength);

        auto win32_impl_result = g_api_table.BluetoothSdpGetString(pRecordStream, cbRecordLength, pStringData, usStringOffset, pszString, pcchStringLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothSdpEnumAttributes(uint8_t* pSDPStream, uint32_t cbStreamSize, win32::Windows::Win32::Devices::Bluetooth::PFN_BLUETOOTH_ENUM_ATTRIBUTES_CALLBACK* pfnCallback, void* pvParam) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSDPStream);
        ORBIT_TRACK_PARAM(cbStreamSize);
        ORBIT_TRACK_PARAM(pfnCallback);
        ORBIT_TRACK_PARAM(pvParam);

        auto win32_impl_result = g_api_table.BluetoothSdpEnumAttributes(pSDPStream, cbStreamSize, pfnCallback, pvParam);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_BluetoothSetLocalServiceInfo(win32::Windows::Win32::Foundation::HANDLE hRadioIn, ::win32::guid* pClassGuid, uint32_t ulInstance, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_LOCAL_SERVICE_INFO* pServiceInfoIn) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hRadioIn);
        ORBIT_TRACK_PARAM(pClassGuid);
        ORBIT_TRACK_PARAM(ulInstance);
        ORBIT_TRACK_PARAM(pServiceInfoIn);

        auto win32_impl_result = g_api_table.BluetoothSetLocalServiceInfo(hRadioIn, pClassGuid, ulInstance, pServiceInfoIn);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothIsVersionAvailable(uint8_t MajorVersion, uint8_t MinorVersion) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(MajorVersion);
        ORBIT_TRACK_PARAM(MinorVersion);

        auto win32_impl_result = g_api_table.BluetoothIsVersionAvailable(MajorVersion, MinorVersion);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
