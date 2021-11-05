// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_HostComputeSystem_H
#define WIN32_Windows_Win32_System_HostComputeSystem_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.HostComputeSystem.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::HostComputeSystem
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsEnumerateComputeSystems(win32::Windows::Win32::Foundation::PWSTR query, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsEnumerateComputeSystemsInNamespace(win32::Windows::Win32::Foundation::PWSTR idNamespace, win32::Windows::Win32::Foundation::PWSTR query, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION __stdcall ORBIT_IMPL_HcsCreateOperation(void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION_COMPLETION* callback) noexcept;
    void __stdcall ORBIT_IMPL_HcsCloseOperation(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    void* __stdcall ORBIT_IMPL_HcsGetOperationContext(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSetOperationContext(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, void* context) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM __stdcall ORBIT_IMPL_HcsGetComputeSystemFromOperation(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS __stdcall ORBIT_IMPL_HcsGetProcessFromOperation(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION_TYPE __stdcall ORBIT_IMPL_HcsGetOperationType(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    uint64_t __stdcall ORBIT_IMPL_HcsGetOperationId(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetOperationResult(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetOperationResultAndProcessInfo(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS_INFORMATION* processInformation, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetProcessorCompatibilityFromSavedState(win32::Windows::Win32::Foundation::PWSTR RuntimeFileName, win32::Windows::Win32::Foundation::PWSTR* ProcessorFeaturesString) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsWaitForOperationResult(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, uint32_t timeoutMs, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsWaitForOperationResultAndProcessInfo(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, uint32_t timeoutMs, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS_INFORMATION* processInformation, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSetOperationCallback(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION_COMPLETION* callback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsCancelOperation(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsCreateComputeSystem(win32::Windows::Win32::Foundation::PWSTR id, win32::Windows::Win32::Foundation::PWSTR configuration, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* securityDescriptor, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsCreateComputeSystemInNamespace(win32::Windows::Win32::Foundation::PWSTR idNamespace, win32::Windows::Win32::Foundation::PWSTR id, win32::Windows::Win32::Foundation::PWSTR configuration, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::System::HostComputeSystem::HCS_CREATE_OPTIONS* options, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsOpenComputeSystem(win32::Windows::Win32::Foundation::PWSTR id, uint32_t requestedAccess, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsOpenComputeSystemInNamespace(win32::Windows::Win32::Foundation::PWSTR idNamespace, win32::Windows::Win32::Foundation::PWSTR id, uint32_t requestedAccess, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    void __stdcall ORBIT_IMPL_HcsCloseComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsStartComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsShutDownComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsTerminateComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsCrashComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsPauseComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsResumeComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSaveComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetComputeSystemProperties(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR propertyQuery) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsModifyComputeSystem(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR configuration, win32::Windows::Win32::Foundation::HANDLE identity) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsWaitForComputeSystemExit(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, uint32_t timeoutMs, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSetComputeSystemCallback(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_OPTIONS callbackOptions, void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_CALLBACK* callback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsCreateProcess(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::Foundation::PWSTR processParameters, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* securityDescriptor, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS* process) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsOpenProcess(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, uint32_t processId, uint32_t requestedAccess, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS* process) noexcept;
    void __stdcall ORBIT_IMPL_HcsCloseProcess(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsTerminateProcess(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSignalProcess(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetProcessInfo(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetProcessProperties(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR propertyQuery) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsModifyProcess(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR settings) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSetProcessCallback(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_OPTIONS callbackOptions, void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_CALLBACK* callback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsWaitForProcessExit(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS computeSystem, uint32_t timeoutMs, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetServiceProperties(win32::Windows::Win32::Foundation::PWSTR propertyQuery, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsModifyServiceSettings(win32::Windows::Win32::Foundation::PWSTR settings, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSubmitWerReport(win32::Windows::Win32::Foundation::PWSTR settings) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsCreateEmptyGuestStateFile(win32::Windows::Win32::Foundation::PWSTR guestStateFilePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsCreateEmptyRuntimeStateFile(win32::Windows::Win32::Foundation::PWSTR runtimeStateFilePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGrantVmAccess(win32::Windows::Win32::Foundation::PWSTR vmId, win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsRevokeVmAccess(win32::Windows::Win32::Foundation::PWSTR vmId, win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGrantVmGroupAccess(win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsRevokeVmGroupAccess(win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsImportLayer(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR sourceFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsExportLayer(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR exportFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsExportLegacyWritableLayer(win32::Windows::Win32::Foundation::PWSTR writableLayerMountPath, win32::Windows::Win32::Foundation::PWSTR writableLayerFolderPath, win32::Windows::Win32::Foundation::PWSTR exportFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsDestroyLayer(win32::Windows::Win32::Foundation::PWSTR layerPath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSetupBaseOSLayer(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::HANDLE vhdHandle, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsInitializeWritableLayer(win32::Windows::Win32::Foundation::PWSTR writableLayerPath, win32::Windows::Win32::Foundation::PWSTR layerData, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsInitializeLegacyWritableLayer(win32::Windows::Win32::Foundation::PWSTR writableLayerMountPath, win32::Windows::Win32::Foundation::PWSTR writableLayerFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsAttachLayerStorageFilter(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR layerData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsDetachLayerStorageFilter(win32::Windows::Win32::Foundation::PWSTR layerPath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsFormatWritableLayerVhd(win32::Windows::Win32::Foundation::HANDLE vhdHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsGetLayerVhdMountPath(win32::Windows::Win32::Foundation::HANDLE vhdHandle, win32::Windows::Win32::Foundation::PWSTR* mountPath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcsSetupBaseOSVolume(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR volumePath, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsEnumerateComputeSystems)(win32::Windows::Win32::Foundation::PWSTR query, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsEnumerateComputeSystemsInNamespace)(win32::Windows::Win32::Foundation::PWSTR idNamespace, win32::Windows::Win32::Foundation::PWSTR query, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION (__stdcall *HcsCreateOperation)(void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION_COMPLETION* callback) noexcept;
    void (__stdcall *HcsCloseOperation)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    void* (__stdcall *HcsGetOperationContext)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSetOperationContext)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, void* context) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM (__stdcall *HcsGetComputeSystemFromOperation)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS (__stdcall *HcsGetProcessFromOperation)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION_TYPE (__stdcall *HcsGetOperationType)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    uint64_t (__stdcall *HcsGetOperationId)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetOperationResult)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetOperationResultAndProcessInfo)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS_INFORMATION* processInformation, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetProcessorCompatibilityFromSavedState)(win32::Windows::Win32::Foundation::PWSTR RuntimeFileName, win32::Windows::Win32::Foundation::PWSTR* ProcessorFeaturesString) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsWaitForOperationResult)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, uint32_t timeoutMs, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsWaitForOperationResultAndProcessInfo)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, uint32_t timeoutMs, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS_INFORMATION* processInformation, win32::Windows::Win32::Foundation::PWSTR* resultDocument) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSetOperationCallback)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION_COMPLETION* callback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsCancelOperation)(win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsCreateComputeSystem)(win32::Windows::Win32::Foundation::PWSTR id, win32::Windows::Win32::Foundation::PWSTR configuration, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* securityDescriptor, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsCreateComputeSystemInNamespace)(win32::Windows::Win32::Foundation::PWSTR idNamespace, win32::Windows::Win32::Foundation::PWSTR id, win32::Windows::Win32::Foundation::PWSTR configuration, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::System::HostComputeSystem::HCS_CREATE_OPTIONS* options, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsOpenComputeSystem)(win32::Windows::Win32::Foundation::PWSTR id, uint32_t requestedAccess, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsOpenComputeSystemInNamespace)(win32::Windows::Win32::Foundation::PWSTR idNamespace, win32::Windows::Win32::Foundation::PWSTR id, uint32_t requestedAccess, win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM* computeSystem) noexcept;
    void (__stdcall *HcsCloseComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsStartComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsShutDownComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsTerminateComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsCrashComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsPauseComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsResumeComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSaveComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetComputeSystemProperties)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR propertyQuery) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsModifyComputeSystem)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR configuration, win32::Windows::Win32::Foundation::HANDLE identity) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsWaitForComputeSystemExit)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, uint32_t timeoutMs, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSetComputeSystemCallback)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_OPTIONS callbackOptions, void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_CALLBACK* callback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsCreateProcess)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, win32::Windows::Win32::Foundation::PWSTR processParameters, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* securityDescriptor, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS* process) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsOpenProcess)(win32::Windows::Win32::System::HostComputeSystem::HCS_SYSTEM computeSystem, uint32_t processId, uint32_t requestedAccess, win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS* process) noexcept;
    void (__stdcall *HcsCloseProcess)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsTerminateProcess)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSignalProcess)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetProcessInfo)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetProcessProperties)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR propertyQuery) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsModifyProcess)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_OPERATION operation, win32::Windows::Win32::Foundation::PWSTR settings) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSetProcessCallback)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS process, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_OPTIONS callbackOptions, void* context, win32::Windows::Win32::System::HostComputeSystem::HCS_EVENT_CALLBACK* callback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsWaitForProcessExit)(win32::Windows::Win32::System::HostComputeSystem::HCS_PROCESS computeSystem, uint32_t timeoutMs, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetServiceProperties)(win32::Windows::Win32::Foundation::PWSTR propertyQuery, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsModifyServiceSettings)(win32::Windows::Win32::Foundation::PWSTR settings, win32::Windows::Win32::Foundation::PWSTR* result) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSubmitWerReport)(win32::Windows::Win32::Foundation::PWSTR settings) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsCreateEmptyGuestStateFile)(win32::Windows::Win32::Foundation::PWSTR guestStateFilePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsCreateEmptyRuntimeStateFile)(win32::Windows::Win32::Foundation::PWSTR runtimeStateFilePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGrantVmAccess)(win32::Windows::Win32::Foundation::PWSTR vmId, win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsRevokeVmAccess)(win32::Windows::Win32::Foundation::PWSTR vmId, win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGrantVmGroupAccess)(win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsRevokeVmGroupAccess)(win32::Windows::Win32::Foundation::PWSTR filePath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsImportLayer)(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR sourceFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsExportLayer)(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR exportFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsExportLegacyWritableLayer)(win32::Windows::Win32::Foundation::PWSTR writableLayerMountPath, win32::Windows::Win32::Foundation::PWSTR writableLayerFolderPath, win32::Windows::Win32::Foundation::PWSTR exportFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsDestroyLayer)(win32::Windows::Win32::Foundation::PWSTR layerPath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSetupBaseOSLayer)(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::HANDLE vhdHandle, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsInitializeWritableLayer)(win32::Windows::Win32::Foundation::PWSTR writableLayerPath, win32::Windows::Win32::Foundation::PWSTR layerData, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsInitializeLegacyWritableLayer)(win32::Windows::Win32::Foundation::PWSTR writableLayerMountPath, win32::Windows::Win32::Foundation::PWSTR writableLayerFolderPath, win32::Windows::Win32::Foundation::PWSTR layerData, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsAttachLayerStorageFilter)(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR layerData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsDetachLayerStorageFilter)(win32::Windows::Win32::Foundation::PWSTR layerPath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsFormatWritableLayerVhd)(win32::Windows::Win32::Foundation::HANDLE vhdHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsGetLayerVhdMountPath)(win32::Windows::Win32::Foundation::HANDLE vhdHandle, win32::Windows::Win32::Foundation::PWSTR* mountPath) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *HcsSetupBaseOSVolume)(win32::Windows::Win32::Foundation::PWSTR layerPath, win32::Windows::Win32::Foundation::PWSTR volumePath, win32::Windows::Win32::Foundation::PWSTR options) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
