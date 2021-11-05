// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_Xps_Printing_H
#define WIN32_Windows_Win32_Storage_Xps_Printing_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Storage.Xps.Printing.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::Xps::Printing
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StartXpsPrintJob(win32::Windows::Win32::Foundation::PWSTR printerName, win32::Windows::Win32::Foundation::PWSTR jobName, win32::Windows::Win32::Foundation::PWSTR outputFileName, win32::Windows::Win32::Foundation::HANDLE progressEvent, win32::Windows::Win32::Foundation::HANDLE completionEvent, uint8_t* printablePagesOn, uint32_t printablePagesOnCount, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJob** xpsPrintJob, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJobStream** documentStream, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJobStream** printTicketStream) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StartXpsPrintJob1(win32::Windows::Win32::Foundation::PWSTR printerName, win32::Windows::Win32::Foundation::PWSTR jobName, win32::Windows::Win32::Foundation::PWSTR outputFileName, win32::Windows::Win32::Foundation::HANDLE progressEvent, win32::Windows::Win32::Foundation::HANDLE completionEvent, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJob** xpsPrintJob, win32::Windows::Win32::Storage::Xps::IXpsOMPackageTarget** printContentReceiver) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StartXpsPrintJob)(win32::Windows::Win32::Foundation::PWSTR printerName, win32::Windows::Win32::Foundation::PWSTR jobName, win32::Windows::Win32::Foundation::PWSTR outputFileName, win32::Windows::Win32::Foundation::HANDLE progressEvent, win32::Windows::Win32::Foundation::HANDLE completionEvent, uint8_t* printablePagesOn, uint32_t printablePagesOnCount, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJob** xpsPrintJob, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJobStream** documentStream, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJobStream** printTicketStream) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StartXpsPrintJob1)(win32::Windows::Win32::Foundation::PWSTR printerName, win32::Windows::Win32::Foundation::PWSTR jobName, win32::Windows::Win32::Foundation::PWSTR outputFileName, win32::Windows::Win32::Foundation::HANDLE progressEvent, win32::Windows::Win32::Foundation::HANDLE completionEvent, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJob** xpsPrintJob, win32::Windows::Win32::Storage::Xps::IXpsOMPackageTarget** printContentReceiver) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif