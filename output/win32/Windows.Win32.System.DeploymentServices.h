// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_DeploymentServices_H
#define WIN32_Windows_Win32_System_DeploymentServices_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.DeploymentServices.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::DeploymentServices
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliClose(win32::Windows::Win32::Foundation::HANDLE Handle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliRegisterTrace(win32::Windows::Win32::System::DeploymentServices::PFN_WdsCliTraceFunction* pfn) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliFreeStringArray(win32::Windows::Win32::Foundation::PWSTR* ppwszArray, uint32_t ulCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliFindFirstImage(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::Foundation::HANDLE* phFindHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliFindNextImage(win32::Windows::Win32::Foundation::HANDLE Handle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetEnumerationFlags(win32::Windows::Win32::Foundation::HANDLE Handle, uint32_t* pdwFlags) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageHandleFromFindHandle(win32::Windows::Win32::Foundation::HANDLE FindHandle, win32::Windows::Win32::Foundation::HANDLE* phImageHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageHandleFromTransferHandle(win32::Windows::Win32::Foundation::HANDLE hTransfer, win32::Windows::Win32::Foundation::HANDLE* phImageHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliCreateSession(win32::Windows::Win32::Foundation::PWSTR pwszServer, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_CRED* pCred, win32::Windows::Win32::Foundation::HANDLE* phSession) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliAuthorizeSession(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_CRED* pCred) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliInitializeLog(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::System::DeploymentServices::CPU_ARCHITECTURE ulClientArchitecture, win32::Windows::Win32::Foundation::PWSTR pwszClientId, win32::Windows::Win32::Foundation::PWSTR pwszClientAddress) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliLog(win32::Windows::Win32::Foundation::HANDLE hSession, uint32_t ulLogLevel, uint32_t ulMessageCode) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageName(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageDescription(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageType(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_IMAGE_TYPE* pImageType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageFiles(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR** pppwszFiles, uint32_t* pdwCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageLanguage(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageLanguages(win32::Windows::Win32::Foundation::HANDLE hIfh, int8_t*** pppszValues, uint32_t* pdwNumValues) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageVersion(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImagePath(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageIndex(win32::Windows::Win32::Foundation::HANDLE hIfh, uint32_t* pdwValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageArchitecture(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::System::DeploymentServices::CPU_ARCHITECTURE* pdwValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageLastModifiedTime(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::SYSTEMTIME** ppSysTimeValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageSize(win32::Windows::Win32::Foundation::HANDLE hIfh, uint64_t* pullValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageHalName(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageGroup(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageNamespace(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetImageParameter(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_IMAGE_PARAM_TYPE ParamType, void* pResponse, uint32_t uResponseLen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetTransferSize(win32::Windows::Win32::Foundation::HANDLE hIfh, uint64_t* pullValue) noexcept;
    void __stdcall ORBIT_IMPL_WdsCliSetTransferBufferSize(uint32_t ulSizeInBytes) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliTransferImage(win32::Windows::Win32::Foundation::HANDLE hImage, win32::Windows::Win32::Foundation::PWSTR pwszLocalPath, uint32_t dwFlags, uint32_t dwReserved, win32::Windows::Win32::System::DeploymentServices::PFN_WdsCliCallback* pfnWdsCliCallback, void* pvUserData, win32::Windows::Win32::Foundation::HANDLE* phTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliTransferFile(win32::Windows::Win32::Foundation::PWSTR pwszServer, win32::Windows::Win32::Foundation::PWSTR pwszNamespace, win32::Windows::Win32::Foundation::PWSTR pwszRemoteFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLocalFilePath, uint32_t dwFlags, uint32_t dwReserved, win32::Windows::Win32::System::DeploymentServices::PFN_WdsCliCallback* pfnWdsCliCallback, void* pvUserData, win32::Windows::Win32::Foundation::HANDLE* phTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliCancelTransfer(win32::Windows::Win32::Foundation::HANDLE hTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliWaitForTransfer(win32::Windows::Win32::Foundation::HANDLE hTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliObtainDriverPackages(win32::Windows::Win32::Foundation::HANDLE hImage, win32::Windows::Win32::Foundation::PWSTR* ppwszServerName, win32::Windows::Win32::Foundation::PWSTR** pppwszDriverPackages, uint32_t* pulCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliObtainDriverPackagesEx(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::Foundation::PWSTR pwszMachineInfo, win32::Windows::Win32::Foundation::PWSTR* ppwszServerName, win32::Windows::Win32::Foundation::PWSTR** pppwszDriverPackages, uint32_t* pulCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsCliGetDriverQueryXml(win32::Windows::Win32::Foundation::PWSTR pwszWinDirPath, win32::Windows::Win32::Foundation::PWSTR* ppwszDriverQuery) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderRegister(win32::Windows::Win32::Foundation::PWSTR pszProviderName, win32::Windows::Win32::Foundation::PWSTR pszModulePath, uint32_t Index, win32::Windows::Win32::Foundation::BOOL bIsCritical, win32::Windows::Win32::System::Registry::HKEY* phProviderKey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderUnRegister(win32::Windows::Win32::Foundation::PWSTR pszProviderName) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderQueryIndex(win32::Windows::Win32::Foundation::PWSTR pszProviderName, uint32_t* puIndex) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderEnumFirst(win32::Windows::Win32::Foundation::HANDLE* phEnum) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderEnumNext(win32::Windows::Win32::Foundation::HANDLE hEnum, win32::Windows::Win32::System::DeploymentServices::PXE_PROVIDER** ppProvider) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderEnumClose(win32::Windows::Win32::Foundation::HANDLE hEnum) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderFreeInfo(win32::Windows::Win32::System::DeploymentServices::PXE_PROVIDER* pProvider) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeRegisterCallback(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t CallbackType, void* pCallbackFunction, void* pContext) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeSendReply(win32::Windows::Win32::Foundation::HANDLE hClientRequest, void* pPacket, uint32_t uPacketLen, win32::Windows::Win32::System::DeploymentServices::PXE_ADDRESS* pAddress) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeAsyncRecvDone(win32::Windows::Win32::Foundation::HANDLE hClientRequest, uint32_t Action) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeTrace(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pszFormat) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeTraceV(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pszFormat, int8_t* Params) noexcept;
    void* __stdcall ORBIT_IMPL_PxePacketAllocate(win32::Windows::Win32::Foundation::HANDLE hProvider, win32::Windows::Win32::Foundation::HANDLE hClientRequest, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxePacketFree(win32::Windows::Win32::Foundation::HANDLE hProvider, win32::Windows::Win32::Foundation::HANDLE hClientRequest, void* pPacket) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeProviderSetAttribute(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Attribute, void* pParameterBuffer, uint32_t uParamLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpInitialize(void* pRecvPacket, uint32_t uRecvPacketLen, void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6Initialize(void* pRequest, uint32_t cbRequest, void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpAppendOption(void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen, uint8_t bOption, uint8_t bOptionLen, void* pValue) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6AppendOption(void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed, uint16_t wOptionType, uint16_t cbOption, void* pOption) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpAppendOptionRaw(void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen, uint16_t uBufferLen, void* pBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6AppendOptionRaw(void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed, uint16_t cbBuffer, void* pBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpIsValid(void* pPacket, uint32_t uPacketLen, win32::Windows::Win32::Foundation::BOOL bRequestPacket, win32::Windows::Win32::Foundation::BOOL* pbPxeOptionPresent) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6IsValid(void* pPacket, uint32_t uPacketLen, win32::Windows::Win32::Foundation::BOOL bRequestPacket, win32::Windows::Win32::Foundation::BOOL* pbPxeOptionPresent) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpGetOptionValue(void* pPacket, uint32_t uPacketLen, uint32_t uInstance, uint8_t bOption, uint8_t* pbOptionLen, void** ppOptionValue) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6GetOptionValue(void* pPacket, uint32_t uPacketLen, uint32_t uInstance, uint16_t wOption, uint16_t* pwOptionLen, void** ppOptionValue) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpGetVendorOptionValue(void* pPacket, uint32_t uPacketLen, uint8_t bOption, uint32_t uInstance, uint8_t* pbOptionLen, void** ppOptionValue) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6GetVendorOptionValue(void* pPacket, uint32_t uPacketLen, uint32_t dwEnterpriseNumber, uint16_t wOption, uint32_t uInstance, uint16_t* pwOptionLen, void** ppOptionValue) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6ParseRelayForw(void* pRelayForwPacket, uint32_t uRelayForwPacketLen, win32::Windows::Win32::System::DeploymentServices::PXE_DHCPV6_NESTED_RELAY_MESSAGE* pRelayMessages, uint32_t nRelayMessages, uint32_t* pnRelayMessages, uint8_t** ppInnerPacket, uint32_t* pcbInnerPacket) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeDhcpv6CreateRelayRepl(win32::Windows::Win32::System::DeploymentServices::PXE_DHCPV6_NESTED_RELAY_MESSAGE* pRelayMessages, uint32_t nRelayMessages, uint8_t* pInnerPacket, uint32_t cbInnerPacket, void* pReplyBuffer, uint32_t cbReplyBuffer, uint32_t* pcbReplyBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeGetServerInfo(uint32_t uInfoType, void* pBuffer, uint32_t uBufferLen) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PxeGetServerInfoEx(uint32_t uInfoType, void* pBuffer, uint32_t uBufferLen, uint32_t* puBufferUsed) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsTransportServerRegisterCallback(win32::Windows::Win32::Foundation::HANDLE hProvider, win32::Windows::Win32::System::DeploymentServices::TRANSPORTPROVIDER_CALLBACK_ID CallbackId, void* pfnCallback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsTransportServerCompleteRead(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t ulBytesRead, void* pvUserData, win32::Windows::Win32::Foundation::HRESULT hReadResult) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsTransportServerTrace(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pwszFormat) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsTransportServerTraceV(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pwszFormat, int8_t* Params) noexcept;
    void* __stdcall ORBIT_IMPL_WdsTransportServerAllocateBuffer(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t ulBufferSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WdsTransportServerFreeBuffer(win32::Windows::Win32::Foundation::HANDLE hProvider, void* pvBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientInitialize() noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientInitializeSession(win32::Windows::Win32::System::DeploymentServices::WDS_TRANSPORTCLIENT_REQUEST* pSessionRequest, void* pCallerData, win32::Windows::Win32::Foundation::HANDLE* hSessionKey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientRegisterCallback(win32::Windows::Win32::Foundation::HANDLE hSessionKey, win32::Windows::Win32::System::DeploymentServices::TRANSPORTCLIENT_CALLBACK_ID CallbackId, void* pfnCallback) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientStartSession(win32::Windows::Win32::Foundation::HANDLE hSessionKey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientCompleteReceive(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t ulSize, win32::Windows::Win32::Foundation::ULARGE_INTEGER* pullOffset) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientCancelSession(win32::Windows::Win32::Foundation::HANDLE hSessionKey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientCancelSessionEx(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t dwErrorCode) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientWaitForCompletion(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t uTimeout) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientQueryStatus(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t* puStatus, uint32_t* puErrorCode) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientCloseSession(win32::Windows::Win32::Foundation::HANDLE hSessionKey) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientAddRefBuffer(void* pvBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientReleaseBuffer(void* pvBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsTransportClientShutdown() noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsBpParseInitialize(void* pPacket, uint32_t uPacketLen, uint8_t* pbPacketType, win32::Windows::Win32::Foundation::HANDLE* phHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsBpParseInitializev6(void* pPacket, uint32_t uPacketLen, uint8_t* pbPacketType, win32::Windows::Win32::Foundation::HANDLE* phHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsBpInitialize(uint8_t bPacketType, win32::Windows::Win32::Foundation::HANDLE* phHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsBpCloseHandle(win32::Windows::Win32::Foundation::HANDLE hHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsBpQueryOption(win32::Windows::Win32::Foundation::HANDLE hHandle, uint32_t uOption, uint32_t uValueLen, void* pValue, uint32_t* puBytes) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsBpAddOption(win32::Windows::Win32::Foundation::HANDLE hHandle, uint32_t uOption, uint32_t uValueLen, void* pValue) noexcept;
    uint32_t __stdcall ORBIT_IMPL_WdsBpGetOptionBuffer(win32::Windows::Win32::Foundation::HANDLE hHandle, uint32_t uBufferLen, void* pBuffer, uint32_t* puBytes) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliClose)(win32::Windows::Win32::Foundation::HANDLE Handle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliRegisterTrace)(win32::Windows::Win32::System::DeploymentServices::PFN_WdsCliTraceFunction* pfn) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliFreeStringArray)(win32::Windows::Win32::Foundation::PWSTR* ppwszArray, uint32_t ulCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliFindFirstImage)(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::Foundation::HANDLE* phFindHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliFindNextImage)(win32::Windows::Win32::Foundation::HANDLE Handle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetEnumerationFlags)(win32::Windows::Win32::Foundation::HANDLE Handle, uint32_t* pdwFlags) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageHandleFromFindHandle)(win32::Windows::Win32::Foundation::HANDLE FindHandle, win32::Windows::Win32::Foundation::HANDLE* phImageHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageHandleFromTransferHandle)(win32::Windows::Win32::Foundation::HANDLE hTransfer, win32::Windows::Win32::Foundation::HANDLE* phImageHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliCreateSession)(win32::Windows::Win32::Foundation::PWSTR pwszServer, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_CRED* pCred, win32::Windows::Win32::Foundation::HANDLE* phSession) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliAuthorizeSession)(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_CRED* pCred) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliInitializeLog)(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::System::DeploymentServices::CPU_ARCHITECTURE ulClientArchitecture, win32::Windows::Win32::Foundation::PWSTR pwszClientId, win32::Windows::Win32::Foundation::PWSTR pwszClientAddress) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliLog)(win32::Windows::Win32::Foundation::HANDLE hSession, uint32_t ulLogLevel, uint32_t ulMessageCode) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageName)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageDescription)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageType)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_IMAGE_TYPE* pImageType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageFiles)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR** pppwszFiles, uint32_t* pdwCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageLanguage)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageLanguages)(win32::Windows::Win32::Foundation::HANDLE hIfh, int8_t*** pppszValues, uint32_t* pdwNumValues) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageVersion)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImagePath)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageIndex)(win32::Windows::Win32::Foundation::HANDLE hIfh, uint32_t* pdwValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageArchitecture)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::System::DeploymentServices::CPU_ARCHITECTURE* pdwValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageLastModifiedTime)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::SYSTEMTIME** ppSysTimeValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageSize)(win32::Windows::Win32::Foundation::HANDLE hIfh, uint64_t* pullValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageHalName)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageGroup)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageNamespace)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::Foundation::PWSTR* ppwszValue) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetImageParameter)(win32::Windows::Win32::Foundation::HANDLE hIfh, win32::Windows::Win32::System::DeploymentServices::WDS_CLI_IMAGE_PARAM_TYPE ParamType, void* pResponse, uint32_t uResponseLen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetTransferSize)(win32::Windows::Win32::Foundation::HANDLE hIfh, uint64_t* pullValue) noexcept;
    void (__stdcall *WdsCliSetTransferBufferSize)(uint32_t ulSizeInBytes) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliTransferImage)(win32::Windows::Win32::Foundation::HANDLE hImage, win32::Windows::Win32::Foundation::PWSTR pwszLocalPath, uint32_t dwFlags, uint32_t dwReserved, win32::Windows::Win32::System::DeploymentServices::PFN_WdsCliCallback* pfnWdsCliCallback, void* pvUserData, win32::Windows::Win32::Foundation::HANDLE* phTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliTransferFile)(win32::Windows::Win32::Foundation::PWSTR pwszServer, win32::Windows::Win32::Foundation::PWSTR pwszNamespace, win32::Windows::Win32::Foundation::PWSTR pwszRemoteFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLocalFilePath, uint32_t dwFlags, uint32_t dwReserved, win32::Windows::Win32::System::DeploymentServices::PFN_WdsCliCallback* pfnWdsCliCallback, void* pvUserData, win32::Windows::Win32::Foundation::HANDLE* phTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliCancelTransfer)(win32::Windows::Win32::Foundation::HANDLE hTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliWaitForTransfer)(win32::Windows::Win32::Foundation::HANDLE hTransfer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliObtainDriverPackages)(win32::Windows::Win32::Foundation::HANDLE hImage, win32::Windows::Win32::Foundation::PWSTR* ppwszServerName, win32::Windows::Win32::Foundation::PWSTR** pppwszDriverPackages, uint32_t* pulCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliObtainDriverPackagesEx)(win32::Windows::Win32::Foundation::HANDLE hSession, win32::Windows::Win32::Foundation::PWSTR pwszMachineInfo, win32::Windows::Win32::Foundation::PWSTR* ppwszServerName, win32::Windows::Win32::Foundation::PWSTR** pppwszDriverPackages, uint32_t* pulCount) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsCliGetDriverQueryXml)(win32::Windows::Win32::Foundation::PWSTR pwszWinDirPath, win32::Windows::Win32::Foundation::PWSTR* ppwszDriverQuery) noexcept;
    uint32_t (__stdcall *PxeProviderRegister)(win32::Windows::Win32::Foundation::PWSTR pszProviderName, win32::Windows::Win32::Foundation::PWSTR pszModulePath, uint32_t Index, win32::Windows::Win32::Foundation::BOOL bIsCritical, win32::Windows::Win32::System::Registry::HKEY* phProviderKey) noexcept;
    uint32_t (__stdcall *PxeProviderUnRegister)(win32::Windows::Win32::Foundation::PWSTR pszProviderName) noexcept;
    uint32_t (__stdcall *PxeProviderQueryIndex)(win32::Windows::Win32::Foundation::PWSTR pszProviderName, uint32_t* puIndex) noexcept;
    uint32_t (__stdcall *PxeProviderEnumFirst)(win32::Windows::Win32::Foundation::HANDLE* phEnum) noexcept;
    uint32_t (__stdcall *PxeProviderEnumNext)(win32::Windows::Win32::Foundation::HANDLE hEnum, win32::Windows::Win32::System::DeploymentServices::PXE_PROVIDER** ppProvider) noexcept;
    uint32_t (__stdcall *PxeProviderEnumClose)(win32::Windows::Win32::Foundation::HANDLE hEnum) noexcept;
    uint32_t (__stdcall *PxeProviderFreeInfo)(win32::Windows::Win32::System::DeploymentServices::PXE_PROVIDER* pProvider) noexcept;
    uint32_t (__stdcall *PxeRegisterCallback)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t CallbackType, void* pCallbackFunction, void* pContext) noexcept;
    uint32_t (__stdcall *PxeSendReply)(win32::Windows::Win32::Foundation::HANDLE hClientRequest, void* pPacket, uint32_t uPacketLen, win32::Windows::Win32::System::DeploymentServices::PXE_ADDRESS* pAddress) noexcept;
    uint32_t (__stdcall *PxeAsyncRecvDone)(win32::Windows::Win32::Foundation::HANDLE hClientRequest, uint32_t Action) noexcept;
    uint32_t (__stdcall *PxeTrace)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pszFormat) noexcept;
    uint32_t (__stdcall *PxeTraceV)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pszFormat, int8_t* Params) noexcept;
    void* (__stdcall *PxePacketAllocate)(win32::Windows::Win32::Foundation::HANDLE hProvider, win32::Windows::Win32::Foundation::HANDLE hClientRequest, uint32_t uSize) noexcept;
    uint32_t (__stdcall *PxePacketFree)(win32::Windows::Win32::Foundation::HANDLE hProvider, win32::Windows::Win32::Foundation::HANDLE hClientRequest, void* pPacket) noexcept;
    uint32_t (__stdcall *PxeProviderSetAttribute)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Attribute, void* pParameterBuffer, uint32_t uParamLen) noexcept;
    uint32_t (__stdcall *PxeDhcpInitialize)(void* pRecvPacket, uint32_t uRecvPacketLen, void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen) noexcept;
    uint32_t (__stdcall *PxeDhcpv6Initialize)(void* pRequest, uint32_t cbRequest, void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed) noexcept;
    uint32_t (__stdcall *PxeDhcpAppendOption)(void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen, uint8_t bOption, uint8_t bOptionLen, void* pValue) noexcept;
    uint32_t (__stdcall *PxeDhcpv6AppendOption)(void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed, uint16_t wOptionType, uint16_t cbOption, void* pOption) noexcept;
    uint32_t (__stdcall *PxeDhcpAppendOptionRaw)(void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen, uint16_t uBufferLen, void* pBuffer) noexcept;
    uint32_t (__stdcall *PxeDhcpv6AppendOptionRaw)(void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed, uint16_t cbBuffer, void* pBuffer) noexcept;
    uint32_t (__stdcall *PxeDhcpIsValid)(void* pPacket, uint32_t uPacketLen, win32::Windows::Win32::Foundation::BOOL bRequestPacket, win32::Windows::Win32::Foundation::BOOL* pbPxeOptionPresent) noexcept;
    uint32_t (__stdcall *PxeDhcpv6IsValid)(void* pPacket, uint32_t uPacketLen, win32::Windows::Win32::Foundation::BOOL bRequestPacket, win32::Windows::Win32::Foundation::BOOL* pbPxeOptionPresent) noexcept;
    uint32_t (__stdcall *PxeDhcpGetOptionValue)(void* pPacket, uint32_t uPacketLen, uint32_t uInstance, uint8_t bOption, uint8_t* pbOptionLen, void** ppOptionValue) noexcept;
    uint32_t (__stdcall *PxeDhcpv6GetOptionValue)(void* pPacket, uint32_t uPacketLen, uint32_t uInstance, uint16_t wOption, uint16_t* pwOptionLen, void** ppOptionValue) noexcept;
    uint32_t (__stdcall *PxeDhcpGetVendorOptionValue)(void* pPacket, uint32_t uPacketLen, uint8_t bOption, uint32_t uInstance, uint8_t* pbOptionLen, void** ppOptionValue) noexcept;
    uint32_t (__stdcall *PxeDhcpv6GetVendorOptionValue)(void* pPacket, uint32_t uPacketLen, uint32_t dwEnterpriseNumber, uint16_t wOption, uint32_t uInstance, uint16_t* pwOptionLen, void** ppOptionValue) noexcept;
    uint32_t (__stdcall *PxeDhcpv6ParseRelayForw)(void* pRelayForwPacket, uint32_t uRelayForwPacketLen, win32::Windows::Win32::System::DeploymentServices::PXE_DHCPV6_NESTED_RELAY_MESSAGE* pRelayMessages, uint32_t nRelayMessages, uint32_t* pnRelayMessages, uint8_t** ppInnerPacket, uint32_t* pcbInnerPacket) noexcept;
    uint32_t (__stdcall *PxeDhcpv6CreateRelayRepl)(win32::Windows::Win32::System::DeploymentServices::PXE_DHCPV6_NESTED_RELAY_MESSAGE* pRelayMessages, uint32_t nRelayMessages, uint8_t* pInnerPacket, uint32_t cbInnerPacket, void* pReplyBuffer, uint32_t cbReplyBuffer, uint32_t* pcbReplyBuffer) noexcept;
    uint32_t (__stdcall *PxeGetServerInfo)(uint32_t uInfoType, void* pBuffer, uint32_t uBufferLen) noexcept;
    uint32_t (__stdcall *PxeGetServerInfoEx)(uint32_t uInfoType, void* pBuffer, uint32_t uBufferLen, uint32_t* puBufferUsed) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsTransportServerRegisterCallback)(win32::Windows::Win32::Foundation::HANDLE hProvider, win32::Windows::Win32::System::DeploymentServices::TRANSPORTPROVIDER_CALLBACK_ID CallbackId, void* pfnCallback) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsTransportServerCompleteRead)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t ulBytesRead, void* pvUserData, win32::Windows::Win32::Foundation::HRESULT hReadResult) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsTransportServerTrace)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pwszFormat) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsTransportServerTraceV)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t Severity, win32::Windows::Win32::Foundation::PWSTR pwszFormat, int8_t* Params) noexcept;
    void* (__stdcall *WdsTransportServerAllocateBuffer)(win32::Windows::Win32::Foundation::HANDLE hProvider, uint32_t ulBufferSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WdsTransportServerFreeBuffer)(win32::Windows::Win32::Foundation::HANDLE hProvider, void* pvBuffer) noexcept;
    uint32_t (__stdcall *WdsTransportClientInitialize)() noexcept;
    uint32_t (__stdcall *WdsTransportClientInitializeSession)(win32::Windows::Win32::System::DeploymentServices::WDS_TRANSPORTCLIENT_REQUEST* pSessionRequest, void* pCallerData, win32::Windows::Win32::Foundation::HANDLE* hSessionKey) noexcept;
    uint32_t (__stdcall *WdsTransportClientRegisterCallback)(win32::Windows::Win32::Foundation::HANDLE hSessionKey, win32::Windows::Win32::System::DeploymentServices::TRANSPORTCLIENT_CALLBACK_ID CallbackId, void* pfnCallback) noexcept;
    uint32_t (__stdcall *WdsTransportClientStartSession)(win32::Windows::Win32::Foundation::HANDLE hSessionKey) noexcept;
    uint32_t (__stdcall *WdsTransportClientCompleteReceive)(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t ulSize, win32::Windows::Win32::Foundation::ULARGE_INTEGER* pullOffset) noexcept;
    uint32_t (__stdcall *WdsTransportClientCancelSession)(win32::Windows::Win32::Foundation::HANDLE hSessionKey) noexcept;
    uint32_t (__stdcall *WdsTransportClientCancelSessionEx)(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t dwErrorCode) noexcept;
    uint32_t (__stdcall *WdsTransportClientWaitForCompletion)(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t uTimeout) noexcept;
    uint32_t (__stdcall *WdsTransportClientQueryStatus)(win32::Windows::Win32::Foundation::HANDLE hSessionKey, uint32_t* puStatus, uint32_t* puErrorCode) noexcept;
    uint32_t (__stdcall *WdsTransportClientCloseSession)(win32::Windows::Win32::Foundation::HANDLE hSessionKey) noexcept;
    uint32_t (__stdcall *WdsTransportClientAddRefBuffer)(void* pvBuffer) noexcept;
    uint32_t (__stdcall *WdsTransportClientReleaseBuffer)(void* pvBuffer) noexcept;
    uint32_t (__stdcall *WdsTransportClientShutdown)() noexcept;
    uint32_t (__stdcall *WdsBpParseInitialize)(void* pPacket, uint32_t uPacketLen, uint8_t* pbPacketType, win32::Windows::Win32::Foundation::HANDLE* phHandle) noexcept;
    uint32_t (__stdcall *WdsBpParseInitializev6)(void* pPacket, uint32_t uPacketLen, uint8_t* pbPacketType, win32::Windows::Win32::Foundation::HANDLE* phHandle) noexcept;
    uint32_t (__stdcall *WdsBpInitialize)(uint8_t bPacketType, win32::Windows::Win32::Foundation::HANDLE* phHandle) noexcept;
    uint32_t (__stdcall *WdsBpCloseHandle)(win32::Windows::Win32::Foundation::HANDLE hHandle) noexcept;
    uint32_t (__stdcall *WdsBpQueryOption)(win32::Windows::Win32::Foundation::HANDLE hHandle, uint32_t uOption, uint32_t uValueLen, void* pValue, uint32_t* puBytes) noexcept;
    uint32_t (__stdcall *WdsBpAddOption)(win32::Windows::Win32::Foundation::HANDLE hHandle, uint32_t uOption, uint32_t uValueLen, void* pValue) noexcept;
    uint32_t (__stdcall *WdsBpGetOptionBuffer)(win32::Windows::Win32::Foundation::HANDLE hHandle, uint32_t uBufferLen, void* pBuffer, uint32_t* puBytes) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif