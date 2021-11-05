// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_Cryptography_Catalog_H
#define WIN32_Windows_Win32_Security_Cryptography_Catalog_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Security.Cryptography.Catalog.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Security::Cryptography::Catalog
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_CryptCATOpen(win32::Windows::Win32::Foundation::PWSTR pwszFileName, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCAT_OPEN_FLAGS fdwOpenFlags, size_t hProv, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCAT_VERSION dwPublicVersion, uint32_t dwEncodingType) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATClose(win32::Windows::Win32::Foundation::HANDLE hCatalog) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATSTORE* __stdcall ORBIT_IMPL_CryptCATStoreFromHandle(win32::Windows::Win32::Foundation::HANDLE hCatalog) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_CryptCATHandleFromStore(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATSTORE* pCatStore) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATPersistStore(win32::Windows::Win32::Foundation::HANDLE hCatalog) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATGetCatAttrInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATPutCatAttrInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag, uint32_t dwAttrTypeAndAction, uint32_t cbData, uint8_t* pbData) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATEnumerateCatAttr(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* __stdcall ORBIT_IMPL_CryptCATGetMemberInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* __stdcall ORBIT_IMPL_CryptCATAllocSortedMemberInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    void __stdcall ORBIT_IMPL_CryptCATFreeSortedMemberInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATGetAttrInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* __stdcall ORBIT_IMPL_CryptCATPutMemberInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszFileName, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag, ::win32::guid* pgSubjectType, uint32_t dwCertVersion, uint32_t cbSIPIndirectData, uint8_t* pbSIPIndirectData) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATPutAttrInfo(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag, uint32_t dwAttrTypeAndAction, uint32_t cbData, uint8_t* pbData) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* __stdcall ORBIT_IMPL_CryptCATEnumerateMember(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pPrevMember) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATEnumerateAttr(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* __stdcall ORBIT_IMPL_CryptCATCDFOpen(win32::Windows::Win32::Foundation::PWSTR pwszFilePath, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATCDFClose(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATCDFEnumCatAttributes(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* __stdcall ORBIT_IMPL_CryptCATCDFEnumMembers(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pPrevMember, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* __stdcall ORBIT_IMPL_CryptCATCDFEnumAttributes(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pMember, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_IsCatalogFile(win32::Windows::Win32::Foundation::HANDLE hFile, win32::Windows::Win32::Foundation::PWSTR pwszFileName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminAcquireContext(intptr_t* phCatAdmin, ::win32::guid* pgSubsystem, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminAcquireContext2(intptr_t* phCatAdmin, ::win32::guid* pgSubsystem, win32::Windows::Win32::Foundation::PWSTR pwszHashAlgorithm, win32::Windows::Win32::Security::Cryptography::CERT_STRONG_SIGN_PARA* pStrongHashPolicy, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminReleaseContext(intptr_t hCatAdmin, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminReleaseCatalogContext(intptr_t hCatAdmin, intptr_t hCatInfo, uint32_t dwFlags) noexcept;
    intptr_t __stdcall ORBIT_IMPL_CryptCATAdminEnumCatalogFromHash(intptr_t hCatAdmin, uint8_t* pbHash, uint32_t cbHash, uint32_t dwFlags, intptr_t* phPrevCatInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminCalcHashFromFileHandle(win32::Windows::Win32::Foundation::HANDLE hFile, uint32_t* pcbHash, uint8_t* pbHash, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminCalcHashFromFileHandle2(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::HANDLE hFile, uint32_t* pcbHash, uint8_t* pbHash, uint32_t dwFlags) noexcept;
    intptr_t __stdcall ORBIT_IMPL_CryptCATAdminAddCatalog(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::PWSTR pwszCatalogFile, win32::Windows::Win32::Foundation::PWSTR pwszSelectBaseName, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminRemoveCatalog(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::PWSTR pwszCatalogFile, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATCatalogInfoFromContext(intptr_t hCatInfo, win32::Windows::Win32::Security::Cryptography::Catalog::CATALOG_INFO* psCatInfo, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminResolveCatalogPath(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::PWSTR pwszCatalogFile, win32::Windows::Win32::Security::Cryptography::Catalog::CATALOG_INFO* psCatInfo, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CryptCATAdminPauseServiceForBackup(uint32_t dwFlags, win32::Windows::Win32::Foundation::BOOL fResume) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *CryptCATOpen)(win32::Windows::Win32::Foundation::PWSTR pwszFileName, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCAT_OPEN_FLAGS fdwOpenFlags, size_t hProv, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCAT_VERSION dwPublicVersion, uint32_t dwEncodingType) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATClose)(win32::Windows::Win32::Foundation::HANDLE hCatalog) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATSTORE* (__stdcall *CryptCATStoreFromHandle)(win32::Windows::Win32::Foundation::HANDLE hCatalog) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *CryptCATHandleFromStore)(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATSTORE* pCatStore) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATPersistStore)(win32::Windows::Win32::Foundation::HANDLE hCatalog) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATGetCatAttrInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATPutCatAttrInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag, uint32_t dwAttrTypeAndAction, uint32_t cbData, uint8_t* pbData) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATEnumerateCatAttr)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* (__stdcall *CryptCATGetMemberInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* (__stdcall *CryptCATAllocSortedMemberInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    void (__stdcall *CryptCATFreeSortedMemberInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATGetAttrInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* (__stdcall *CryptCATPutMemberInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Foundation::PWSTR pwszFileName, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag, ::win32::guid* pgSubjectType, uint32_t dwCertVersion, uint32_t cbSIPIndirectData, uint8_t* pbSIPIndirectData) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATPutAttrInfo)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember, win32::Windows::Win32::Foundation::PWSTR pwszReferenceTag, uint32_t dwAttrTypeAndAction, uint32_t cbData, uint8_t* pbData) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* (__stdcall *CryptCATEnumerateMember)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pPrevMember) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATEnumerateAttr)(win32::Windows::Win32::Foundation::HANDLE hCatalog, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pCatMember, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* (__stdcall *CryptCATCDFOpen)(win32::Windows::Win32::Foundation::PWSTR pwszFilePath, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATCDFClose)(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATCDFEnumCatAttributes)(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* (__stdcall *CryptCATCDFEnumMembers)(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pPrevMember, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* (__stdcall *CryptCATCDFEnumAttributes)(win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATCDF* pCDF, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATMEMBER* pMember, win32::Windows::Win32::Security::Cryptography::Catalog::CRYPTCATATTRIBUTE* pPrevAttr, win32::Windows::Win32::Security::Cryptography::Catalog::PFN_CDF_PARSE_ERROR_CALLBACK* pfnParseError) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *IsCatalogFile)(win32::Windows::Win32::Foundation::HANDLE hFile, win32::Windows::Win32::Foundation::PWSTR pwszFileName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminAcquireContext)(intptr_t* phCatAdmin, ::win32::guid* pgSubsystem, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminAcquireContext2)(intptr_t* phCatAdmin, ::win32::guid* pgSubsystem, win32::Windows::Win32::Foundation::PWSTR pwszHashAlgorithm, win32::Windows::Win32::Security::Cryptography::CERT_STRONG_SIGN_PARA* pStrongHashPolicy, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminReleaseContext)(intptr_t hCatAdmin, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminReleaseCatalogContext)(intptr_t hCatAdmin, intptr_t hCatInfo, uint32_t dwFlags) noexcept;
    intptr_t (__stdcall *CryptCATAdminEnumCatalogFromHash)(intptr_t hCatAdmin, uint8_t* pbHash, uint32_t cbHash, uint32_t dwFlags, intptr_t* phPrevCatInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminCalcHashFromFileHandle)(win32::Windows::Win32::Foundation::HANDLE hFile, uint32_t* pcbHash, uint8_t* pbHash, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminCalcHashFromFileHandle2)(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::HANDLE hFile, uint32_t* pcbHash, uint8_t* pbHash, uint32_t dwFlags) noexcept;
    intptr_t (__stdcall *CryptCATAdminAddCatalog)(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::PWSTR pwszCatalogFile, win32::Windows::Win32::Foundation::PWSTR pwszSelectBaseName, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminRemoveCatalog)(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::PWSTR pwszCatalogFile, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATCatalogInfoFromContext)(intptr_t hCatInfo, win32::Windows::Win32::Security::Cryptography::Catalog::CATALOG_INFO* psCatInfo, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminResolveCatalogPath)(intptr_t hCatAdmin, win32::Windows::Win32::Foundation::PWSTR pwszCatalogFile, win32::Windows::Win32::Security::Cryptography::Catalog::CATALOG_INFO* psCatInfo, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CryptCATAdminPauseServiceForBackup)(uint32_t dwFlags, win32::Windows::Win32::Foundation::BOOL fResume) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
