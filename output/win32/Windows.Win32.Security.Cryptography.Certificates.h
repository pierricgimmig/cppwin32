// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_Cryptography_Certificates_H
#define WIN32_Windows_Win32_Security_Cryptography_Certificates_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Security.Cryptography.Certificates.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Security::Cryptography::Certificates
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvIsServerOnlineW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, win32::Windows::Win32::Foundation::BOOL* pfServerOnline) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupGetDynamicFileListW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzFileList, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupPrepareW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t grbitJet, win32::Windows::Win32::Security::Cryptography::Certificates::CSBACKUP_TYPE dwBackupFlags, void** phbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupGetDatabaseNamesW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzAttachmentInformation, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupOpenFileW(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszAttachmentName, uint32_t cbReadHintSize, win32::Windows::Win32::Foundation::LARGE_INTEGER* pliFileSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupRead(void* hbc, void* pvBuffer, uint32_t cbBuffer, uint32_t* pcbRead) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupClose(void* hbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupGetBackupLogsW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzBackupLogFiles, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupTruncateLogs(void* hbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupEnd(void* hbc) noexcept;
    void __stdcall ORBIT_IMPL_CertSrvBackupFree(void* pv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreGetDatabaseLocationsW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzDatabaseLocationList, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestorePrepareW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t dwRestoreFlags, void** phbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreRegisterW(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszCheckPointFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLogPath, win32::Windows::Win32::Security::Cryptography::Certificates::CSEDB_RSTMAPW* rgrstmap, int32_t crstmap, win32::Windows::Win32::Foundation::PWSTR pwszBackupLogPath, uint32_t genLow, uint32_t genHigh) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreRegisterThroughFile(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszCheckPointFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLogPath, win32::Windows::Win32::Security::Cryptography::Certificates::CSEDB_RSTMAPW* rgrstmap, int32_t crstmap, win32::Windows::Win32::Foundation::PWSTR pwszBackupLogPath, uint32_t genLow, uint32_t genHigh) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreRegisterComplete(void* hbc, win32::Windows::Win32::Foundation::HRESULT hrRestoreState) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreEnd(void* hbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvServerControlW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t dwControlFlags, uint32_t* pcbOut, uint8_t** ppbOut) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetTrustAnchors(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx** ppTrustedIssuers) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetTrustAnchorsEx(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCertContext, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx** ppTrustedIssuers) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetCertificateChain(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx* pTrustedIssuers, win32::Windows::Win32::Security::Cryptography::CERT_CHAIN_CONTEXT** ppCertChainContext) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetCertificates(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Foundation::BOOL bIsClient, uint32_t* pdwCertChainContextCount, win32::Windows::Win32::Security::Cryptography::CERT_CHAIN_CONTEXT*** ppCertChainContexts) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstAcquirePrivateKey(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstValidate(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, win32::Windows::Win32::Foundation::BOOL bIsClient, win32::Windows::Win32::Security::Cryptography::CERT_USAGE_MATCH* pRequestedIssuancePolicy, void** phAdditionalCertStore, win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, ::win32::guid* pProvGUID) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstMapCertificate(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, win32::Windows::Win32::Security::Authentication::Identity::LSA_TOKEN_INFORMATION_TYPE* pTokenInformationType, void** ppTokenInformation) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetUserNameForCertificate(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCertContext, win32::Windows::Win32::Foundation::UNICODE_STRING* UserName) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvIsServerOnlineW)(win32::Windows::Win32::Foundation::PWSTR pwszServerName, win32::Windows::Win32::Foundation::BOOL* pfServerOnline) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupGetDynamicFileListW)(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzFileList, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupPrepareW)(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t grbitJet, win32::Windows::Win32::Security::Cryptography::Certificates::CSBACKUP_TYPE dwBackupFlags, void** phbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupGetDatabaseNamesW)(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzAttachmentInformation, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupOpenFileW)(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszAttachmentName, uint32_t cbReadHintSize, win32::Windows::Win32::Foundation::LARGE_INTEGER* pliFileSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupRead)(void* hbc, void* pvBuffer, uint32_t cbBuffer, uint32_t* pcbRead) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupClose)(void* hbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupGetBackupLogsW)(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzBackupLogFiles, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupTruncateLogs)(void* hbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvBackupEnd)(void* hbc) noexcept;
    void (__stdcall *CertSrvBackupFree)(void* pv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvRestoreGetDatabaseLocationsW)(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzDatabaseLocationList, uint32_t* pcbSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvRestorePrepareW)(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t dwRestoreFlags, void** phbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvRestoreRegisterW)(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszCheckPointFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLogPath, win32::Windows::Win32::Security::Cryptography::Certificates::CSEDB_RSTMAPW* rgrstmap, int32_t crstmap, win32::Windows::Win32::Foundation::PWSTR pwszBackupLogPath, uint32_t genLow, uint32_t genHigh) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvRestoreRegisterThroughFile)(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszCheckPointFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLogPath, win32::Windows::Win32::Security::Cryptography::Certificates::CSEDB_RSTMAPW* rgrstmap, int32_t crstmap, win32::Windows::Win32::Foundation::PWSTR pwszBackupLogPath, uint32_t genLow, uint32_t genHigh) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvRestoreRegisterComplete)(void* hbc, win32::Windows::Win32::Foundation::HRESULT hrRestoreState) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvRestoreEnd)(void* hbc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CertSrvServerControlW)(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t dwControlFlags, uint32_t* pcbOut, uint8_t** ppbOut) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstGetTrustAnchors)(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx** ppTrustedIssuers) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstGetTrustAnchorsEx)(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCertContext, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx** ppTrustedIssuers) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstGetCertificateChain)(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx* pTrustedIssuers, win32::Windows::Win32::Security::Cryptography::CERT_CHAIN_CONTEXT** ppCertChainContext) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstGetCertificates)(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Foundation::BOOL bIsClient, uint32_t* pdwCertChainContextCount, win32::Windows::Win32::Security::Cryptography::CERT_CHAIN_CONTEXT*** ppCertChainContexts) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstAcquirePrivateKey)(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstValidate)(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, win32::Windows::Win32::Foundation::BOOL bIsClient, win32::Windows::Win32::Security::Cryptography::CERT_USAGE_MATCH* pRequestedIssuancePolicy, void** phAdditionalCertStore, win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, ::win32::guid* pProvGUID) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstMapCertificate)(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, win32::Windows::Win32::Security::Authentication::Identity::LSA_TOKEN_INFORMATION_TYPE* pTokenInformationType, void** ppTokenInformation) noexcept;
    win32::Windows::Win32::Foundation::NTSTATUS (__stdcall *PstGetUserNameForCertificate)(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCertContext, win32::Windows::Win32::Foundation::UNICODE_STRING* UserName) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif