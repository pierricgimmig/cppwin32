// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_ApplicationVerifier_H
#define WIN32_Windows_Win32_System_ApplicationVerifier_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.ApplicationVerifier.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::ApplicationVerifier
{
#pragma region methods
extern "C"
{
    uint32_t __stdcall ORBIT_IMPL_VerifierEnumerateResource(win32::Windows::Win32::Foundation::HANDLE Process, win32::Windows::Win32::System::ApplicationVerifier::VERIFIER_ENUM_RESOURCE_FLAGS Flags, win32::Windows::Win32::System::ApplicationVerifier::eAvrfResourceTypes ResourceType, win32::Windows::Win32::System::ApplicationVerifier::AVRF_RESOURCE_ENUMERATE_CALLBACK* ResourceCallback, void* EnumerationContext) noexcept;
}

struct ApiTable {
    uint32_t (__stdcall *VerifierEnumerateResource)(win32::Windows::Win32::Foundation::HANDLE Process, win32::Windows::Win32::System::ApplicationVerifier::VERIFIER_ENUM_RESOURCE_FLAGS Flags, win32::Windows::Win32::System::ApplicationVerifier::eAvrfResourceTypes ResourceType, win32::Windows::Win32::System::ApplicationVerifier::AVRF_RESOURCE_ENUMERATE_CALLBACK* ResourceCallback, void* EnumerationContext) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif