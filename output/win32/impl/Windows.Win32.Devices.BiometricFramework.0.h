// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_BiometricFramework_0_H
#define WIN32_Windows_Win32_Devices_BiometricFramework_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOLEAN;
    struct HRESULT;
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::IO
{
    struct OVERLAPPED;
}
WIN32_EXPORT namespace win32::Windows::Win32::Devices::BiometricFramework
{
#pragma region enums
    enum class WINBIO_ANTI_SPOOF_POLICY_ACTION : int32_t
    {
        WINBIO_ANTI_SPOOF_DISABLE = 0,
        WINBIO_ANTI_SPOOF_ENABLE = 1,
        WINBIO_ANTI_SPOOF_REMOVE = 2,
    };
    enum class WINBIO_ASYNC_NOTIFICATION_METHOD : int32_t
    {
        WINBIO_ASYNC_NOTIFY_NONE = 0,
        WINBIO_ASYNC_NOTIFY_CALLBACK = 1,
        WINBIO_ASYNC_NOTIFY_MESSAGE = 2,
        WINBIO_ASYNC_NOTIFY_MAXIMUM_VALUE = 3,
    };
    enum class WINBIO_COMPONENT : uint32_t
    {
        WINBIO_COMPONENT_SENSOR = 0x1,
        WINBIO_COMPONENT_ENGINE = 0x2,
        WINBIO_COMPONENT_STORAGE = 0x3,
    };
    enum class WINBIO_CREDENTIAL_FORMAT : int32_t
    {
        WINBIO_PASSWORD_GENERIC = 1,
        WINBIO_PASSWORD_PACKED = 2,
        WINBIO_PASSWORD_PROTECTED = 3,
    };
    enum class WINBIO_CREDENTIAL_STATE : int32_t
    {
        WINBIO_CREDENTIAL_NOT_SET = 1,
        WINBIO_CREDENTIAL_SET = 2,
    };
    enum class WINBIO_CREDENTIAL_TYPE : int32_t
    {
        WINBIO_CREDENTIAL_PASSWORD = 1,
        WINBIO_CREDENTIAL_ALL = -1,
    };
    enum class WINBIO_POLICY_SOURCE : int32_t
    {
        WINBIO_POLICY_UNKNOWN = 0,
        WINBIO_POLICY_DEFAULT = 1,
        WINBIO_POLICY_LOCAL = 2,
        WINBIO_POLICY_ADMIN = 3,
    };
    enum class WINBIO_POOL : uint32_t
    {
        WINBIO_POOL_SYSTEM = 0x1,
        WINBIO_POOL_PRIVATE = 0x2,
    };
    enum class WINBIO_SETTING_SOURCE : uint32_t
    {
        WINBIO_SETTING_SOURCE_INVALID = 0x0,
        WINBIO_SETTING_SOURCE_DEFAULT = 0x1,
        WINBIO_SETTING_SOURCE_LOCAL = 0x3,
        WINBIO_SETTING_SOURCE_POLICY = 0x2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct WINBIO_ACCOUNT_POLICY;
    struct WINBIO_ADAPTER_INTERFACE_VERSION;
    struct WINBIO_ANTI_SPOOF_POLICY;
    struct WINBIO_ASYNC_RESULT;
    struct WINBIO_BDB_ANSI_381_HEADER;
    struct WINBIO_BDB_ANSI_381_RECORD;
    struct WINBIO_BIR;
    struct WINBIO_BIR_DATA;
    struct WINBIO_BIR_HEADER;
    struct WINBIO_BLANK_PAYLOAD;
    struct WINBIO_BSP_SCHEMA;
    struct WINBIO_CALIBRATION_INFO;
    struct WINBIO_CAPTURE_DATA;
    struct WINBIO_CAPTURE_PARAMETERS;
    struct WINBIO_DATA;
    struct WINBIO_DIAGNOSTICS;
    struct WINBIO_ENCRYPTED_CAPTURE_PARAMS;
    struct WINBIO_ENGINE_INTERFACE;
    struct WINBIO_EVENT;
    struct WINBIO_EXTENDED_ENGINE_INFO;
    struct WINBIO_EXTENDED_ENROLLMENT_PARAMETERS;
    struct WINBIO_EXTENDED_ENROLLMENT_STATUS;
    struct WINBIO_EXTENDED_SENSOR_INFO;
    struct WINBIO_EXTENDED_STORAGE_INFO;
    struct WINBIO_EXTENDED_UNIT_STATUS;
    struct WINBIO_FP_BU_STATE;
    struct WINBIO_FRAMEWORK_INTERFACE;
    struct WINBIO_GESTURE_METADATA;
    struct WINBIO_GET_INDICATOR;
    struct WINBIO_IDENTITY;
    struct WINBIO_NOTIFY_WAKE;
    struct WINBIO_PIPELINE;
    struct WINBIO_PRESENCE;
    union WINBIO_PRESENCE_PROPERTIES;
    struct WINBIO_PRIVATE_SENSOR_TYPE_INFO;
    struct WINBIO_PROTECTION_POLICY;
    struct WINBIO_REGISTERED_FORMAT;
    struct WINBIO_SECURE_BUFFER_HEADER_V1;
    struct WINBIO_SECURE_CONNECTION_DATA;
    struct WINBIO_SECURE_CONNECTION_PARAMS;
    struct WINBIO_SENSOR_ATTRIBUTES;
    struct WINBIO_SENSOR_INTERFACE;
    struct WINBIO_SET_INDICATOR;
    struct WINBIO_STORAGE_INTERFACE;
    struct WINBIO_STORAGE_RECORD;
    struct WINBIO_STORAGE_SCHEMA;
    struct WINBIO_SUPPORTED_ALGORITHMS;
    struct WINBIO_UNIT_SCHEMA;
    struct WINBIO_UPDATE_FIRMWARE;
    struct WINBIO_VERSION;
    struct _WINIBIO_ENGINE_CONTEXT;
    struct _WINIBIO_SENSOR_CONTEXT;
    struct _WINIBIO_STORAGE_CONTEXT;
#pragma endregion forward_declarations

#pragma region delegates
    using PWINBIO_ASYNC_COMPLETION_CALLBACK = void __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_ASYNC_RESULT*);
    using PWINBIO_VERIFY_CALLBACK = void __stdcall(void*, Windows::Win32::Foundation::HRESULT, uint32_t, Windows::Win32::Foundation::BOOLEAN, uint32_t);
    using PWINBIO_IDENTIFY_CALLBACK = void __stdcall(void*, Windows::Win32::Foundation::HRESULT, uint32_t, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t, uint32_t);
    using PWINBIO_LOCATE_SENSOR_CALLBACK = void __stdcall(void*, Windows::Win32::Foundation::HRESULT, uint32_t);
    using PWINBIO_ENROLL_CAPTURE_CALLBACK = void __stdcall(void*, Windows::Win32::Foundation::HRESULT, uint32_t);
    using PWINBIO_EVENT_CALLBACK = void __stdcall(void*, Windows::Win32::Foundation::HRESULT, Windows::Win32::Devices::BiometricFramework::WINBIO_EVENT*);
    using PWINBIO_CAPTURE_CALLBACK = void __stdcall(void*, Windows::Win32::Foundation::HRESULT, uint32_t, Windows::Win32::Devices::BiometricFramework::WINBIO_BIR*, size_t, uint32_t);
    using PIBIO_SENSOR_ATTACH_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_DETACH_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_CLEAR_CONTEXT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_QUERY_STATUS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t*);
    using PIBIO_SENSOR_RESET_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_SET_MODE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t);
    using PIBIO_SENSOR_SET_INDICATOR_STATUS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t);
    using PIBIO_SENSOR_GET_INDICATOR_STATUS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t*);
    using PIBIO_SENSOR_START_CAPTURE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t, Windows::Win32::System::IO::OVERLAPPED**);
    using PIBIO_SENSOR_FINISH_CAPTURE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t*);
    using PIBIO_SENSOR_EXPORT_SENSOR_DATA_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_BIR**, size_t*);
    using PIBIO_SENSOR_CANCEL_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_PUSH_DATA_TO_ENGINE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t, uint8_t, uint32_t*);
    using PIBIO_SENSOR_CONTROL_UNIT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t, uint8_t*, size_t, uint8_t*, size_t, size_t*, uint32_t*);
    using PIBIO_SENSOR_CONTROL_UNIT_PRIVILEGED_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t, uint8_t*, size_t, uint8_t*, size_t, size_t*, uint32_t*);
    using PIBIO_SENSOR_NOTIFY_POWER_CHANGE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t);
    using PIBIO_SENSOR_PIPELINE_INIT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_PIPELINE_CLEANUP_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_ACTIVATE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_DEACTIVATE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_SENSOR_QUERY_EXTENDED_INFO_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_EXTENDED_SENSOR_INFO*, size_t);
    using PIBIO_SENSOR_QUERY_CALIBRATION_FORMATS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid*, size_t, size_t*);
    using PIBIO_SENSOR_SET_CALIBRATION_FORMAT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid*);
    using PIBIO_SENSOR_ACCEPT_CALIBRATION_DATA_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t);
    using PIBIO_SENSOR_ASYNC_IMPORT_RAW_BUFFER_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t, uint8_t**, size_t*);
    using PIBIO_SENSOR_ASYNC_IMPORT_SECURE_BUFFER_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid, uint8_t*, size_t, uint8_t**, size_t*);
    using PIBIO_SENSOR_QUERY_PRIVATE_SENSOR_TYPE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t, size_t*);
    using PIBIO_SENSOR_CONNECT_SECURE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_SECURE_CONNECTION_PARAMS*, Windows::Win32::Devices::BiometricFramework::WINBIO_SECURE_CONNECTION_DATA**);
    using PIBIO_SENSOR_START_CAPTURE_EX_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t, uint8_t*, size_t, uint8_t, Windows::Win32::System::IO::OVERLAPPED**);
    using PIBIO_SENSOR_START_NOTIFY_WAKE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::System::IO::OVERLAPPED**);
    using PIBIO_SENSOR_FINISH_NOTIFY_WAKE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t*);
    using PWINBIO_QUERY_SENSOR_INTERFACE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_SENSOR_INTERFACE**);
    using PIBIO_ENGINE_ATTACH_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_DETACH_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_CLEAR_CONTEXT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_QUERY_PREFERRED_FORMAT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_REGISTERED_FORMAT*, ::win32::guid*);
    using PIBIO_ENGINE_QUERY_INDEX_VECTOR_SIZE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t*);
    using PIBIO_ENGINE_QUERY_HASH_ALGORITHMS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t*, size_t*, uint8_t**);
    using PIBIO_ENGINE_SET_HASH_ALGORITHM_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t, uint8_t*);
    using PIBIO_ENGINE_QUERY_SAMPLE_HINT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t*);
    using PIBIO_ENGINE_ACCEPT_SAMPLE_DATA_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_BIR*, size_t, uint8_t, uint32_t*);
    using PIBIO_ENGINE_EXPORT_ENGINE_DATA_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t, Windows::Win32::Devices::BiometricFramework::WINBIO_BIR**, size_t*);
    using PIBIO_ENGINE_VERIFY_FEATURE_SET_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t, Windows::Win32::Foundation::BOOLEAN*, uint8_t**, size_t*, uint8_t**, size_t*, uint32_t*);
    using PIBIO_ENGINE_IDENTIFY_FEATURE_SET_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t*, uint8_t**, size_t*, uint8_t**, size_t*, uint32_t*);
    using PIBIO_ENGINE_CREATE_ENROLLMENT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_UPDATE_ENROLLMENT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t*);
    using PIBIO_ENGINE_GET_ENROLLMENT_STATUS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t*);
    using PIBIO_ENGINE_GET_ENROLLMENT_HASH_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t**, size_t*);
    using PIBIO_ENGINE_CHECK_FOR_DUPLICATE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t*, Windows::Win32::Foundation::BOOLEAN*);
    using PIBIO_ENGINE_COMMIT_ENROLLMENT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t, uint8_t*, size_t);
    using PIBIO_ENGINE_DISCARD_ENROLLMENT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_CONTROL_UNIT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t, uint8_t*, size_t, uint8_t*, size_t, size_t*, uint32_t*);
    using PIBIO_ENGINE_CONTROL_UNIT_PRIVILEGED_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t, uint8_t*, size_t, uint8_t*, size_t, size_t*, uint32_t*);
    using PIBIO_ENGINE_NOTIFY_POWER_CHANGE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t);
    using PIBIO_ENGINE_RESERVED_1_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*);
    using PIBIO_ENGINE_PIPELINE_INIT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_PIPELINE_CLEANUP_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_ACTIVATE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_DEACTIVATE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_QUERY_EXTENDED_INFO_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_EXTENDED_ENGINE_INFO*, size_t);
    using PIBIO_ENGINE_IDENTIFY_ALL_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t*, Windows::Win32::Devices::BiometricFramework::WINBIO_PRESENCE**);
    using PIBIO_ENGINE_SET_ENROLLMENT_SELECTOR_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint64_t);
    using PIBIO_ENGINE_SET_ENROLLMENT_PARAMETERS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_EXTENDED_ENROLLMENT_PARAMETERS*);
    using PIBIO_ENGINE_QUERY_EXTENDED_ENROLLMENT_STATUS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_EXTENDED_ENROLLMENT_STATUS*, size_t);
    using PIBIO_ENGINE_REFRESH_CACHE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_ENGINE_SELECT_CALIBRATION_FORMAT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid*, size_t, ::win32::guid*, size_t*);
    using PIBIO_ENGINE_QUERY_CALIBRATION_DATA_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Foundation::BOOLEAN*, uint8_t*, size_t*, size_t);
    using PIBIO_ENGINE_SET_ACCOUNT_POLICY_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_ACCOUNT_POLICY*, size_t);
    using PIBIO_ENGINE_CREATE_KEY_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t, uint8_t*, size_t, size_t*);
    using PIBIO_ENGINE_IDENTIFY_FEATURE_SET_SECURE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t, uint8_t*, size_t, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t*, uint32_t*, uint8_t**, size_t*);
    using PIBIO_ENGINE_ACCEPT_PRIVATE_SENSOR_TYPE_INFO_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t);
    using PIBIO_ENGINE_CREATE_ENROLLMENT_AUTHENTICATED_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t**, size_t*);
    using PIBIO_ENGINE_IDENTIFY_FEATURE_SET_AUTHENTICATED_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t*, uint32_t*, uint8_t**, size_t*);
    using PWINBIO_QUERY_ENGINE_INTERFACE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_ENGINE_INTERFACE**);
    using PIBIO_STORAGE_ATTACH_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_DETACH_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_CLEAR_CONTEXT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_CREATE_DATABASE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid*, uint32_t, ::win32::guid*, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, size_t, size_t);
    using PIBIO_STORAGE_ERASE_DATABASE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid*, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR);
    using PIBIO_STORAGE_OPEN_DATABASE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid*, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR);
    using PIBIO_STORAGE_CLOSE_DATABASE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_GET_DATA_FORMAT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid*, Windows::Win32::Devices::BiometricFramework::WINBIO_VERSION*);
    using PIBIO_STORAGE_GET_DATABASE_SIZE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t*, size_t*);
    using PIBIO_STORAGE_ADD_RECORD_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_STORAGE_RECORD*);
    using PIBIO_STORAGE_DELETE_RECORD_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t);
    using PIBIO_STORAGE_QUERY_BY_SUBJECT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t);
    using PIBIO_STORAGE_QUERY_BY_CONTENT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t, uint32_t*, size_t);
    using PIBIO_STORAGE_GET_RECORD_COUNT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t*);
    using PIBIO_STORAGE_FIRST_RECORD_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_NEXT_RECORD_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_GET_CURRENT_RECORD_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_STORAGE_RECORD*);
    using PIBIO_STORAGE_CONTROL_UNIT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t, uint8_t*, size_t, uint8_t*, size_t, size_t*, uint32_t*);
    using PIBIO_STORAGE_CONTROL_UNIT_PRIVILEGED_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t, uint8_t*, size_t, uint8_t*, size_t, size_t*, uint32_t*);
    using PIBIO_STORAGE_NOTIFY_POWER_CHANGE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t);
    using PIBIO_STORAGE_PIPELINE_INIT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_PIPELINE_CLEANUP_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_ACTIVATE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_DEACTIVATE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_STORAGE_QUERY_EXTENDED_INFO_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_EXTENDED_STORAGE_INFO*, size_t);
    using PIBIO_STORAGE_NOTIFY_DATABASE_CHANGE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Foundation::BOOLEAN);
    using PIBIO_STORAGE_RESERVED_1_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint64_t*, uint64_t*);
    using PIBIO_STORAGE_RESERVED_2_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*);
    using PIBIO_STORAGE_UPDATE_RECORD_BEGIN_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t, Windows::Win32::Devices::BiometricFramework::WINBIO_STORAGE_RECORD*);
    using PIBIO_STORAGE_UPDATE_RECORD_COMMIT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_STORAGE_RECORD*);
    using PWINBIO_QUERY_STORAGE_INTERFACE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_STORAGE_INTERFACE**);
    using PIBIO_FRAMEWORK_SET_UNIT_STATUS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_EXTENDED_UNIT_STATUS*, size_t);
    using PIBIO_FRAMEWORK_VSM_CACHE_CLEAR_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_FRAMEWORK_VSM_CACHE_IMPORT_BEGIN_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t, size_t*);
    using PIBIO_FRAMEWORK_VSM_CACHE_IMPORT_NEXT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t);
    using PIBIO_FRAMEWORK_VSM_CACHE_IMPORT_END_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_FRAMEWORK_VSM_CACHE_EXPORT_BEGIN_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t*, size_t*);
    using PIBIO_FRAMEWORK_VSM_CACHE_EXPORT_NEXT_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t, size_t*);
    using PIBIO_FRAMEWORK_VSM_CACHE_EXPORT_END_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_FRAMEWORK_VSM_STORAGE_RESERVED_1_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t, size_t*);
    using PIBIO_FRAMEWORK_VSM_STORAGE_RESERVED_2_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t);
    using PIBIO_FRAMEWORK_VSM_STORAGE_RESERVED_3_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*);
    using PIBIO_FRAMEWORK_ALLOCATE_MEMORY_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, size_t, void**);
    using PIBIO_FRAMEWORK_FREE_MEMORY_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, void*);
    using PIBIO_FRAMEWORK_GET_PROPERTY_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint32_t, uint32_t, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, uint8_t, void**, size_t*);
    using PIBIO_FRAMEWORK_LOCK_AND_VALIDATE_SECURE_BUFFER_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid, void**, size_t*);
    using PIBIO_FRAMEWORK_RELEASE_SECURE_BUFFER_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, ::win32::guid);
    using PIBIO_FRAMEWORK_VSM_QUERY_AUTHORIZED_ENROLLMENTS_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY*, size_t*, Windows::Win32::Devices::BiometricFramework::WINBIO_IDENTITY**);
    using PIBIO_FRAMEWORK_VSM_DECRYPT_SAMPLE_FN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Devices::BiometricFramework::WINBIO_PIPELINE*, uint8_t*, size_t, uint8_t*, size_t, uint8_t*, size_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif