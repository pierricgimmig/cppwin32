// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_Bluetooth_H
#define WIN32_Windows_Win32_Devices_Bluetooth_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Devices.Bluetooth.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Devices::Bluetooth
{
#pragma region methods
extern "C"
{
    intptr_t __stdcall ORBIT_IMPL_BluetoothFindFirstRadio(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_FIND_RADIO_PARAMS* pbtfrp, win32::Windows::Win32::Foundation::HANDLE* phRadio) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindNextRadio(intptr_t hFind, win32::Windows::Win32::Foundation::HANDLE* phRadio) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindRadioClose(intptr_t hFind) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothGetRadioInfo(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_RADIO_INFO* pRadioInfo) noexcept;
    intptr_t __stdcall ORBIT_IMPL_BluetoothFindFirstDevice(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_SEARCH_PARAMS* pbtsp, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindNextDevice(intptr_t hFind, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothFindDeviceClose(intptr_t hFind) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothGetDeviceInfo(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothUpdateDeviceRecord(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothRemoveDevice(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_ADDRESS* pAddress) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothSelectDevices(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_SELECT_DEVICE_PARAMS* pbtsdp) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothSelectDevicesFree(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_SELECT_DEVICE_PARAMS* pbtsdp) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothDisplayDeviceProperties(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothAuthenticateDevice(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtbi, win32::Windows::Win32::Foundation::PWSTR pszPasskey, uint32_t ulPasskeyLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothAuthenticateDeviceEx(win32::Windows::Win32::Foundation::HWND hwndParentIn, win32::Windows::Win32::Foundation::HANDLE hRadioIn, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdiInout, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_OOB_DATA_INFO* pbtOobData, win32::Windows::Win32::Devices::Bluetooth::AUTHENTICATION_REQUIREMENTS authenticationRequirement) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothAuthenticateMultipleDevices(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Foundation::HANDLE hRadio, uint32_t cDevices, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* rgbtdi) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSetServiceState(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, ::win32::guid* pGuidService, uint32_t dwServiceFlags) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothEnumerateInstalledServices(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, uint32_t* pcServiceInout, ::win32::guid* pGuidServices) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothEnableDiscovery(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothIsDiscoverable(win32::Windows::Win32::Foundation::HANDLE hRadio) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothEnableIncomingConnections(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothIsConnectable(win32::Windows::Win32::Foundation::HANDLE hRadio) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothRegisterForAuthentication(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, intptr_t* phRegHandle, win32::Windows::Win32::Devices::Bluetooth::PFN_AUTHENTICATION_CALLBACK* pfnCallback, void* pvParam) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothRegisterForAuthenticationEx(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdiIn, intptr_t* phRegHandleOut, win32::Windows::Win32::Devices::Bluetooth::PFN_AUTHENTICATION_CALLBACK_EX* pfnCallbackIn, void* pvParam) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothUnregisterAuthentication(intptr_t hRegHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSendAuthenticationResponse(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, win32::Windows::Win32::Foundation::PWSTR pszPasskey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSendAuthenticationResponseEx(win32::Windows::Win32::Foundation::HANDLE hRadioIn, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_AUTHENTICATE_RESPONSE* pauthResponse) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetElementData(uint8_t* pSdpStream, uint32_t cbSdpStreamLength, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pData) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetContainerElementData(uint8_t* pContainerStream, uint32_t cbContainerLength, intptr_t* pElement, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pData) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetAttributeValue(uint8_t* pRecordStream, uint32_t cbRecordLength, uint16_t usAttributeId, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pAttributeData) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSdpGetString(uint8_t* pRecordStream, uint32_t cbRecordLength, win32::Windows::Win32::Devices::Bluetooth::SDP_STRING_TYPE_DATA* pStringData, uint16_t usStringOffset, win32::Windows::Win32::Foundation::PWSTR pszString, uint32_t* pcchStringLength) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothSdpEnumAttributes(uint8_t* pSDPStream, uint32_t cbStreamSize, win32::Windows::Win32::Devices::Bluetooth::PFN_BLUETOOTH_ENUM_ATTRIBUTES_CALLBACK* pfnCallback, void* pvParam) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BluetoothSetLocalServiceInfo(win32::Windows::Win32::Foundation::HANDLE hRadioIn, ::win32::guid* pClassGuid, uint32_t ulInstance, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_LOCAL_SERVICE_INFO* pServiceInfoIn) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_BluetoothIsVersionAvailable(uint8_t MajorVersion, uint8_t MinorVersion) noexcept;
}

struct ApiTable {
    intptr_t (__stdcall *BluetoothFindFirstRadio)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_FIND_RADIO_PARAMS* pbtfrp, win32::Windows::Win32::Foundation::HANDLE* phRadio) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothFindNextRadio)(intptr_t hFind, win32::Windows::Win32::Foundation::HANDLE* phRadio) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothFindRadioClose)(intptr_t hFind) noexcept;
    uint32_t (__stdcall *BluetoothGetRadioInfo)(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_RADIO_INFO* pRadioInfo) noexcept;
    intptr_t (__stdcall *BluetoothFindFirstDevice)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_SEARCH_PARAMS* pbtsp, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothFindNextDevice)(intptr_t hFind, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothFindDeviceClose)(intptr_t hFind) noexcept;
    uint32_t (__stdcall *BluetoothGetDeviceInfo)(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    uint32_t (__stdcall *BluetoothUpdateDeviceRecord)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    uint32_t (__stdcall *BluetoothRemoveDevice)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_ADDRESS* pAddress) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothSelectDevices)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_SELECT_DEVICE_PARAMS* pbtsdp) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothSelectDevicesFree)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_SELECT_DEVICE_PARAMS* pbtsdp) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothDisplayDeviceProperties)(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi) noexcept;
    uint32_t (__stdcall *BluetoothAuthenticateDevice)(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtbi, win32::Windows::Win32::Foundation::PWSTR pszPasskey, uint32_t ulPasskeyLength) noexcept;
    uint32_t (__stdcall *BluetoothAuthenticateDeviceEx)(win32::Windows::Win32::Foundation::HWND hwndParentIn, win32::Windows::Win32::Foundation::HANDLE hRadioIn, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdiInout, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_OOB_DATA_INFO* pbtOobData, win32::Windows::Win32::Devices::Bluetooth::AUTHENTICATION_REQUIREMENTS authenticationRequirement) noexcept;
    uint32_t (__stdcall *BluetoothAuthenticateMultipleDevices)(win32::Windows::Win32::Foundation::HWND hwndParent, win32::Windows::Win32::Foundation::HANDLE hRadio, uint32_t cDevices, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* rgbtdi) noexcept;
    uint32_t (__stdcall *BluetoothSetServiceState)(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, ::win32::guid* pGuidService, uint32_t dwServiceFlags) noexcept;
    uint32_t (__stdcall *BluetoothEnumerateInstalledServices)(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, uint32_t* pcServiceInout, ::win32::guid* pGuidServices) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothEnableDiscovery)(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothIsDiscoverable)(win32::Windows::Win32::Foundation::HANDLE hRadio) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothEnableIncomingConnections)(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothIsConnectable)(win32::Windows::Win32::Foundation::HANDLE hRadio) noexcept;
    uint32_t (__stdcall *BluetoothRegisterForAuthentication)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, intptr_t* phRegHandle, win32::Windows::Win32::Devices::Bluetooth::PFN_AUTHENTICATION_CALLBACK* pfnCallback, void* pvParam) noexcept;
    uint32_t (__stdcall *BluetoothRegisterForAuthenticationEx)(win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdiIn, intptr_t* phRegHandleOut, win32::Windows::Win32::Devices::Bluetooth::PFN_AUTHENTICATION_CALLBACK_EX* pfnCallbackIn, void* pvParam) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothUnregisterAuthentication)(intptr_t hRegHandle) noexcept;
    uint32_t (__stdcall *BluetoothSendAuthenticationResponse)(win32::Windows::Win32::Foundation::HANDLE hRadio, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_DEVICE_INFO* pbtdi, win32::Windows::Win32::Foundation::PWSTR pszPasskey) noexcept;
    uint32_t (__stdcall *BluetoothSendAuthenticationResponseEx)(win32::Windows::Win32::Foundation::HANDLE hRadioIn, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_AUTHENTICATE_RESPONSE* pauthResponse) noexcept;
    uint32_t (__stdcall *BluetoothSdpGetElementData)(uint8_t* pSdpStream, uint32_t cbSdpStreamLength, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pData) noexcept;
    uint32_t (__stdcall *BluetoothSdpGetContainerElementData)(uint8_t* pContainerStream, uint32_t cbContainerLength, intptr_t* pElement, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pData) noexcept;
    uint32_t (__stdcall *BluetoothSdpGetAttributeValue)(uint8_t* pRecordStream, uint32_t cbRecordLength, uint16_t usAttributeId, win32::Windows::Win32::Devices::Bluetooth::SDP_ELEMENT_DATA* pAttributeData) noexcept;
    uint32_t (__stdcall *BluetoothSdpGetString)(uint8_t* pRecordStream, uint32_t cbRecordLength, win32::Windows::Win32::Devices::Bluetooth::SDP_STRING_TYPE_DATA* pStringData, uint16_t usStringOffset, win32::Windows::Win32::Foundation::PWSTR pszString, uint32_t* pcchStringLength) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothSdpEnumAttributes)(uint8_t* pSDPStream, uint32_t cbStreamSize, win32::Windows::Win32::Devices::Bluetooth::PFN_BLUETOOTH_ENUM_ATTRIBUTES_CALLBACK* pfnCallback, void* pvParam) noexcept;
    uint32_t (__stdcall *BluetoothSetLocalServiceInfo)(win32::Windows::Win32::Foundation::HANDLE hRadioIn, ::win32::guid* pClassGuid, uint32_t ulInstance, win32::Windows::Win32::Devices::Bluetooth::BLUETOOTH_LOCAL_SERVICE_INFO* pServiceInfoIn) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *BluetoothIsVersionAvailable)(uint8_t MajorVersion, uint8_t MinorVersion) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif