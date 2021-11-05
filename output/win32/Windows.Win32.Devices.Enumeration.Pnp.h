// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_Enumeration_Pnp_H
#define WIN32_Windows_Win32_Devices_Enumeration_Pnp_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Devices.Enumeration.Pnp.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Devices::Enumeration::Pnp
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SwDeviceCreate(win32::Windows::Win32::Foundation::PWSTR pszEnumeratorName, win32::Windows::Win32::Foundation::PWSTR pszParentDeviceInstance, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_CREATE_INFO* pCreateInfo, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_CREATE_CALLBACK* pCallback, void* pContext, intptr_t* phSwDevice) noexcept;
    void __stdcall ORBIT_IMPL_SwDeviceClose(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SwDeviceSetLifetime(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_LIFETIME Lifetime) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SwDeviceGetLifetime(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_LIFETIME* pLifetime) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SwDevicePropertySet(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SwDeviceInterfaceRegister(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, ::win32::guid* pInterfaceClassGuid, win32::Windows::Win32::Foundation::PWSTR pszReferenceString, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties, win32::Windows::Win32::Foundation::BOOL fEnabled, win32::Windows::Win32::Foundation::PWSTR* ppszDeviceInterfaceId) noexcept;
    void __stdcall ORBIT_IMPL_SwMemFree(void* pMem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SwDeviceInterfaceSetState(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Foundation::PWSTR pszDeviceInterfaceId, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SwDeviceInterfacePropertySet(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Foundation::PWSTR pszDeviceInterfaceId, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SwDeviceCreate)(win32::Windows::Win32::Foundation::PWSTR pszEnumeratorName, win32::Windows::Win32::Foundation::PWSTR pszParentDeviceInstance, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_CREATE_INFO* pCreateInfo, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_CREATE_CALLBACK* pCallback, void* pContext, intptr_t* phSwDevice) noexcept;
    void (__stdcall *SwDeviceClose)(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SwDeviceSetLifetime)(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_LIFETIME Lifetime) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SwDeviceGetLifetime)(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Devices::Enumeration::Pnp::SW_DEVICE_LIFETIME* pLifetime) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SwDevicePropertySet)(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SwDeviceInterfaceRegister)(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, ::win32::guid* pInterfaceClassGuid, win32::Windows::Win32::Foundation::PWSTR pszReferenceString, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties, win32::Windows::Win32::Foundation::BOOL fEnabled, win32::Windows::Win32::Foundation::PWSTR* ppszDeviceInterfaceId) noexcept;
    void (__stdcall *SwMemFree)(void* pMem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SwDeviceInterfaceSetState)(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Foundation::PWSTR pszDeviceInterfaceId, win32::Windows::Win32::Foundation::BOOL fEnabled) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SwDeviceInterfacePropertySet)(win32::Windows::Win32::Devices::Enumeration::Pnp::HSWDEVICE hSwDevice, win32::Windows::Win32::Foundation::PWSTR pszDeviceInterfaceId, uint32_t cPropertyCount, win32::Windows::Win32::System::SystemServices::DEVPROPERTY* pProperties) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif