// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Environment_0_H
#define WIN32_Windows_Win32_System_Environment_0_H
WIN32_EXPORT namespace win32::Windows::Win32::System::Environment
{
#pragma region enums
    enum class ENCLAVE_SEALING_IDENTITY_POLICY : int32_t
    {
        ENCLAVE_IDENTITY_POLICY_SEAL_INVALID = 0,
        ENCLAVE_IDENTITY_POLICY_SEAL_EXACT_CODE = 1,
        ENCLAVE_IDENTITY_POLICY_SEAL_SAME_PRIMARY_CODE = 2,
        ENCLAVE_IDENTITY_POLICY_SEAL_SAME_IMAGE = 3,
        ENCLAVE_IDENTITY_POLICY_SEAL_SAME_FAMILY = 4,
        ENCLAVE_IDENTITY_POLICY_SEAL_SAME_AUTHOR = 5,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ENCLAVE_IDENTITY;
    struct ENCLAVE_INFORMATION;
    struct ENCLAVE_VBS_BASIC_KEY_REQUEST;
    struct VBS_BASIC_ENCLAVE_EXCEPTION_AMD64;
    struct VBS_BASIC_ENCLAVE_SYSCALL_PAGE;
    struct VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR32;
    struct VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64;
    struct VBS_ENCLAVE_REPORT;
    struct VBS_ENCLAVE_REPORT_MODULE;
    struct VBS_ENCLAVE_REPORT_PKG_HEADER;
    struct VBS_ENCLAVE_REPORT_VARDATA_HEADER;
#pragma endregion forward_declarations

#pragma region delegates
    using VBS_BASIC_ENCLAVE_BASIC_CALL_RETURN_FROM_ENCLAVE = void __stdcall(size_t);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_RETURN_FROM_EXCEPTION = int32_t __stdcall(Windows::Win32::System::Environment::VBS_BASIC_ENCLAVE_EXCEPTION_AMD64*);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_TERMINATE_THREAD = int32_t __stdcall(Windows::Win32::System::Environment::VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64*);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_INTERRUPT_THREAD = int32_t __stdcall(Windows::Win32::System::Environment::VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64*);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_COMMIT_PAGES = int32_t __stdcall(void*, size_t, void*, uint32_t);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_DECOMMIT_PAGES = int32_t __stdcall(void*, size_t);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_PROTECT_PAGES = int32_t __stdcall(void*, size_t, uint32_t);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_CREATE_THREAD = int32_t __stdcall(Windows::Win32::System::Environment::VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64*);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_GET_ENCLAVE_INFORMATION = int32_t __stdcall(Windows::Win32::System::Environment::ENCLAVE_INFORMATION*);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_KEY = int32_t __stdcall(Windows::Win32::System::Environment::ENCLAVE_VBS_BASIC_KEY_REQUEST*, uint32_t, uint8_t*);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_REPORT = int32_t __stdcall(uint8_t*, void*, uint32_t, uint32_t*);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_VERIFY_REPORT = int32_t __stdcall(void*, uint32_t);
    using VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_RANDOM_DATA = int32_t __stdcall(uint8_t*, uint32_t, uint64_t*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
