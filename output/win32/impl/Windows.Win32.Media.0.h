// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Media_0_H
#define WIN32_Windows_Win32_Media_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Media::Multimedia
{
    struct HDRVR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Media
{
#pragma region enums
#pragma endregion enums

#pragma region forward_declarations
    struct MMTIME;
    struct TIMECAPS;
#pragma endregion forward_declarations

#pragma region delegates
    using LPDRVCALLBACK = void __stdcall(Windows::Win32::Media::Multimedia::HDRVR, uint32_t, size_t, size_t, size_t);
    using LPTIMECALLBACK = void __stdcall(uint32_t, uint32_t, size_t, size_t, size_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif