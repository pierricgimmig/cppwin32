// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_AppLocker_H
#define WIN32_Windows_Win32_Security_AppLocker_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Security.AppLocker.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Security::AppLocker
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferGetPolicyInformation(uint32_t dwScopeId, win32::Windows::Win32::Security::AppLocker::SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass, uint32_t InfoBufferSize, void* InfoBuffer, uint32_t* InfoBufferRetSize, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferSetPolicyInformation(uint32_t dwScopeId, win32::Windows::Win32::Security::AppLocker::SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass, uint32_t InfoBufferSize, void* InfoBuffer, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferCreateLevel(uint32_t dwScopeId, uint32_t dwLevelId, uint32_t OpenFlags, win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE* pLevelHandle, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferCloseLevel(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE hLevelHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferIdentifyLevel(uint32_t dwNumProperties, win32::Windows::Win32::Security::AppLocker::SAFER_CODE_PROPERTIES_V2* pCodeProperties, win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE* pLevelHandle, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferComputeTokenFromLevel(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE LevelHandle, win32::Windows::Win32::Foundation::HANDLE InAccessToken, win32::Windows::Win32::Foundation::HANDLE* OutAccessToken, win32::Windows::Win32::Security::AppLocker::SAFER_COMPUTE_TOKEN_FROM_LEVEL_FLAGS dwFlags, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferGetLevelInformation(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE LevelHandle, win32::Windows::Win32::Security::AppLocker::SAFER_OBJECT_INFO_CLASS dwInfoType, void* lpQueryBuffer, uint32_t dwInBufferSize, uint32_t* lpdwOutBufferSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferSetLevelInformation(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE LevelHandle, win32::Windows::Win32::Security::AppLocker::SAFER_OBJECT_INFO_CLASS dwInfoType, void* lpQueryBuffer, uint32_t dwInBufferSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferRecordEventLogEntry(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE hLevel, win32::Windows::Win32::Foundation::PWSTR szTargetPath, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SaferiIsExecutableFileType(win32::Windows::Win32::Foundation::PWSTR szFullPathname, win32::Windows::Win32::Foundation::BOOLEAN bFromShellExecute) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferGetPolicyInformation)(uint32_t dwScopeId, win32::Windows::Win32::Security::AppLocker::SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass, uint32_t InfoBufferSize, void* InfoBuffer, uint32_t* InfoBufferRetSize, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferSetPolicyInformation)(uint32_t dwScopeId, win32::Windows::Win32::Security::AppLocker::SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass, uint32_t InfoBufferSize, void* InfoBuffer, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferCreateLevel)(uint32_t dwScopeId, uint32_t dwLevelId, uint32_t OpenFlags, win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE* pLevelHandle, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferCloseLevel)(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE hLevelHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferIdentifyLevel)(uint32_t dwNumProperties, win32::Windows::Win32::Security::AppLocker::SAFER_CODE_PROPERTIES_V2* pCodeProperties, win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE* pLevelHandle, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferComputeTokenFromLevel)(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE LevelHandle, win32::Windows::Win32::Foundation::HANDLE InAccessToken, win32::Windows::Win32::Foundation::HANDLE* OutAccessToken, win32::Windows::Win32::Security::AppLocker::SAFER_COMPUTE_TOKEN_FROM_LEVEL_FLAGS dwFlags, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferGetLevelInformation)(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE LevelHandle, win32::Windows::Win32::Security::AppLocker::SAFER_OBJECT_INFO_CLASS dwInfoType, void* lpQueryBuffer, uint32_t dwInBufferSize, uint32_t* lpdwOutBufferSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferSetLevelInformation)(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE LevelHandle, win32::Windows::Win32::Security::AppLocker::SAFER_OBJECT_INFO_CLASS dwInfoType, void* lpQueryBuffer, uint32_t dwInBufferSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferRecordEventLogEntry)(win32::Windows::Win32::Security::SAFER_LEVEL_HANDLE hLevel, win32::Windows::Win32::Foundation::PWSTR szTargetPath, void* lpReserved) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SaferiIsExecutableFileType)(win32::Windows::Win32::Foundation::PWSTR szFullPathname, win32::Windows::Win32::Foundation::BOOLEAN bFromShellExecute) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif