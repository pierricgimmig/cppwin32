// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_DirectWrite_2_H
#define WIN32_Windows_Win32_Graphics_DirectWrite_2_H
#include "win32/Windows.Win32.Graphics.DirectWrite.h"
#include "win32/impl/Windows.Win32.Graphics.DirectWrite.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::DirectWrite
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DWriteCreateFactory(win32::Windows::Win32::Graphics::DirectWrite::DWRITE_FACTORY_TYPE factoryType, ::win32::guid* iid, win32::Windows::Win32::System::Com::IUnknown** factory) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(factoryType);
        ORBIT_TRACK_PARAM(iid);
        ORBIT_TRACK_PARAM(factory);

        auto win32_impl_result = g_api_table.DWriteCreateFactory(factoryType, iid, factory);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif