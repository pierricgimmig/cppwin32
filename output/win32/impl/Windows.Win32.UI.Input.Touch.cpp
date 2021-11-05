// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_Input_Touch_2_H
#define WIN32_Windows_Win32_UI_Input_Touch_2_H
#include "win32/Windows.Win32.UI.Input.Touch.h"
#include "win32/impl/Windows.Win32.UI.Input.Touch.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::UI::Input::Touch
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetTouchInputInfo(win32::Windows::Win32::UI::Input::Touch::HTOUCHINPUT hTouchInput, uint32_t cInputs, win32::Windows::Win32::UI::Input::Touch::TOUCHINPUT* pInputs, int32_t cbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hTouchInput);
        ORBIT_TRACK_PARAM(cInputs);
        ORBIT_TRACK_PARAM(pInputs);
        ORBIT_TRACK_PARAM(cbSize);

        auto win32_impl_result = g_api_table.GetTouchInputInfo(hTouchInput, cInputs, pInputs, cbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CloseTouchInputHandle(win32::Windows::Win32::UI::Input::Touch::HTOUCHINPUT hTouchInput) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hTouchInput);

        auto win32_impl_result = g_api_table.CloseTouchInputHandle(hTouchInput);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_RegisterTouchWindow(win32::Windows::Win32::Foundation::HWND hwnd, win32::Windows::Win32::UI::Input::Touch::REGISTER_TOUCH_WINDOW_FLAGS ulFlags) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwnd);
        ORBIT_TRACK_PARAM(ulFlags);

        auto win32_impl_result = g_api_table.RegisterTouchWindow(hwnd, ulFlags);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_UnregisterTouchWindow(win32::Windows::Win32::Foundation::HWND hwnd) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwnd);

        auto win32_impl_result = g_api_table.UnregisterTouchWindow(hwnd);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_IsTouchWindow(win32::Windows::Win32::Foundation::HWND hwnd, uint32_t* pulFlags) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwnd);
        ORBIT_TRACK_PARAM(pulFlags);

        auto win32_impl_result = g_api_table.IsTouchWindow(hwnd, pulFlags);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetGestureInfo(win32::Windows::Win32::UI::Input::Touch::HGESTUREINFO hGestureInfo, win32::Windows::Win32::UI::Input::Touch::GESTUREINFO* pGestureInfo) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hGestureInfo);
        ORBIT_TRACK_PARAM(pGestureInfo);

        auto win32_impl_result = g_api_table.GetGestureInfo(hGestureInfo, pGestureInfo);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetGestureExtraArgs(win32::Windows::Win32::UI::Input::Touch::HGESTUREINFO hGestureInfo, uint32_t cbExtraArgs, uint8_t* pExtraArgs) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hGestureInfo);
        ORBIT_TRACK_PARAM(cbExtraArgs);
        ORBIT_TRACK_PARAM(pExtraArgs);

        auto win32_impl_result = g_api_table.GetGestureExtraArgs(hGestureInfo, cbExtraArgs, pExtraArgs);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CloseGestureInfoHandle(win32::Windows::Win32::UI::Input::Touch::HGESTUREINFO hGestureInfo) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hGestureInfo);

        auto win32_impl_result = g_api_table.CloseGestureInfoHandle(hGestureInfo);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetGestureConfig(win32::Windows::Win32::Foundation::HWND hwnd, uint32_t dwReserved, uint32_t cIDs, win32::Windows::Win32::UI::Input::Touch::GESTURECONFIG* pGestureConfig, uint32_t cbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwnd);
        ORBIT_TRACK_PARAM(dwReserved);
        ORBIT_TRACK_PARAM(cIDs);
        ORBIT_TRACK_PARAM(pGestureConfig);
        ORBIT_TRACK_PARAM(cbSize);

        auto win32_impl_result = g_api_table.SetGestureConfig(hwnd, dwReserved, cIDs, pGestureConfig, cbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetGestureConfig(win32::Windows::Win32::Foundation::HWND hwnd, uint32_t dwReserved, uint32_t dwFlags, uint32_t* pcIDs, win32::Windows::Win32::UI::Input::Touch::GESTURECONFIG* pGestureConfig, uint32_t cbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hwnd);
        ORBIT_TRACK_PARAM(dwReserved);
        ORBIT_TRACK_PARAM(dwFlags);
        ORBIT_TRACK_PARAM(pcIDs);
        ORBIT_TRACK_PARAM(pGestureConfig);
        ORBIT_TRACK_PARAM(cbSize);

        auto win32_impl_result = g_api_table.GetGestureConfig(hwnd, dwReserved, dwFlags, pcIDs, pGestureConfig, cbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
