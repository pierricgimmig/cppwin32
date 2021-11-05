// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_Direct3D9_2_H
#define WIN32_Windows_Win32_Graphics_Direct3D9_2_H
#include "win32/Windows.Win32.Graphics.Direct3D9.h"
#include "win32/impl/Windows.Win32.Graphics.Direct3D9.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::Direct3D9
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Graphics::Direct3D9::IDirect3D9* __stdcall ORBIT_IMPL_Direct3DCreate9(uint32_t SDKVersion) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(SDKVersion);

        auto win32_impl_result = g_api_table.Direct3DCreate9(SDKVersion);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_D3DPERF_BeginEvent(uint32_t col, win32::Windows::Win32::Foundation::PWSTR wszName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(col);
        ORBIT_TRACK_PARAM(wszName);

        auto win32_impl_result = g_api_table.D3DPERF_BeginEvent(col, wszName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_D3DPERF_EndEvent() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.D3DPERF_EndEvent();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_D3DPERF_SetMarker(uint32_t col, win32::Windows::Win32::Foundation::PWSTR wszName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(col);
        ORBIT_TRACK_PARAM(wszName);

        g_api_table.D3DPERF_SetMarker(col, wszName);
        
    }

    void __stdcall ORBIT_IMPL_D3DPERF_SetRegion(uint32_t col, win32::Windows::Win32::Foundation::PWSTR wszName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(col);
        ORBIT_TRACK_PARAM(wszName);

        g_api_table.D3DPERF_SetRegion(col, wszName);
        
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_D3DPERF_QueryRepeatFrame() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.D3DPERF_QueryRepeatFrame();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_D3DPERF_SetOptions(uint32_t dwOptions) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(dwOptions);

        g_api_table.D3DPERF_SetOptions(dwOptions);
        
    }

    uint32_t __stdcall ORBIT_IMPL_D3DPERF_GetStatus() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.D3DPERF_GetStatus();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_Direct3DCreate9Ex(uint32_t SDKVersion, win32::Windows::Win32::Graphics::Direct3D9::IDirect3D9Ex** param1) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(SDKVersion);
        ORBIT_TRACK_PARAM(param1);

        auto win32_impl_result = g_api_table.Direct3DCreate9Ex(SDKVersion, param1);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
