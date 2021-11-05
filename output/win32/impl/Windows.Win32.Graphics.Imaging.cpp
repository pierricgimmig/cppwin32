// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_Imaging_2_H
#define WIN32_Windows_Win32_Graphics_Imaging_2_H
#include "win32/Windows.Win32.Graphics.Imaging.h"
#include "win32/impl/Windows.Win32.Graphics.Imaging.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::Imaging
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICConvertBitmapSource(::win32::guid* dstFormat, win32::Windows::Win32::Graphics::Imaging::IWICBitmapSource* pISrc, win32::Windows::Win32::Graphics::Imaging::IWICBitmapSource** ppIDst) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(dstFormat);
        ORBIT_TRACK_PARAM(pISrc);
        ORBIT_TRACK_PARAM(ppIDst);

        auto win32_impl_result = g_api_table.WICConvertBitmapSource(dstFormat, pISrc, ppIDst);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICCreateBitmapFromSection(uint32_t width, uint32_t height, ::win32::guid* pixelFormat, win32::Windows::Win32::Foundation::HANDLE hSection, uint32_t stride, uint32_t offset, win32::Windows::Win32::Graphics::Imaging::IWICBitmap** ppIBitmap) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(width);
        ORBIT_TRACK_PARAM(height);
        ORBIT_TRACK_PARAM(pixelFormat);
        ORBIT_TRACK_PARAM(hSection);
        ORBIT_TRACK_PARAM(stride);
        ORBIT_TRACK_PARAM(offset);
        ORBIT_TRACK_PARAM(ppIBitmap);

        auto win32_impl_result = g_api_table.WICCreateBitmapFromSection(width, height, pixelFormat, hSection, stride, offset, ppIBitmap);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICCreateBitmapFromSectionEx(uint32_t width, uint32_t height, ::win32::guid* pixelFormat, win32::Windows::Win32::Foundation::HANDLE hSection, uint32_t stride, uint32_t offset, win32::Windows::Win32::Graphics::Imaging::WICSectionAccessLevel desiredAccessLevel, win32::Windows::Win32::Graphics::Imaging::IWICBitmap** ppIBitmap) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(width);
        ORBIT_TRACK_PARAM(height);
        ORBIT_TRACK_PARAM(pixelFormat);
        ORBIT_TRACK_PARAM(hSection);
        ORBIT_TRACK_PARAM(stride);
        ORBIT_TRACK_PARAM(offset);
        ORBIT_TRACK_PARAM(desiredAccessLevel);
        ORBIT_TRACK_PARAM(ppIBitmap);

        auto win32_impl_result = g_api_table.WICCreateBitmapFromSectionEx(width, height, pixelFormat, hSection, stride, offset, desiredAccessLevel, ppIBitmap);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICMapGuidToShortName(::win32::guid* guid, uint32_t cchName, win32::Windows::Win32::Foundation::PWSTR wzName, uint32_t* pcchActual) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(guid);
        ORBIT_TRACK_PARAM(cchName);
        ORBIT_TRACK_PARAM(wzName);
        ORBIT_TRACK_PARAM(pcchActual);

        auto win32_impl_result = g_api_table.WICMapGuidToShortName(guid, cchName, wzName, pcchActual);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICMapShortNameToGuid(win32::Windows::Win32::Foundation::PWSTR wzName, ::win32::guid* pguid) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(wzName);
        ORBIT_TRACK_PARAM(pguid);

        auto win32_impl_result = g_api_table.WICMapShortNameToGuid(wzName, pguid);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICMapSchemaToName(::win32::guid* guidMetadataFormat, win32::Windows::Win32::Foundation::PWSTR pwzSchema, uint32_t cchName, win32::Windows::Win32::Foundation::PWSTR wzName, uint32_t* pcchActual) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(guidMetadataFormat);
        ORBIT_TRACK_PARAM(pwzSchema);
        ORBIT_TRACK_PARAM(cchName);
        ORBIT_TRACK_PARAM(wzName);
        ORBIT_TRACK_PARAM(pcchActual);

        auto win32_impl_result = g_api_table.WICMapSchemaToName(guidMetadataFormat, pwzSchema, cchName, wzName, pcchActual);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICMatchMetadataContent(::win32::guid* guidContainerFormat, ::win32::guid* pguidVendor, win32::Windows::Win32::System::Com::IStream* pIStream, ::win32::guid* pguidMetadataFormat) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(guidContainerFormat);
        ORBIT_TRACK_PARAM(pguidVendor);
        ORBIT_TRACK_PARAM(pIStream);
        ORBIT_TRACK_PARAM(pguidMetadataFormat);

        auto win32_impl_result = g_api_table.WICMatchMetadataContent(guidContainerFormat, pguidVendor, pIStream, pguidMetadataFormat);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICSerializeMetadataContent(::win32::guid* guidContainerFormat, win32::Windows::Win32::Graphics::Imaging::IWICMetadataWriter* pIWriter, uint32_t dwPersistOptions, win32::Windows::Win32::System::Com::IStream* pIStream) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(guidContainerFormat);
        ORBIT_TRACK_PARAM(pIWriter);
        ORBIT_TRACK_PARAM(dwPersistOptions);
        ORBIT_TRACK_PARAM(pIStream);

        auto win32_impl_result = g_api_table.WICSerializeMetadataContent(guidContainerFormat, pIWriter, dwPersistOptions, pIStream);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WICGetMetadataContentSize(::win32::guid* guidContainerFormat, win32::Windows::Win32::Graphics::Imaging::IWICMetadataWriter* pIWriter, win32::Windows::Win32::Foundation::ULARGE_INTEGER* pcbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(guidContainerFormat);
        ORBIT_TRACK_PARAM(pIWriter);
        ORBIT_TRACK_PARAM(pcbSize);

        auto win32_impl_result = g_api_table.WICGetMetadataContentSize(guidContainerFormat, pIWriter, pcbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif