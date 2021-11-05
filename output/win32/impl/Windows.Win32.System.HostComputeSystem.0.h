// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_HostComputeSystem_0_H
#define WIN32_Windows_Win32_System_HostComputeSystem_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct HRESULT;
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::HostComputeSystem
{
#pragma region enums
    enum class HCS_CREATE_OPTIONS : int32_t
    {
        HcsCreateOptions_1 = 65536,
    };
    enum class HCS_EVENT_OPTIONS : uint32_t
    {
        HcsEventOptionNone = 0x0,
        HcsEventOptionEnableOperationCallbacks = 0x1,
    };
    enum class HCS_EVENT_TYPE : int32_t
    {
        HcsEventInvalid = 0,
        HcsEventSystemExited = 1,
        HcsEventSystemCrashInitiated = 2,
        HcsEventSystemCrashReport = 3,
        HcsEventSystemRdpEnhancedModeStateChanged = 4,
        HcsEventSystemSiloJobCreated = 5,
        HcsEventSystemGuestConnectionClosed = 6,
        HcsEventProcessExited = 65536,
        HcsEventOperationCallback = 16777216,
        HcsEventServiceDisconnect = 33554432,
    };
    enum class HCS_NOTIFICATIONS : int32_t
    {
        HcsNotificationInvalid = 0,
        HcsNotificationSystemExited = 1,
        HcsNotificationSystemCreateCompleted = 2,
        HcsNotificationSystemStartCompleted = 3,
        HcsNotificationSystemPauseCompleted = 4,
        HcsNotificationSystemResumeCompleted = 5,
        HcsNotificationSystemCrashReport = 6,
        HcsNotificationSystemSiloJobCreated = 7,
        HcsNotificationSystemSaveCompleted = 8,
        HcsNotificationSystemRdpEnhancedModeStateChanged = 9,
        HcsNotificationSystemShutdownFailed = 10,
        HcsNotificationSystemShutdownCompleted = 10,
        HcsNotificationSystemGetPropertiesCompleted = 11,
        HcsNotificationSystemModifyCompleted = 12,
        HcsNotificationSystemCrashInitiated = 13,
        HcsNotificationSystemGuestConnectionClosed = 14,
        HcsNotificationSystemOperationCompletion = 15,
        HcsNotificationSystemPassThru = 16,
        HcsNotificationProcessExited = 65536,
        HcsNotificationServiceDisconnect = 16777216,
        HcsNotificationFlagsReserved = -268435456,
    };
    enum class HCS_NOTIFICATION_FLAGS : int32_t
    {
        HcsNotificationFlagSuccess = 0,
        HcsNotificationFlagFailure = -2147483648,
    };
    enum class HCS_OPERATION_TYPE : int32_t
    {
        HcsOperationTypeNone = -1,
        HcsOperationTypeEnumerate = 0,
        HcsOperationTypeCreate = 1,
        HcsOperationTypeStart = 2,
        HcsOperationTypeShutdown = 3,
        HcsOperationTypePause = 4,
        HcsOperationTypeResume = 5,
        HcsOperationTypeSave = 6,
        HcsOperationTypeTerminate = 7,
        HcsOperationTypeModify = 8,
        HcsOperationTypeGetProperties = 9,
        HcsOperationTypeCreateProcess = 10,
        HcsOperationTypeSignalProcess = 11,
        HcsOperationTypeGetProcessInfo = 12,
        HcsOperationTypeGetProcessProperties = 13,
        HcsOperationTypeModifyProcess = 14,
        HcsOperationTypeCrash = 15,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct HCS_CREATE_OPTIONS_1;
    struct HCS_EVENT;
    struct HCS_OPERATION;
    struct HCS_PROCESS;
    struct HCS_PROCESS_INFORMATION;
    struct HCS_SYSTEM;
#pragma endregion forward_declarations

#pragma region delegates
    using HCS_OPERATION_COMPLETION = void __stdcall(Windows::Win32::System::HostComputeSystem::HCS_OPERATION, void*);
    using HCS_EVENT_CALLBACK = void __stdcall(Windows::Win32::System::HostComputeSystem::HCS_EVENT*, void*);
    using HCS_NOTIFICATION_CALLBACK = void __stdcall(uint32_t, void*, Windows::Win32::Foundation::HRESULT, Windows::Win32::Foundation::PWSTR);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
