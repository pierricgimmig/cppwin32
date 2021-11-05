// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_PortableDevices_0_H
#define WIN32_Windows_Win32_Devices_PortableDevices_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Devices::PortableDevices
{
#pragma region enums
    enum class DELETE_OBJECT_OPTIONS : int32_t
    {
        PORTABLE_DEVICE_DELETE_NO_RECURSION = 0,
        PORTABLE_DEVICE_DELETE_WITH_RECURSION = 1,
    };
    enum class DEVICE_RADIO_STATE : int32_t
    {
        DRS_RADIO_ON = 0,
        DRS_SW_RADIO_OFF = 1,
        DRS_HW_RADIO_OFF = 2,
        DRS_SW_HW_RADIO_OFF = 3,
        DRS_HW_RADIO_ON_UNCONTROLLABLE = 4,
        DRS_RADIO_INVALID = 5,
        DRS_HW_RADIO_OFF_UNCONTROLLABLE = 6,
        DRS_RADIO_MAX = 6,
    };
    enum class SMS_MESSAGE_TYPES : int32_t
    {
        SMS_TEXT_MESSAGE = 0,
        SMS_BINARY_MESSAGE = 1,
    };
    enum class SYSTEM_RADIO_STATE : int32_t
    {
        SRS_RADIO_ENABLED = 0,
        SRS_RADIO_DISABLED = 1,
    };
    enum class WPD_BITRATE_TYPES : int32_t
    {
        WPD_BITRATE_TYPE_UNUSED = 0,
        WPD_BITRATE_TYPE_DISCRETE = 1,
        WPD_BITRATE_TYPE_VARIABLE = 2,
        WPD_BITRATE_TYPE_FREE = 3,
    };
    enum class WPD_CAPTURE_MODES : int32_t
    {
        WPD_CAPTURE_MODE_UNDEFINED = 0,
        WPD_CAPTURE_MODE_NORMAL = 1,
        WPD_CAPTURE_MODE_BURST = 2,
        WPD_CAPTURE_MODE_TIMELAPSE = 3,
    };
    enum class WPD_COLOR_CORRECTED_STATUS_VALUES : int32_t
    {
        WPD_COLOR_CORRECTED_STATUS_NOT_CORRECTED = 0,
        WPD_COLOR_CORRECTED_STATUS_CORRECTED = 1,
        WPD_COLOR_CORRECTED_STATUS_SHOULD_NOT_BE_CORRECTED = 2,
    };
    enum class WPD_COMMAND_ACCESS_TYPES : int32_t
    {
        WPD_COMMAND_ACCESS_READ = 1,
        WPD_COMMAND_ACCESS_READWRITE = 3,
        WPD_COMMAND_ACCESS_FROM_PROPERTY_WITH_STGM_ACCESS = 4,
        WPD_COMMAND_ACCESS_FROM_PROPERTY_WITH_FILE_ACCESS = 8,
        WPD_COMMAND_ACCESS_FROM_ATTRIBUTE_WITH_METHOD_ACCESS = 16,
    };
    enum class WPD_CROPPED_STATUS_VALUES : int32_t
    {
        WPD_CROPPED_STATUS_NOT_CROPPED = 0,
        WPD_CROPPED_STATUS_CROPPED = 1,
        WPD_CROPPED_STATUS_SHOULD_NOT_BE_CROPPED = 2,
    };
    enum class WPD_DEVICE_TRANSPORTS : int32_t
    {
        WPD_DEVICE_TRANSPORT_UNSPECIFIED = 0,
        WPD_DEVICE_TRANSPORT_USB = 1,
        WPD_DEVICE_TRANSPORT_IP = 2,
        WPD_DEVICE_TRANSPORT_BLUETOOTH = 3,
    };
    enum class WPD_DEVICE_TYPES : int32_t
    {
        WPD_DEVICE_TYPE_GENERIC = 0,
        WPD_DEVICE_TYPE_CAMERA = 1,
        WPD_DEVICE_TYPE_MEDIA_PLAYER = 2,
        WPD_DEVICE_TYPE_PHONE = 3,
        WPD_DEVICE_TYPE_VIDEO = 4,
        WPD_DEVICE_TYPE_PERSONAL_INFORMATION_MANAGER = 5,
        WPD_DEVICE_TYPE_AUDIO_RECORDER = 6,
    };
    enum class WPD_EFFECT_MODES : int32_t
    {
        WPD_EFFECT_MODE_UNDEFINED = 0,
        WPD_EFFECT_MODE_COLOR = 1,
        WPD_EFFECT_MODE_BLACK_AND_WHITE = 2,
        WPD_EFFECT_MODE_SEPIA = 3,
    };
    enum class WPD_EXPOSURE_METERING_MODES : int32_t
    {
        WPD_EXPOSURE_METERING_MODE_UNDEFINED = 0,
        WPD_EXPOSURE_METERING_MODE_AVERAGE = 1,
        WPD_EXPOSURE_METERING_MODE_CENTER_WEIGHTED_AVERAGE = 2,
        WPD_EXPOSURE_METERING_MODE_MULTI_SPOT = 3,
        WPD_EXPOSURE_METERING_MODE_CENTER_SPOT = 4,
    };
    enum class WPD_EXPOSURE_PROGRAM_MODES : int32_t
    {
        WPD_EXPOSURE_PROGRAM_MODE_UNDEFINED = 0,
        WPD_EXPOSURE_PROGRAM_MODE_MANUAL = 1,
        WPD_EXPOSURE_PROGRAM_MODE_AUTO = 2,
        WPD_EXPOSURE_PROGRAM_MODE_APERTURE_PRIORITY = 3,
        WPD_EXPOSURE_PROGRAM_MODE_SHUTTER_PRIORITY = 4,
        WPD_EXPOSURE_PROGRAM_MODE_CREATIVE = 5,
        WPD_EXPOSURE_PROGRAM_MODE_ACTION = 6,
        WPD_EXPOSURE_PROGRAM_MODE_PORTRAIT = 7,
    };
    enum class WPD_FLASH_MODES : int32_t
    {
        WPD_FLASH_MODE_UNDEFINED = 0,
        WPD_FLASH_MODE_AUTO = 1,
        WPD_FLASH_MODE_OFF = 2,
        WPD_FLASH_MODE_FILL = 3,
        WPD_FLASH_MODE_RED_EYE_AUTO = 4,
        WPD_FLASH_MODE_RED_EYE_FILL = 5,
        WPD_FLASH_MODE_EXTERNAL_SYNC = 6,
    };
    enum class WPD_FOCUS_METERING_MODES : int32_t
    {
        WPD_FOCUS_METERING_MODE_UNDEFINED = 0,
        WPD_FOCUS_METERING_MODE_CENTER_SPOT = 1,
        WPD_FOCUS_METERING_MODE_MULTI_SPOT = 2,
    };
    enum class WPD_FOCUS_MODES : int32_t
    {
        WPD_FOCUS_UNDEFINED = 0,
        WPD_FOCUS_MANUAL = 1,
        WPD_FOCUS_AUTOMATIC = 2,
        WPD_FOCUS_AUTOMATIC_MACRO = 3,
    };
    enum class WPD_META_GENRES : int32_t
    {
        WPD_META_GENRE_UNUSED = 0,
        WPD_META_GENRE_GENERIC_MUSIC_AUDIO_FILE = 1,
        WPD_META_GENRE_GENERIC_NON_MUSIC_AUDIO_FILE = 17,
        WPD_META_GENRE_SPOKEN_WORD_AUDIO_BOOK_FILES = 18,
        WPD_META_GENRE_SPOKEN_WORD_FILES_NON_AUDIO_BOOK = 19,
        WPD_META_GENRE_SPOKEN_WORD_NEWS = 20,
        WPD_META_GENRE_SPOKEN_WORD_TALK_SHOWS = 21,
        WPD_META_GENRE_GENERIC_VIDEO_FILE = 33,
        WPD_META_GENRE_NEWS_VIDEO_FILE = 34,
        WPD_META_GENRE_MUSIC_VIDEO_FILE = 35,
        WPD_META_GENRE_HOME_VIDEO_FILE = 36,
        WPD_META_GENRE_FEATURE_FILM_VIDEO_FILE = 37,
        WPD_META_GENRE_TELEVISION_VIDEO_FILE = 38,
        WPD_META_GENRE_TRAINING_EDUCATIONAL_VIDEO_FILE = 39,
        WPD_META_GENRE_PHOTO_MONTAGE_VIDEO_FILE = 40,
        WPD_META_GENRE_GENERIC_NON_AUDIO_NON_VIDEO = 48,
        WPD_META_GENRE_AUDIO_PODCAST = 64,
        WPD_META_GENRE_VIDEO_PODCAST = 65,
        WPD_META_GENRE_MIXED_PODCAST = 66,
    };
    enum class WPD_OPERATION_STATES : int32_t
    {
        WPD_OPERATION_STATE_UNSPECIFIED = 0,
        WPD_OPERATION_STATE_STARTED = 1,
        WPD_OPERATION_STATE_RUNNING = 2,
        WPD_OPERATION_STATE_PAUSED = 3,
        WPD_OPERATION_STATE_CANCELLED = 4,
        WPD_OPERATION_STATE_FINISHED = 5,
        WPD_OPERATION_STATE_ABORTED = 6,
    };
    enum class WPD_PARAMETER_USAGE_TYPES : int32_t
    {
        WPD_PARAMETER_USAGE_RETURN = 0,
        WPD_PARAMETER_USAGE_IN = 1,
        WPD_PARAMETER_USAGE_OUT = 2,
        WPD_PARAMETER_USAGE_INOUT = 3,
    };
    enum class WPD_POWER_SOURCES : int32_t
    {
        WPD_POWER_SOURCE_BATTERY = 0,
        WPD_POWER_SOURCE_EXTERNAL = 1,
    };
    enum class WPD_RENDERING_INFORMATION_PROFILE_ENTRY_TYPES : int32_t
    {
        WPD_RENDERING_INFORMATION_PROFILE_ENTRY_TYPE_OBJECT = 0,
        WPD_RENDERING_INFORMATION_PROFILE_ENTRY_TYPE_RESOURCE = 1,
    };
    enum class WPD_SECTION_DATA_UNITS_VALUES : int32_t
    {
        WPD_SECTION_DATA_UNITS_BYTES = 0,
        WPD_SECTION_DATA_UNITS_MILLISECONDS = 1,
    };
    enum class WPD_SERVICE_INHERITANCE_TYPES : int32_t
    {
        WPD_SERVICE_INHERITANCE_IMPLEMENTATION = 0,
    };
    enum class WPD_SMS_ENCODING_TYPES : int32_t
    {
        SMS_ENCODING_7_BIT = 0,
        SMS_ENCODING_8_BIT = 1,
        SMS_ENCODING_UTF_16 = 2,
    };
    enum class WPD_STORAGE_ACCESS_CAPABILITY_VALUES : int32_t
    {
        WPD_STORAGE_ACCESS_CAPABILITY_READWRITE = 0,
        WPD_STORAGE_ACCESS_CAPABILITY_READ_ONLY_WITHOUT_OBJECT_DELETION = 1,
        WPD_STORAGE_ACCESS_CAPABILITY_READ_ONLY_WITH_OBJECT_DELETION = 2,
    };
    enum class WPD_STORAGE_TYPE_VALUES : int32_t
    {
        WPD_STORAGE_TYPE_UNDEFINED = 0,
        WPD_STORAGE_TYPE_FIXED_ROM = 1,
        WPD_STORAGE_TYPE_REMOVABLE_ROM = 2,
        WPD_STORAGE_TYPE_FIXED_RAM = 3,
        WPD_STORAGE_TYPE_REMOVABLE_RAM = 4,
    };
    enum class WPD_STREAM_UNITS : int32_t
    {
        WPD_STREAM_UNITS_BYTES = 0,
        WPD_STREAM_UNITS_FRAMES = 1,
        WPD_STREAM_UNITS_ROWS = 2,
        WPD_STREAM_UNITS_MILLISECONDS = 4,
        WPD_STREAM_UNITS_MICROSECONDS = 8,
    };
    enum class WPD_VIDEO_SCAN_TYPES : int32_t
    {
        WPD_VIDEO_SCAN_TYPE_UNUSED = 0,
        WPD_VIDEO_SCAN_TYPE_PROGRESSIVE = 1,
        WPD_VIDEO_SCAN_TYPE_FIELD_INTERLEAVED_UPPER_FIRST = 2,
        WPD_VIDEO_SCAN_TYPE_FIELD_INTERLEAVED_LOWER_FIRST = 3,
        WPD_VIDEO_SCAN_TYPE_FIELD_SINGLE_UPPER_FIRST = 4,
        WPD_VIDEO_SCAN_TYPE_FIELD_SINGLE_LOWER_FIRST = 5,
        WPD_VIDEO_SCAN_TYPE_MIXED_INTERLACE = 6,
        WPD_VIDEO_SCAN_TYPE_MIXED_INTERLACE_AND_PROGRESSIVE = 7,
    };
    enum class WPD_WHITE_BALANCE_SETTINGS : int32_t
    {
        WPD_WHITE_BALANCE_UNDEFINED = 0,
        WPD_WHITE_BALANCE_MANUAL = 1,
        WPD_WHITE_BALANCE_AUTOMATIC = 2,
        WPD_WHITE_BALANCE_ONE_PUSH_AUTOMATIC = 3,
        WPD_WHITE_BALANCE_DAYLIGHT = 4,
        WPD_WHITE_BALANCE_FLORESCENT = 5,
        WPD_WHITE_BALANCE_TUNGSTEN = 6,
        WPD_WHITE_BALANCE_FLASH = 7,
    };
    enum class WpdAttributeForm : int32_t
    {
        WPD_PROPERTY_ATTRIBUTE_FORM_UNSPECIFIED = 0,
        WPD_PROPERTY_ATTRIBUTE_FORM_RANGE = 1,
        WPD_PROPERTY_ATTRIBUTE_FORM_ENUMERATION = 2,
        WPD_PROPERTY_ATTRIBUTE_FORM_REGULAR_EXPRESSION = 3,
        WPD_PROPERTY_ATTRIBUTE_FORM_OBJECT_IDENTIFIER = 4,
    };
    enum class WpdParameterAttributeForm : int32_t
    {
        WPD_PARAMETER_ATTRIBUTE_FORM_UNSPECIFIED = 0,
        WPD_PARAMETER_ATTRIBUTE_FORM_RANGE = 1,
        WPD_PARAMETER_ATTRIBUTE_FORM_ENUMERATION = 2,
        WPD_PARAMETER_ATTRIBUTE_FORM_REGULAR_EXPRESSION = 3,
        WPD_PARAMETER_ATTRIBUTE_FORM_OBJECT_IDENTIFIER = 4,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct EnumBthMtpConnectors;
    struct PortableDevice;
    struct PortableDeviceDispatchFactory;
    struct PortableDeviceFTM;
    struct PortableDeviceKeyCollection;
    struct PortableDeviceManager;
    struct PortableDevicePropVariantCollection;
    struct PortableDeviceService;
    struct PortableDeviceServiceFTM;
    struct PortableDeviceValues;
    struct PortableDeviceValuesCollection;
    struct PortableDeviceWebControl;
    struct WPD_COMMAND_ACCESS_LOOKUP_ENTRY;
    struct WpdSerializer;
    struct IConnectionRequestCallback;
    struct IEnumPortableDeviceConnectors;
    struct IEnumPortableDeviceObjectIDs;
    struct IMediaRadioManager;
    struct IMediaRadioManagerNotifySink;
    struct IPortableDevice;
    struct IPortableDeviceCapabilities;
    struct IPortableDeviceConnector;
    struct IPortableDeviceContent;
    struct IPortableDeviceContent2;
    struct IPortableDeviceDataStream;
    struct IPortableDeviceDispatchFactory;
    struct IPortableDeviceEventCallback;
    struct IPortableDeviceKeyCollection;
    struct IPortableDeviceManager;
    struct IPortableDevicePropVariantCollection;
    struct IPortableDeviceProperties;
    struct IPortableDevicePropertiesBulk;
    struct IPortableDevicePropertiesBulkCallback;
    struct IPortableDeviceResources;
    struct IPortableDeviceService;
    struct IPortableDeviceServiceActivation;
    struct IPortableDeviceServiceCapabilities;
    struct IPortableDeviceServiceManager;
    struct IPortableDeviceServiceMethodCallback;
    struct IPortableDeviceServiceMethods;
    struct IPortableDeviceServiceOpenCallback;
    struct IPortableDeviceUnitsStream;
    struct IPortableDeviceValues;
    struct IPortableDeviceValuesCollection;
    struct IPortableDeviceWebControl;
    struct IRadioInstance;
    struct IRadioInstanceCollection;
    struct IWpdSerializer;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
