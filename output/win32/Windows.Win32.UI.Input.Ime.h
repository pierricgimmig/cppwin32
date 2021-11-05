// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_Input_Ime_H
#define WIN32_Windows_Win32_UI_Input_Ime_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.UI.Input.Ime.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::UI::Input::Ime
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::UI::TextServices::HKL __stdcall ORBIT_IMPL_ImmInstallIMEA(win32::Windows::Win32::Foundation::PSTR lpszIMEFileName, win32::Windows::Win32::Foundation::PSTR lpszLayoutText) noexcept;
    win32::Windows::Win32::UI::TextServices::HKL __stdcall ORBIT_IMPL_ImmInstallIMEW(win32::Windows::Win32::Foundation::PWSTR lpszIMEFileName, win32::Windows::Win32::Foundation::PWSTR lpszLayoutText) noexcept;
    win32::Windows::Win32::Foundation::HWND __stdcall ORBIT_IMPL_ImmGetDefaultIMEWnd(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetDescriptionA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszDescription, uint32_t uBufLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetDescriptionW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszDescription, uint32_t uBufLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetIMEFileNameA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszFileName, uint32_t uBufLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetIMEFileNameW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszFileName, uint32_t uBufLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetProperty(win32::Windows::Win32::UI::TextServices::HKL param0, uint32_t param1) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmIsIME(win32::Windows::Win32::UI::TextServices::HKL param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSimulateHotKey(win32::Windows::Win32::Foundation::HWND param0, uint32_t param1) noexcept;
    win32::Windows::Win32::Globalization::HIMC __stdcall ORBIT_IMPL_ImmCreateContext() noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmDestroyContext(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Globalization::HIMC __stdcall ORBIT_IMPL_ImmGetContext(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmReleaseContext(win32::Windows::Win32::Foundation::HWND param0, win32::Windows::Win32::Globalization::HIMC param1) noexcept;
    win32::Windows::Win32::Globalization::HIMC __stdcall ORBIT_IMPL_ImmAssociateContext(win32::Windows::Win32::Foundation::HWND param0, win32::Windows::Win32::Globalization::HIMC param1) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmAssociateContextEx(win32::Windows::Win32::Foundation::HWND param0, win32::Windows::Win32::Globalization::HIMC param1, uint32_t param2) noexcept;
    int32_t __stdcall ORBIT_IMPL_ImmGetCompositionStringA(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, void* lpBuf, uint32_t dwBufLen) noexcept;
    int32_t __stdcall ORBIT_IMPL_ImmGetCompositionStringW(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, void* lpBuf, uint32_t dwBufLen) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetCompositionStringA(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::SET_COMPOSITION_STRING_TYPE dwIndex, void* lpComp, uint32_t dwCompLen, void* lpRead, uint32_t dwReadLen) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetCompositionStringW(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::SET_COMPOSITION_STRING_TYPE dwIndex, void* lpComp, uint32_t dwCompLen, void* lpRead, uint32_t dwReadLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetCandidateListCountA(win32::Windows::Win32::Globalization::HIMC param0, uint32_t* lpdwListCount) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetCandidateListCountW(win32::Windows::Win32::Globalization::HIMC param0, uint32_t* lpdwListCount) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetCandidateListA(win32::Windows::Win32::Globalization::HIMC param0, uint32_t deIndex, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpCandList, uint32_t dwBufLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetCandidateListW(win32::Windows::Win32::Globalization::HIMC param0, uint32_t deIndex, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpCandList, uint32_t dwBufLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetGuideLineA(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::GET_GUIDE_LINE_TYPE dwIndex, win32::Windows::Win32::Foundation::PSTR lpBuf, uint32_t dwBufLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetGuideLineW(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::GET_GUIDE_LINE_TYPE dwIndex, win32::Windows::Win32::Foundation::PWSTR lpBuf, uint32_t dwBufLen) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetConversionStatus(win32::Windows::Win32::Globalization::HIMC param0, uint32_t* lpfdwConversion, uint32_t* lpfdwSentence) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetConversionStatus(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, uint32_t param2) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetOpenStatus(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetOpenStatus(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::BOOL param1) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetCompositionFontA(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTA* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetCompositionFontW(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTW* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetCompositionFontA(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTA* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetCompositionFontW(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTW* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmConfigureIMEA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::HWND param1, uint32_t param2, void* param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmConfigureIMEW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::HWND param1, uint32_t param2, void* param3) noexcept;
    win32::Windows::Win32::Foundation::LRESULT __stdcall ORBIT_IMPL_ImmEscapeA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, uint32_t param2, void* param3) noexcept;
    win32::Windows::Win32::Foundation::LRESULT __stdcall ORBIT_IMPL_ImmEscapeW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, uint32_t param2, void* param3) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetConversionListA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, win32::Windows::Win32::Foundation::PSTR lpSrc, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpDst, uint32_t dwBufLen, win32::Windows::Win32::UI::Input::Ime::GET_CONVERSION_LIST_FLAG uFlag) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetConversionListW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, win32::Windows::Win32::Foundation::PWSTR lpSrc, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpDst, uint32_t dwBufLen, win32::Windows::Win32::UI::Input::Ime::GET_CONVERSION_LIST_FLAG uFlag) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmNotifyIME(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::NOTIFY_IME_ACTION dwAction, win32::Windows::Win32::UI::Input::Ime::NOTIFY_IME_INDEX dwIndex, uint32_t dwValue) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetStatusWindowPos(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::POINT* lpptPos) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetStatusWindowPos(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::POINT* lpptPos) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetCompositionWindow(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::COMPOSITIONFORM* lpCompForm) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetCompositionWindow(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::COMPOSITIONFORM* lpCompForm) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetCandidateWindow(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, win32::Windows::Win32::UI::Input::Ime::CANDIDATEFORM* lpCandidate) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetCandidateWindow(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::CANDIDATEFORM* lpCandidate) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmIsUIMessageA(win32::Windows::Win32::Foundation::HWND param0, uint32_t param1, win32::Windows::Win32::Foundation::WPARAM param2, win32::Windows::Win32::Foundation::LPARAM param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmIsUIMessageW(win32::Windows::Win32::Foundation::HWND param0, uint32_t param1, win32::Windows::Win32::Foundation::WPARAM param2, win32::Windows::Win32::Foundation::LPARAM param3) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetVirtualKey(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmRegisterWordA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PSTR lpszRegister) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmRegisterWordW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PWSTR lpszRegister) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmUnregisterWordA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PSTR lpszUnregister) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmUnregisterWordW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PWSTR lpszUnregister) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetRegisterWordStyleA(win32::Windows::Win32::UI::TextServices::HKL param0, uint32_t nItem, win32::Windows::Win32::UI::Input::Ime::STYLEBUFA* lpStyleBuf) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetRegisterWordStyleW(win32::Windows::Win32::UI::TextServices::HKL param0, uint32_t nItem, win32::Windows::Win32::UI::Input::Ime::STYLEBUFW* lpStyleBuf) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmEnumRegisterWordA(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::UI::Input::Ime::REGISTERWORDENUMPROCA* param1, win32::Windows::Win32::Foundation::PSTR lpszReading, uint32_t param3, win32::Windows::Win32::Foundation::PSTR lpszRegister, void* param5) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmEnumRegisterWordW(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::UI::Input::Ime::REGISTERWORDENUMPROCW* param1, win32::Windows::Win32::Foundation::PWSTR lpszReading, uint32_t param3, win32::Windows::Win32::Foundation::PWSTR lpszRegister, void* param5) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmDisableIME(uint32_t param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmEnumInputContext(uint32_t idThread, win32::Windows::Win32::UI::Input::Ime::IMCENUMPROC* lpfn, win32::Windows::Win32::Foundation::LPARAM lParam) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetImeMenuItemsA(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, uint32_t param2, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOA* lpImeParentMenu, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOA* lpImeMenu, uint32_t dwSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetImeMenuItemsW(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, uint32_t param2, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOW* lpImeParentMenu, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOW* lpImeMenu, uint32_t dwSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmDisableTextFrameService(uint32_t idThread) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmDisableLegacyIME() noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGetHotKey(uint32_t param0, uint32_t* lpuModifiers, uint32_t* lpuVKey, intptr_t* phKL) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmSetHotKey(uint32_t param0, uint32_t param1, uint32_t param2, win32::Windows::Win32::UI::TextServices::HKL param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmGenerateMessage(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Foundation::LRESULT __stdcall ORBIT_IMPL_ImmRequestMessageA(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::WPARAM param1, win32::Windows::Win32::Foundation::LPARAM param2) noexcept;
    win32::Windows::Win32::Foundation::LRESULT __stdcall ORBIT_IMPL_ImmRequestMessageW(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::WPARAM param1, win32::Windows::Win32::Foundation::LPARAM param2) noexcept;
    win32::Windows::Win32::Foundation::HWND __stdcall ORBIT_IMPL_ImmCreateSoftKeyboard(uint32_t param0, win32::Windows::Win32::Foundation::HWND param1, int32_t param2, int32_t param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmDestroySoftKeyboard(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmShowSoftKeyboard(win32::Windows::Win32::Foundation::HWND param0, int32_t param1) noexcept;
    win32::Windows::Win32::UI::Input::Ime::INPUTCONTEXT* __stdcall ORBIT_IMPL_ImmLockIMC(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmUnlockIMC(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetIMCLockCount(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Globalization::HIMCC __stdcall ORBIT_IMPL_ImmCreateIMCC(uint32_t param0) noexcept;
    win32::Windows::Win32::Globalization::HIMCC __stdcall ORBIT_IMPL_ImmDestroyIMCC(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    void* __stdcall ORBIT_IMPL_ImmLockIMCC(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ImmUnlockIMCC(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetIMCCLockCount(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    win32::Windows::Win32::Globalization::HIMCC __stdcall ORBIT_IMPL_ImmReSizeIMCC(win32::Windows::Win32::Globalization::HIMCC param0, uint32_t param1) noexcept;
    uint32_t __stdcall ORBIT_IMPL_ImmGetIMCCSize(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::UI::TextServices::HKL (__stdcall *ImmInstallIMEA)(win32::Windows::Win32::Foundation::PSTR lpszIMEFileName, win32::Windows::Win32::Foundation::PSTR lpszLayoutText) noexcept;
    win32::Windows::Win32::UI::TextServices::HKL (__stdcall *ImmInstallIMEW)(win32::Windows::Win32::Foundation::PWSTR lpszIMEFileName, win32::Windows::Win32::Foundation::PWSTR lpszLayoutText) noexcept;
    win32::Windows::Win32::Foundation::HWND (__stdcall *ImmGetDefaultIMEWnd)(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    uint32_t (__stdcall *ImmGetDescriptionA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszDescription, uint32_t uBufLen) noexcept;
    uint32_t (__stdcall *ImmGetDescriptionW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszDescription, uint32_t uBufLen) noexcept;
    uint32_t (__stdcall *ImmGetIMEFileNameA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszFileName, uint32_t uBufLen) noexcept;
    uint32_t (__stdcall *ImmGetIMEFileNameW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszFileName, uint32_t uBufLen) noexcept;
    uint32_t (__stdcall *ImmGetProperty)(win32::Windows::Win32::UI::TextServices::HKL param0, uint32_t param1) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmIsIME)(win32::Windows::Win32::UI::TextServices::HKL param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSimulateHotKey)(win32::Windows::Win32::Foundation::HWND param0, uint32_t param1) noexcept;
    win32::Windows::Win32::Globalization::HIMC (__stdcall *ImmCreateContext)() noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmDestroyContext)(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Globalization::HIMC (__stdcall *ImmGetContext)(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmReleaseContext)(win32::Windows::Win32::Foundation::HWND param0, win32::Windows::Win32::Globalization::HIMC param1) noexcept;
    win32::Windows::Win32::Globalization::HIMC (__stdcall *ImmAssociateContext)(win32::Windows::Win32::Foundation::HWND param0, win32::Windows::Win32::Globalization::HIMC param1) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmAssociateContextEx)(win32::Windows::Win32::Foundation::HWND param0, win32::Windows::Win32::Globalization::HIMC param1, uint32_t param2) noexcept;
    int32_t (__stdcall *ImmGetCompositionStringA)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, void* lpBuf, uint32_t dwBufLen) noexcept;
    int32_t (__stdcall *ImmGetCompositionStringW)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, void* lpBuf, uint32_t dwBufLen) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetCompositionStringA)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::SET_COMPOSITION_STRING_TYPE dwIndex, void* lpComp, uint32_t dwCompLen, void* lpRead, uint32_t dwReadLen) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetCompositionStringW)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::SET_COMPOSITION_STRING_TYPE dwIndex, void* lpComp, uint32_t dwCompLen, void* lpRead, uint32_t dwReadLen) noexcept;
    uint32_t (__stdcall *ImmGetCandidateListCountA)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t* lpdwListCount) noexcept;
    uint32_t (__stdcall *ImmGetCandidateListCountW)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t* lpdwListCount) noexcept;
    uint32_t (__stdcall *ImmGetCandidateListA)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t deIndex, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpCandList, uint32_t dwBufLen) noexcept;
    uint32_t (__stdcall *ImmGetCandidateListW)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t deIndex, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpCandList, uint32_t dwBufLen) noexcept;
    uint32_t (__stdcall *ImmGetGuideLineA)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::GET_GUIDE_LINE_TYPE dwIndex, win32::Windows::Win32::Foundation::PSTR lpBuf, uint32_t dwBufLen) noexcept;
    uint32_t (__stdcall *ImmGetGuideLineW)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::GET_GUIDE_LINE_TYPE dwIndex, win32::Windows::Win32::Foundation::PWSTR lpBuf, uint32_t dwBufLen) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetConversionStatus)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t* lpfdwConversion, uint32_t* lpfdwSentence) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetConversionStatus)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, uint32_t param2) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetOpenStatus)(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetOpenStatus)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::BOOL param1) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetCompositionFontA)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTA* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetCompositionFontW)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTW* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetCompositionFontA)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTA* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetCompositionFontW)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Graphics::Gdi::LOGFONTW* lplf) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmConfigureIMEA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::HWND param1, uint32_t param2, void* param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmConfigureIMEW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::HWND param1, uint32_t param2, void* param3) noexcept;
    win32::Windows::Win32::Foundation::LRESULT (__stdcall *ImmEscapeA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, uint32_t param2, void* param3) noexcept;
    win32::Windows::Win32::Foundation::LRESULT (__stdcall *ImmEscapeW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, uint32_t param2, void* param3) noexcept;
    uint32_t (__stdcall *ImmGetConversionListA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, win32::Windows::Win32::Foundation::PSTR lpSrc, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpDst, uint32_t dwBufLen, win32::Windows::Win32::UI::Input::Ime::GET_CONVERSION_LIST_FLAG uFlag) noexcept;
    uint32_t (__stdcall *ImmGetConversionListW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Globalization::HIMC param1, win32::Windows::Win32::Foundation::PWSTR lpSrc, win32::Windows::Win32::UI::Input::Ime::CANDIDATELIST* lpDst, uint32_t dwBufLen, win32::Windows::Win32::UI::Input::Ime::GET_CONVERSION_LIST_FLAG uFlag) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmNotifyIME)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::NOTIFY_IME_ACTION dwAction, win32::Windows::Win32::UI::Input::Ime::NOTIFY_IME_INDEX dwIndex, uint32_t dwValue) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetStatusWindowPos)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::POINT* lpptPos) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetStatusWindowPos)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::POINT* lpptPos) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetCompositionWindow)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::COMPOSITIONFORM* lpCompForm) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetCompositionWindow)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::COMPOSITIONFORM* lpCompForm) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetCandidateWindow)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, win32::Windows::Win32::UI::Input::Ime::CANDIDATEFORM* lpCandidate) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetCandidateWindow)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::UI::Input::Ime::CANDIDATEFORM* lpCandidate) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmIsUIMessageA)(win32::Windows::Win32::Foundation::HWND param0, uint32_t param1, win32::Windows::Win32::Foundation::WPARAM param2, win32::Windows::Win32::Foundation::LPARAM param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmIsUIMessageW)(win32::Windows::Win32::Foundation::HWND param0, uint32_t param1, win32::Windows::Win32::Foundation::WPARAM param2, win32::Windows::Win32::Foundation::LPARAM param3) noexcept;
    uint32_t (__stdcall *ImmGetVirtualKey)(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmRegisterWordA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PSTR lpszRegister) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmRegisterWordW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PWSTR lpszRegister) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmUnregisterWordA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PSTR lpszUnregister) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmUnregisterWordW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::Foundation::PWSTR lpszReading, uint32_t param2, win32::Windows::Win32::Foundation::PWSTR lpszUnregister) noexcept;
    uint32_t (__stdcall *ImmGetRegisterWordStyleA)(win32::Windows::Win32::UI::TextServices::HKL param0, uint32_t nItem, win32::Windows::Win32::UI::Input::Ime::STYLEBUFA* lpStyleBuf) noexcept;
    uint32_t (__stdcall *ImmGetRegisterWordStyleW)(win32::Windows::Win32::UI::TextServices::HKL param0, uint32_t nItem, win32::Windows::Win32::UI::Input::Ime::STYLEBUFW* lpStyleBuf) noexcept;
    uint32_t (__stdcall *ImmEnumRegisterWordA)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::UI::Input::Ime::REGISTERWORDENUMPROCA* param1, win32::Windows::Win32::Foundation::PSTR lpszReading, uint32_t param3, win32::Windows::Win32::Foundation::PSTR lpszRegister, void* param5) noexcept;
    uint32_t (__stdcall *ImmEnumRegisterWordW)(win32::Windows::Win32::UI::TextServices::HKL param0, win32::Windows::Win32::UI::Input::Ime::REGISTERWORDENUMPROCW* param1, win32::Windows::Win32::Foundation::PWSTR lpszReading, uint32_t param3, win32::Windows::Win32::Foundation::PWSTR lpszRegister, void* param5) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmDisableIME)(uint32_t param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmEnumInputContext)(uint32_t idThread, win32::Windows::Win32::UI::Input::Ime::IMCENUMPROC* lpfn, win32::Windows::Win32::Foundation::LPARAM lParam) noexcept;
    uint32_t (__stdcall *ImmGetImeMenuItemsA)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, uint32_t param2, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOA* lpImeParentMenu, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOA* lpImeMenu, uint32_t dwSize) noexcept;
    uint32_t (__stdcall *ImmGetImeMenuItemsW)(win32::Windows::Win32::Globalization::HIMC param0, uint32_t param1, uint32_t param2, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOW* lpImeParentMenu, win32::Windows::Win32::UI::Input::Ime::IMEMENUITEMINFOW* lpImeMenu, uint32_t dwSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmDisableTextFrameService)(uint32_t idThread) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmDisableLegacyIME)() noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGetHotKey)(uint32_t param0, uint32_t* lpuModifiers, uint32_t* lpuVKey, intptr_t* phKL) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmSetHotKey)(uint32_t param0, uint32_t param1, uint32_t param2, win32::Windows::Win32::UI::TextServices::HKL param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmGenerateMessage)(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Foundation::LRESULT (__stdcall *ImmRequestMessageA)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::WPARAM param1, win32::Windows::Win32::Foundation::LPARAM param2) noexcept;
    win32::Windows::Win32::Foundation::LRESULT (__stdcall *ImmRequestMessageW)(win32::Windows::Win32::Globalization::HIMC param0, win32::Windows::Win32::Foundation::WPARAM param1, win32::Windows::Win32::Foundation::LPARAM param2) noexcept;
    win32::Windows::Win32::Foundation::HWND (__stdcall *ImmCreateSoftKeyboard)(uint32_t param0, win32::Windows::Win32::Foundation::HWND param1, int32_t param2, int32_t param3) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmDestroySoftKeyboard)(win32::Windows::Win32::Foundation::HWND param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmShowSoftKeyboard)(win32::Windows::Win32::Foundation::HWND param0, int32_t param1) noexcept;
    win32::Windows::Win32::UI::Input::Ime::INPUTCONTEXT* (__stdcall *ImmLockIMC)(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmUnlockIMC)(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    uint32_t (__stdcall *ImmGetIMCLockCount)(win32::Windows::Win32::Globalization::HIMC param0) noexcept;
    win32::Windows::Win32::Globalization::HIMCC (__stdcall *ImmCreateIMCC)(uint32_t param0) noexcept;
    win32::Windows::Win32::Globalization::HIMCC (__stdcall *ImmDestroyIMCC)(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    void* (__stdcall *ImmLockIMCC)(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ImmUnlockIMCC)(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    uint32_t (__stdcall *ImmGetIMCCLockCount)(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
    win32::Windows::Win32::Globalization::HIMCC (__stdcall *ImmReSizeIMCC)(win32::Windows::Win32::Globalization::HIMCC param0, uint32_t param1) noexcept;
    uint32_t (__stdcall *ImmGetIMCCSize)(win32::Windows::Win32::Globalization::HIMCC param0) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif