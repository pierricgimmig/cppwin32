// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_WinTrust_0_H
#define WIN32_Windows_Win32_Security_WinTrust_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOL;
    struct HRESULT;
    struct HWND;
    struct PSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security::Cryptography
{
    struct CERT_CONTEXT;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security::WinTrust
{
#pragma region enums
    enum class WINTRUST_DATA_REVOCATION_CHECKS : uint32_t
    {
        WTD_REVOKE_NONE = 0x0,
        WTD_REVOKE_WHOLECHAIN = 0x1,
    };
    enum class WINTRUST_DATA_STATE_ACTION : uint32_t
    {
        WTD_STATEACTION_IGNORE = 0x0,
        WTD_STATEACTION_VERIFY = 0x1,
        WTD_STATEACTION_CLOSE = 0x2,
        WTD_STATEACTION_AUTO_CACHE = 0x3,
        WTD_STATEACTION_AUTO_CACHE_FLUSH = 0x4,
    };
    enum class WINTRUST_DATA_UICHOICE : uint32_t
    {
        WTD_UI_ALL = 0x1,
        WTD_UI_NONE = 0x2,
        WTD_UI_NOBAD = 0x3,
        WTD_UI_NOGOOD = 0x4,
    };
    enum class WINTRUST_DATA_UICONTEXT : uint32_t
    {
        WTD_UICONTEXT_EXECUTE = 0x0,
        WTD_UICONTEXT_INSTALL = 0x1,
    };
    enum class WINTRUST_DATA_UNION_CHOICE : uint32_t
    {
        WTD_CHOICE_FILE = 0x1,
        WTD_CHOICE_CATALOG = 0x2,
        WTD_CHOICE_BLOB = 0x3,
        WTD_CHOICE_SIGNER = 0x4,
        WTD_CHOICE_CERT = 0x5,
    };
    enum class WINTRUST_GET_DEFAULT_FOR_USAGE_ACTION : uint32_t
    {
        DWACTION_ALLOCANDFILL = 0x1,
        DWACTION_FREE = 0x2,
    };
    enum class WINTRUST_POLICY_FLAGS : uint32_t
    {
        WTPF_TRUSTTEST = 0x20,
        WTPF_TESTCANBEVALID = 0x80,
        WTPF_IGNOREEXPIRATION = 0x100,
        WTPF_IGNOREREVOKATION = 0x200,
        WTPF_OFFLINEOK_IND = 0x400,
        WTPF_OFFLINEOK_COM = 0x800,
        WTPF_OFFLINEOKNBU_IND = 0x1000,
        WTPF_OFFLINEOKNBU_COM = 0x2000,
        WTPF_VERIFY_V1_OFF = 0x10000,
        WTPF_IGNOREREVOCATIONONTS = 0x20000,
        WTPF_ALLOWONLYPERTRUST = 0x40000,
    };
    enum class WINTRUST_SIGNATURE_SETTINGS_FLAGS : uint32_t
    {
        WSS_VERIFY_SPECIFIC = 0x1,
        WSS_GET_SECONDARY_SIG_COUNT = 0x2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CAT_MEMBERINFO;
    struct CAT_MEMBERINFO2;
    struct CAT_NAMEVALUE;
    struct CONFIG_CI_PROV_INFO;
    struct CONFIG_CI_PROV_INFO_RESULT;
    struct CRYPT_PROVIDER_CERT;
    struct CRYPT_PROVIDER_DATA;
    struct CRYPT_PROVIDER_DEFUSAGE;
    struct CRYPT_PROVIDER_FUNCTIONS;
    struct CRYPT_PROVIDER_PRIVDATA;
    struct CRYPT_PROVIDER_REGDEFUSAGE;
    struct CRYPT_PROVIDER_SGNR;
    struct CRYPT_PROVIDER_SIGSTATE;
    struct CRYPT_PROVUI_DATA;
    struct CRYPT_PROVUI_FUNCS;
    struct CRYPT_REGISTER_ACTIONID;
    struct CRYPT_TRUST_REG_ENTRY;
    struct DRIVER_VER_INFO;
    struct DRIVER_VER_MAJORMINOR;
    struct INTENT_TO_SEAL_ATTRIBUTE;
    struct PROVDATA_SIP;
    struct SEALING_SIGNATURE_ATTRIBUTE;
    struct SEALING_TIMESTAMP_ATTRIBUTE;
    struct SPC_FINANCIAL_CRITERIA;
    struct SPC_IMAGE;
    struct SPC_INDIRECT_DATA_CONTENT;
    struct SPC_LINK;
    struct SPC_PE_IMAGE_DATA;
    struct SPC_SERIALIZED_OBJECT;
    struct SPC_SIGINFO;
    struct SPC_SP_AGENCY_INFO;
    struct SPC_SP_OPUS_INFO;
    struct SPC_STATEMENT_TYPE;
    struct WINTRUST_BLOB_INFO;
    struct WINTRUST_CATALOG_INFO;
    struct WINTRUST_CERT_INFO;
    struct WINTRUST_DATA;
    struct WINTRUST_FILE_INFO;
    struct WINTRUST_SGNR_INFO;
    struct WINTRUST_SIGNATURE_SETTINGS;
    struct WIN_CERTIFICATE;
    struct WIN_SPUB_TRUSTED_PUBLISHER_DATA;
    struct WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT;
    struct WIN_TRUST_ACTDATA_SUBJECT_ONLY;
    struct WIN_TRUST_SUBJECT_FILE;
    struct WIN_TRUST_SUBJECT_FILE_AND_DISPLAY;
    struct WTD_GENERIC_CHAIN_POLICY_CREATE_INFO;
    struct WTD_GENERIC_CHAIN_POLICY_DATA;
    struct WTD_GENERIC_CHAIN_POLICY_SIGNER_INFO;
#pragma endregion forward_declarations

#pragma region delegates
    using PFN_CPD_MEM_ALLOC = void* __stdcall(uint32_t);
    using PFN_CPD_MEM_FREE = void __stdcall(void*);
    using PFN_CPD_ADD_STORE = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*, void*);
    using PFN_CPD_ADD_SGNR = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*, Windows::Win32::Foundation::BOOL, uint32_t, Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_SGNR*);
    using PFN_CPD_ADD_CERT = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*, uint32_t, Windows::Win32::Foundation::BOOL, uint32_t, Windows::Win32::Security::Cryptography::CERT_CONTEXT*);
    using PFN_CPD_ADD_PRIVDATA = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*, Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_PRIVDATA*);
    using PFN_PROVIDER_INIT_CALL = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_PROVIDER_OBJTRUST_CALL = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_PROVIDER_SIGTRUST_CALL = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_PROVIDER_CERTTRUST_CALL = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_PROVIDER_FINALPOLICY_CALL = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_PROVIDER_TESTFINALPOLICY_CALL = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_PROVIDER_CLEANUP_CALL = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_PROVIDER_CERTCHKPOLICY_CALL = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*, uint32_t, Windows::Win32::Foundation::BOOL, uint32_t);
    using PFN_PROVUI_CALL = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::HWND, Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*);
    using PFN_ALLOCANDFILLDEFUSAGE = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::PSTR, Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DEFUSAGE*);
    using PFN_FREEDEFUSAGE = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::PSTR, Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DEFUSAGE*);
    using PFN_WTD_GENERIC_CHAIN_POLICY_CALLBACK = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Security::WinTrust::CRYPT_PROVIDER_DATA*, uint32_t, uint32_t, uint32_t, Windows::Win32::Security::WinTrust::WTD_GENERIC_CHAIN_POLICY_SIGNER_INFO**, void*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif