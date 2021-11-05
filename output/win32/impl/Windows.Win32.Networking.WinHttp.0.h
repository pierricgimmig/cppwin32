// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Networking_WinHttp_0_H
#define WIN32_Windows_Win32_Networking_WinHttp_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Networking::WinHttp
{
#pragma region enums
    enum class INTERNET_PORT : uint32_t
    {
        INTERNET_DEFAULT_HTTP_PORT = 0x50,
        INTERNET_DEFAULT_HTTPS_PORT = 0x1bb,
        INTERNET_DEFAULT_PORT = 0x0,
    };
    enum class WINHTTP_ACCESS_TYPE : uint32_t
    {
        WINHTTP_ACCESS_TYPE_NO_PROXY = 0x1,
        WINHTTP_ACCESS_TYPE_DEFAULT_PROXY = 0x0,
        WINHTTP_ACCESS_TYPE_NAMED_PROXY = 0x3,
        WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY = 0x4,
    };
    enum class WINHTTP_CREDS_AUTHSCHEME : uint32_t
    {
        WINHTTP_AUTH_SCHEME_BASIC = 0x1,
        WINHTTP_AUTH_SCHEME_NTLM = 0x2,
        WINHTTP_AUTH_SCHEME_NEGOTIATE = 0x10,
    };
    enum class WINHTTP_INTERNET_SCHEME : uint32_t
    {
        WINHTTP_INTERNET_SCHEME_HTTP = 0x1,
        WINHTTP_INTERNET_SCHEME_HTTPS = 0x2,
        WINHTTP_INTERNET_SCHEME_FTP = 0x3,
        WINHTTP_INTERNET_SCHEME_SOCKS = 0x4,
    };
    enum class WINHTTP_OPEN_REQUEST_FLAGS : uint32_t
    {
        WINHTTP_FLAG_BYPASS_PROXY_CACHE = 0x100,
        WINHTTP_FLAG_ESCAPE_DISABLE = 0x40,
        WINHTTP_FLAG_ESCAPE_DISABLE_QUERY = 0x80,
        WINHTTP_FLAG_ESCAPE_PERCENT = 0x4,
        WINHTTP_FLAG_NULL_CODEPAGE = 0x8,
        WINHTTP_FLAG_REFRESH = 0x100,
        WINHTTP_FLAG_SECURE = 0x800000,
    };
    enum class WINHTTP_REQUEST_STAT_ENTRY : int32_t
    {
        WinHttpConnectFailureCount = 0,
        WinHttpProxyFailureCount = 1,
        WinHttpTlsHandshakeClientLeg1Size = 2,
        WinHttpTlsHandshakeServerLeg1Size = 3,
        WinHttpTlsHandshakeClientLeg2Size = 4,
        WinHttpTlsHandshakeServerLeg2Size = 5,
        WinHttpRequestHeadersSize = 6,
        WinHttpRequestHeadersCompressedSize = 7,
        WinHttpResponseHeadersSize = 8,
        WinHttpResponseHeadersCompressedSize = 9,
        WinHttpResponseBodySize = 10,
        WinHttpResponseBodyCompressedSize = 11,
        WinHttpProxyTlsHandshakeClientLeg1Size = 12,
        WinHttpProxyTlsHandshakeServerLeg1Size = 13,
        WinHttpProxyTlsHandshakeClientLeg2Size = 14,
        WinHttpProxyTlsHandshakeServerLeg2Size = 15,
        WinHttpRequestStatLast = 16,
        WinHttpRequestStatMax = 32,
    };
    enum class WINHTTP_REQUEST_TIME_ENTRY : int32_t
    {
        WinHttpProxyDetectionStart = 0,
        WinHttpProxyDetectionEnd = 1,
        WinHttpConnectionAcquireStart = 2,
        WinHttpConnectionAcquireWaitEnd = 3,
        WinHttpConnectionAcquireEnd = 4,
        WinHttpNameResolutionStart = 5,
        WinHttpNameResolutionEnd = 6,
        WinHttpConnectionEstablishmentStart = 7,
        WinHttpConnectionEstablishmentEnd = 8,
        WinHttpTlsHandshakeClientLeg1Start = 9,
        WinHttpTlsHandshakeClientLeg1End = 10,
        WinHttpTlsHandshakeClientLeg2Start = 11,
        WinHttpTlsHandshakeClientLeg2End = 12,
        WinHttpTlsHandshakeClientLeg3Start = 13,
        WinHttpTlsHandshakeClientLeg3End = 14,
        WinHttpStreamWaitStart = 15,
        WinHttpStreamWaitEnd = 16,
        WinHttpSendRequestStart = 17,
        WinHttpSendRequestHeadersCompressionStart = 18,
        WinHttpSendRequestHeadersCompressionEnd = 19,
        WinHttpSendRequestHeadersEnd = 20,
        WinHttpSendRequestEnd = 21,
        WinHttpReceiveResponseStart = 22,
        WinHttpReceiveResponseHeadersDecompressionStart = 23,
        WinHttpReceiveResponseHeadersDecompressionEnd = 24,
        WinHttpReceiveResponseHeadersEnd = 25,
        WinHttpReceiveResponseBodyDecompressionDelta = 26,
        WinHttpReceiveResponseEnd = 27,
        WinHttpProxyTunnelStart = 28,
        WinHttpProxyTunnelEnd = 29,
        WinHttpProxyTlsHandshakeClientLeg1Start = 30,
        WinHttpProxyTlsHandshakeClientLeg1End = 31,
        WinHttpProxyTlsHandshakeClientLeg2Start = 32,
        WinHttpProxyTlsHandshakeClientLeg2End = 33,
        WinHttpProxyTlsHandshakeClientLeg3Start = 34,
        WinHttpProxyTlsHandshakeClientLeg3End = 35,
        WinHttpRequestTimeLast = 36,
        WinHttpRequestTimeMax = 64,
    };
    enum class WINHTTP_SECURE_DNS_SETTING : int32_t
    {
        WinHttpSecureDnsSettingDefault = 0,
        WinHttpSecureDnsSettingForcePlaintext = 1,
        WinHttpSecureDnsSettingRequireEncryption = 2,
        WinHttpSecureDnsSettingTryEncryptionWithFallback = 3,
        WinHttpSecureDnsSettingMax = 4,
    };
    enum class WINHTTP_WEB_SOCKET_BUFFER_TYPE : int32_t
    {
        WINHTTP_WEB_SOCKET_BINARY_MESSAGE_BUFFER_TYPE = 0,
        WINHTTP_WEB_SOCKET_BINARY_FRAGMENT_BUFFER_TYPE = 1,
        WINHTTP_WEB_SOCKET_UTF8_MESSAGE_BUFFER_TYPE = 2,
        WINHTTP_WEB_SOCKET_UTF8_FRAGMENT_BUFFER_TYPE = 3,
        WINHTTP_WEB_SOCKET_CLOSE_BUFFER_TYPE = 4,
    };
    enum class WINHTTP_WEB_SOCKET_CLOSE_STATUS : int32_t
    {
        WINHTTP_WEB_SOCKET_SUCCESS_CLOSE_STATUS = 1000,
        WINHTTP_WEB_SOCKET_ENDPOINT_TERMINATED_CLOSE_STATUS = 1001,
        WINHTTP_WEB_SOCKET_PROTOCOL_ERROR_CLOSE_STATUS = 1002,
        WINHTTP_WEB_SOCKET_INVALID_DATA_TYPE_CLOSE_STATUS = 1003,
        WINHTTP_WEB_SOCKET_EMPTY_CLOSE_STATUS = 1005,
        WINHTTP_WEB_SOCKET_ABORTED_CLOSE_STATUS = 1006,
        WINHTTP_WEB_SOCKET_INVALID_PAYLOAD_CLOSE_STATUS = 1007,
        WINHTTP_WEB_SOCKET_POLICY_VIOLATION_CLOSE_STATUS = 1008,
        WINHTTP_WEB_SOCKET_MESSAGE_TOO_BIG_CLOSE_STATUS = 1009,
        WINHTTP_WEB_SOCKET_UNSUPPORTED_EXTENSIONS_CLOSE_STATUS = 1010,
        WINHTTP_WEB_SOCKET_SERVER_ERROR_CLOSE_STATUS = 1011,
        WINHTTP_WEB_SOCKET_SECURE_HANDSHAKE_ERROR_CLOSE_STATUS = 1015,
    };
    enum class WINHTTP_WEB_SOCKET_OPERATION : int32_t
    {
        WINHTTP_WEB_SOCKET_SEND_OPERATION = 0,
        WINHTTP_WEB_SOCKET_RECEIVE_OPERATION = 1,
        WINHTTP_WEB_SOCKET_CLOSE_OPERATION = 2,
        WINHTTP_WEB_SOCKET_SHUTDOWN_OPERATION = 3,
    };
    enum class WIN_HTTP_CREATE_URL_FLAGS : uint32_t
    {
        ICU_ESCAPE = 0x80000000,
        ICU_REJECT_USERPWD = 0x4000,
        ICU_DECODE = 0x10000000,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct HTTP_VERSION_INFO;
    struct URL_COMPONENTS;
    struct WINHTTP_ASYNC_RESULT;
    struct WINHTTP_AUTOPROXY_OPTIONS;
    struct WINHTTP_CERTIFICATE_INFO;
    struct WINHTTP_CONNECTION_GROUP;
    struct WINHTTP_CONNECTION_INFO;
    struct WINHTTP_CREDS;
    struct WINHTTP_CREDS_EX;
    struct WINHTTP_CURRENT_USER_IE_PROXY_CONFIG;
    struct WINHTTP_EXTENDED_HEADER;
    struct WINHTTP_FAILED_CONNECTION_RETRIES;
    union WINHTTP_HEADER_NAME;
    struct WINHTTP_HOST_CONNECTION_GROUP;
    struct WINHTTP_HTTP2_RECEIVE_WINDOW;
    struct WINHTTP_MATCH_CONNECTION_GUID;
    struct WINHTTP_PROXY_INFO;
    struct WINHTTP_PROXY_RESULT;
    struct WINHTTP_PROXY_RESULT_ENTRY;
    struct WINHTTP_PROXY_RESULT_EX;
    struct WINHTTP_PROXY_SETTINGS;
    struct WINHTTP_QUERY_CONNECTION_GROUP_RESULT;
    struct WINHTTP_REQUEST_STATS;
    struct WINHTTP_REQUEST_TIMES;
    struct WINHTTP_RESOLVER_CACHE_CONFIG;
    struct WINHTTP_WEB_SOCKET_ASYNC_RESULT;
    struct WINHTTP_WEB_SOCKET_STATUS;
    struct _WinHttpProxyNetworkKey;
#pragma endregion forward_declarations

#pragma region delegates
    using WINHTTP_STATUS_CALLBACK = void __stdcall(void*, size_t, uint32_t, void*, uint32_t);
    using LPWINHTTP_STATUS_CALLBACK = void __stdcall();
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif