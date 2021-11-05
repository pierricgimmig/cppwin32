// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkManagement_Rras_0_H
#define WIN32_Windows_Win32_NetworkManagement_Rras_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOL;
    struct HANDLE;
    struct HINSTANCE;
    struct HWND;
    struct PSTR;
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Networking::WinSock
{
    struct IN6_ADDR;
}
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::Rras
{
#pragma region enums
    enum class IKEV2_ID_PAYLOAD_TYPE : int32_t
    {
        IKEV2_ID_PAYLOAD_TYPE_INVALID = 0,
        IKEV2_ID_PAYLOAD_TYPE_IPV4_ADDR = 1,
        IKEV2_ID_PAYLOAD_TYPE_FQDN = 2,
        IKEV2_ID_PAYLOAD_TYPE_RFC822_ADDR = 3,
        IKEV2_ID_PAYLOAD_TYPE_RESERVED1 = 4,
        IKEV2_ID_PAYLOAD_TYPE_ID_IPV6_ADDR = 5,
        IKEV2_ID_PAYLOAD_TYPE_RESERVED2 = 6,
        IKEV2_ID_PAYLOAD_TYPE_RESERVED3 = 7,
        IKEV2_ID_PAYLOAD_TYPE_RESERVED4 = 8,
        IKEV2_ID_PAYLOAD_TYPE_DER_ASN1_DN = 9,
        IKEV2_ID_PAYLOAD_TYPE_DER_ASN1_GN = 10,
        IKEV2_ID_PAYLOAD_TYPE_KEY_ID = 11,
        IKEV2_ID_PAYLOAD_TYPE_MAX = 12,
    };
    enum class MGM_ENUM_TYPES : int32_t
    {
        ANY_SOURCE = 0,
        ALL_SOURCES = 1,
    };
    enum class MPRAPI_OBJECT_TYPE : int32_t
    {
        MPRAPI_OBJECT_TYPE_RAS_CONNECTION_OBJECT = 1,
        MPRAPI_OBJECT_TYPE_MPR_SERVER_OBJECT = 2,
        MPRAPI_OBJECT_TYPE_MPR_SERVER_SET_CONFIG_OBJECT = 3,
        MPRAPI_OBJECT_TYPE_AUTH_VALIDATION_OBJECT = 4,
        MPRAPI_OBJECT_TYPE_UPDATE_CONNECTION_OBJECT = 5,
        MPRAPI_OBJECT_TYPE_IF_CUSTOM_CONFIG_OBJECT = 6,
    };
    enum class MPR_ET : uint32_t
    {
        MPR_ET_None = 0x0,
        MPR_ET_Require = 0x1,
        MPR_ET_RequireMax = 0x2,
        MPR_ET_Optional = 0x3,
    };
    enum class MPR_INTERFACE_DIAL_MODE : uint32_t
    {
        MPRDM_DialFirst = 0x0,
        MPRDM_DialAll = 0x1,
        MPRDM_DialAsNeeded = 0x2,
    };
    enum class MPR_VPN_TS_TYPE : int32_t
    {
        MPR_VPN_TS_IPv4_ADDR_RANGE = 7,
        MPR_VPN_TS_IPv6_ADDR_RANGE = 8,
    };
    enum class MPR_VS : uint32_t
    {
        MPR_VS_Default = 0x0,
        MPR_VS_PptpOnly = 0x1,
        MPR_VS_PptpFirst = 0x2,
        MPR_VS_L2tpOnly = 0x3,
        MPR_VS_L2tpFirst = 0x4,
    };
    enum class PPP_LCP : uint32_t
    {
        PPP_LCP_PAP = 0xc023,
        PPP_LCP_CHAP = 0xc223,
        PPP_LCP_EAP = 0xc227,
        PPP_LCP_SPAP = 0xc027,
    };
    enum class PPP_LCP_INFO_AUTH_DATA : uint32_t
    {
        PPP_LCP_CHAP_MD5 = 0x5,
        PPP_LCP_CHAP_MS = 0x80,
        PPP_LCP_CHAP_MSV2 = 0x81,
    };
    enum class RASAPIVERSION : int32_t
    {
        RASAPIVERSION_500 = 1,
        RASAPIVERSION_501 = 2,
        RASAPIVERSION_600 = 3,
        RASAPIVERSION_601 = 4,
    };
    enum class RASCONNSTATE : int32_t
    {
        RASCS_OpenPort = 0,
        RASCS_PortOpened = 1,
        RASCS_ConnectDevice = 2,
        RASCS_DeviceConnected = 3,
        RASCS_AllDevicesConnected = 4,
        RASCS_Authenticate = 5,
        RASCS_AuthNotify = 6,
        RASCS_AuthRetry = 7,
        RASCS_AuthCallback = 8,
        RASCS_AuthChangePassword = 9,
        RASCS_AuthProject = 10,
        RASCS_AuthLinkSpeed = 11,
        RASCS_AuthAck = 12,
        RASCS_ReAuthenticate = 13,
        RASCS_Authenticated = 14,
        RASCS_PrepareForCallback = 15,
        RASCS_WaitForModemReset = 16,
        RASCS_WaitForCallback = 17,
        RASCS_Projected = 18,
        RASCS_StartAuthentication = 19,
        RASCS_CallbackComplete = 20,
        RASCS_LogonNetwork = 21,
        RASCS_SubEntryConnected = 22,
        RASCS_SubEntryDisconnected = 23,
        RASCS_ApplySettings = 24,
        RASCS_Interactive = 4096,
        RASCS_RetryAuthentication = 4097,
        RASCS_CallbackSetByCaller = 4098,
        RASCS_PasswordExpired = 4099,
        RASCS_InvokeEapUI = 4100,
        RASCS_Connected = 8192,
        RASCS_Disconnected = 8193,
    };
    enum class RASCONNSUBSTATE : int32_t
    {
        RASCSS_None = 0,
        RASCSS_Dormant = 1,
        RASCSS_Reconnecting = 2,
        RASCSS_Reconnected = 8192,
    };
    enum class RASENTRY_DIAL_MODE : uint32_t
    {
        RASEDM_DialAll = 0x1,
        RASEDM_DialAsNeeded = 0x2,
    };
    enum class RASIKEV_PROJECTION_INFO_FLAGS : uint32_t
    {
        RASIKEv2_FLAGS_MOBIKESUPPORTED = 0x1,
        RASIKEv2_FLAGS_BEHIND_NAT = 0x2,
        RASIKEv2_FLAGS_SERVERBEHIND_NAT = 0x4,
    };
    enum class RASPPP_PROJECTION_INFO_SERVER_AUTH_DATA : uint32_t
    {
        RASLCPAD_CHAP_MD5 = 0x5,
        RASLCPAD_CHAP_MS = 0x80,
        RASLCPAD_CHAP_MSV2 = 0x81,
    };
    enum class RASPPP_PROJECTION_INFO_SERVER_AUTH_PROTOCOL : uint32_t
    {
        RASLCPAP_PAP = 0xc023,
        RASLCPAP_SPAP = 0xc027,
        RASLCPAP_CHAP = 0xc223,
        RASLCPAP_EAP = 0xc227,
    };
    enum class RASPROJECTION : int32_t
    {
        RASP_Amb = 65536,
        RASP_PppNbf = 32831,
        RASP_PppIpx = 32811,
        RASP_PppIp = 32801,
        RASP_PppCcp = 33021,
        RASP_PppLcp = 49185,
        RASP_PppIpv6 = 32855,
    };
    enum class RASPROJECTION_INFO_TYPE : int32_t
    {
        PROJECTION_INFO_TYPE_PPP = 1,
        PROJECTION_INFO_TYPE_IKEv2 = 2,
    };
    enum class RAS_FLAGS : uint32_t
    {
        RAS_FLAGS_PPP_CONNECTION = 0x1,
        RAS_FLAGS_MESSENGER_PRESENT = 0x2,
        RAS_FLAGS_QUARANTINE_PRESENT = 0x8,
        RAS_FLAGS_ARAP_CONNECTION = 0x10,
        RAS_FLAGS_IKEV2_CONNECTION = 0x10,
        RAS_FLAGS_DORMANT = 0x20,
    };
    enum class RAS_HARDWARE_CONDITION : int32_t
    {
        RAS_HARDWARE_OPERATIONAL = 0,
        RAS_HARDWARE_FAILURE = 1,
    };
    enum class RAS_PORT_CONDITION : int32_t
    {
        RAS_PORT_NON_OPERATIONAL = 0,
        RAS_PORT_DISCONNECTED = 1,
        RAS_PORT_CALLING_BACK = 2,
        RAS_PORT_LISTENING = 3,
        RAS_PORT_AUTHENTICATING = 4,
        RAS_PORT_AUTHENTICATED = 5,
        RAS_PORT_INITIALIZING = 6,
    };
    enum class RAS_QUARANTINE_STATE : int32_t
    {
        RAS_QUAR_STATE_NORMAL = 0,
        RAS_QUAR_STATE_QUARANTINE = 1,
        RAS_QUAR_STATE_PROBATION = 2,
        RAS_QUAR_STATE_NOT_CAPABLE = 3,
    };
    enum class ROUTER_CONNECTION_STATE : int32_t
    {
        ROUTER_IF_STATE_UNREACHABLE = 0,
        ROUTER_IF_STATE_DISCONNECTED = 1,
        ROUTER_IF_STATE_CONNECTING = 2,
        ROUTER_IF_STATE_CONNECTED = 3,
    };
    enum class ROUTER_INTERFACE_TYPE : int32_t
    {
        ROUTER_IF_TYPE_CLIENT = 0,
        ROUTER_IF_TYPE_HOME_ROUTER = 1,
        ROUTER_IF_TYPE_FULL_ROUTER = 2,
        ROUTER_IF_TYPE_DEDICATED = 3,
        ROUTER_IF_TYPE_INTERNAL = 4,
        ROUTER_IF_TYPE_LOOPBACK = 5,
        ROUTER_IF_TYPE_TUNNEL1 = 6,
        ROUTER_IF_TYPE_DIALOUT = 7,
        ROUTER_IF_TYPE_MAX = 8,
    };
    enum class RTM_EVENT_TYPE : int32_t
    {
        RTM_ENTITY_REGISTERED = 0,
        RTM_ENTITY_DEREGISTERED = 1,
        RTM_ROUTE_EXPIRED = 2,
        RTM_CHANGE_NOTIFICATION = 3,
    };
    enum class SECURITY_MESSAGE_MSG_ID : uint32_t
    {
        SECURITYMSG_SUCCESS = 0x1,
        SECURITYMSG_FAILURE = 0x2,
        SECURITYMSG_ERROR = 0x3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct AUTH_VALIDATION_EX;
    struct GRE_CONFIG_PARAMS0;
    struct HRASCONN;
    struct IKEV2_CONFIG_PARAMS;
    struct IKEV2_PROJECTION_INFO;
    struct IKEV2_PROJECTION_INFO2;
    struct IKEV2_TUNNEL_CONFIG_PARAMS2;
    struct IKEV2_TUNNEL_CONFIG_PARAMS3;
    struct IKEV2_TUNNEL_CONFIG_PARAMS4;
    struct L2TP_CONFIG_PARAMS0;
    struct L2TP_CONFIG_PARAMS1;
    struct L2TP_TUNNEL_CONFIG_PARAMS1;
    struct L2TP_TUNNEL_CONFIG_PARAMS2;
    struct MGM_IF_ENTRY;
    struct MPRAPI_ADMIN_DLL_CALLBACKS;
    struct MPRAPI_OBJECT_HEADER;
    struct MPRAPI_TUNNEL_CONFIG_PARAMS0;
    struct MPRAPI_TUNNEL_CONFIG_PARAMS1;
    struct MPR_CERT_EKU;
    struct MPR_CREDENTIALSEX_0;
    struct MPR_CREDENTIALSEX_1;
    struct MPR_DEVICE_0;
    struct MPR_DEVICE_1;
    struct MPR_FILTER_0;
    struct MPR_IFTRANSPORT_0;
    struct MPR_IF_CUSTOMINFOEX0;
    struct MPR_IF_CUSTOMINFOEX1;
    struct MPR_IF_CUSTOMINFOEX2;
    struct MPR_INTERFACE_0;
    struct MPR_INTERFACE_1;
    struct MPR_INTERFACE_2;
    struct MPR_INTERFACE_3;
    struct MPR_IPINIP_INTERFACE_0;
    struct MPR_SERVER_0;
    struct MPR_SERVER_1;
    struct MPR_SERVER_2;
    struct MPR_SERVER_EX0;
    struct MPR_SERVER_EX1;
    struct MPR_SERVER_SET_CONFIG_EX0;
    struct MPR_SERVER_SET_CONFIG_EX1;
    struct MPR_TRANSPORT_0;
    struct MPR_VPN_TRAFFIC_SELECTORS;
    struct PPP_ATCP_INFO;
    struct PPP_CCP_INFO;
    struct PPP_INFO;
    struct PPP_INFO_2;
    struct PPP_INFO_3;
    struct PPP_IPCP_INFO;
    struct PPP_IPCP_INFO2;
    struct PPP_IPV6_CP_INFO;
    struct PPP_IPXCP_INFO;
    struct PPP_LCP_INFO;
    struct PPP_NBFCP_INFO;
    struct PPP_PROJECTION_INFO;
    struct PPP_PROJECTION_INFO2;
    struct PPTP_CONFIG_PARAMS;
    struct PROJECTION_INFO;
    struct PROJECTION_INFO2;
    struct RASADPARAMS;
    struct RASAMBA;
    struct RASAMBW;
    struct RASAUTODIALENTRYA;
    struct RASAUTODIALENTRYW;
    struct RASCOMMSETTINGS;
    struct RASCONNA;
    struct RASCONNSTATUSA;
    struct RASCONNSTATUSW;
    struct RASCONNW;
    struct RASCREDENTIALSA;
    struct RASCREDENTIALSW;
    struct RASCTRYINFO;
    struct RASCUSTOMSCRIPTEXTENSIONS;
    struct RASDEVINFOA;
    struct RASDEVINFOW;
    struct RASDEVSPECIFICINFO;
    struct RASDIALDLG;
    struct RASDIALEXTENSIONS;
    struct RASDIALPARAMSA;
    struct RASDIALPARAMSW;
    struct RASEAPINFO;
    struct RASEAPUSERIDENTITYA;
    struct RASEAPUSERIDENTITYW;
    struct RASENTRYA;
    struct RASENTRYDLGA;
    struct RASENTRYDLGW;
    struct RASENTRYNAMEA;
    struct RASENTRYNAMEW;
    struct RASENTRYW;
    struct RASIKEV2_PROJECTION_INFO;
    struct RASIPADDR;
    struct RASIPXW;
    struct RASNOUSERA;
    struct RASNOUSERW;
    struct RASPBDLGA;
    struct RASPBDLGW;
    struct RASPPPCCP;
    struct RASPPPIPA;
    struct RASPPPIPV6;
    struct RASPPPIPW;
    struct RASPPPIPXA;
    struct RASPPPLCPA;
    struct RASPPPLCPW;
    struct RASPPPNBFA;
    struct RASPPPNBFW;
    struct RASPPP_PROJECTION_INFO;
    struct RASSUBENTRYA;
    struct RASSUBENTRYW;
    struct RASTUNNELENDPOINT;
    struct RASUPDATECONN;
    struct RAS_CONNECTION_0;
    struct RAS_CONNECTION_1;
    struct RAS_CONNECTION_2;
    struct RAS_CONNECTION_3;
    struct RAS_CONNECTION_4;
    struct RAS_CONNECTION_EX;
    struct RAS_PORT_0;
    struct RAS_PORT_1;
    struct RAS_PORT_2;
    struct RAS_PROJECTION_INFO;
    struct RAS_SECURITY_INFO;
    struct RAS_STATS;
    struct RAS_UPDATE_CONNECTION;
    struct RAS_USER_0;
    struct RAS_USER_1;
    struct ROUTER_CUSTOM_IKEv2_POLICY0;
    struct ROUTER_IKEv2_IF_CUSTOM_CONFIG0;
    struct ROUTER_IKEv2_IF_CUSTOM_CONFIG1;
    struct ROUTER_IKEv2_IF_CUSTOM_CONFIG2;
    struct ROUTING_PROTOCOL_CONFIG;
    struct RTM_DEST_INFO;
    struct RTM_ENTITY_EXPORT_METHODS;
    struct RTM_ENTITY_ID;
    struct RTM_ENTITY_INFO;
    struct RTM_ENTITY_METHOD_INPUT;
    struct RTM_ENTITY_METHOD_OUTPUT;
    struct RTM_NET_ADDRESS;
    struct RTM_NEXTHOP_INFO;
    struct RTM_NEXTHOP_LIST;
    struct RTM_PREF_INFO;
    struct RTM_REGN_PROFILE;
    struct RTM_ROUTE_INFO;
    struct SECURITY_MESSAGE;
    struct SOURCE_GROUP_ENTRY;
    struct SSTP_CERT_INFO;
    struct SSTP_CONFIG_PARAMS;
    struct VPN_TS_IP_ADDRESS;
    struct _MPR_VPN_SELECTOR;
#pragma endregion forward_declarations

#pragma region delegates
    using RASDIALFUNC = void __stdcall(uint32_t, Windows::Win32::NetworkManagement::Rras::RASCONNSTATE, uint32_t);
    using RASDIALFUNC1 = void __stdcall(Windows::Win32::NetworkManagement::Rras::HRASCONN, uint32_t, Windows::Win32::NetworkManagement::Rras::RASCONNSTATE, uint32_t, uint32_t);
    using RASDIALFUNC2 = uint32_t __stdcall(size_t, uint32_t, Windows::Win32::NetworkManagement::Rras::HRASCONN, uint32_t, Windows::Win32::NetworkManagement::Rras::RASCONNSTATE, uint32_t, uint32_t);
    using ORASADFUNC = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::HWND, Windows::Win32::Foundation::PSTR, uint32_t, uint32_t*);
    using RASADFUNCA = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::PSTR, Windows::Win32::Foundation::PSTR, Windows::Win32::NetworkManagement::Rras::RASADPARAMS*, uint32_t*);
    using RASADFUNCW = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::NetworkManagement::Rras::RASADPARAMS*, uint32_t*);
    using PFNRASGETBUFFER = uint32_t __stdcall(uint8_t**, uint32_t*);
    using PFNRASFREEBUFFER = uint32_t __stdcall(uint8_t*);
    using PFNRASSENDBUFFER = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint8_t*, uint32_t);
    using PFNRASRECEIVEBUFFER = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint8_t*, uint32_t*, uint32_t, Windows::Win32::Foundation::HANDLE);
    using PFNRASRETRIEVEBUFFER = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, uint8_t*, uint32_t*);
    using RasCustomScriptExecuteFn = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::NetworkManagement::Rras::PFNRASGETBUFFER*, Windows::Win32::NetworkManagement::Rras::PFNRASFREEBUFFER*, Windows::Win32::NetworkManagement::Rras::PFNRASSENDBUFFER*, Windows::Win32::NetworkManagement::Rras::PFNRASRECEIVEBUFFER*, Windows::Win32::NetworkManagement::Rras::PFNRASRETRIEVEBUFFER*, Windows::Win32::Foundation::HWND, Windows::Win32::NetworkManagement::Rras::RASDIALPARAMSA*, void*);
    using PFNRASSETCOMMSETTINGS = uint32_t __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::NetworkManagement::Rras::RASCOMMSETTINGS*, void*);
    using RasCustomHangUpFn = uint32_t __stdcall(Windows::Win32::NetworkManagement::Rras::HRASCONN);
    using RasCustomDialFn = uint32_t __stdcall(Windows::Win32::Foundation::HINSTANCE, Windows::Win32::NetworkManagement::Rras::RASDIALEXTENSIONS*, Windows::Win32::Foundation::PWSTR, Windows::Win32::NetworkManagement::Rras::RASDIALPARAMSA*, uint32_t, void*, Windows::Win32::NetworkManagement::Rras::HRASCONN*, uint32_t);
    using RasCustomDeleteEntryNotifyFn = uint32_t __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, uint32_t);
    using RASPBDLGFUNCW = void __stdcall(size_t, uint32_t, Windows::Win32::Foundation::PWSTR, void*);
    using RASPBDLGFUNCA = void __stdcall(size_t, uint32_t, Windows::Win32::Foundation::PSTR, void*);
    using RasCustomDialDlgFn = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::HINSTANCE, uint32_t, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::NetworkManagement::Rras::RASDIALDLG*, void*);
    using RasCustomEntryDlgFn = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::HINSTANCE, Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::NetworkManagement::Rras::RASENTRYDLGA*, uint32_t);
    using PMPRADMINGETIPADDRESSFORUSER = uint32_t __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, uint32_t*, Windows::Win32::Foundation::BOOL*);
    using PMPRADMINRELEASEIPADRESS = void __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, uint32_t*);
    using PMPRADMINGETIPV6ADDRESSFORUSER = uint32_t __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::Networking::WinSock::IN6_ADDR*, Windows::Win32::Foundation::BOOL*);
    using PMPRADMINRELEASEIPV6ADDRESSFORUSER = void __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, Windows::Win32::Networking::WinSock::IN6_ADDR*);
    using PMPRADMINACCEPTNEWCONNECTION = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_0*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_1*);
    using PMPRADMINACCEPTNEWCONNECTION2 = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_0*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_1*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_2*);
    using PMPRADMINACCEPTNEWCONNECTION3 = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_0*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_1*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_2*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_3*);
    using PMPRADMINACCEPTNEWLINK = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_PORT_0*, Windows::Win32::NetworkManagement::Rras::RAS_PORT_1*);
    using PMPRADMINCONNECTIONHANGUPNOTIFICATION = void __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_0*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_1*);
    using PMPRADMINCONNECTIONHANGUPNOTIFICATION2 = void __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_0*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_1*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_2*);
    using PMPRADMINCONNECTIONHANGUPNOTIFICATION3 = void __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_0*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_1*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_2*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_3);
    using PMPRADMINLINKHANGUPNOTIFICATION = void __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_PORT_0*, Windows::Win32::NetworkManagement::Rras::RAS_PORT_1*);
    using PMPRADMINTERMINATEDLL = uint32_t __stdcall();
    using PMPRADMINACCEPTREAUTHENTICATION = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_0*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_1*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_2*, Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_3*);
    using PMPRADMINACCEPTNEWCONNECTIONEX = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_EX*);
    using PMPRADMINACCEPTREAUTHENTICATIONEX = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_EX*);
    using PMPRADMINACCEPTTUNNELENDPOINTCHANGEEX = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_EX*);
    using PMPRADMINCONNECTIONHANGUPNOTIFICATIONEX = void __stdcall(Windows::Win32::NetworkManagement::Rras::RAS_CONNECTION_EX*);
    using PMPRADMINRASVALIDATEPREAUTHENTICATEDCONNECTIONEX = uint32_t __stdcall(Windows::Win32::NetworkManagement::Rras::AUTH_VALIDATION_EX*);
    using RASSECURITYPROC = uint32_t __stdcall();
    using PMGM_RPF_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t*, uint32_t*, uint32_t, uint8_t*, uint8_t*);
    using PMGM_CREATION_ALERT_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, Windows::Win32::NetworkManagement::Rras::MGM_IF_ENTRY*);
    using PMGM_PRUNE_ALERT_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, Windows::Win32::Foundation::BOOL, uint32_t*);
    using PMGM_JOIN_ALERT_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t, uint32_t, uint32_t, Windows::Win32::Foundation::BOOL);
    using PMGM_WRONG_IF_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t*);
    using PMGM_LOCAL_JOIN_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    using PMGM_LOCAL_LEAVE_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    using PMGM_DISABLE_IGMP_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t);
    using PMGM_ENABLE_IGMP_CALLBACK = uint32_t __stdcall(uint32_t, uint32_t);
    using RTM_EVENT_CALLBACK = uint32_t __stdcall(intptr_t, Windows::Win32::NetworkManagement::Rras::RTM_EVENT_TYPE, void*, void*);
    using RTM_ENTITY_EXPORT_METHOD = void __stdcall(intptr_t, intptr_t, Windows::Win32::NetworkManagement::Rras::RTM_ENTITY_METHOD_INPUT*, Windows::Win32::NetworkManagement::Rras::RTM_ENTITY_METHOD_OUTPUT*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
