// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_ApplicationVerifier_2_H
#define WIN32_Windows_Win32_System_ApplicationVerifier_2_H
#include "win32/Windows.Win32.System.ApplicationVerifier.h"
#include "win32/impl/Windows.Win32.System.ApplicationVerifier.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::ApplicationVerifier
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall ORBIT_IMPL_VerifierEnumerateResource(win32::Windows::Win32::Foundation::HANDLE Process, win32::Windows::Win32::System::ApplicationVerifier::VERIFIER_ENUM_RESOURCE_FLAGS Flags, win32::Windows::Win32::System::ApplicationVerifier::eAvrfResourceTypes ResourceType, win32::Windows::Win32::System::ApplicationVerifier::AVRF_RESOURCE_ENUMERATE_CALLBACK* ResourceCallback, void* EnumerationContext) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Process);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(ResourceType);
        ORBIT_TRACK_PARAM(ResourceCallback);
        ORBIT_TRACK_PARAM(EnumerationContext);

        auto win32_impl_result = g_api_table.VerifierEnumerateResource(Process, Flags, ResourceType, ResourceCallback, EnumerationContext);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
