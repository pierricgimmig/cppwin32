// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Security_ConfigurationSnapin_0_H
#define WIN32_Windows_Win32_Security_ConfigurationSnapin_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOL;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security::ConfigurationSnapin
{
#pragma region enums
    enum class SCESVC_INFO_TYPE : int32_t
    {
        SceSvcConfigurationInfo = 0,
        SceSvcMergedPolicyInfo = 1,
        SceSvcAnalysisInfo = 2,
        SceSvcInternalUse = 3,
    };
    enum class SCE_LOG_ERR_LEVEL : uint32_t
    {
        SCE_LOG_LEVEL_ALWAYS = 0x0,
        SCE_LOG_LEVEL_ERROR = 0x1,
        SCE_LOG_LEVEL_DETAIL = 0x2,
        SCE_LOG_LEVEL_DEBUG = 0x3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct SCESVC_ANALYSIS_INFO;
    struct SCESVC_ANALYSIS_LINE;
    struct SCESVC_CALLBACK_INFO;
    struct SCESVC_CONFIGURATION_INFO;
    struct SCESVC_CONFIGURATION_LINE;
    struct ISceSvcAttachmentData;
    struct ISceSvcAttachmentPersistInfo;
#pragma endregion forward_declarations

#pragma region delegates
    using PFSCE_QUERY_INFO = uint32_t __stdcall(void*, Windows::Win32::Security::ConfigurationSnapin::SCESVC_INFO_TYPE, int8_t*, Windows::Win32::Foundation::BOOL, void**, uint32_t*);
    using PFSCE_SET_INFO = uint32_t __stdcall(void*, Windows::Win32::Security::ConfigurationSnapin::SCESVC_INFO_TYPE, int8_t*, Windows::Win32::Foundation::BOOL, void*);
    using PFSCE_FREE_INFO = uint32_t __stdcall(void*);
    using PFSCE_LOG_INFO = uint32_t __stdcall(Windows::Win32::Security::ConfigurationSnapin::SCE_LOG_ERR_LEVEL, uint32_t, int8_t*);
    using PF_ConfigAnalyzeService = uint32_t __stdcall(Windows::Win32::Security::ConfigurationSnapin::SCESVC_CALLBACK_INFO*);
    using PF_UpdateService = uint32_t __stdcall(Windows::Win32::Security::ConfigurationSnapin::SCESVC_CALLBACK_INFO*, Windows::Win32::Security::ConfigurationSnapin::SCESVC_CONFIGURATION_INFO*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
