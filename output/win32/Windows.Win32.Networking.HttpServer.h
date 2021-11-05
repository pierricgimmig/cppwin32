// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Networking_HttpServer_H
#define WIN32_Windows_Win32_Networking_HttpServer_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Networking.HttpServer.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Networking::HttpServer
{
#pragma region methods
extern "C"
{
    uint32_t __stdcall ORBIT_IMPL_HttpInitialize(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, win32::Windows::Win32::Networking::HttpServer::HTTP_INITIALIZE Flags, void* pReserved) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpTerminate(win32::Windows::Win32::Networking::HttpServer::HTTP_INITIALIZE Flags, void* pReserved) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCreateHttpHandle(win32::Windows::Win32::Foundation::HANDLE* RequestQueueHandle, uint32_t Reserved) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCreateRequestQueue(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, win32::Windows::Win32::Foundation::PWSTR Name, win32::Windows::Win32::Security::SECURITY_ATTRIBUTES* SecurityAttributes, uint32_t Flags, win32::Windows::Win32::Foundation::HANDLE* RequestQueueHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCloseRequestQueue(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpSetRequestQueueProperty(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t Reserved1, void* Reserved2) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpQueryRequestQueueProperty(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t Reserved1, uint32_t* ReturnLength, void* Reserved2) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpSetRequestProperty(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t Id, win32::Windows::Win32::Networking::HttpServer::HTTP_REQUEST_PROPERTY PropertyId, void* Input, uint32_t InputPropertySize, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpShutdownRequestQueue(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpReceiveClientCertificate(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t ConnectionId, uint32_t Flags, win32::Windows::Win32::Networking::HttpServer::HTTP_SSL_CLIENT_CERT_INFO* SslClientCertInfo, uint32_t SslClientCertInfoSize, uint32_t* BytesReceived, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCreateServerSession(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, uint64_t* ServerSessionId, uint32_t Reserved) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCloseServerSession(uint64_t ServerSessionId) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpQueryServerSessionProperty(uint64_t ServerSessionId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t* ReturnLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpSetServerSessionProperty(uint64_t ServerSessionId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpAddUrl(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR FullyQualifiedUrl, void* Reserved) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpRemoveUrl(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR FullyQualifiedUrl) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCreateUrlGroup(uint64_t ServerSessionId, uint64_t* pUrlGroupId, uint32_t Reserved) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCloseUrlGroup(uint64_t UrlGroupId) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpAddUrlToUrlGroup(uint64_t UrlGroupId, win32::Windows::Win32::Foundation::PWSTR pFullyQualifiedUrl, uint64_t UrlContext, uint32_t Reserved) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpRemoveUrlFromUrlGroup(uint64_t UrlGroupId, win32::Windows::Win32::Foundation::PWSTR pFullyQualifiedUrl, uint32_t Flags) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpSetUrlGroupProperty(uint64_t UrlGroupId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpQueryUrlGroupProperty(uint64_t UrlGroupId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t* ReturnLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpPrepareUrl(void* Reserved, uint32_t Flags, win32::Windows::Win32::Foundation::PWSTR Url, win32::Windows::Win32::Foundation::PWSTR* PreparedUrl) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpReceiveHttpRequest(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::Networking::HttpServer::HTTP_RECEIVE_HTTP_REQUEST_FLAGS Flags, win32::Windows::Win32::Networking::HttpServer::HTTP_REQUEST_V2* RequestBuffer, uint32_t RequestBufferLength, uint32_t* BytesReturned, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpReceiveRequestEntityBody(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, void* EntityBuffer, uint32_t EntityBufferLength, uint32_t* BytesReturned, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpSendHttpResponse(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, win32::Windows::Win32::Networking::HttpServer::HTTP_RESPONSE_V2* HttpResponse, win32::Windows::Win32::Networking::HttpServer::HTTP_CACHE_POLICY* CachePolicy, uint32_t* BytesSent, void* Reserved1, uint32_t Reserved2, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped, win32::Windows::Win32::Networking::HttpServer::HTTP_LOG_DATA* LogData) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpSendResponseEntityBody(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, uint16_t EntityChunkCount, win32::Windows::Win32::Networking::HttpServer::HTTP_DATA_CHUNK* EntityChunks, uint32_t* BytesSent, void* Reserved1, uint32_t Reserved2, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped, win32::Windows::Win32::Networking::HttpServer::HTTP_LOG_DATA* LogData) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpDeclarePush(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::Networking::HttpServer::HTTP_VERB Verb, win32::Windows::Win32::Foundation::PWSTR Path, win32::Windows::Win32::Foundation::PSTR Query, win32::Windows::Win32::Networking::HttpServer::HTTP_REQUEST_HEADERS* Headers) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpWaitForDisconnect(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t ConnectionId, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpWaitForDisconnectEx(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t ConnectionId, uint32_t Reserved, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpCancelHttpRequest(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpWaitForDemandStart(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_HttpIsFeatureSupported(win32::Windows::Win32::Networking::HttpServer::HTTP_FEATURE_ID FeatureId) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpDelegateRequestEx(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::HANDLE DelegateQueueHandle, uint64_t RequestId, uint64_t DelegateUrlGroupId, uint32_t PropertyInfoSetSize, win32::Windows::Win32::Networking::HttpServer::HTTP_DELEGATE_REQUEST_PROPERTY_INFO* PropertyInfoSet) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpFindUrlGroupId(win32::Windows::Win32::Foundation::PWSTR FullyQualifiedUrl, win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t* UrlGroupId) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpFlushResponseCache(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR UrlPrefix, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpAddFragmentToCache(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR UrlPrefix, win32::Windows::Win32::Networking::HttpServer::HTTP_DATA_CHUNK* DataChunk, win32::Windows::Win32::Networking::HttpServer::HTTP_CACHE_POLICY* CachePolicy, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpReadFragmentFromCache(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR UrlPrefix, win32::Windows::Win32::Networking::HttpServer::HTTP_BYTE_RANGE* ByteRange, void* Buffer, uint32_t BufferLength, uint32_t* BytesRead, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpSetServiceConfiguration(win32::Windows::Win32::Foundation::HANDLE ServiceHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* pConfigInformation, uint32_t ConfigInformationLength, win32::Windows::Win32::System::IO::OVERLAPPED* pOverlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpUpdateServiceConfiguration(win32::Windows::Win32::Foundation::HANDLE Handle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* ConfigInfo, uint32_t ConfigInfoLength, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpDeleteServiceConfiguration(win32::Windows::Win32::Foundation::HANDLE ServiceHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* pConfigInformation, uint32_t ConfigInformationLength, win32::Windows::Win32::System::IO::OVERLAPPED* pOverlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpQueryServiceConfiguration(win32::Windows::Win32::Foundation::HANDLE ServiceHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* pInput, uint32_t InputLength, void* pOutput, uint32_t OutputLength, uint32_t* pReturnLength, win32::Windows::Win32::System::IO::OVERLAPPED* pOverlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_HttpGetExtension(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, uint32_t Extension, void* Buffer, uint32_t BufferSize) noexcept;
}

struct ApiTable {
    uint32_t (__stdcall *HttpInitialize)(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, win32::Windows::Win32::Networking::HttpServer::HTTP_INITIALIZE Flags, void* pReserved) noexcept;
    uint32_t (__stdcall *HttpTerminate)(win32::Windows::Win32::Networking::HttpServer::HTTP_INITIALIZE Flags, void* pReserved) noexcept;
    uint32_t (__stdcall *HttpCreateHttpHandle)(win32::Windows::Win32::Foundation::HANDLE* RequestQueueHandle, uint32_t Reserved) noexcept;
    uint32_t (__stdcall *HttpCreateRequestQueue)(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, win32::Windows::Win32::Foundation::PWSTR Name, win32::Windows::Win32::Security::SECURITY_ATTRIBUTES* SecurityAttributes, uint32_t Flags, win32::Windows::Win32::Foundation::HANDLE* RequestQueueHandle) noexcept;
    uint32_t (__stdcall *HttpCloseRequestQueue)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle) noexcept;
    uint32_t (__stdcall *HttpSetRequestQueueProperty)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t Reserved1, void* Reserved2) noexcept;
    uint32_t (__stdcall *HttpQueryRequestQueueProperty)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t Reserved1, uint32_t* ReturnLength, void* Reserved2) noexcept;
    uint32_t (__stdcall *HttpSetRequestProperty)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t Id, win32::Windows::Win32::Networking::HttpServer::HTTP_REQUEST_PROPERTY PropertyId, void* Input, uint32_t InputPropertySize, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpShutdownRequestQueue)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle) noexcept;
    uint32_t (__stdcall *HttpReceiveClientCertificate)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t ConnectionId, uint32_t Flags, win32::Windows::Win32::Networking::HttpServer::HTTP_SSL_CLIENT_CERT_INFO* SslClientCertInfo, uint32_t SslClientCertInfoSize, uint32_t* BytesReceived, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpCreateServerSession)(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, uint64_t* ServerSessionId, uint32_t Reserved) noexcept;
    uint32_t (__stdcall *HttpCloseServerSession)(uint64_t ServerSessionId) noexcept;
    uint32_t (__stdcall *HttpQueryServerSessionProperty)(uint64_t ServerSessionId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t* ReturnLength) noexcept;
    uint32_t (__stdcall *HttpSetServerSessionProperty)(uint64_t ServerSessionId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength) noexcept;
    uint32_t (__stdcall *HttpAddUrl)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR FullyQualifiedUrl, void* Reserved) noexcept;
    uint32_t (__stdcall *HttpRemoveUrl)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR FullyQualifiedUrl) noexcept;
    uint32_t (__stdcall *HttpCreateUrlGroup)(uint64_t ServerSessionId, uint64_t* pUrlGroupId, uint32_t Reserved) noexcept;
    uint32_t (__stdcall *HttpCloseUrlGroup)(uint64_t UrlGroupId) noexcept;
    uint32_t (__stdcall *HttpAddUrlToUrlGroup)(uint64_t UrlGroupId, win32::Windows::Win32::Foundation::PWSTR pFullyQualifiedUrl, uint64_t UrlContext, uint32_t Reserved) noexcept;
    uint32_t (__stdcall *HttpRemoveUrlFromUrlGroup)(uint64_t UrlGroupId, win32::Windows::Win32::Foundation::PWSTR pFullyQualifiedUrl, uint32_t Flags) noexcept;
    uint32_t (__stdcall *HttpSetUrlGroupProperty)(uint64_t UrlGroupId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength) noexcept;
    uint32_t (__stdcall *HttpQueryUrlGroupProperty)(uint64_t UrlGroupId, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t* ReturnLength) noexcept;
    uint32_t (__stdcall *HttpPrepareUrl)(void* Reserved, uint32_t Flags, win32::Windows::Win32::Foundation::PWSTR Url, win32::Windows::Win32::Foundation::PWSTR* PreparedUrl) noexcept;
    uint32_t (__stdcall *HttpReceiveHttpRequest)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::Networking::HttpServer::HTTP_RECEIVE_HTTP_REQUEST_FLAGS Flags, win32::Windows::Win32::Networking::HttpServer::HTTP_REQUEST_V2* RequestBuffer, uint32_t RequestBufferLength, uint32_t* BytesReturned, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpReceiveRequestEntityBody)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, void* EntityBuffer, uint32_t EntityBufferLength, uint32_t* BytesReturned, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpSendHttpResponse)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, win32::Windows::Win32::Networking::HttpServer::HTTP_RESPONSE_V2* HttpResponse, win32::Windows::Win32::Networking::HttpServer::HTTP_CACHE_POLICY* CachePolicy, uint32_t* BytesSent, void* Reserved1, uint32_t Reserved2, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped, win32::Windows::Win32::Networking::HttpServer::HTTP_LOG_DATA* LogData) noexcept;
    uint32_t (__stdcall *HttpSendResponseEntityBody)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, uint16_t EntityChunkCount, win32::Windows::Win32::Networking::HttpServer::HTTP_DATA_CHUNK* EntityChunks, uint32_t* BytesSent, void* Reserved1, uint32_t Reserved2, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped, win32::Windows::Win32::Networking::HttpServer::HTTP_LOG_DATA* LogData) noexcept;
    uint32_t (__stdcall *HttpDeclarePush)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::Networking::HttpServer::HTTP_VERB Verb, win32::Windows::Win32::Foundation::PWSTR Path, win32::Windows::Win32::Foundation::PSTR Query, win32::Windows::Win32::Networking::HttpServer::HTTP_REQUEST_HEADERS* Headers) noexcept;
    uint32_t (__stdcall *HttpWaitForDisconnect)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t ConnectionId, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpWaitForDisconnectEx)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t ConnectionId, uint32_t Reserved, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpCancelHttpRequest)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpWaitForDemandStart)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *HttpIsFeatureSupported)(win32::Windows::Win32::Networking::HttpServer::HTTP_FEATURE_ID FeatureId) noexcept;
    uint32_t (__stdcall *HttpDelegateRequestEx)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::HANDLE DelegateQueueHandle, uint64_t RequestId, uint64_t DelegateUrlGroupId, uint32_t PropertyInfoSetSize, win32::Windows::Win32::Networking::HttpServer::HTTP_DELEGATE_REQUEST_PROPERTY_INFO* PropertyInfoSet) noexcept;
    uint32_t (__stdcall *HttpFindUrlGroupId)(win32::Windows::Win32::Foundation::PWSTR FullyQualifiedUrl, win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, uint64_t* UrlGroupId) noexcept;
    uint32_t (__stdcall *HttpFlushResponseCache)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR UrlPrefix, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpAddFragmentToCache)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR UrlPrefix, win32::Windows::Win32::Networking::HttpServer::HTTP_DATA_CHUNK* DataChunk, win32::Windows::Win32::Networking::HttpServer::HTTP_CACHE_POLICY* CachePolicy, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpReadFragmentFromCache)(win32::Windows::Win32::Foundation::HANDLE RequestQueueHandle, win32::Windows::Win32::Foundation::PWSTR UrlPrefix, win32::Windows::Win32::Networking::HttpServer::HTTP_BYTE_RANGE* ByteRange, void* Buffer, uint32_t BufferLength, uint32_t* BytesRead, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpSetServiceConfiguration)(win32::Windows::Win32::Foundation::HANDLE ServiceHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* pConfigInformation, uint32_t ConfigInformationLength, win32::Windows::Win32::System::IO::OVERLAPPED* pOverlapped) noexcept;
    uint32_t (__stdcall *HttpUpdateServiceConfiguration)(win32::Windows::Win32::Foundation::HANDLE Handle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* ConfigInfo, uint32_t ConfigInfoLength, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *HttpDeleteServiceConfiguration)(win32::Windows::Win32::Foundation::HANDLE ServiceHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* pConfigInformation, uint32_t ConfigInformationLength, win32::Windows::Win32::System::IO::OVERLAPPED* pOverlapped) noexcept;
    uint32_t (__stdcall *HttpQueryServiceConfiguration)(win32::Windows::Win32::Foundation::HANDLE ServiceHandle, win32::Windows::Win32::Networking::HttpServer::HTTP_SERVICE_CONFIG_ID ConfigId, void* pInput, uint32_t InputLength, void* pOutput, uint32_t OutputLength, uint32_t* pReturnLength, win32::Windows::Win32::System::IO::OVERLAPPED* pOverlapped) noexcept;
    uint32_t (__stdcall *HttpGetExtension)(win32::Windows::Win32::Networking::HttpServer::HTTPAPI_VERSION Version, uint32_t Extension, void* Buffer, uint32_t BufferSize) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
