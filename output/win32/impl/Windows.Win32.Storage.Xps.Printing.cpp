// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_Xps_Printing_2_H
#define WIN32_Windows_Win32_Storage_Xps_Printing_2_H
#include "win32/Windows.Win32.Storage.Xps.Printing.h"
#include "win32/impl/Windows.Win32.Storage.Xps.Printing.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::Xps::Printing
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StartXpsPrintJob(win32::Windows::Win32::Foundation::PWSTR printerName, win32::Windows::Win32::Foundation::PWSTR jobName, win32::Windows::Win32::Foundation::PWSTR outputFileName, win32::Windows::Win32::Foundation::HANDLE progressEvent, win32::Windows::Win32::Foundation::HANDLE completionEvent, uint8_t* printablePagesOn, uint32_t printablePagesOnCount, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJob** xpsPrintJob, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJobStream** documentStream, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJobStream** printTicketStream) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(printerName);
        ORBIT_TRACK_PARAM(jobName);
        ORBIT_TRACK_PARAM(outputFileName);
        ORBIT_TRACK_PARAM(progressEvent);
        ORBIT_TRACK_PARAM(completionEvent);
        ORBIT_TRACK_PARAM(printablePagesOn);
        ORBIT_TRACK_PARAM(printablePagesOnCount);
        ORBIT_TRACK_PARAM(xpsPrintJob);
        ORBIT_TRACK_PARAM(documentStream);
        ORBIT_TRACK_PARAM(printTicketStream);

        auto win32_impl_result = g_api_table.StartXpsPrintJob(printerName, jobName, outputFileName, progressEvent, completionEvent, printablePagesOn, printablePagesOnCount, xpsPrintJob, documentStream, printTicketStream);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StartXpsPrintJob1(win32::Windows::Win32::Foundation::PWSTR printerName, win32::Windows::Win32::Foundation::PWSTR jobName, win32::Windows::Win32::Foundation::PWSTR outputFileName, win32::Windows::Win32::Foundation::HANDLE progressEvent, win32::Windows::Win32::Foundation::HANDLE completionEvent, win32::Windows::Win32::Storage::Xps::Printing::IXpsPrintJob** xpsPrintJob, win32::Windows::Win32::Storage::Xps::IXpsOMPackageTarget** printContentReceiver) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(printerName);
        ORBIT_TRACK_PARAM(jobName);
        ORBIT_TRACK_PARAM(outputFileName);
        ORBIT_TRACK_PARAM(progressEvent);
        ORBIT_TRACK_PARAM(completionEvent);
        ORBIT_TRACK_PARAM(xpsPrintJob);
        ORBIT_TRACK_PARAM(printContentReceiver);

        auto win32_impl_result = g_api_table.StartXpsPrintJob1(printerName, jobName, outputFileName, progressEvent, completionEvent, xpsPrintJob, printContentReceiver);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
