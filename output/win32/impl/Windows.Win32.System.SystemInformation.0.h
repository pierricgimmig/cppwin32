// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_SystemInformation_0_H
#define WIN32_Windows_Win32_System_SystemInformation_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct PSTR;
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::SystemInformation
{
#pragma region enums
    enum class COMPUTER_NAME_FORMAT : int32_t
    {
        ComputerNameNetBIOS = 0,
        ComputerNameDnsHostname = 1,
        ComputerNameDnsDomain = 2,
        ComputerNameDnsFullyQualified = 3,
        ComputerNamePhysicalNetBIOS = 4,
        ComputerNamePhysicalDnsHostname = 5,
        ComputerNamePhysicalDnsDomain = 6,
        ComputerNamePhysicalDnsFullyQualified = 7,
        ComputerNameMax = 8,
    };
    enum class CPU_SET_INFORMATION_TYPE : int32_t
    {
        CpuSetInformation = 0,
    };
    enum class DEP_SYSTEM_POLICY_TYPE : int32_t
    {
        DEPPolicyAlwaysOff = 0,
        DEPPolicyAlwaysOn = 1,
        DEPPolicyOptIn = 2,
        DEPPolicyOptOut = 3,
        DEPTotalPolicyCount = 4,
    };
    enum class FIRMWARE_TABLE_PROVIDER : uint32_t
    {
        ACPI = 0x41435049,
        FIRM = 0x4649524d,
        RSMB = 0x52534d42,
    };
    enum class FIRMWARE_TYPE : int32_t
    {
        FirmwareTypeUnknown = 0,
        FirmwareTypeBios = 1,
        FirmwareTypeUefi = 2,
        FirmwareTypeMax = 3,
    };
    enum class LOGICAL_PROCESSOR_RELATIONSHIP : int32_t
    {
        RelationProcessorCore = 0,
        RelationNumaNode = 1,
        RelationCache = 2,
        RelationProcessorPackage = 3,
        RelationGroup = 4,
        RelationProcessorDie = 5,
        RelationNumaNodeEx = 6,
        RelationProcessorModule = 7,
        RelationAll = 65535,
    };
    enum class OS_PRODUCT_TYPE : uint32_t
    {
        PRODUCT_BUSINESS = 0x6,
        PRODUCT_BUSINESS_N = 0x10,
        PRODUCT_CLUSTER_SERVER = 0x12,
        PRODUCT_CLUSTER_SERVER_V = 0x40,
        PRODUCT_CORE = 0x65,
        PRODUCT_CORE_COUNTRYSPECIFIC = 0x63,
        PRODUCT_CORE_N = 0x62,
        PRODUCT_CORE_SINGLELANGUAGE = 0x64,
        PRODUCT_DATACENTER_EVALUATION_SERVER = 0x50,
        PRODUCT_DATACENTER_A_SERVER_CORE = 0x91,
        PRODUCT_STANDARD_A_SERVER_CORE = 0x92,
        PRODUCT_DATACENTER_SERVER = 0x8,
        PRODUCT_DATACENTER_SERVER_CORE = 0xc,
        PRODUCT_DATACENTER_SERVER_CORE_V = 0x27,
        PRODUCT_DATACENTER_SERVER_V = 0x25,
        PRODUCT_EDUCATION = 0x79,
        PRODUCT_EDUCATION_N = 0x7a,
        PRODUCT_ENTERPRISE = 0x4,
        PRODUCT_ENTERPRISE_E = 0x46,
        PRODUCT_ENTERPRISE_EVALUATION = 0x48,
        PRODUCT_ENTERPRISE_N = 0x1b,
        PRODUCT_ENTERPRISE_N_EVALUATION = 0x54,
        PRODUCT_ENTERPRISE_S = 0x7d,
        PRODUCT_ENTERPRISE_S_EVALUATION = 0x81,
        PRODUCT_ENTERPRISE_S_N = 0x7e,
        PRODUCT_ENTERPRISE_S_N_EVALUATION = 0x82,
        PRODUCT_ENTERPRISE_SERVER = 0xa,
        PRODUCT_ENTERPRISE_SERVER_CORE = 0xe,
        PRODUCT_ENTERPRISE_SERVER_CORE_V = 0x29,
        PRODUCT_ENTERPRISE_SERVER_IA64 = 0xf,
        PRODUCT_ENTERPRISE_SERVER_V = 0x26,
        PRODUCT_ESSENTIALBUSINESS_SERVER_ADDL = 0x3c,
        PRODUCT_ESSENTIALBUSINESS_SERVER_ADDLSVC = 0x3e,
        PRODUCT_ESSENTIALBUSINESS_SERVER_MGMT = 0x3b,
        PRODUCT_ESSENTIALBUSINESS_SERVER_MGMTSVC = 0x3d,
        PRODUCT_HOME_BASIC = 0x2,
        PRODUCT_HOME_BASIC_E = 0x43,
        PRODUCT_HOME_BASIC_N = 0x5,
        PRODUCT_HOME_PREMIUM = 0x3,
        PRODUCT_HOME_PREMIUM_E = 0x44,
        PRODUCT_HOME_PREMIUM_N = 0x1a,
        PRODUCT_HOME_PREMIUM_SERVER = 0x22,
        PRODUCT_HOME_SERVER = 0x13,
        PRODUCT_HYPERV = 0x2a,
        PRODUCT_IOTUAP = 0x7b,
        PRODUCT_IOTUAPCOMMERCIAL = 0x83,
        PRODUCT_MEDIUMBUSINESS_SERVER_MANAGEMENT = 0x1e,
        PRODUCT_MEDIUMBUSINESS_SERVER_MESSAGING = 0x20,
        PRODUCT_MEDIUMBUSINESS_SERVER_SECURITY = 0x1f,
        PRODUCT_MOBILE_CORE = 0x68,
        PRODUCT_MOBILE_ENTERPRISE = 0x85,
        PRODUCT_MULTIPOINT_PREMIUM_SERVER = 0x4d,
        PRODUCT_MULTIPOINT_STANDARD_SERVER = 0x4c,
        PRODUCT_PRO_WORKSTATION = 0xa1,
        PRODUCT_PRO_WORKSTATION_N = 0xa2,
        PRODUCT_PROFESSIONAL = 0x30,
        PRODUCT_PROFESSIONAL_E = 0x45,
        PRODUCT_PROFESSIONAL_N = 0x31,
        PRODUCT_PROFESSIONAL_WMC = 0x67,
        PRODUCT_SB_SOLUTION_SERVER = 0x32,
        PRODUCT_SB_SOLUTION_SERVER_EM = 0x36,
        PRODUCT_SERVER_FOR_SB_SOLUTIONS = 0x33,
        PRODUCT_SERVER_FOR_SB_SOLUTIONS_EM = 0x37,
        PRODUCT_SERVER_FOR_SMALLBUSINESS = 0x18,
        PRODUCT_SERVER_FOR_SMALLBUSINESS_V = 0x23,
        PRODUCT_SERVER_FOUNDATION = 0x21,
        PRODUCT_SMALLBUSINESS_SERVER = 0x9,
        PRODUCT_SMALLBUSINESS_SERVER_PREMIUM = 0x19,
        PRODUCT_SMALLBUSINESS_SERVER_PREMIUM_CORE = 0x3f,
        PRODUCT_SOLUTION_EMBEDDEDSERVER = 0x38,
        PRODUCT_STANDARD_EVALUATION_SERVER = 0x4f,
        PRODUCT_STANDARD_SERVER = 0x7,
        PRODUCT_STANDARD_SERVER_CORE_ = 0xd,
        PRODUCT_STANDARD_SERVER_CORE_V = 0x28,
        PRODUCT_STANDARD_SERVER_V = 0x24,
        PRODUCT_STANDARD_SERVER_SOLUTIONS = 0x34,
        PRODUCT_STANDARD_SERVER_SOLUTIONS_CORE = 0x35,
        PRODUCT_STARTER = 0xb,
        PRODUCT_STARTER_E = 0x42,
        PRODUCT_STARTER_N = 0x2f,
        PRODUCT_STORAGE_ENTERPRISE_SERVER = 0x17,
        PRODUCT_STORAGE_ENTERPRISE_SERVER_CORE = 0x2e,
        PRODUCT_STORAGE_EXPRESS_SERVER = 0x14,
        PRODUCT_STORAGE_EXPRESS_SERVER_CORE = 0x2b,
        PRODUCT_STORAGE_STANDARD_EVALUATION_SERVER = 0x60,
        PRODUCT_STORAGE_STANDARD_SERVER = 0x15,
        PRODUCT_STORAGE_STANDARD_SERVER_CORE = 0x2c,
        PRODUCT_STORAGE_WORKGROUP_EVALUATION_SERVER = 0x5f,
        PRODUCT_STORAGE_WORKGROUP_SERVER = 0x16,
        PRODUCT_STORAGE_WORKGROUP_SERVER_CORE = 0x2d,
        PRODUCT_ULTIMATE = 0x1,
        PRODUCT_ULTIMATE_E = 0x47,
        PRODUCT_ULTIMATE_N = 0x1c,
        PRODUCT_UNDEFINED = 0x0,
        PRODUCT_WEB_SERVER = 0x11,
        PRODUCT_WEB_SERVER_CORE = 0x1d,
    };
    enum class PROCESSOR_CACHE_TYPE : int32_t
    {
        CacheUnified = 0,
        CacheInstruction = 1,
        CacheData = 2,
        CacheTrace = 3,
    };
    enum class USER_CET_ENVIRONMENT : uint32_t
    {
        USER_CET_ENVIRONMENT_WIN32_PROCESS = 0x0,
        USER_CET_ENVIRONMENT_SGX2_ENCLAVE = 0x2,
        USER_CET_ENVIRONMENT_VBS_ENCLAVE = 0x10,
        USER_CET_ENVIRONMENT_VBS_BASIC_ENCLAVE = 0x11,
    };
    enum class VER_FLAGS : uint32_t
    {
        VER_MINORVERSION = 0x1,
        VER_MAJORVERSION = 0x2,
        VER_BUILDNUMBER = 0x4,
        VER_PLATFORMID = 0x8,
        VER_SERVICEPACKMINOR = 0x10,
        VER_SERVICEPACKMAJOR = 0x20,
        VER_SUITENAME = 0x40,
        VER_PRODUCT_TYPE = 0x80,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CACHE_DESCRIPTOR;
    struct CACHE_RELATIONSHIP;
    struct FIRMWARE_TABLE_ID;
    struct GROUP_AFFINITY;
    struct GROUP_RELATIONSHIP;
    struct MEMORYSTATUS;
    struct MEMORYSTATUSEX;
    struct NUMA_NODE_RELATIONSHIP;
    struct OSVERSIONINFOA;
    struct OSVERSIONINFOEXA;
    struct OSVERSIONINFOEXW;
    struct OSVERSIONINFOW;
    struct PROCESSOR_GROUP_INFO;
    struct PROCESSOR_RELATIONSHIP;
    struct SYSTEM_CPU_SET_INFORMATION;
    struct SYSTEM_INFO;
    struct SYSTEM_LOGICAL_PROCESSOR_INFORMATION;
    struct SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;
    struct SYSTEM_POOL_ZEROING_INFORMATION;
    struct SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION;
    struct SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION;
#pragma endregion forward_declarations

#pragma region delegates
    using PGET_SYSTEM_WOW64_DIRECTORY_A = uint32_t __stdcall(Windows::Win32::Foundation::PSTR, uint32_t);
    using PGET_SYSTEM_WOW64_DIRECTORY_W = uint32_t __stdcall(Windows::Win32::Foundation::PWSTR, uint32_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
