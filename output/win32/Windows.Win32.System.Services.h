// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Services_H
#define WIN32_Windows_Win32_System_Services_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.Services.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::Services
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetServiceBits(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, uint32_t dwServiceBits, win32::Windows::Win32::Foundation::BOOL bSetBitsOn, win32::Windows::Win32::Foundation::BOOL bUpdateImmediately) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChangeServiceConfigA(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PSTR lpDependencies, win32::Windows::Win32::Foundation::PSTR lpServiceStartName, win32::Windows::Win32::Foundation::PSTR lpPassword, win32::Windows::Win32::Foundation::PSTR lpDisplayName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChangeServiceConfigW(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PWSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PWSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PWSTR lpDependencies, win32::Windows::Win32::Foundation::PWSTR lpServiceStartName, win32::Windows::Win32::Foundation::PWSTR lpPassword, win32::Windows::Win32::Foundation::PWSTR lpDisplayName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChangeServiceConfig2A(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, void* lpInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ChangeServiceConfig2W(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, void* lpInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CloseServiceHandle(win32::Windows::Win32::Security::SC_HANDLE hSCObject) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ControlService(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwControl, win32::Windows::Win32::System::Services::SERVICE_STATUS* lpServiceStatus) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE __stdcall ORBIT_IMPL_CreateServiceA(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::Foundation::PSTR lpDisplayName, uint32_t dwDesiredAccess, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PSTR lpDependencies, win32::Windows::Win32::Foundation::PSTR lpServiceStartName, win32::Windows::Win32::Foundation::PSTR lpPassword) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE __stdcall ORBIT_IMPL_CreateServiceW(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::Foundation::PWSTR lpDisplayName, uint32_t dwDesiredAccess, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PWSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PWSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PWSTR lpDependencies, win32::Windows::Win32::Foundation::PWSTR lpServiceStartName, win32::Windows::Win32::Foundation::PWSTR lpPassword) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_DeleteService(win32::Windows::Win32::Security::SC_HANDLE hService) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EnumDependentServicesA(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSA* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EnumDependentServicesW(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSW* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EnumServicesStatusA(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSA* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EnumServicesStatusW(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSW* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EnumServicesStatusExA(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::SC_ENUM_TYPE InfoLevel, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, uint8_t* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle, win32::Windows::Win32::Foundation::PSTR pszGroupName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EnumServicesStatusExW(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::SC_ENUM_TYPE InfoLevel, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, uint8_t* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle, win32::Windows::Win32::Foundation::PWSTR pszGroupName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetServiceKeyNameA(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpDisplayName, win32::Windows::Win32::Foundation::PSTR lpServiceName, uint32_t* lpcchBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetServiceKeyNameW(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpDisplayName, win32::Windows::Win32::Foundation::PWSTR lpServiceName, uint32_t* lpcchBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetServiceDisplayNameA(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::Foundation::PSTR lpDisplayName, uint32_t* lpcchBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetServiceDisplayNameW(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::Foundation::PWSTR lpDisplayName, uint32_t* lpcchBuffer) noexcept;
    void* __stdcall ORBIT_IMPL_LockServiceDatabase(win32::Windows::Win32::Security::SC_HANDLE hSCManager) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_NotifyBootConfigStatus(win32::Windows::Win32::Foundation::BOOL BootAcceptable) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE __stdcall ORBIT_IMPL_OpenSCManagerA(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpDatabaseName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE __stdcall ORBIT_IMPL_OpenSCManagerW(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpDatabaseName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE __stdcall ORBIT_IMPL_OpenServiceA(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpServiceName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE __stdcall ORBIT_IMPL_OpenServiceW(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpServiceName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceConfigA(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::QUERY_SERVICE_CONFIGA* lpServiceConfig, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceConfigW(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::QUERY_SERVICE_CONFIGW* lpServiceConfig, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceConfig2A(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, uint8_t* lpBuffer, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceConfig2W(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, uint8_t* lpBuffer, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceLockStatusA(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::QUERY_SERVICE_LOCK_STATUSA* lpLockStatus, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceLockStatusW(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::QUERY_SERVICE_LOCK_STATUSW* lpLockStatus, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceObjectSecurity(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwSecurityInformation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* lpSecurityDescriptor, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceStatus(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_STATUS* lpServiceStatus) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceStatusEx(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SC_STATUS_TYPE InfoLevel, uint8_t* lpBuffer, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE __stdcall ORBIT_IMPL_RegisterServiceCtrlHandlerA(win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION* lpHandlerProc) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE __stdcall ORBIT_IMPL_RegisterServiceCtrlHandlerW(win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION* lpHandlerProc) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE __stdcall ORBIT_IMPL_RegisterServiceCtrlHandlerExA(win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION_EX* lpHandlerProc, void* lpContext) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE __stdcall ORBIT_IMPL_RegisterServiceCtrlHandlerExW(win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION_EX* lpHandlerProc, void* lpContext) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetServiceObjectSecurity(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::Security::OBJECT_SECURITY_INFORMATION dwSecurityInformation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* lpSecurityDescriptor) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetServiceStatus(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, win32::Windows::Win32::System::Services::SERVICE_STATUS* lpServiceStatus) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_StartServiceCtrlDispatcherA(win32::Windows::Win32::System::Services::SERVICE_TABLE_ENTRYA* lpServiceStartTable) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_StartServiceCtrlDispatcherW(win32::Windows::Win32::System::Services::SERVICE_TABLE_ENTRYW* lpServiceStartTable) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_StartServiceA(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwNumServiceArgs, win32::Windows::Win32::Foundation::PSTR* lpServiceArgVectors) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_StartServiceW(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwNumServiceArgs, win32::Windows::Win32::Foundation::PWSTR* lpServiceArgVectors) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_UnlockServiceDatabase(void* ScLock) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NotifyServiceStatusChangeA(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_NOTIFY dwNotifyMask, win32::Windows::Win32::System::Services::SERVICE_NOTIFY_2A* pNotifyBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_NotifyServiceStatusChangeW(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_NOTIFY dwNotifyMask, win32::Windows::Win32::System::Services::SERVICE_NOTIFY_2W* pNotifyBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ControlServiceExA(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwControl, uint32_t dwInfoLevel, void* pControlParams) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ControlServiceExW(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwControl, uint32_t dwInfoLevel, void* pControlParams) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QueryServiceDynamicInformation(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, uint32_t dwInfoLevel, void** ppDynamicInfo) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WaitServiceState(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwNotify, uint32_t dwTimeout, win32::Windows::Win32::Foundation::HANDLE hCancelEvent) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetServiceRegistryStateKey(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE ServiceStatusHandle, win32::Windows::Win32::System::Services::SERVICE_REGISTRY_STATE_TYPE StateType, uint32_t AccessMask, win32::Windows::Win32::System::Registry::HKEY* ServiceStateKey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetServiceDirectory(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, win32::Windows::Win32::System::Services::SERVICE_DIRECTORY_TYPE eDirectoryType, win32::Windows::Win32::Foundation::PWSTR lpPathBuffer, uint32_t cchPathBufferLength, uint32_t* lpcchRequiredBufferLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSharedServiceRegistryStateKey(win32::Windows::Win32::Security::SC_HANDLE ServiceHandle, win32::Windows::Win32::System::Services::SERVICE_SHARED_REGISTRY_STATE_TYPE StateType, uint32_t AccessMask, win32::Windows::Win32::System::Registry::HKEY* ServiceStateKey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSharedServiceDirectory(win32::Windows::Win32::Security::SC_HANDLE ServiceHandle, win32::Windows::Win32::System::Services::SERVICE_SHARED_DIRECTORY_TYPE DirectoryType, win32::Windows::Win32::Foundation::PWSTR PathBuffer, uint32_t PathBufferLength, uint32_t* RequiredBufferLength) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetServiceBits)(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, uint32_t dwServiceBits, win32::Windows::Win32::Foundation::BOOL bSetBitsOn, win32::Windows::Win32::Foundation::BOOL bUpdateImmediately) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ChangeServiceConfigA)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PSTR lpDependencies, win32::Windows::Win32::Foundation::PSTR lpServiceStartName, win32::Windows::Win32::Foundation::PSTR lpPassword, win32::Windows::Win32::Foundation::PSTR lpDisplayName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ChangeServiceConfigW)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PWSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PWSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PWSTR lpDependencies, win32::Windows::Win32::Foundation::PWSTR lpServiceStartName, win32::Windows::Win32::Foundation::PWSTR lpPassword, win32::Windows::Win32::Foundation::PWSTR lpDisplayName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ChangeServiceConfig2A)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, void* lpInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ChangeServiceConfig2W)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, void* lpInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CloseServiceHandle)(win32::Windows::Win32::Security::SC_HANDLE hSCObject) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ControlService)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwControl, win32::Windows::Win32::System::Services::SERVICE_STATUS* lpServiceStatus) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE (__stdcall *CreateServiceA)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::Foundation::PSTR lpDisplayName, uint32_t dwDesiredAccess, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PSTR lpDependencies, win32::Windows::Win32::Foundation::PSTR lpServiceStartName, win32::Windows::Win32::Foundation::PSTR lpPassword) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE (__stdcall *CreateServiceW)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::Foundation::PWSTR lpDisplayName, uint32_t dwDesiredAccess, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::SERVICE_START_TYPE dwStartType, win32::Windows::Win32::System::Services::SERVICE_ERROR dwErrorControl, win32::Windows::Win32::Foundation::PWSTR lpBinaryPathName, win32::Windows::Win32::Foundation::PWSTR lpLoadOrderGroup, uint32_t* lpdwTagId, win32::Windows::Win32::Foundation::PWSTR lpDependencies, win32::Windows::Win32::Foundation::PWSTR lpServiceStartName, win32::Windows::Win32::Foundation::PWSTR lpPassword) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *DeleteService)(win32::Windows::Win32::Security::SC_HANDLE hService) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EnumDependentServicesA)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSA* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EnumDependentServicesW)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSW* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EnumServicesStatusA)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSA* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EnumServicesStatusW)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATUSW* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EnumServicesStatusExA)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::SC_ENUM_TYPE InfoLevel, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, uint8_t* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle, win32::Windows::Win32::Foundation::PSTR pszGroupName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EnumServicesStatusExW)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::SC_ENUM_TYPE InfoLevel, win32::Windows::Win32::System::Services::ENUM_SERVICE_TYPE dwServiceType, win32::Windows::Win32::System::Services::ENUM_SERVICE_STATE dwServiceState, uint8_t* lpServices, uint32_t cbBufSize, uint32_t* pcbBytesNeeded, uint32_t* lpServicesReturned, uint32_t* lpResumeHandle, win32::Windows::Win32::Foundation::PWSTR pszGroupName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetServiceKeyNameA)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpDisplayName, win32::Windows::Win32::Foundation::PSTR lpServiceName, uint32_t* lpcchBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetServiceKeyNameW)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpDisplayName, win32::Windows::Win32::Foundation::PWSTR lpServiceName, uint32_t* lpcchBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetServiceDisplayNameA)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::Foundation::PSTR lpDisplayName, uint32_t* lpcchBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetServiceDisplayNameW)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::Foundation::PWSTR lpDisplayName, uint32_t* lpcchBuffer) noexcept;
    void* (__stdcall *LockServiceDatabase)(win32::Windows::Win32::Security::SC_HANDLE hSCManager) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *NotifyBootConfigStatus)(win32::Windows::Win32::Foundation::BOOL BootAcceptable) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE (__stdcall *OpenSCManagerA)(win32::Windows::Win32::Foundation::PSTR lpMachineName, win32::Windows::Win32::Foundation::PSTR lpDatabaseName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE (__stdcall *OpenSCManagerW)(win32::Windows::Win32::Foundation::PWSTR lpMachineName, win32::Windows::Win32::Foundation::PWSTR lpDatabaseName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE (__stdcall *OpenServiceA)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PSTR lpServiceName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Security::SC_HANDLE (__stdcall *OpenServiceW)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::Foundation::PWSTR lpServiceName, uint32_t dwDesiredAccess) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceConfigA)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::QUERY_SERVICE_CONFIGA* lpServiceConfig, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceConfigW)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::QUERY_SERVICE_CONFIGW* lpServiceConfig, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceConfig2A)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, uint8_t* lpBuffer, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceConfig2W)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_CONFIG dwInfoLevel, uint8_t* lpBuffer, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceLockStatusA)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::QUERY_SERVICE_LOCK_STATUSA* lpLockStatus, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceLockStatusW)(win32::Windows::Win32::Security::SC_HANDLE hSCManager, win32::Windows::Win32::System::Services::QUERY_SERVICE_LOCK_STATUSW* lpLockStatus, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceObjectSecurity)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwSecurityInformation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* lpSecurityDescriptor, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceStatus)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_STATUS* lpServiceStatus) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceStatusEx)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SC_STATUS_TYPE InfoLevel, uint8_t* lpBuffer, uint32_t cbBufSize, uint32_t* pcbBytesNeeded) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE (__stdcall *RegisterServiceCtrlHandlerA)(win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION* lpHandlerProc) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE (__stdcall *RegisterServiceCtrlHandlerW)(win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION* lpHandlerProc) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE (__stdcall *RegisterServiceCtrlHandlerExA)(win32::Windows::Win32::Foundation::PSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION_EX* lpHandlerProc, void* lpContext) noexcept;
    win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE (__stdcall *RegisterServiceCtrlHandlerExW)(win32::Windows::Win32::Foundation::PWSTR lpServiceName, win32::Windows::Win32::System::Services::LPHANDLER_FUNCTION_EX* lpHandlerProc, void* lpContext) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetServiceObjectSecurity)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::Security::OBJECT_SECURITY_INFORMATION dwSecurityInformation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* lpSecurityDescriptor) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetServiceStatus)(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, win32::Windows::Win32::System::Services::SERVICE_STATUS* lpServiceStatus) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *StartServiceCtrlDispatcherA)(win32::Windows::Win32::System::Services::SERVICE_TABLE_ENTRYA* lpServiceStartTable) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *StartServiceCtrlDispatcherW)(win32::Windows::Win32::System::Services::SERVICE_TABLE_ENTRYW* lpServiceStartTable) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *StartServiceA)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwNumServiceArgs, win32::Windows::Win32::Foundation::PSTR* lpServiceArgVectors) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *StartServiceW)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwNumServiceArgs, win32::Windows::Win32::Foundation::PWSTR* lpServiceArgVectors) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *UnlockServiceDatabase)(void* ScLock) noexcept;
    uint32_t (__stdcall *NotifyServiceStatusChangeA)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_NOTIFY dwNotifyMask, win32::Windows::Win32::System::Services::SERVICE_NOTIFY_2A* pNotifyBuffer) noexcept;
    uint32_t (__stdcall *NotifyServiceStatusChangeW)(win32::Windows::Win32::Security::SC_HANDLE hService, win32::Windows::Win32::System::Services::SERVICE_NOTIFY dwNotifyMask, win32::Windows::Win32::System::Services::SERVICE_NOTIFY_2W* pNotifyBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ControlServiceExA)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwControl, uint32_t dwInfoLevel, void* pControlParams) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *ControlServiceExW)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwControl, uint32_t dwInfoLevel, void* pControlParams) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QueryServiceDynamicInformation)(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, uint32_t dwInfoLevel, void** ppDynamicInfo) noexcept;
    uint32_t (__stdcall *WaitServiceState)(win32::Windows::Win32::Security::SC_HANDLE hService, uint32_t dwNotify, uint32_t dwTimeout, win32::Windows::Win32::Foundation::HANDLE hCancelEvent) noexcept;
    uint32_t (__stdcall *GetServiceRegistryStateKey)(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE ServiceStatusHandle, win32::Windows::Win32::System::Services::SERVICE_REGISTRY_STATE_TYPE StateType, uint32_t AccessMask, win32::Windows::Win32::System::Registry::HKEY* ServiceStateKey) noexcept;
    uint32_t (__stdcall *GetServiceDirectory)(win32::Windows::Win32::System::Services::SERVICE_STATUS_HANDLE hServiceStatus, win32::Windows::Win32::System::Services::SERVICE_DIRECTORY_TYPE eDirectoryType, win32::Windows::Win32::Foundation::PWSTR lpPathBuffer, uint32_t cchPathBufferLength, uint32_t* lpcchRequiredBufferLength) noexcept;
    uint32_t (__stdcall *GetSharedServiceRegistryStateKey)(win32::Windows::Win32::Security::SC_HANDLE ServiceHandle, win32::Windows::Win32::System::Services::SERVICE_SHARED_REGISTRY_STATE_TYPE StateType, uint32_t AccessMask, win32::Windows::Win32::System::Registry::HKEY* ServiceStateKey) noexcept;
    uint32_t (__stdcall *GetSharedServiceDirectory)(win32::Windows::Win32::Security::SC_HANDLE ServiceHandle, win32::Windows::Win32::System::Services::SERVICE_SHARED_DIRECTORY_TYPE DirectoryType, win32::Windows::Win32::Foundation::PWSTR PathBuffer, uint32_t PathBufferLength, uint32_t* RequiredBufferLength) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
