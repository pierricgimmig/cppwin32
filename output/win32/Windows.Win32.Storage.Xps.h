// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_Xps_H
#define WIN32_Windows_Win32_Storage_Xps_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Storage.Xps.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::Xps
{
#pragma region methods
extern "C"
{
    int32_t __stdcall ORBIT_IMPL_DeviceCapabilitiesA(win32::Windows::Win32::Foundation::PSTR pDevice, win32::Windows::Win32::Foundation::PSTR pPort, win32::Windows::Win32::Storage::Xps::DEVICE_CAPABILITIES fwCapability, win32::Windows::Win32::Foundation::PSTR pOutput, win32::Windows::Win32::Graphics::Gdi::DEVMODEA* pDevMode) noexcept;
    int32_t __stdcall ORBIT_IMPL_DeviceCapabilitiesW(win32::Windows::Win32::Foundation::PWSTR pDevice, win32::Windows::Win32::Foundation::PWSTR pPort, win32::Windows::Win32::Storage::Xps::DEVICE_CAPABILITIES fwCapability, win32::Windows::Win32::Foundation::PWSTR pOutput, win32::Windows::Win32::Graphics::Gdi::DEVMODEW* pDevMode) noexcept;
    int32_t __stdcall ORBIT_IMPL_Escape(win32::Windows::Win32::Graphics::Gdi::HDC hdc, int32_t iEscape, int32_t cjIn, win32::Windows::Win32::Foundation::PSTR pvIn, void* pvOut) noexcept;
    int32_t __stdcall ORBIT_IMPL_ExtEscape(win32::Windows::Win32::Graphics::Gdi::HDC hdc, int32_t iEscape, int32_t cjInput, win32::Windows::Win32::Foundation::PSTR lpInData, int32_t cjOutput, win32::Windows::Win32::Foundation::PSTR lpOutData) noexcept;
    int32_t __stdcall ORBIT_IMPL_StartDocA(win32::Windows::Win32::Graphics::Gdi::HDC hdc, win32::Windows::Win32::Storage::Xps::DOCINFOA* lpdi) noexcept;
    int32_t __stdcall ORBIT_IMPL_StartDocW(win32::Windows::Win32::Graphics::Gdi::HDC hdc, win32::Windows::Win32::Storage::Xps::DOCINFOW* lpdi) noexcept;
    int32_t __stdcall ORBIT_IMPL_EndDoc(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t __stdcall ORBIT_IMPL_StartPage(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t __stdcall ORBIT_IMPL_EndPage(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t __stdcall ORBIT_IMPL_AbortDoc(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t __stdcall ORBIT_IMPL_SetAbortProc(win32::Windows::Win32::Graphics::Gdi::HDC hdc, win32::Windows::Win32::Storage::Xps::ABORTPROC* proc) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_PrintWindow(win32::Windows::Win32::Foundation::HWND hwnd, win32::Windows::Win32::Graphics::Gdi::HDC hdcBlt, win32::Windows::Win32::Storage::Xps::PRINT_WINDOW_FLAGS nFlags) noexcept;
}

struct ApiTable {
    int32_t (__stdcall *DeviceCapabilitiesA)(win32::Windows::Win32::Foundation::PSTR pDevice, win32::Windows::Win32::Foundation::PSTR pPort, win32::Windows::Win32::Storage::Xps::DEVICE_CAPABILITIES fwCapability, win32::Windows::Win32::Foundation::PSTR pOutput, win32::Windows::Win32::Graphics::Gdi::DEVMODEA* pDevMode) noexcept;
    int32_t (__stdcall *DeviceCapabilitiesW)(win32::Windows::Win32::Foundation::PWSTR pDevice, win32::Windows::Win32::Foundation::PWSTR pPort, win32::Windows::Win32::Storage::Xps::DEVICE_CAPABILITIES fwCapability, win32::Windows::Win32::Foundation::PWSTR pOutput, win32::Windows::Win32::Graphics::Gdi::DEVMODEW* pDevMode) noexcept;
    int32_t (__stdcall *Escape)(win32::Windows::Win32::Graphics::Gdi::HDC hdc, int32_t iEscape, int32_t cjIn, win32::Windows::Win32::Foundation::PSTR pvIn, void* pvOut) noexcept;
    int32_t (__stdcall *ExtEscape)(win32::Windows::Win32::Graphics::Gdi::HDC hdc, int32_t iEscape, int32_t cjInput, win32::Windows::Win32::Foundation::PSTR lpInData, int32_t cjOutput, win32::Windows::Win32::Foundation::PSTR lpOutData) noexcept;
    int32_t (__stdcall *StartDocA)(win32::Windows::Win32::Graphics::Gdi::HDC hdc, win32::Windows::Win32::Storage::Xps::DOCINFOA* lpdi) noexcept;
    int32_t (__stdcall *StartDocW)(win32::Windows::Win32::Graphics::Gdi::HDC hdc, win32::Windows::Win32::Storage::Xps::DOCINFOW* lpdi) noexcept;
    int32_t (__stdcall *EndDoc)(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t (__stdcall *StartPage)(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t (__stdcall *EndPage)(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t (__stdcall *AbortDoc)(win32::Windows::Win32::Graphics::Gdi::HDC hdc) noexcept;
    int32_t (__stdcall *SetAbortProc)(win32::Windows::Win32::Graphics::Gdi::HDC hdc, win32::Windows::Win32::Storage::Xps::ABORTPROC* proc) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *PrintWindow)(win32::Windows::Win32::Foundation::HWND hwnd, win32::Windows::Win32::Graphics::Gdi::HDC hdcBlt, win32::Windows::Win32::Storage::Xps::PRINT_WINDOW_FLAGS nFlags) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
