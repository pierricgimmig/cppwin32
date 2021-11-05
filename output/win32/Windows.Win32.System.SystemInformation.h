// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_SystemInformation_H
#define WIN32_Windows_Win32_System_SystemInformation_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.SystemInformation.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::SystemInformation
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GlobalMemoryStatusEx(win32::Windows::Win32::System::SystemInformation::MEMORYSTATUSEX* lpBuffer) noexcept;
    void __stdcall ORBIT_IMPL_GetSystemInfo(win32::Windows::Win32::System::SystemInformation::SYSTEM_INFO* lpSystemInfo) noexcept;
    void __stdcall ORBIT_IMPL_GetSystemTime(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    void __stdcall ORBIT_IMPL_GetSystemTimeAsFileTime(win32::Windows::Win32::Foundation::FILETIME* lpSystemTimeAsFileTime) noexcept;
    void __stdcall ORBIT_IMPL_GetLocalTime(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_IsUserCetAvailableInEnvironment(win32::Windows::Win32::System::SystemInformation::USER_CET_ENVIRONMENT UserCetEnvironment) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetSystemLeapSecondInformation(win32::Windows::Win32::Foundation::BOOL* Enabled, uint32_t* Flags) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetVersion() noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetLocalTime(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetTickCount() noexcept;
    uint64_t __stdcall ORBIT_IMPL_GetTickCount64() noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetSystemTimeAdjustment(uint32_t* lpTimeAdjustment, uint32_t* lpTimeIncrement, win32::Windows::Win32::Foundation::BOOL* lpTimeAdjustmentDisabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetSystemTimeAdjustmentPrecise(uint64_t* lpTimeAdjustment, uint64_t* lpTimeIncrement, win32::Windows::Win32::Foundation::BOOL* lpTimeAdjustmentDisabled) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemDirectoryA(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemDirectoryW(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetWindowsDirectoryA(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetWindowsDirectoryW(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemWindowsDirectoryA(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemWindowsDirectoryW(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetComputerNameExA(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t* nSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetComputerNameExW(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t* nSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetComputerNameExW(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PWSTR lpBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetSystemTime(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetVersionExA(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOA* lpVersionInformation) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetVersionExW(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOW* lpVersionInformation) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetLogicalProcessorInformation(win32::Windows::Win32::System::SystemInformation::SYSTEM_LOGICAL_PROCESSOR_INFORMATION* Buffer, uint32_t* ReturnedLength) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetLogicalProcessorInformationEx(win32::Windows::Win32::System::SystemInformation::LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType, win32::Windows::Win32::System::SystemInformation::SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX* Buffer, uint32_t* ReturnedLength) noexcept;
    void __stdcall ORBIT_IMPL_GetNativeSystemInfo(win32::Windows::Win32::System::SystemInformation::SYSTEM_INFO* lpSystemInfo) noexcept;
    void __stdcall ORBIT_IMPL_GetSystemTimePreciseAsFileTime(win32::Windows::Win32::Foundation::FILETIME* lpSystemTimeAsFileTime) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetProductInfo(uint32_t dwOSMajorVersion, uint32_t dwOSMinorVersion, uint32_t dwSpMajorVersion, uint32_t dwSpMinorVersion, win32::Windows::Win32::System::SystemInformation::OS_PRODUCT_TYPE* pdwReturnedProductType) noexcept;
    uint64_t __stdcall ORBIT_IMPL_VerSetConditionMask(uint64_t ConditionMask, win32::Windows::Win32::System::SystemInformation::VER_FLAGS TypeMask, uint8_t Condition) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetOsSafeBootMode(uint32_t* Flags) noexcept;
    uint32_t __stdcall ORBIT_IMPL_EnumSystemFirmwareTables(win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_PROVIDER FirmwareTableProviderSignature, win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_ID* pFirmwareTableEnumBuffer, uint32_t BufferSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemFirmwareTable(win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_PROVIDER FirmwareTableProviderSignature, win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_ID FirmwareTableID, void* pFirmwareTableBuffer, uint32_t BufferSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_DnsHostnameToComputerNameExW(win32::Windows::Win32::Foundation::PWSTR Hostname, win32::Windows::Win32::Foundation::PWSTR ComputerName, uint32_t* nSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetPhysicallyInstalledSystemMemory(uint64_t* TotalMemoryInKilobytes) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetComputerNameEx2W(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, uint32_t Flags, win32::Windows::Win32::Foundation::PWSTR lpBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetSystemTimeAdjustment(uint32_t dwTimeAdjustment, win32::Windows::Win32::Foundation::BOOL bTimeAdjustmentDisabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetSystemTimeAdjustmentPrecise(uint64_t dwTimeAdjustment, win32::Windows::Win32::Foundation::BOOL bTimeAdjustmentDisabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetProcessorSystemCycleTime(uint16_t Group, win32::Windows::Win32::System::SystemInformation::SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION* Buffer, uint32_t* ReturnedLength) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetOsManufacturingMode(win32::Windows::Win32::Foundation::BOOL* pbEnabled) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetIntegratedDisplaySize(double* sizeInInches) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetComputerNameA(win32::Windows::Win32::Foundation::PSTR lpComputerName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetComputerNameW(win32::Windows::Win32::Foundation::PWSTR lpComputerName) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetComputerNameExA(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PSTR lpBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemWow64DirectoryA(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemWow64DirectoryW(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemWow64Directory2A(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize, uint16_t ImageFileMachineType) noexcept;
    uint32_t __stdcall ORBIT_IMPL_GetSystemWow64Directory2W(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize, uint16_t ImageFileMachineType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_IsWow64GuestMachineSupported(uint16_t WowGuestMachine, win32::Windows::Win32::Foundation::BOOL* MachineIsSupported) noexcept;
    void __stdcall ORBIT_IMPL_GlobalMemoryStatus(win32::Windows::Win32::System::SystemInformation::MEMORYSTATUS* lpBuffer) noexcept;
    win32::Windows::Win32::System::SystemInformation::DEP_SYSTEM_POLICY_TYPE __stdcall ORBIT_IMPL_GetSystemDEPPolicy() noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_GetFirmwareType(win32::Windows::Win32::System::SystemInformation::FIRMWARE_TYPE* FirmwareType) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_VerifyVersionInfoA(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOEXA* lpVersionInformation, win32::Windows::Win32::System::SystemInformation::VER_FLAGS dwTypeMask, uint64_t dwlConditionMask) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_VerifyVersionInfoW(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOEXW* lpVersionInformation, win32::Windows::Win32::System::SystemInformation::VER_FLAGS dwTypeMask, uint64_t dwlConditionMask) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GlobalMemoryStatusEx)(win32::Windows::Win32::System::SystemInformation::MEMORYSTATUSEX* lpBuffer) noexcept;
    void (__stdcall *GetSystemInfo)(win32::Windows::Win32::System::SystemInformation::SYSTEM_INFO* lpSystemInfo) noexcept;
    void (__stdcall *GetSystemTime)(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    void (__stdcall *GetSystemTimeAsFileTime)(win32::Windows::Win32::Foundation::FILETIME* lpSystemTimeAsFileTime) noexcept;
    void (__stdcall *GetLocalTime)(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *IsUserCetAvailableInEnvironment)(win32::Windows::Win32::System::SystemInformation::USER_CET_ENVIRONMENT UserCetEnvironment) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetSystemLeapSecondInformation)(win32::Windows::Win32::Foundation::BOOL* Enabled, uint32_t* Flags) noexcept;
    uint32_t (__stdcall *GetVersion)() noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetLocalTime)(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    uint32_t (__stdcall *GetTickCount)() noexcept;
    uint64_t (__stdcall *GetTickCount64)() noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetSystemTimeAdjustment)(uint32_t* lpTimeAdjustment, uint32_t* lpTimeIncrement, win32::Windows::Win32::Foundation::BOOL* lpTimeAdjustmentDisabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetSystemTimeAdjustmentPrecise)(uint64_t* lpTimeAdjustment, uint64_t* lpTimeIncrement, win32::Windows::Win32::Foundation::BOOL* lpTimeAdjustmentDisabled) noexcept;
    uint32_t (__stdcall *GetSystemDirectoryA)(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t (__stdcall *GetSystemDirectoryW)(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t (__stdcall *GetWindowsDirectoryA)(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t (__stdcall *GetWindowsDirectoryW)(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t (__stdcall *GetSystemWindowsDirectoryA)(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t (__stdcall *GetSystemWindowsDirectoryW)(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetComputerNameExA)(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t* nSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetComputerNameExW)(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t* nSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetComputerNameExW)(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PWSTR lpBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetSystemTime)(win32::Windows::Win32::Foundation::SYSTEMTIME* lpSystemTime) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetVersionExA)(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOA* lpVersionInformation) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetVersionExW)(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOW* lpVersionInformation) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetLogicalProcessorInformation)(win32::Windows::Win32::System::SystemInformation::SYSTEM_LOGICAL_PROCESSOR_INFORMATION* Buffer, uint32_t* ReturnedLength) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetLogicalProcessorInformationEx)(win32::Windows::Win32::System::SystemInformation::LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType, win32::Windows::Win32::System::SystemInformation::SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX* Buffer, uint32_t* ReturnedLength) noexcept;
    void (__stdcall *GetNativeSystemInfo)(win32::Windows::Win32::System::SystemInformation::SYSTEM_INFO* lpSystemInfo) noexcept;
    void (__stdcall *GetSystemTimePreciseAsFileTime)(win32::Windows::Win32::Foundation::FILETIME* lpSystemTimeAsFileTime) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetProductInfo)(uint32_t dwOSMajorVersion, uint32_t dwOSMinorVersion, uint32_t dwSpMajorVersion, uint32_t dwSpMinorVersion, win32::Windows::Win32::System::SystemInformation::OS_PRODUCT_TYPE* pdwReturnedProductType) noexcept;
    uint64_t (__stdcall *VerSetConditionMask)(uint64_t ConditionMask, win32::Windows::Win32::System::SystemInformation::VER_FLAGS TypeMask, uint8_t Condition) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetOsSafeBootMode)(uint32_t* Flags) noexcept;
    uint32_t (__stdcall *EnumSystemFirmwareTables)(win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_PROVIDER FirmwareTableProviderSignature, win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_ID* pFirmwareTableEnumBuffer, uint32_t BufferSize) noexcept;
    uint32_t (__stdcall *GetSystemFirmwareTable)(win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_PROVIDER FirmwareTableProviderSignature, win32::Windows::Win32::System::SystemInformation::FIRMWARE_TABLE_ID FirmwareTableID, void* pFirmwareTableBuffer, uint32_t BufferSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *DnsHostnameToComputerNameExW)(win32::Windows::Win32::Foundation::PWSTR Hostname, win32::Windows::Win32::Foundation::PWSTR ComputerName, uint32_t* nSize) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetPhysicallyInstalledSystemMemory)(uint64_t* TotalMemoryInKilobytes) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetComputerNameEx2W)(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, uint32_t Flags, win32::Windows::Win32::Foundation::PWSTR lpBuffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetSystemTimeAdjustment)(uint32_t dwTimeAdjustment, win32::Windows::Win32::Foundation::BOOL bTimeAdjustmentDisabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetSystemTimeAdjustmentPrecise)(uint64_t dwTimeAdjustment, win32::Windows::Win32::Foundation::BOOL bTimeAdjustmentDisabled) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetProcessorSystemCycleTime)(uint16_t Group, win32::Windows::Win32::System::SystemInformation::SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION* Buffer, uint32_t* ReturnedLength) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetOsManufacturingMode)(win32::Windows::Win32::Foundation::BOOL* pbEnabled) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetIntegratedDisplaySize)(double* sizeInInches) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetComputerNameA)(win32::Windows::Win32::Foundation::PSTR lpComputerName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetComputerNameW)(win32::Windows::Win32::Foundation::PWSTR lpComputerName) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *SetComputerNameExA)(win32::Windows::Win32::System::SystemInformation::COMPUTER_NAME_FORMAT NameType, win32::Windows::Win32::Foundation::PSTR lpBuffer) noexcept;
    uint32_t (__stdcall *GetSystemWow64DirectoryA)(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t (__stdcall *GetSystemWow64DirectoryW)(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize) noexcept;
    uint32_t (__stdcall *GetSystemWow64Directory2A)(win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t uSize, uint16_t ImageFileMachineType) noexcept;
    uint32_t (__stdcall *GetSystemWow64Directory2W)(win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t uSize, uint16_t ImageFileMachineType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *IsWow64GuestMachineSupported)(uint16_t WowGuestMachine, win32::Windows::Win32::Foundation::BOOL* MachineIsSupported) noexcept;
    void (__stdcall *GlobalMemoryStatus)(win32::Windows::Win32::System::SystemInformation::MEMORYSTATUS* lpBuffer) noexcept;
    win32::Windows::Win32::System::SystemInformation::DEP_SYSTEM_POLICY_TYPE (__stdcall *GetSystemDEPPolicy)() noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *GetFirmwareType)(win32::Windows::Win32::System::SystemInformation::FIRMWARE_TYPE* FirmwareType) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *VerifyVersionInfoA)(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOEXA* lpVersionInformation, win32::Windows::Win32::System::SystemInformation::VER_FLAGS dwTypeMask, uint64_t dwlConditionMask) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *VerifyVersionInfoW)(win32::Windows::Win32::System::SystemInformation::OSVERSIONINFOEXW* lpVersionInformation, win32::Windows::Win32::System::SystemInformation::VER_FLAGS dwTypeMask, uint64_t dwlConditionMask) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
