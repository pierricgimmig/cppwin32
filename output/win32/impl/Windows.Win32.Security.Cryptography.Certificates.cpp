// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_Cryptography_Certificates_2_H
#define WIN32_Windows_Win32_Security_Cryptography_Certificates_2_H
#include "win32/Windows.Win32.Security.Cryptography.Certificates.h"
#include "win32/impl/Windows.Win32.Security.Cryptography.Certificates.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Security::Cryptography::Certificates
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvIsServerOnlineW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, win32::Windows::Win32::Foundation::BOOL* pfServerOnline) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pwszServerName);
        ORBIT_TRACK_PARAM(pfServerOnline);

        auto win32_impl_result = g_api_table.CertSrvIsServerOnlineW(pwszServerName, pfServerOnline);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupGetDynamicFileListW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzFileList, uint32_t* pcbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(ppwszzFileList);
        ORBIT_TRACK_PARAM(pcbSize);

        auto win32_impl_result = g_api_table.CertSrvBackupGetDynamicFileListW(hbc, ppwszzFileList, pcbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupPrepareW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t grbitJet, win32::Windows::Win32::Security::Cryptography::Certificates::CSBACKUP_TYPE dwBackupFlags, void** phbc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pwszServerName);
        ORBIT_TRACK_PARAM(grbitJet);
        ORBIT_TRACK_PARAM(dwBackupFlags);
        ORBIT_TRACK_PARAM(phbc);

        auto win32_impl_result = g_api_table.CertSrvBackupPrepareW(pwszServerName, grbitJet, dwBackupFlags, phbc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupGetDatabaseNamesW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzAttachmentInformation, uint32_t* pcbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(ppwszzAttachmentInformation);
        ORBIT_TRACK_PARAM(pcbSize);

        auto win32_impl_result = g_api_table.CertSrvBackupGetDatabaseNamesW(hbc, ppwszzAttachmentInformation, pcbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupOpenFileW(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszAttachmentName, uint32_t cbReadHintSize, win32::Windows::Win32::Foundation::LARGE_INTEGER* pliFileSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(pwszAttachmentName);
        ORBIT_TRACK_PARAM(cbReadHintSize);
        ORBIT_TRACK_PARAM(pliFileSize);

        auto win32_impl_result = g_api_table.CertSrvBackupOpenFileW(hbc, pwszAttachmentName, cbReadHintSize, pliFileSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupRead(void* hbc, void* pvBuffer, uint32_t cbBuffer, uint32_t* pcbRead) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(pvBuffer);
        ORBIT_TRACK_PARAM(cbBuffer);
        ORBIT_TRACK_PARAM(pcbRead);

        auto win32_impl_result = g_api_table.CertSrvBackupRead(hbc, pvBuffer, cbBuffer, pcbRead);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupClose(void* hbc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);

        auto win32_impl_result = g_api_table.CertSrvBackupClose(hbc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupGetBackupLogsW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzBackupLogFiles, uint32_t* pcbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(ppwszzBackupLogFiles);
        ORBIT_TRACK_PARAM(pcbSize);

        auto win32_impl_result = g_api_table.CertSrvBackupGetBackupLogsW(hbc, ppwszzBackupLogFiles, pcbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupTruncateLogs(void* hbc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);

        auto win32_impl_result = g_api_table.CertSrvBackupTruncateLogs(hbc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvBackupEnd(void* hbc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);

        auto win32_impl_result = g_api_table.CertSrvBackupEnd(hbc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_CertSrvBackupFree(void* pv) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pv);

        g_api_table.CertSrvBackupFree(pv);
        
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreGetDatabaseLocationsW(void* hbc, win32::Windows::Win32::Foundation::PWSTR* ppwszzDatabaseLocationList, uint32_t* pcbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(ppwszzDatabaseLocationList);
        ORBIT_TRACK_PARAM(pcbSize);

        auto win32_impl_result = g_api_table.CertSrvRestoreGetDatabaseLocationsW(hbc, ppwszzDatabaseLocationList, pcbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestorePrepareW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t dwRestoreFlags, void** phbc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pwszServerName);
        ORBIT_TRACK_PARAM(dwRestoreFlags);
        ORBIT_TRACK_PARAM(phbc);

        auto win32_impl_result = g_api_table.CertSrvRestorePrepareW(pwszServerName, dwRestoreFlags, phbc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreRegisterW(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszCheckPointFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLogPath, win32::Windows::Win32::Security::Cryptography::Certificates::CSEDB_RSTMAPW* rgrstmap, int32_t crstmap, win32::Windows::Win32::Foundation::PWSTR pwszBackupLogPath, uint32_t genLow, uint32_t genHigh) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(pwszCheckPointFilePath);
        ORBIT_TRACK_PARAM(pwszLogPath);
        ORBIT_TRACK_PARAM(rgrstmap);
        ORBIT_TRACK_PARAM(crstmap);
        ORBIT_TRACK_PARAM(pwszBackupLogPath);
        ORBIT_TRACK_PARAM(genLow);
        ORBIT_TRACK_PARAM(genHigh);

        auto win32_impl_result = g_api_table.CertSrvRestoreRegisterW(hbc, pwszCheckPointFilePath, pwszLogPath, rgrstmap, crstmap, pwszBackupLogPath, genLow, genHigh);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreRegisterThroughFile(void* hbc, win32::Windows::Win32::Foundation::PWSTR pwszCheckPointFilePath, win32::Windows::Win32::Foundation::PWSTR pwszLogPath, win32::Windows::Win32::Security::Cryptography::Certificates::CSEDB_RSTMAPW* rgrstmap, int32_t crstmap, win32::Windows::Win32::Foundation::PWSTR pwszBackupLogPath, uint32_t genLow, uint32_t genHigh) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(pwszCheckPointFilePath);
        ORBIT_TRACK_PARAM(pwszLogPath);
        ORBIT_TRACK_PARAM(rgrstmap);
        ORBIT_TRACK_PARAM(crstmap);
        ORBIT_TRACK_PARAM(pwszBackupLogPath);
        ORBIT_TRACK_PARAM(genLow);
        ORBIT_TRACK_PARAM(genHigh);

        auto win32_impl_result = g_api_table.CertSrvRestoreRegisterThroughFile(hbc, pwszCheckPointFilePath, pwszLogPath, rgrstmap, crstmap, pwszBackupLogPath, genLow, genHigh);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreRegisterComplete(void* hbc, win32::Windows::Win32::Foundation::HRESULT hrRestoreState) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);
        ORBIT_TRACK_PARAM(hrRestoreState);

        auto win32_impl_result = g_api_table.CertSrvRestoreRegisterComplete(hbc, hrRestoreState);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvRestoreEnd(void* hbc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hbc);

        auto win32_impl_result = g_api_table.CertSrvRestoreEnd(hbc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CertSrvServerControlW(win32::Windows::Win32::Foundation::PWSTR pwszServerName, uint32_t dwControlFlags, uint32_t* pcbOut, uint8_t** ppbOut) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pwszServerName);
        ORBIT_TRACK_PARAM(dwControlFlags);
        ORBIT_TRACK_PARAM(pcbOut);
        ORBIT_TRACK_PARAM(ppbOut);

        auto win32_impl_result = g_api_table.CertSrvServerControlW(pwszServerName, dwControlFlags, pcbOut, ppbOut);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetTrustAnchors(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx** ppTrustedIssuers) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pTargetName);
        ORBIT_TRACK_PARAM(cCriteria);
        ORBIT_TRACK_PARAM(rgpCriteria);
        ORBIT_TRACK_PARAM(ppTrustedIssuers);

        auto win32_impl_result = g_api_table.PstGetTrustAnchors(pTargetName, cCriteria, rgpCriteria, ppTrustedIssuers);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetTrustAnchorsEx(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCertContext, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx** ppTrustedIssuers) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pTargetName);
        ORBIT_TRACK_PARAM(cCriteria);
        ORBIT_TRACK_PARAM(rgpCriteria);
        ORBIT_TRACK_PARAM(pCertContext);
        ORBIT_TRACK_PARAM(ppTrustedIssuers);

        auto win32_impl_result = g_api_table.PstGetTrustAnchorsEx(pTargetName, cCriteria, rgpCriteria, pCertContext, ppTrustedIssuers);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetCertificateChain(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, win32::Windows::Win32::Security::Authentication::Identity::SecPkgContext_IssuerListInfoEx* pTrustedIssuers, win32::Windows::Win32::Security::Cryptography::CERT_CHAIN_CONTEXT** ppCertChainContext) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pCert);
        ORBIT_TRACK_PARAM(pTrustedIssuers);
        ORBIT_TRACK_PARAM(ppCertChainContext);

        auto win32_impl_result = g_api_table.PstGetCertificateChain(pCert, pTrustedIssuers, ppCertChainContext);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetCertificates(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, uint32_t cCriteria, win32::Windows::Win32::Security::Cryptography::CERT_SELECT_CRITERIA* rgpCriteria, win32::Windows::Win32::Foundation::BOOL bIsClient, uint32_t* pdwCertChainContextCount, win32::Windows::Win32::Security::Cryptography::CERT_CHAIN_CONTEXT*** ppCertChainContexts) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pTargetName);
        ORBIT_TRACK_PARAM(cCriteria);
        ORBIT_TRACK_PARAM(rgpCriteria);
        ORBIT_TRACK_PARAM(bIsClient);
        ORBIT_TRACK_PARAM(pdwCertChainContextCount);
        ORBIT_TRACK_PARAM(ppCertChainContexts);

        auto win32_impl_result = g_api_table.PstGetCertificates(pTargetName, cCriteria, rgpCriteria, bIsClient, pdwCertChainContextCount, ppCertChainContexts);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstAcquirePrivateKey(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pCert);

        auto win32_impl_result = g_api_table.PstAcquirePrivateKey(pCert);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstValidate(win32::Windows::Win32::Foundation::UNICODE_STRING* pTargetName, win32::Windows::Win32::Foundation::BOOL bIsClient, win32::Windows::Win32::Security::Cryptography::CERT_USAGE_MATCH* pRequestedIssuancePolicy, void** phAdditionalCertStore, win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, ::win32::guid* pProvGUID) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pTargetName);
        ORBIT_TRACK_PARAM(bIsClient);
        ORBIT_TRACK_PARAM(pRequestedIssuancePolicy);
        ORBIT_TRACK_PARAM(phAdditionalCertStore);
        ORBIT_TRACK_PARAM(pCert);
        ORBIT_TRACK_PARAM(pProvGUID);

        auto win32_impl_result = g_api_table.PstValidate(pTargetName, bIsClient, pRequestedIssuancePolicy, phAdditionalCertStore, pCert, pProvGUID);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstMapCertificate(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCert, win32::Windows::Win32::Security::Authentication::Identity::LSA_TOKEN_INFORMATION_TYPE* pTokenInformationType, void** ppTokenInformation) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pCert);
        ORBIT_TRACK_PARAM(pTokenInformationType);
        ORBIT_TRACK_PARAM(ppTokenInformation);

        auto win32_impl_result = g_api_table.PstMapCertificate(pCert, pTokenInformationType, ppTokenInformation);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::NTSTATUS __stdcall ORBIT_IMPL_PstGetUserNameForCertificate(win32::Windows::Win32::Security::Cryptography::CERT_CONTEXT* pCertContext, win32::Windows::Win32::Foundation::UNICODE_STRING* UserName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pCertContext);
        ORBIT_TRACK_PARAM(UserName);

        auto win32_impl_result = g_api_table.PstGetUserNameForCertificate(pCertContext, UserName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
