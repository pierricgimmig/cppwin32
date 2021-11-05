// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_DirectoryServices_0_H
#define WIN32_Windows_Win32_Security_DirectoryServices_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct HRESULT;
    struct HWND;
    struct LPARAM;
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security
{
    struct SECURITY_DESCRIPTOR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security::Authorization
{
    struct ISecurityInformation;
}
WIN32_EXPORT namespace win32::Windows::Win32::UI::Controls
{
    struct HPROPSHEETPAGE;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security::DirectoryServices
{
#pragma region enums
#pragma endregion enums

#pragma region forward_declarations
#pragma endregion forward_declarations

#pragma region delegates
    using PFNREADOBJECTSECURITY = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PWSTR, uint32_t, Windows::Win32::Security::SECURITY_DESCRIPTOR**, Windows::Win32::Foundation::LPARAM);
    using PFNWRITEOBJECTSECURITY = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PWSTR, uint32_t, Windows::Win32::Security::SECURITY_DESCRIPTOR*, Windows::Win32::Foundation::LPARAM);
    using PFNDSCREATEISECINFO = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, uint32_t, Windows::Win32::Security::Authorization::ISecurityInformation**, Windows::Win32::Security::DirectoryServices::PFNREADOBJECTSECURITY*, Windows::Win32::Security::DirectoryServices::PFNWRITEOBJECTSECURITY*, Windows::Win32::Foundation::LPARAM);
    using PFNDSCREATEISECINFOEX = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, uint32_t, Windows::Win32::Security::Authorization::ISecurityInformation**, Windows::Win32::Security::DirectoryServices::PFNREADOBJECTSECURITY*, Windows::Win32::Security::DirectoryServices::PFNWRITEOBJECTSECURITY*, Windows::Win32::Foundation::LPARAM);
    using PFNDSCREATESECPAGE = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, uint32_t, Windows::Win32::UI::Controls::HPROPSHEETPAGE*, Windows::Win32::Security::DirectoryServices::PFNREADOBJECTSECURITY*, Windows::Win32::Security::DirectoryServices::PFNWRITEOBJECTSECURITY*, Windows::Win32::Foundation::LPARAM);
    using PFNDSEDITSECURITY = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::HWND, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, uint32_t, Windows::Win32::Foundation::PWSTR, Windows::Win32::Security::DirectoryServices::PFNREADOBJECTSECURITY*, Windows::Win32::Security::DirectoryServices::PFNWRITEOBJECTSECURITY*, Windows::Win32::Foundation::LPARAM);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
