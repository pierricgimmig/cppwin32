// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_Controls_Dialogs_2_H
#define WIN32_Windows_Win32_UI_Controls_Dialogs_2_H
#include "win32/Windows.Win32.UI.Controls.Dialogs.h"
#include "win32/impl/Windows.Win32.UI.Controls.Dialogs.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::UI::Controls::Dialogs
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetOpenFileNameA(win32::Windows::Win32::UI::Controls::Dialogs::OPENFILENAMEA* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.GetOpenFileNameA(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetOpenFileNameW(win32::Windows::Win32::UI::Controls::Dialogs::OPENFILENAMEW* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.GetOpenFileNameW(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetSaveFileNameA(win32::Windows::Win32::UI::Controls::Dialogs::OPENFILENAMEA* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.GetSaveFileNameA(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetSaveFileNameW(win32::Windows::Win32::UI::Controls::Dialogs::OPENFILENAMEW* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.GetSaveFileNameW(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int16_t __stdcall ORBIT_IMPL_GetFileTitleA(win32::Windows::Win32::Foundation::PSTR param0, win32::Windows::Win32::Foundation::PSTR Buf, uint16_t cchSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);
        ORBIT_TRACK_PARAM(Buf);
        ORBIT_TRACK_PARAM(cchSize);

        auto win32_impl_result = g_api_table.GetFileTitleA(param0, Buf, cchSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int16_t __stdcall ORBIT_IMPL_GetFileTitleW(win32::Windows::Win32::Foundation::PWSTR param0, win32::Windows::Win32::Foundation::PWSTR Buf, uint16_t cchSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);
        ORBIT_TRACK_PARAM(Buf);
        ORBIT_TRACK_PARAM(cchSize);

        auto win32_impl_result = g_api_table.GetFileTitleW(param0, Buf, cchSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChooseColorA(win32::Windows::Win32::UI::Controls::Dialogs::CHOOSECOLORA* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.ChooseColorA(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChooseColorW(win32::Windows::Win32::UI::Controls::Dialogs::CHOOSECOLORW* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.ChooseColorW(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HWND __stdcall ORBIT_IMPL_FindTextA(win32::Windows::Win32::UI::Controls::Dialogs::FINDREPLACEA* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.FindTextA(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HWND __stdcall ORBIT_IMPL_FindTextW(win32::Windows::Win32::UI::Controls::Dialogs::FINDREPLACEW* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.FindTextW(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HWND __stdcall ORBIT_IMPL_ReplaceTextA(win32::Windows::Win32::UI::Controls::Dialogs::FINDREPLACEA* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.ReplaceTextA(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HWND __stdcall ORBIT_IMPL_ReplaceTextW(win32::Windows::Win32::UI::Controls::Dialogs::FINDREPLACEW* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.ReplaceTextW(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChooseFontA(win32::Windows::Win32::UI::Controls::Dialogs::CHOOSEFONTA* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.ChooseFontA(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChooseFontW(win32::Windows::Win32::UI::Controls::Dialogs::CHOOSEFONTW* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.ChooseFontW(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_PrintDlgA(win32::Windows::Win32::UI::Controls::Dialogs::PRINTDLGA* pPD) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pPD);

        auto win32_impl_result = g_api_table.PrintDlgA(pPD);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_PrintDlgW(win32::Windows::Win32::UI::Controls::Dialogs::PRINTDLGW* pPD) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pPD);

        auto win32_impl_result = g_api_table.PrintDlgW(pPD);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrintDlgExA(win32::Windows::Win32::UI::Controls::Dialogs::PRINTDLGEXA* pPD) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pPD);

        auto win32_impl_result = g_api_table.PrintDlgExA(pPD);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrintDlgExW(win32::Windows::Win32::UI::Controls::Dialogs::PRINTDLGEXW* pPD) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pPD);

        auto win32_impl_result = g_api_table.PrintDlgExW(pPD);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::UI::Controls::Dialogs::COMMON_DLG_ERRORS __stdcall ORBIT_IMPL_CommDlgExtendedError() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.CommDlgExtendedError();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_PageSetupDlgA(win32::Windows::Win32::UI::Controls::Dialogs::PAGESETUPDLGA* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.PageSetupDlgA(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_PageSetupDlgW(win32::Windows::Win32::UI::Controls::Dialogs::PAGESETUPDLGW* param0) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(param0);

        auto win32_impl_result = g_api_table.PageSetupDlgW(param0);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
