// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Com_CallObj_H
#define WIN32_Windows_Win32_System_Com_CallObj_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.Com.CallObj.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::Com::CallObj
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CoGetInterceptor(::win32::guid* iidIntercepted, win32::Windows::Win32::System::Com::IUnknown* punkOuter, ::win32::guid* iid, void** ppv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CoGetInterceptorFromTypeInfo(::win32::guid* iidIntercepted, win32::Windows::Win32::System::Com::IUnknown* punkOuter, win32::Windows::Win32::System::Ole::ITypeInfo* typeInfo, ::win32::guid* iid, void** ppv) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CoGetInterceptor)(::win32::guid* iidIntercepted, win32::Windows::Win32::System::Com::IUnknown* punkOuter, ::win32::guid* iid, void** ppv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CoGetInterceptorFromTypeInfo)(::win32::guid* iidIntercepted, win32::Windows::Win32::System::Com::IUnknown* punkOuter, win32::Windows::Win32::System::Ole::ITypeInfo* typeInfo, ::win32::guid* iid, void** ppv) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif