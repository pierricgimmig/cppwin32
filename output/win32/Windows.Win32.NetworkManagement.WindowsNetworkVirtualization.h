// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkManagement_WindowsNetworkVirtualization_H
#define WIN32_Windows_Win32_NetworkManagement_WindowsNetworkVirtualization_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.NetworkManagement.WindowsNetworkVirtualization.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::WindowsNetworkVirtualization
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_WnvOpen() noexcept;
    uint32_t __stdcall ORBIT_IMPL_WnvRequestNotification(win32::Windows::Win32::Foundation::HANDLE WnvHandle, win32::Windows::Win32::NetworkManagement::WindowsNetworkVirtualization::WNV_NOTIFICATION_PARAM* NotificationParam, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped, uint32_t* BytesTransferred) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *WnvOpen)() noexcept;
    uint32_t (__stdcall *WnvRequestNotification)(win32::Windows::Win32::Foundation::HANDLE WnvHandle, win32::Windows::Win32::NetworkManagement::WindowsNetworkVirtualization::WNV_NOTIFICATION_PARAM* NotificationParam, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped, uint32_t* BytesTransferred) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif