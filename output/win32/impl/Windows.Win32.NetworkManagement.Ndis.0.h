// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkManagement_Ndis_0_H
#define WIN32_Windows_Win32_NetworkManagement_Ndis_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOL;
    struct HANDLE;
}
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::WiFi
{
    struct DOT11_ASSOCIATION_COMPLETION_PARAMETERS;
    struct DOT11_CIPHER_DEFAULT_KEY_VALUE;
    struct DOT11_CIPHER_KEY_MAPPING_KEY_VALUE;
    enum class DOT11_DIRECTION : int32_t;
    struct DOT11_PRIVACY_EXEMPTION;
    struct L2_NOTIFICATION_DATA;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security::ExtensibleAuthenticationProtocol
{
    struct EAP_ATTRIBUTES;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::RemoteDesktop
{
    struct WTSSESSION_NOTIFICATION;
}
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::Ndis
{
#pragma region enums
    enum class DOT11EXT_IHV_CONNECTION_PHASE : int32_t
    {
        connection_phase_any = 0,
        connection_phase_initial_connection = 1,
        connection_phase_post_l3_connection = 2,
    };
    enum class DOT11EXT_IHV_INDICATION_TYPE : int32_t
    {
        IndicationTypeNicSpecificNotification = 0,
        IndicationTypePmkidCandidateList = 1,
        IndicationTypeTkipMicFailure = 2,
        IndicationTypePhyStateChange = 3,
        IndicationTypeLinkQuality = 4,
    };
    enum class DOT11_MSONEX_RESULT : int32_t
    {
        DOT11_MSONEX_SUCCESS = 0,
        DOT11_MSONEX_FAILURE = 1,
        DOT11_MSONEX_IN_PROGRESS = 2,
    };
    enum class NDIS_802_11_AUTHENTICATION_MODE : int32_t
    {
        Ndis802_11AuthModeOpen = 0,
        Ndis802_11AuthModeShared = 1,
        Ndis802_11AuthModeAutoSwitch = 2,
        Ndis802_11AuthModeWPA = 3,
        Ndis802_11AuthModeWPAPSK = 4,
        Ndis802_11AuthModeWPANone = 5,
        Ndis802_11AuthModeWPA2 = 6,
        Ndis802_11AuthModeWPA2PSK = 7,
        Ndis802_11AuthModeWPA3 = 8,
        Ndis802_11AuthModeWPA3Ent192 = 8,
        Ndis802_11AuthModeWPA3SAE = 9,
        Ndis802_11AuthModeWPA3Ent = 10,
        Ndis802_11AuthModeMax = 11,
    };
    enum class NDIS_802_11_MEDIA_STREAM_MODE : int32_t
    {
        Ndis802_11MediaStreamOff = 0,
        Ndis802_11MediaStreamOn = 1,
    };
    enum class NDIS_802_11_NETWORK_INFRASTRUCTURE : int32_t
    {
        Ndis802_11IBSS = 0,
        Ndis802_11Infrastructure = 1,
        Ndis802_11AutoUnknown = 2,
        Ndis802_11InfrastructureMax = 3,
    };
    enum class NDIS_802_11_NETWORK_TYPE : int32_t
    {
        Ndis802_11FH = 0,
        Ndis802_11DS = 1,
        Ndis802_11OFDM5 = 2,
        Ndis802_11OFDM24 = 3,
        Ndis802_11Automode = 4,
        Ndis802_11NetworkTypeMax = 5,
    };
    enum class NDIS_802_11_POWER_MODE : int32_t
    {
        Ndis802_11PowerModeCAM = 0,
        Ndis802_11PowerModeMAX_PSP = 1,
        Ndis802_11PowerModeFast_PSP = 2,
        Ndis802_11PowerModeMax = 3,
    };
    enum class NDIS_802_11_PRIVACY_FILTER : int32_t
    {
        Ndis802_11PrivFilterAcceptAll = 0,
        Ndis802_11PrivFilter8021xWEP = 1,
    };
    enum class NDIS_802_11_RADIO_STATUS : int32_t
    {
        Ndis802_11RadioStatusOn = 0,
        Ndis802_11RadioStatusHardwareOff = 1,
        Ndis802_11RadioStatusSoftwareOff = 2,
        Ndis802_11RadioStatusHardwareSoftwareOff = 3,
        Ndis802_11RadioStatusMax = 4,
    };
    enum class NDIS_802_11_RELOAD_DEFAULTS : int32_t
    {
        Ndis802_11ReloadWEPKeys = 0,
    };
    enum class NDIS_802_11_STATUS_TYPE : int32_t
    {
        Ndis802_11StatusType_Authentication = 0,
        Ndis802_11StatusType_MediaStreamMode = 1,
        Ndis802_11StatusType_PMKID_CandidateList = 2,
        Ndis802_11StatusTypeMax = 3,
    };
    enum class NDIS_802_11_WEP_STATUS : int32_t
    {
        Ndis802_11WEPEnabled = 0,
        Ndis802_11Encryption1Enabled = 0,
        Ndis802_11WEPDisabled = 1,
        Ndis802_11EncryptionDisabled = 1,
        Ndis802_11WEPKeyAbsent = 2,
        Ndis802_11Encryption1KeyAbsent = 2,
        Ndis802_11WEPNotSupported = 3,
        Ndis802_11EncryptionNotSupported = 3,
        Ndis802_11Encryption2Enabled = 4,
        Ndis802_11Encryption2KeyAbsent = 5,
        Ndis802_11Encryption3Enabled = 6,
        Ndis802_11Encryption3KeyAbsent = 7,
    };
    enum class NDIS_802_5_RING_STATE : int32_t
    {
        NdisRingStateOpened = 1,
        NdisRingStateClosed = 2,
        NdisRingStateOpening = 3,
        NdisRingStateClosing = 4,
        NdisRingStateOpenFailure = 5,
        NdisRingStateRingFailure = 6,
    };
    enum class NDIS_DEVICE_POWER_STATE : int32_t
    {
        NdisDeviceStateUnspecified = 0,
        NdisDeviceStateD0 = 1,
        NdisDeviceStateD1 = 2,
        NdisDeviceStateD2 = 3,
        NdisDeviceStateD3 = 4,
        NdisDeviceStateMaximum = 5,
    };
    enum class NDIS_FDDI_ATTACHMENT_TYPE : int32_t
    {
        NdisFddiTypeIsolated = 1,
        NdisFddiTypeLocalA = 2,
        NdisFddiTypeLocalB = 3,
        NdisFddiTypeLocalAB = 4,
        NdisFddiTypeLocalS = 5,
        NdisFddiTypeWrapA = 6,
        NdisFddiTypeWrapB = 7,
        NdisFddiTypeWrapAB = 8,
        NdisFddiTypeWrapS = 9,
        NdisFddiTypeCWrapA = 10,
        NdisFddiTypeCWrapB = 11,
        NdisFddiTypeCWrapS = 12,
        NdisFddiTypeThrough = 13,
    };
    enum class NDIS_FDDI_LCONNECTION_STATE : int32_t
    {
        NdisFddiStateOff = 1,
        NdisFddiStateBreak = 2,
        NdisFddiStateTrace = 3,
        NdisFddiStateConnect = 4,
        NdisFddiStateNext = 5,
        NdisFddiStateSignal = 6,
        NdisFddiStateJoin = 7,
        NdisFddiStateVerify = 8,
        NdisFddiStateActive = 9,
        NdisFddiStateMaintenance = 10,
    };
    enum class NDIS_FDDI_RING_MGT_STATE : int32_t
    {
        NdisFddiRingIsolated = 1,
        NdisFddiRingNonOperational = 2,
        NdisFddiRingOperational = 3,
        NdisFddiRingDetect = 4,
        NdisFddiRingNonOperationalDup = 5,
        NdisFddiRingOperationalDup = 6,
        NdisFddiRingDirected = 7,
        NdisFddiRingTrace = 8,
    };
    enum class NDIS_HARDWARE_STATUS : int32_t
    {
        NdisHardwareStatusReady = 0,
        NdisHardwareStatusInitializing = 1,
        NdisHardwareStatusReset = 2,
        NdisHardwareStatusClosing = 3,
        NdisHardwareStatusNotReady = 4,
    };
    enum class NDIS_INTERRUPT_MODERATION : int32_t
    {
        NdisInterruptModerationUnknown = 0,
        NdisInterruptModerationNotSupported = 1,
        NdisInterruptModerationEnabled = 2,
        NdisInterruptModerationDisabled = 3,
    };
    enum class NDIS_MEDIA_STATE : int32_t
    {
        NdisMediaStateConnected = 0,
        NdisMediaStateDisconnected = 1,
    };
    enum class NDIS_MEDIUM : int32_t
    {
        NdisMedium802_3 = 0,
        NdisMedium802_5 = 1,
        NdisMediumFddi = 2,
        NdisMediumWan = 3,
        NdisMediumLocalTalk = 4,
        NdisMediumDix = 5,
        NdisMediumArcnetRaw = 6,
        NdisMediumArcnet878_2 = 7,
        NdisMediumAtm = 8,
        NdisMediumWirelessWan = 9,
        NdisMediumIrda = 10,
        NdisMediumBpc = 11,
        NdisMediumCoWan = 12,
        NdisMedium1394 = 13,
        NdisMediumInfiniBand = 14,
        NdisMediumTunnel = 15,
        NdisMediumNative802_11 = 16,
        NdisMediumLoopback = 17,
        NdisMediumWiMAX = 18,
        NdisMediumIP = 19,
        NdisMediumMax = 20,
    };
    enum class NDIS_NETWORK_CHANGE_TYPE : int32_t
    {
        NdisPossibleNetworkChange = 1,
        NdisDefinitelyNetworkChange = 2,
        NdisNetworkChangeFromMediaConnect = 3,
        NdisNetworkChangeMax = 4,
    };
    enum class NDIS_PHYSICAL_MEDIUM : int32_t
    {
        NdisPhysicalMediumUnspecified = 0,
        NdisPhysicalMediumWirelessLan = 1,
        NdisPhysicalMediumCableModem = 2,
        NdisPhysicalMediumPhoneLine = 3,
        NdisPhysicalMediumPowerLine = 4,
        NdisPhysicalMediumDSL = 5,
        NdisPhysicalMediumFibreChannel = 6,
        NdisPhysicalMedium1394 = 7,
        NdisPhysicalMediumWirelessWan = 8,
        NdisPhysicalMediumNative802_11 = 9,
        NdisPhysicalMediumBluetooth = 10,
        NdisPhysicalMediumInfiniband = 11,
        NdisPhysicalMediumWiMax = 12,
        NdisPhysicalMediumUWB = 13,
        NdisPhysicalMedium802_3 = 14,
        NdisPhysicalMedium802_5 = 15,
        NdisPhysicalMediumIrda = 16,
        NdisPhysicalMediumWiredWAN = 17,
        NdisPhysicalMediumWiredCoWan = 18,
        NdisPhysicalMediumOther = 19,
        NdisPhysicalMediumNative802_15_4 = 20,
        NdisPhysicalMediumMax = 21,
    };
    enum class NDIS_PORT_AUTHORIZATION_STATE : int32_t
    {
        NdisPortAuthorizationUnknown = 0,
        NdisPortAuthorized = 1,
        NdisPortUnauthorized = 2,
        NdisPortReauthorizing = 3,
    };
    enum class NDIS_PORT_CONTROL_STATE : int32_t
    {
        NdisPortControlStateUnknown = 0,
        NdisPortControlStateControlled = 1,
        NdisPortControlStateUncontrolled = 2,
    };
    enum class NDIS_PORT_TYPE : int32_t
    {
        NdisPortTypeUndefined = 0,
        NdisPortTypeBridge = 1,
        NdisPortTypeRasConnection = 2,
        NdisPortType8021xSupplicant = 3,
        NdisPortTypeMax = 4,
    };
    enum class NDIS_PROCESSOR_VENDOR : int32_t
    {
        NdisProcessorVendorUnknown = 0,
        NdisProcessorVendorGenuinIntel = 1,
        NdisProcessorVendorGenuineIntel = 1,
        NdisProcessorVendorAuthenticAMD = 2,
    };
    enum class NDIS_REQUEST_TYPE : int32_t
    {
        NdisRequestQueryInformation = 0,
        NdisRequestSetInformation = 1,
        NdisRequestQueryStatistics = 2,
        NdisRequestOpen = 3,
        NdisRequestClose = 4,
        NdisRequestSend = 5,
        NdisRequestTransferData = 6,
        NdisRequestReset = 7,
        NdisRequestGeneric1 = 8,
        NdisRequestGeneric2 = 9,
        NdisRequestGeneric3 = 10,
        NdisRequestGeneric4 = 11,
    };
    enum class NDIS_SUPPORTED_PAUSE_FUNCTIONS : int32_t
    {
        NdisPauseFunctionsUnsupported = 0,
        NdisPauseFunctionsSendOnly = 1,
        NdisPauseFunctionsReceiveOnly = 2,
        NdisPauseFunctionsSendAndReceive = 3,
        NdisPauseFunctionsUnknown = 4,
    };
    enum class NDIS_WAN_HEADER_FORMAT : int32_t
    {
        NdisWanHeaderNative = 0,
        NdisWanHeaderEthernet = 1,
    };
    enum class NDIS_WAN_MEDIUM_SUBTYPE : int32_t
    {
        NdisWanMediumHub = 0,
        NdisWanMediumX_25 = 1,
        NdisWanMediumIsdn = 2,
        NdisWanMediumSerial = 3,
        NdisWanMediumFrameRelay = 4,
        NdisWanMediumAtm = 5,
        NdisWanMediumSonet = 6,
        NdisWanMediumSW56K = 7,
        NdisWanMediumPPTP = 8,
        NdisWanMediumL2TP = 9,
        NdisWanMediumIrda = 10,
        NdisWanMediumParallel = 11,
        NdisWanMediumPppoe = 12,
        NdisWanMediumSSTP = 13,
        NdisWanMediumAgileVPN = 14,
        NdisWanMediumGre = 15,
        NdisWanMediumSubTypeMax = 16,
    };
    enum class NDIS_WAN_QUALITY : int32_t
    {
        NdisWanRaw = 0,
        NdisWanErrorControl = 1,
        NdisWanReliable = 2,
    };
    enum class NDK_RDMA_TECHNOLOGY : int32_t
    {
        NdkUndefined = 0,
        NdkiWarp = 1,
        NdkInfiniBand = 2,
        NdkRoCE = 3,
        NdkRoCEv2 = 4,
        NdkMaxTechnology = 5,
    };
    enum class OFFLOAD_CONF_ALGO : int32_t
    {
        OFFLOAD_IPSEC_CONF_NONE = 0,
        OFFLOAD_IPSEC_CONF_DES = 1,
        OFFLOAD_IPSEC_CONF_RESERVED = 2,
        OFFLOAD_IPSEC_CONF_3_DES = 3,
        OFFLOAD_IPSEC_CONF_MAX = 4,
    };
    enum class OFFLOAD_INTEGRITY_ALGO : int32_t
    {
        OFFLOAD_IPSEC_INTEGRITY_NONE = 0,
        OFFLOAD_IPSEC_INTEGRITY_MD5 = 1,
        OFFLOAD_IPSEC_INTEGRITY_SHA = 2,
        OFFLOAD_IPSEC_INTEGRITY_MAX = 3,
    };
    enum class OFFLOAD_OPERATION_E : int32_t
    {
        AUTHENTICATE = 1,
        ENCRYPT = 2,
    };
    enum class UDP_ENCAP_TYPE : int32_t
    {
        OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_IKE = 0,
        OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_OTHER = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct BSSID_INFO;
    struct DOT11EXT_APIS;
    struct DOT11EXT_IHV_CONNECTIVITY_PROFILE;
    struct DOT11EXT_IHV_DISCOVERY_PROFILE;
    struct DOT11EXT_IHV_DISCOVERY_PROFILE_LIST;
    struct DOT11EXT_IHV_HANDLERS;
    struct DOT11EXT_IHV_PARAMS;
    struct DOT11EXT_IHV_PROFILE_PARAMS;
    struct DOT11EXT_IHV_SECURITY_PROFILE;
    struct DOT11EXT_IHV_SSID_LIST;
    struct DOT11EXT_IHV_UI_REQUEST;
    struct DOT11EXT_VIRTUAL_STATION_APIS;
    struct DOT11EXT_VIRTUAL_STATION_AP_PROPERTY;
    struct DOT11_ADAPTER;
    struct DOT11_BSS_LIST;
    struct DOT11_EAP_RESULT;
    struct DOT11_IHV_VERSION_INFO;
    struct DOT11_MSONEX_RESULT_PARAMS;
    struct DOT11_MSSECURITY_SETTINGS;
    struct DOT11_PORT_STATE;
    struct DOT11_SECURITY_PACKET_HEADER;
    struct GEN_GET_NETCARD_TIME;
    struct GEN_GET_TIME_CAPS;
    struct NDIS_802_11_AI_REQFI;
    struct NDIS_802_11_AI_RESFI;
    struct NDIS_802_11_ASSOCIATION_INFORMATION;
    struct NDIS_802_11_AUTHENTICATION_ENCRYPTION;
    struct NDIS_802_11_AUTHENTICATION_EVENT;
    struct NDIS_802_11_AUTHENTICATION_REQUEST;
    struct NDIS_802_11_BSSID_LIST;
    struct NDIS_802_11_BSSID_LIST_EX;
    struct NDIS_802_11_CAPABILITY;
    struct NDIS_802_11_CONFIGURATION;
    struct NDIS_802_11_CONFIGURATION_FH;
    struct NDIS_802_11_FIXED_IEs;
    struct NDIS_802_11_KEY;
    struct NDIS_802_11_NETWORK_TYPE_LIST;
    struct NDIS_802_11_NON_BCAST_SSID_LIST;
    struct NDIS_802_11_PMKID;
    struct NDIS_802_11_PMKID_CANDIDATE_LIST;
    struct NDIS_802_11_REMOVE_KEY;
    struct NDIS_802_11_SSID;
    struct NDIS_802_11_STATISTICS;
    struct NDIS_802_11_STATUS_INDICATION;
    struct NDIS_802_11_TEST;
    struct NDIS_802_11_VARIABLE_IEs;
    struct NDIS_802_11_WEP;
    struct NDIS_CO_DEVICE_PROFILE;
    struct NDIS_CO_LINK_SPEED;
    struct NDIS_GUID;
    struct NDIS_HARDWARE_CROSSTIMESTAMP;
    struct NDIS_INTERRUPT_MODERATION_PARAMETERS;
    struct NDIS_IPSEC_OFFLOAD_V1;
    struct NDIS_IP_OPER_STATE;
    struct NDIS_IP_OPER_STATUS;
    struct NDIS_IP_OPER_STATUS_INFO;
    struct NDIS_IRDA_PACKET_INFO;
    struct NDIS_LINK_PARAMETERS;
    struct NDIS_LINK_SPEED;
    struct NDIS_LINK_STATE;
    struct NDIS_OBJECT_HEADER;
    struct NDIS_OFFLOAD;
    struct NDIS_OFFLOAD_PARAMETERS;
    struct NDIS_OPER_STATE;
    struct NDIS_PCI_DEVICE_CUSTOM_PROPERTIES;
    struct NDIS_PM_PACKET_PATTERN;
    struct NDIS_PM_WAKE_UP_CAPABILITIES;
    struct NDIS_PNP_CAPABILITIES;
    struct NDIS_PORT;
    struct NDIS_PORT_ARRAY;
    struct NDIS_PORT_AUTHENTICATION_PARAMETERS;
    struct NDIS_PORT_CHARACTERISTICS;
    struct NDIS_PORT_STATE;
    struct NDIS_RECEIVE_HASH_PARAMETERS;
    struct NDIS_RECEIVE_SCALE_CAPABILITIES;
    struct NDIS_RECEIVE_SCALE_PARAMETERS;
    struct NDIS_STATISTICS_INFO;
    struct NDIS_STATISTICS_VALUE;
    struct NDIS_STATISTICS_VALUE_EX;
    struct NDIS_TCP_CONNECTION_OFFLOAD;
    struct NDIS_TCP_IP_CHECKSUM_OFFLOAD;
    struct NDIS_TCP_LARGE_SEND_OFFLOAD_V1;
    struct NDIS_TCP_LARGE_SEND_OFFLOAD_V2;
    struct NDIS_TIMEOUT_DPC_REQUEST_CAPABILITIES;
    struct NDIS_TIMESTAMP_CAPABILITIES;
    struct NDIS_TIMESTAMP_CAPABILITY_FLAGS;
    struct NDIS_VAR_DATA_DESC;
    struct NDIS_WAN_PROTOCOL_CAPS;
    struct NDIS_WLAN_BSSID;
    struct NDIS_WLAN_BSSID_EX;
    struct NDIS_WMI_ENUM_ADAPTER;
    struct NDIS_WMI_EVENT_HEADER;
    struct NDIS_WMI_IPSEC_OFFLOAD_V1;
    struct NDIS_WMI_METHOD_HEADER;
    struct NDIS_WMI_OFFLOAD;
    struct NDIS_WMI_OUTPUT_INFO;
    struct NDIS_WMI_SET_HEADER;
    struct NDIS_WMI_TCP_CONNECTION_OFFLOAD;
    struct NDIS_WMI_TCP_IP_CHECKSUM_OFFLOAD;
    struct NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V1;
    struct NDIS_WMI_TCP_LARGE_SEND_OFFLOAD_V2;
    struct NDK_ADAPTER_INFO;
    struct NDK_VERSION;
    struct NETWORK_ADDRESS;
    struct NETWORK_ADDRESS_IP;
    struct NETWORK_ADDRESS_IP6;
    struct NETWORK_ADDRESS_IPX;
    struct NETWORK_ADDRESS_LIST;
    struct OFFLOAD_ALGO_INFO;
    struct OFFLOAD_IPSEC_ADD_SA;
    struct OFFLOAD_IPSEC_ADD_UDPESP_SA;
    struct OFFLOAD_IPSEC_DELETE_SA;
    struct OFFLOAD_IPSEC_DELETE_UDPESP_SA;
    struct OFFLOAD_IPSEC_UDPESP_ENCAPTYPE_ENTRY;
    struct OFFLOAD_SECURITY_ASSOCIATION;
    struct PMKID_CANDIDATE;
    struct TRANSPORT_HEADER_OFFSET;
    struct WDIAG_IHV_WLAN_ID;
#pragma endregion forward_declarations

#pragma region delegates
    using DOT11EXT_ALLOCATE_BUFFER = uint32_t __stdcall(uint32_t, void**);
    using DOT11EXT_FREE_BUFFER = void __stdcall(void*);
    using DOT11EXT_SET_PROFILE_CUSTOM_USER_DATA = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, uint32_t, uint32_t, void*);
    using DOT11EXT_GET_PROFILE_CUSTOM_USER_DATA = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, uint32_t, uint32_t*, void**);
    using DOT11EXT_SET_CURRENT_PROFILE = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_CONNECTIVITY_PROFILE*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_SECURITY_PROFILE*);
    using DOT11EXT_SEND_UI_REQUEST = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_UI_REQUEST*);
    using DOT11EXT_PRE_ASSOCIATE_COMPLETION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, uint32_t, uint32_t);
    using DOT11EXT_POST_ASSOCIATE_COMPLETION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, uint8_t**, uint32_t, uint32_t);
    using DOT11EXT_SEND_NOTIFICATION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::WiFi::L2_NOTIFICATION_DATA*);
    using DOT11EXT_SEND_PACKET = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t, void*, Windows::Win32::Foundation::HANDLE);
    using DOT11EXT_SET_ETHERTYPE_HANDLING = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t, uint32_t, Windows::Win32::NetworkManagement::WiFi::DOT11_PRIVACY_EXEMPTION*, uint32_t, uint16_t*);
    using DOT11EXT_SET_AUTH_ALGORITHM = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t);
    using DOT11EXT_SET_UNICAST_CIPHER_ALGORITHM = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t);
    using DOT11EXT_SET_MULTICAST_CIPHER_ALGORITHM = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t);
    using DOT11EXT_SET_DEFAULT_KEY = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::WiFi::DOT11_CIPHER_DEFAULT_KEY_VALUE*, Windows::Win32::NetworkManagement::WiFi::DOT11_DIRECTION);
    using DOT11EXT_SET_KEY_MAPPING_KEY = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::WiFi::DOT11_CIPHER_KEY_MAPPING_KEY_VALUE*);
    using DOT11EXT_SET_DEFAULT_KEY_ID = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t);
    using DOT11EXT_SET_EXCLUDE_UNENCRYPTED = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::BOOL);
    using DOT11EXT_NIC_SPECIFIC_EXTENSION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t, void*, uint32_t*, void*);
    using DOT11EXT_ONEX_START = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Security::ExtensibleAuthenticationProtocol::EAP_ATTRIBUTES*);
    using DOT11EXT_ONEX_STOP = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE);
    using DOT11EXT_PROCESS_ONEX_PACKET = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t, void*);
    using DOT11EXT_REQUEST_VIRTUAL_STATION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, void*);
    using DOT11EXT_RELEASE_VIRTUAL_STATION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, void*);
    using DOT11EXT_QUERY_VIRTUAL_STATION_PROPERTIES = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::BOOL*, ::win32::guid*, void*);
    using DOT11EXT_SET_VIRTUAL_STATION_AP_PROPERTIES = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, uint32_t, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_VIRTUAL_STATION_AP_PROPERTY*, void*);
    using DOT11EXTIHV_GET_VERSION_INFO = uint32_t __stdcall(Windows::Win32::NetworkManagement::Ndis::DOT11_IHV_VERSION_INFO*);
    using DOT11EXTIHV_INIT_SERVICE = uint32_t __stdcall(uint32_t, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_APIS*, void*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_HANDLERS*);
    using DOT11EXTIHV_INIT_VIRTUAL_STATION = uint32_t __stdcall(Windows::Win32::NetworkManagement::Ndis::DOT11EXT_VIRTUAL_STATION_APIS*, void*);
    using DOT11EXTIHV_DEINIT_SERVICE = void __stdcall();
    using DOT11EXTIHV_INIT_ADAPTER = uint32_t __stdcall(Windows::Win32::NetworkManagement::Ndis::DOT11_ADAPTER*, Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE*);
    using DOT11EXTIHV_DEINIT_ADAPTER = void __stdcall(Windows::Win32::Foundation::HANDLE);
    using DOT11EXTIHV_PERFORM_PRE_ASSOCIATE = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_PROFILE_PARAMS*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_CONNECTIVITY_PROFILE*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_SECURITY_PROFILE*, Windows::Win32::NetworkManagement::Ndis::DOT11_BSS_LIST*, uint32_t*);
    using DOT11EXTIHV_ADAPTER_RESET = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE);
    using DOT11EXTIHV_PERFORM_POST_ASSOCIATE = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11_PORT_STATE*, uint32_t, Windows::Win32::NetworkManagement::WiFi::DOT11_ASSOCIATION_COMPLETION_PARAMETERS*);
    using DOT11EXTIHV_STOP_POST_ASSOCIATE = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint8_t**, uint32_t);
    using DOT11EXTIHV_VALIDATE_PROFILE = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_PROFILE_PARAMS*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_CONNECTIVITY_PROFILE*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_SECURITY_PROFILE*, uint32_t*);
    using DOT11EXTIHV_PERFORM_CAPABILITY_MATCH = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_PROFILE_PARAMS*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_CONNECTIVITY_PROFILE*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_SECURITY_PROFILE*, Windows::Win32::NetworkManagement::Ndis::DOT11_BSS_LIST*, uint32_t*);
    using DOT11EXTIHV_CREATE_DISCOVERY_PROFILES = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::BOOL, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_PROFILE_PARAMS*, Windows::Win32::NetworkManagement::Ndis::DOT11_BSS_LIST*, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_DISCOVERY_PROFILE_LIST*, uint32_t*);
    using DOT11EXTIHV_PROCESS_SESSION_CHANGE = uint32_t __stdcall(uint32_t, Windows::Win32::System::RemoteDesktop::WTSSESSION_NOTIFICATION*);
    using DOT11EXTIHV_RECEIVE_INDICATION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_INDICATION_TYPE, uint32_t, void*);
    using DOT11EXTIHV_RECEIVE_PACKET = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t, void*);
    using DOT11EXTIHV_SEND_PACKET_COMPLETION = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE);
    using DOT11EXTIHV_IS_UI_REQUEST_PENDING = uint32_t __stdcall(::win32::guid, Windows::Win32::Foundation::BOOL*);
    using DOT11EXTIHV_PROCESS_UI_RESPONSE = uint32_t __stdcall(::win32::guid, uint32_t, void*);
    using DOT11EXTIHV_QUERY_UI_REQUEST = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_CONNECTION_PHASE, Windows::Win32::NetworkManagement::Ndis::DOT11EXT_IHV_UI_REQUEST**);
    using DOT11EXTIHV_ONEX_INDICATE_RESULT = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Ndis::DOT11_MSONEX_RESULT, Windows::Win32::NetworkManagement::Ndis::DOT11_MSONEX_RESULT_PARAMS*);
    using DOT11EXTIHV_CONTROL = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t, uint8_t*, uint32_t, uint8_t*, uint32_t*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif