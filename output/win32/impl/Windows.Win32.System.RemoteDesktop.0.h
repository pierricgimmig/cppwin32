// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_RemoteDesktop_0_H
#define WIN32_Windows_Win32_System_RemoteDesktop_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOL;
    struct PSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::RemoteDesktop
{
#pragma region enums
    enum class AAAccountingDataType : int32_t
    {
        AA_MAIN_SESSION_CREATION = 0,
        AA_SUB_SESSION_CREATION = 1,
        AA_SUB_SESSION_CLOSED = 2,
        AA_MAIN_SESSION_CLOSED = 3,
    };
    enum class AAAuthSchemes : int32_t
    {
        AA_AUTH_MIN = 0,
        AA_AUTH_BASIC = 1,
        AA_AUTH_NTLM = 2,
        AA_AUTH_SC = 3,
        AA_AUTH_LOGGEDONCREDENTIALS = 4,
        AA_AUTH_NEGOTIATE = 5,
        AA_AUTH_ANY = 6,
        AA_AUTH_COOKIE = 7,
        AA_AUTH_DIGEST = 8,
        AA_AUTH_ORGID = 9,
        AA_AUTH_CONID = 10,
        AA_AUTH_SSPI_NTLM = 11,
        AA_AUTH_MAX = 12,
    };
    enum class AATrustClassID : int32_t
    {
        AA_UNTRUSTED = 0,
        AA_TRUSTEDUSER_UNTRUSTEDCLIENT = 1,
        AA_TRUSTEDUSER_TRUSTEDCLIENT = 2,
    };
    enum class AE_POSITION_FLAGS : int32_t
    {
        POSITION_INVALID = 0,
        POSITION_DISCONTINUOUS = 1,
        POSITION_CONTINUOUS = 2,
        POSITION_QPC_ERROR = 4,
    };
    enum class CLIENT_MESSAGE_TYPE : int32_t
    {
        CLIENT_MESSAGE_CONNECTION_INVALID = 0,
        CLIENT_MESSAGE_CONNECTION_STATUS = 1,
        CLIENT_MESSAGE_CONNECTION_ERROR = 2,
    };
    enum class CONNECTION_CHANGE_NOTIFICATION : int32_t
    {
        CONNECTION_REQUEST_INVALID = 0,
        CONNECTION_REQUEST_PENDING = 1,
        CONNECTION_REQUEST_FAILED = 2,
        CONNECTION_REQUEST_TIMEDOUT = 3,
        CONNECTION_REQUEST_SUCCEEDED = 4,
        CONNECTION_REQUEST_CANCELLED = 5,
        CONNECTION_REQUEST_LB_COMPLETED = 6,
        CONNECTION_REQUEST_QUERY_PL_COMPLETED = 7,
        CONNECTION_REQUEST_ORCH_COMPLETED = 8,
    };
    enum class KeyCombinationType : int32_t
    {
        KeyCombinationHome = 0,
        KeyCombinationLeft = 1,
        KeyCombinationUp = 2,
        KeyCombinationRight = 3,
        KeyCombinationDown = 4,
        KeyCombinationScroll = 5,
    };
    enum class PLUGIN_TYPE : int32_t
    {
        UNKNOWN_PLUGIN = 0,
        POLICY_PLUGIN = 1,
        RESOURCE_PLUGIN = 2,
        LOAD_BALANCING_PLUGIN = 4,
        PLACEMENT_PLUGIN = 8,
        ORCHESTRATION_PLUGIN = 16,
        PROVISIONING_PLUGIN = 32,
        TASK_PLUGIN = 64,
    };
    enum class PasswordEncodingType : int32_t
    {
        PasswordEncodingUTF8 = 0,
        PasswordEncodingUTF16LE = 1,
        PasswordEncodingUTF16BE = 2,
    };
    enum class PolicyAttributeType : int32_t
    {
        EnableAllRedirections = 0,
        DisableAllRedirections = 1,
        DriveRedirectionDisabled = 2,
        PrinterRedirectionDisabled = 3,
        PortRedirectionDisabled = 4,
        ClipboardRedirectionDisabled = 5,
        PnpRedirectionDisabled = 6,
        AllowOnlySDRServers = 7,
    };
    enum class RDV_TASK_STATUS : int32_t
    {
        RDV_TASK_STATUS_UNKNOWN = 0,
        RDV_TASK_STATUS_SEARCHING = 1,
        RDV_TASK_STATUS_DOWNLOADING = 2,
        RDV_TASK_STATUS_APPLYING = 3,
        RDV_TASK_STATUS_REBOOTING = 4,
        RDV_TASK_STATUS_REBOOTED = 5,
        RDV_TASK_STATUS_SUCCESS = 6,
        RDV_TASK_STATUS_FAILED = 7,
        RDV_TASK_STATUS_TIMEOUT = 8,
    };
    enum class RD_FARM_TYPE : int32_t
    {
        RD_FARM_RDSH = 0,
        RD_FARM_TEMP_VM = 1,
        RD_FARM_MANUAL_PERSONAL_VM = 2,
        RD_FARM_AUTO_PERSONAL_VM = 3,
        RD_FARM_MANUAL_PERSONAL_RDSH = 4,
        RD_FARM_AUTO_PERSONAL_RDSH = 5,
        RD_FARM_TYPE_UNKNOWN = -1,
    };
    enum class RemoteActionType : int32_t
    {
        RemoteActionCharms = 0,
        RemoteActionAppbar = 1,
        RemoteActionSnap = 2,
        RemoteActionStartScreen = 3,
        RemoteActionAppSwitch = 4,
    };
    enum class SESSION_TIMEOUT_ACTION_TYPE : int32_t
    {
        SESSION_TIMEOUT_ACTION_DISCONNECT = 0,
        SESSION_TIMEOUT_ACTION_SILENT_REAUTH = 1,
    };
    enum class SnapshotEncodingType : int32_t
    {
        SnapshotEncodingDataUri = 0,
    };
    enum class SnapshotFormatType : int32_t
    {
        SnapshotFormatPng = 0,
        SnapshotFormatJpeg = 1,
        SnapshotFormatBmp = 2,
    };
    enum class TARGET_CHANGE_TYPE : int32_t
    {
        TARGET_CHANGE_UNSPEC = 1,
        TARGET_EXTERNALIP_CHANGED = 2,
        TARGET_INTERNALIP_CHANGED = 4,
        TARGET_JOINED = 8,
        TARGET_REMOVED = 16,
        TARGET_STATE_CHANGED = 32,
        TARGET_IDLE = 64,
        TARGET_PENDING = 128,
        TARGET_INUSE = 256,
        TARGET_PATCH_STATE_CHANGED = 512,
        TARGET_FARM_MEMBERSHIP_CHANGED = 1024,
    };
    enum class TARGET_OWNER : int32_t
    {
        OWNER_UNKNOWN = 0,
        OWNER_MS_TS_PLUGIN = 1,
        OWNER_MS_VM_PLUGIN = 2,
    };
    enum class TARGET_PATCH_STATE : int32_t
    {
        TARGET_PATCH_UNKNOWN = 0,
        TARGET_PATCH_NOT_STARTED = 1,
        TARGET_PATCH_IN_PROGRESS = 2,
        TARGET_PATCH_COMPLETED = 3,
        TARGET_PATCH_FAILED = 4,
    };
    enum class TARGET_STATE : int32_t
    {
        TARGET_UNKNOWN = 1,
        TARGET_INITIALIZING = 2,
        TARGET_RUNNING = 3,
        TARGET_DOWN = 4,
        TARGET_HIBERNATED = 5,
        TARGET_CHECKED_OUT = 6,
        TARGET_STOPPED = 7,
        TARGET_INVALID = 8,
        TARGET_STARTING = 9,
        TARGET_STOPPING = 10,
        TARGET_MAXSTATE = 11,
    };
    enum class TARGET_TYPE : int32_t
    {
        UNKNOWN = 0,
        FARM = 1,
        NONFARM = 2,
    };
    enum class TSPUB_PLUGIN_PD_ASSIGNMENT_TYPE : int32_t
    {
        TSPUB_PLUGIN_PD_ASSIGNMENT_NEW = 0,
        TSPUB_PLUGIN_PD_ASSIGNMENT_EXISTING = 1,
    };
    enum class TSPUB_PLUGIN_PD_RESOLUTION_TYPE : int32_t
    {
        TSPUB_PLUGIN_PD_QUERY_OR_CREATE = 0,
        TSPUB_PLUGIN_PD_QUERY_EXISTING = 1,
    };
    enum class TSSB_NOTIFICATION_TYPE : int32_t
    {
        TSSB_NOTIFY_INVALID = 0,
        TSSB_NOTIFY_TARGET_CHANGE = 1,
        TSSB_NOTIFY_SESSION_CHANGE = 2,
        TSSB_NOTIFY_CONNECTION_REQUEST_CHANGE = 4,
    };
    enum class TSSD_AddrV46Type : int32_t
    {
        TSSD_ADDR_UNDEFINED = 0,
        TSSD_ADDR_IPv4 = 4,
        TSSD_ADDR_IPv6 = 6,
    };
    enum class TSSESSION_STATE : int32_t
    {
        STATE_INVALID = -1,
        STATE_ACTIVE = 0,
        STATE_CONNECTED = 1,
        STATE_CONNECTQUERY = 2,
        STATE_SHADOW = 3,
        STATE_DISCONNECTED = 4,
        STATE_IDLE = 5,
        STATE_LISTEN = 6,
        STATE_RESET = 7,
        STATE_DOWN = 8,
        STATE_INIT = 9,
        STATE_MAX = 10,
    };
    enum class TS_SB_SORT_BY : int32_t
    {
        TS_SB_SORT_BY_NONE = 0,
        TS_SB_SORT_BY_NAME = 1,
        TS_SB_SORT_BY_PROP = 2,
    };
    enum class VM_HOST_NOTIFY_STATUS : int32_t
    {
        VM_HOST_STATUS_INIT_PENDING = 0,
        VM_HOST_STATUS_INIT_IN_PROGRESS = 1,
        VM_HOST_STATUS_INIT_COMPLETE = 2,
        VM_HOST_STATUS_INIT_FAILED = 3,
    };
    enum class VM_NOTIFY_STATUS : int32_t
    {
        VM_NOTIFY_STATUS_PENDING = 0,
        VM_NOTIFY_STATUS_IN_PROGRESS = 1,
        VM_NOTIFY_STATUS_COMPLETE = 2,
        VM_NOTIFY_STATUS_FAILED = 3,
        VM_NOTIFY_STATUS_CANCELED = 4,
    };
    enum class WRDS_CONNECTION_SETTING_LEVEL : int32_t
    {
        WRDS_CONNECTION_SETTING_LEVEL_INVALID = 0,
        WRDS_CONNECTION_SETTING_LEVEL_1 = 1,
    };
    enum class WRDS_LISTENER_SETTING_LEVEL : int32_t
    {
        WRDS_LISTENER_SETTING_LEVEL_INVALID = 0,
        WRDS_LISTENER_SETTING_LEVEL_1 = 1,
    };
    enum class WRDS_SETTING_LEVEL : int32_t
    {
        WRDS_SETTING_LEVEL_INVALID = 0,
        WRDS_SETTING_LEVEL_1 = 1,
    };
    enum class WRDS_SETTING_STATUS : int32_t
    {
        WRDS_SETTING_STATUS_NOTAPPLICABLE = -1,
        WRDS_SETTING_STATUS_DISABLED = 0,
        WRDS_SETTING_STATUS_ENABLED = 1,
        WRDS_SETTING_STATUS_NOTCONFIGURED = 2,
    };
    enum class WRDS_SETTING_TYPE : int32_t
    {
        WRDS_SETTING_TYPE_INVALID = 0,
        WRDS_SETTING_TYPE_MACHINE = 1,
        WRDS_SETTING_TYPE_USER = 2,
        WRDS_SETTING_TYPE_SAM = 3,
    };
    enum class WRdsGraphicsChannelType : int32_t
    {
        WRdsGraphicsChannelType_GuaranteedDelivery = 0,
        WRdsGraphicsChannelType_BestEffortDelivery = 1,
    };
    enum class WTSSBX_ADDRESS_FAMILY : int32_t
    {
        WTSSBX_ADDRESS_FAMILY_AF_UNSPEC = 0,
        WTSSBX_ADDRESS_FAMILY_AF_INET = 1,
        WTSSBX_ADDRESS_FAMILY_AF_INET6 = 2,
        WTSSBX_ADDRESS_FAMILY_AF_IPX = 3,
        WTSSBX_ADDRESS_FAMILY_AF_NETBIOS = 4,
    };
    enum class WTSSBX_MACHINE_DRAIN : int32_t
    {
        WTSSBX_MACHINE_DRAIN_UNSPEC = 0,
        WTSSBX_MACHINE_DRAIN_OFF = 1,
        WTSSBX_MACHINE_DRAIN_ON = 2,
    };
    enum class WTSSBX_MACHINE_SESSION_MODE : int32_t
    {
        WTSSBX_MACHINE_SESSION_MODE_UNSPEC = 0,
        WTSSBX_MACHINE_SESSION_MODE_SINGLE = 1,
        WTSSBX_MACHINE_SESSION_MODE_MULTIPLE = 2,
    };
    enum class WTSSBX_MACHINE_STATE : int32_t
    {
        WTSSBX_MACHINE_STATE_UNSPEC = 0,
        WTSSBX_MACHINE_STATE_READY = 1,
        WTSSBX_MACHINE_STATE_SYNCHRONIZING = 2,
    };
    enum class WTSSBX_NOTIFICATION_TYPE : int32_t
    {
        WTSSBX_NOTIFICATION_REMOVED = 1,
        WTSSBX_NOTIFICATION_CHANGED = 2,
        WTSSBX_NOTIFICATION_ADDED = 4,
        WTSSBX_NOTIFICATION_RESYNC = 8,
    };
    enum class WTSSBX_SESSION_STATE : int32_t
    {
        WTSSBX_SESSION_STATE_UNSPEC = 0,
        WTSSBX_SESSION_STATE_ACTIVE = 1,
        WTSSBX_SESSION_STATE_DISCONNECTED = 2,
    };
    enum class WTS_CERT_TYPE : int32_t
    {
        WTS_CERT_TYPE_INVALID = 0,
        WTS_CERT_TYPE_PROPRIETORY = 1,
        WTS_CERT_TYPE_X509 = 2,
    };
    enum class WTS_CONFIG_CLASS : int32_t
    {
        WTSUserConfigInitialProgram = 0,
        WTSUserConfigWorkingDirectory = 1,
        WTSUserConfigfInheritInitialProgram = 2,
        WTSUserConfigfAllowLogonTerminalServer = 3,
        WTSUserConfigTimeoutSettingsConnections = 4,
        WTSUserConfigTimeoutSettingsDisconnections = 5,
        WTSUserConfigTimeoutSettingsIdle = 6,
        WTSUserConfigfDeviceClientDrives = 7,
        WTSUserConfigfDeviceClientPrinters = 8,
        WTSUserConfigfDeviceClientDefaultPrinter = 9,
        WTSUserConfigBrokenTimeoutSettings = 10,
        WTSUserConfigReconnectSettings = 11,
        WTSUserConfigModemCallbackSettings = 12,
        WTSUserConfigModemCallbackPhoneNumber = 13,
        WTSUserConfigShadowingSettings = 14,
        WTSUserConfigTerminalServerProfilePath = 15,
        WTSUserConfigTerminalServerHomeDir = 16,
        WTSUserConfigTerminalServerHomeDirDrive = 17,
        WTSUserConfigfTerminalServerRemoteHomeDir = 18,
        WTSUserConfigUser = 19,
    };
    enum class WTS_CONFIG_SOURCE : int32_t
    {
        WTSUserConfigSourceSAM = 0,
    };
    enum class WTS_CONNECTSTATE_CLASS : int32_t
    {
        WTSActive = 0,
        WTSConnected = 1,
        WTSConnectQuery = 2,
        WTSShadow = 3,
        WTSDisconnected = 4,
        WTSIdle = 5,
        WTSListen = 6,
        WTSReset = 7,
        WTSDown = 8,
        WTSInit = 9,
    };
    enum class WTS_INFO_CLASS : int32_t
    {
        WTSInitialProgram = 0,
        WTSApplicationName = 1,
        WTSWorkingDirectory = 2,
        WTSOEMId = 3,
        WTSSessionId = 4,
        WTSUserName = 5,
        WTSWinStationName = 6,
        WTSDomainName = 7,
        WTSConnectState = 8,
        WTSClientBuildNumber = 9,
        WTSClientName = 10,
        WTSClientDirectory = 11,
        WTSClientProductId = 12,
        WTSClientHardwareId = 13,
        WTSClientAddress = 14,
        WTSClientDisplay = 15,
        WTSClientProtocolType = 16,
        WTSIdleTime = 17,
        WTSLogonTime = 18,
        WTSIncomingBytes = 19,
        WTSOutgoingBytes = 20,
        WTSIncomingFrames = 21,
        WTSOutgoingFrames = 22,
        WTSClientInfo = 23,
        WTSSessionInfo = 24,
        WTSSessionInfoEx = 25,
        WTSConfigInfo = 26,
        WTSValidationInfo = 27,
        WTSSessionAddressV4 = 28,
        WTSIsRemoteSession = 29,
    };
    enum class WTS_LOGON_ERROR_REDIRECTOR_RESPONSE : int32_t
    {
        WTS_LOGON_ERR_INVALID = 0,
        WTS_LOGON_ERR_NOT_HANDLED = 1,
        WTS_LOGON_ERR_HANDLED_SHOW = 2,
        WTS_LOGON_ERR_HANDLED_DONT_SHOW = 3,
        WTS_LOGON_ERR_HANDLED_DONT_SHOW_START_OVER = 4,
    };
    enum class WTS_RCM_DRAIN_STATE : int32_t
    {
        WTS_DRAIN_STATE_NONE = 0,
        WTS_DRAIN_IN_DRAIN = 1,
        WTS_DRAIN_NOT_IN_DRAIN = 2,
    };
    enum class WTS_RCM_SERVICE_STATE : int32_t
    {
        WTS_SERVICE_NONE = 0,
        WTS_SERVICE_START = 1,
        WTS_SERVICE_STOP = 2,
    };
    enum class WTS_TYPE_CLASS : int32_t
    {
        WTSTypeProcessInfoLevel0 = 0,
        WTSTypeProcessInfoLevel1 = 1,
        WTSTypeSessionInfoLevel1 = 2,
    };
    enum class WTS_VIRTUAL_CLASS : int32_t
    {
        WTSVirtualClientData = 0,
        WTSVirtualFileHandle = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct AAAccountingData;
    struct ADsTSUserEx;
    struct AE_CURRENT_POSITION;
    struct BITMAP_RENDERER_STATISTICS;
    struct CHANNEL_DEF;
    struct CHANNEL_ENTRY_POINTS;
    struct CHANNEL_PDU_HEADER;
    struct CLIENT_DISPLAY;
    struct HwtsVirtualChannelHandle;
    struct RFX_GFX_MONITOR_INFO;
    struct RFX_GFX_MSG_CLIENT_DESKTOP_INFO_REQUEST;
    struct RFX_GFX_MSG_CLIENT_DESKTOP_INFO_RESPONSE;
    struct RFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_CONFIRM;
    struct RFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_NOTIFY;
    struct RFX_GFX_MSG_DESKTOP_INPUT_RESET;
    struct RFX_GFX_MSG_DESKTOP_RESEND_REQUEST;
    struct RFX_GFX_MSG_DISCONNECT_NOTIFY;
    struct RFX_GFX_MSG_HEADER;
    struct RFX_GFX_MSG_RDP_DATA;
    struct RFX_GFX_RECT;
    struct TSSD_ConnectionPoint;
    struct TSUserExInterfaces;
    struct VM_NOTIFY_ENTRY;
    struct VM_NOTIFY_INFO;
    struct VM_PATCH_INFO;
    union WRDS_CONNECTION_SETTING;
    struct WRDS_CONNECTION_SETTINGS;
    struct WRDS_CONNECTION_SETTINGS_1;
    struct WRDS_DYNAMIC_TIME_ZONE_INFORMATION;
    union WRDS_LISTENER_SETTING;
    struct WRDS_LISTENER_SETTINGS;
    struct WRDS_LISTENER_SETTINGS_1;
    union WRDS_SETTING;
    struct WRDS_SETTINGS;
    struct WRDS_SETTINGS_1;
    struct WTSCLIENTA;
    struct WTSCLIENTW;
    struct WTSCONFIGINFOA;
    struct WTSCONFIGINFOW;
    struct WTSINFOA;
    struct WTSINFOEXA;
    struct WTSINFOEXW;
    struct WTSINFOEX_LEVEL1_A;
    struct WTSINFOEX_LEVEL1_W;
    union WTSINFOEX_LEVEL_A;
    union WTSINFOEX_LEVEL_W;
    struct WTSINFOW;
    struct WTSLISTENERCONFIGA;
    struct WTSLISTENERCONFIGW;
    struct WTSSBX_IP_ADDRESS;
    struct WTSSBX_MACHINE_CONNECT_INFO;
    struct WTSSBX_MACHINE_INFO;
    struct WTSSBX_SESSION_INFO;
    struct WTSSESSION_NOTIFICATION;
    struct WTSUSERCONFIGA;
    struct WTSUSERCONFIGW;
    struct WTS_CACHE_STATS;
    union WTS_CACHE_STATS_UN;
    struct WTS_CLIENT_ADDRESS;
    struct WTS_CLIENT_DATA;
    struct WTS_CLIENT_DISPLAY;
    struct WTS_DISPLAY_IOCTL;
    struct WTS_LICENSE_CAPABILITIES;
    struct WTS_POLICY_DATA;
    struct WTS_PROCESS_INFOA;
    struct WTS_PROCESS_INFOW;
    struct WTS_PROCESS_INFO_EXA;
    struct WTS_PROCESS_INFO_EXW;
    struct WTS_PROPERTY_VALUE;
    struct WTS_PROTOCOL_CACHE;
    struct WTS_PROTOCOL_COUNTERS;
    struct WTS_PROTOCOL_STATUS;
    struct WTS_SERVER_INFOA;
    struct WTS_SERVER_INFOW;
    struct WTS_SERVICE_STATE;
    struct WTS_SESSION_ADDRESS;
    struct WTS_SESSION_ID;
    struct WTS_SESSION_INFOA;
    struct WTS_SESSION_INFOW;
    struct WTS_SESSION_INFO_1A;
    struct WTS_SESSION_INFO_1W;
    struct WTS_SMALL_RECT;
    struct WTS_SOCKADDR;
    struct WTS_SYSTEMTIME;
    struct WTS_TIME_ZONE_INFORMATION;
    struct WTS_USER_CREDENTIAL;
    struct WTS_USER_DATA;
    struct WTS_VALIDATION_INFORMATIONA;
    struct WTS_VALIDATION_INFORMATIONW;
    struct Workspace;
    struct _WTS_PRODUCT_INFOA;
    struct _WTS_PRODUCT_INFOW;
    struct pluginResource;
    struct pluginResource2;
    struct pluginResource2FileAssociation;
    struct IADsTSUserEx;
    struct IAudioDeviceEndpoint;
    struct IAudioEndpoint;
    struct IAudioEndpointControl;
    struct IAudioEndpointRT;
    struct IAudioInputEndpointRT;
    struct IAudioOutputEndpointRT;
    struct IRemoteDesktopClient;
    struct IRemoteDesktopClientActions;
    struct IRemoteDesktopClientSettings;
    struct IRemoteDesktopClientTouchPointer;
    struct IRemoteSystemAdditionalInfoProvider;
    struct ITSGAccountingEngine;
    struct ITSGAuthenticateUserSink;
    struct ITSGAuthenticationEngine;
    struct ITSGAuthorizeConnectionSink;
    struct ITSGAuthorizeResourceSink;
    struct ITSGPolicyEngine;
    struct ITsSbBaseNotifySink;
    struct ITsSbClientConnection;
    struct ITsSbClientConnectionPropertySet;
    struct ITsSbEnvironment;
    struct ITsSbEnvironmentPropertySet;
    struct ITsSbFilterPluginStore;
    struct ITsSbGenericNotifySink;
    struct ITsSbGlobalStore;
    struct ITsSbLoadBalanceResult;
    struct ITsSbLoadBalancing;
    struct ITsSbLoadBalancingNotifySink;
    struct ITsSbOrchestration;
    struct ITsSbOrchestrationNotifySink;
    struct ITsSbPlacement;
    struct ITsSbPlacementNotifySink;
    struct ITsSbPlugin;
    struct ITsSbPluginNotifySink;
    struct ITsSbPluginPropertySet;
    struct ITsSbPropertySet;
    struct ITsSbProvider;
    struct ITsSbProvisioning;
    struct ITsSbProvisioningPluginNotifySink;
    struct ITsSbResourceNotification;
    struct ITsSbResourceNotificationEx;
    struct ITsSbResourcePlugin;
    struct ITsSbResourcePluginStore;
    struct ITsSbServiceNotification;
    struct ITsSbSession;
    struct ITsSbTarget;
    struct ITsSbTargetPropertySet;
    struct ITsSbTaskInfo;
    struct ITsSbTaskPlugin;
    struct ITsSbTaskPluginNotifySink;
    struct IWRdsEnhancedFastReconnectArbitrator;
    struct IWRdsGraphicsChannel;
    struct IWRdsGraphicsChannelEvents;
    struct IWRdsGraphicsChannelManager;
    struct IWRdsProtocolConnection;
    struct IWRdsProtocolConnectionCallback;
    struct IWRdsProtocolConnectionSettings;
    struct IWRdsProtocolLicenseConnection;
    struct IWRdsProtocolListener;
    struct IWRdsProtocolListenerCallback;
    struct IWRdsProtocolLogonErrorRedirector;
    struct IWRdsProtocolManager;
    struct IWRdsProtocolSettings;
    struct IWRdsProtocolShadowCallback;
    struct IWRdsProtocolShadowConnection;
    struct IWRdsWddmIddProps;
    struct IWTSBitmapRenderService;
    struct IWTSBitmapRenderer;
    struct IWTSBitmapRendererCallback;
    struct IWTSListener;
    struct IWTSListenerCallback;
    struct IWTSPlugin;
    struct IWTSPluginServiceProvider;
    struct IWTSProtocolConnection;
    struct IWTSProtocolConnectionCallback;
    struct IWTSProtocolLicenseConnection;
    struct IWTSProtocolListener;
    struct IWTSProtocolListenerCallback;
    struct IWTSProtocolLogonErrorRedirector;
    struct IWTSProtocolManager;
    struct IWTSProtocolShadowCallback;
    struct IWTSProtocolShadowConnection;
    struct IWTSSBPlugin;
    struct IWTSVirtualChannel;
    struct IWTSVirtualChannelCallback;
    struct IWTSVirtualChannelManager;
    struct IWorkspace;
    struct IWorkspace2;
    struct IWorkspace3;
    struct IWorkspaceClientExt;
    struct IWorkspaceRegistration;
    struct IWorkspaceRegistration2;
    struct IWorkspaceReportMessage;
    struct IWorkspaceResTypeRegistry;
    struct IWorkspaceScriptable;
    struct IWorkspaceScriptable2;
    struct IWorkspaceScriptable3;
    struct ItsPubPlugin;
    struct ItsPubPlugin2;
    struct _ITSWkspEvents;
#pragma endregion forward_declarations

#pragma region delegates
    using PCHANNEL_INIT_EVENT_FN = void __stdcall(void*, uint32_t, void*, uint32_t);
    using PCHANNEL_OPEN_EVENT_FN = void __stdcall(uint32_t, uint32_t, void*, uint32_t, uint32_t, uint32_t);
    using PVIRTUALCHANNELINIT = uint32_t __stdcall(void**, Windows::Win32::System::RemoteDesktop::CHANNEL_DEF*, int32_t, uint32_t, Windows::Win32::System::RemoteDesktop::PCHANNEL_INIT_EVENT_FN*);
    using PVIRTUALCHANNELOPEN = uint32_t __stdcall(void*, uint32_t*, Windows::Win32::Foundation::PSTR, Windows::Win32::System::RemoteDesktop::PCHANNEL_OPEN_EVENT_FN*);
    using PVIRTUALCHANNELCLOSE = uint32_t __stdcall(uint32_t);
    using PVIRTUALCHANNELWRITE = uint32_t __stdcall(uint32_t, void*, uint32_t, void*);
    using PVIRTUALCHANNELENTRY = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::System::RemoteDesktop::CHANNEL_ENTRY_POINTS*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
