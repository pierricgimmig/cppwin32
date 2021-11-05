// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_Cryptography_Catalog_0_H
#define WIN32_Windows_Win32_Security_Cryptography_Catalog_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security::Cryptography::Catalog
{
#pragma region enums
    enum class CRYPTCAT_OPEN_FLAGS : uint32_t
    {
        CRYPTCAT_OPEN_ALWAYS = 0x2,
        CRYPTCAT_OPEN_CREATENEW = 0x1,
        CRYPTCAT_OPEN_EXISTING = 0x4,
        CRYPTCAT_OPEN_EXCLUDE_PAGE_HASHES = 0x10000,
        CRYPTCAT_OPEN_INCLUDE_PAGE_HASHES = 0x20000,
        CRYPTCAT_OPEN_VERIFYSIGHASH = 0x10000000,
        CRYPTCAT_OPEN_NO_CONTENT_HCRYPTMSG = 0x20000000,
        CRYPTCAT_OPEN_SORTED = 0x40000000,
        CRYPTCAT_OPEN_FLAGS_MASK = 0xffff0000,
    };
    enum class CRYPTCAT_VERSION : uint32_t
    {
        CRYPTCAT_VERSION_1 = 0x100,
        CRYPTCAT_VERSION_2 = 0x200,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CATALOG_INFO;
    struct CRYPTCATATTRIBUTE;
    struct CRYPTCATCDF;
    struct CRYPTCATMEMBER;
    struct CRYPTCATSTORE;
#pragma endregion forward_declarations

#pragma region delegates
    using PFN_CDF_PARSE_ERROR_CALLBACK = void __stdcall(uint32_t, uint32_t, Windows::Win32::Foundation::PWSTR);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif