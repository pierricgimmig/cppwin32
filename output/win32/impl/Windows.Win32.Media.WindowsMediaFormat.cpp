// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Media_WindowsMediaFormat_2_H
#define WIN32_Windows_Win32_Media_WindowsMediaFormat_2_H
#include "win32/Windows.Win32.Media.WindowsMediaFormat.h"
#include "win32/impl/Windows.Win32.Media.WindowsMediaFormat.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Media::WindowsMediaFormat
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMIsContentProtected(win32::Windows::Win32::Foundation::PWSTR pwszFileName, win32::Windows::Win32::Foundation::BOOL* pfIsProtected) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pwszFileName);
        ORBIT_TRACK_PARAM(pfIsProtected);

        auto win32_impl_result = g_api_table.WMIsContentProtected(pwszFileName, pfIsProtected);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateWriter(win32::Windows::Win32::System::Com::IUnknown* pUnkCert, win32::Windows::Win32::Media::WindowsMediaFormat::IWMWriter** ppWriter) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pUnkCert);
        ORBIT_TRACK_PARAM(ppWriter);

        auto win32_impl_result = g_api_table.WMCreateWriter(pUnkCert, ppWriter);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateReader(win32::Windows::Win32::System::Com::IUnknown* pUnkCert, uint32_t dwRights, win32::Windows::Win32::Media::WindowsMediaFormat::IWMReader** ppReader) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pUnkCert);
        ORBIT_TRACK_PARAM(dwRights);
        ORBIT_TRACK_PARAM(ppReader);

        auto win32_impl_result = g_api_table.WMCreateReader(pUnkCert, dwRights, ppReader);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateSyncReader(win32::Windows::Win32::System::Com::IUnknown* pUnkCert, uint32_t dwRights, win32::Windows::Win32::Media::WindowsMediaFormat::IWMSyncReader** ppSyncReader) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pUnkCert);
        ORBIT_TRACK_PARAM(dwRights);
        ORBIT_TRACK_PARAM(ppSyncReader);

        auto win32_impl_result = g_api_table.WMCreateSyncReader(pUnkCert, dwRights, ppSyncReader);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateEditor(win32::Windows::Win32::Media::WindowsMediaFormat::IWMMetadataEditor** ppEditor) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppEditor);

        auto win32_impl_result = g_api_table.WMCreateEditor(ppEditor);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateIndexer(win32::Windows::Win32::Media::WindowsMediaFormat::IWMIndexer** ppIndexer) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppIndexer);

        auto win32_impl_result = g_api_table.WMCreateIndexer(ppIndexer);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateBackupRestorer(win32::Windows::Win32::System::Com::IUnknown* pCallback, win32::Windows::Win32::Media::WindowsMediaFormat::IWMLicenseBackup** ppBackup) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pCallback);
        ORBIT_TRACK_PARAM(ppBackup);

        auto win32_impl_result = g_api_table.WMCreateBackupRestorer(pCallback, ppBackup);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateProfileManager(win32::Windows::Win32::Media::WindowsMediaFormat::IWMProfileManager** ppProfileManager) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppProfileManager);

        auto win32_impl_result = g_api_table.WMCreateProfileManager(ppProfileManager);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateWriterFileSink(win32::Windows::Win32::Media::WindowsMediaFormat::IWMWriterFileSink** ppSink) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppSink);

        auto win32_impl_result = g_api_table.WMCreateWriterFileSink(ppSink);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateWriterNetworkSink(win32::Windows::Win32::Media::WindowsMediaFormat::IWMWriterNetworkSink** ppSink) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppSink);

        auto win32_impl_result = g_api_table.WMCreateWriterNetworkSink(ppSink);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WMCreateWriterPushSink(win32::Windows::Win32::Media::WindowsMediaFormat::IWMWriterPushSink** ppSink) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppSink);

        auto win32_impl_result = g_api_table.WMCreateWriterPushSink(ppSink);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif