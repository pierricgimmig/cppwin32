// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_CompositionSwapchain_2_H
#define WIN32_Windows_Win32_Graphics_CompositionSwapchain_2_H
#include "win32/Windows.Win32.Graphics.CompositionSwapchain.h"
#include "win32/impl/Windows.Win32.Graphics.CompositionSwapchain.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::CompositionSwapchain
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CreatePresentationFactory(win32::Windows::Win32::System::Com::IUnknown* d3dDevice, ::win32::guid* riid, void** presentationFactory) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(d3dDevice);
        ORBIT_TRACK_PARAM(riid);
        ORBIT_TRACK_PARAM(presentationFactory);

        auto win32_impl_result = g_api_table.CreatePresentationFactory(d3dDevice, riid, presentationFactory);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif