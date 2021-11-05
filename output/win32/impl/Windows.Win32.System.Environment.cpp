// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Environment_2_H
#define WIN32_Windows_Win32_System_Environment_2_H
#include "win32/Windows.Win32.System.Environment.h"
#include "win32/impl/Windows.Win32.System.Environment.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::Environment
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetEnvironmentStringsW(win32::Windows::Win32::Foundation::PWSTR NewEnvironment) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(NewEnvironment);

        auto win32_impl_result = g_api_table.SetEnvironmentStringsW(NewEnvironment);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PSTR __stdcall ORBIT_IMPL_GetCommandLineA() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.GetCommandLineA();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PWSTR __stdcall ORBIT_IMPL_GetCommandLineW() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.GetCommandLineW();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PSTR __stdcall ORBIT_IMPL_GetEnvironmentStrings() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.GetEnvironmentStrings();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PWSTR __stdcall ORBIT_IMPL_GetEnvironmentStringsW() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.GetEnvironmentStringsW();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FreeEnvironmentStringsA(win32::Windows::Win32::Foundation::PSTR penv) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(penv);

        auto win32_impl_result = g_api_table.FreeEnvironmentStringsA(penv);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FreeEnvironmentStringsW(win32::Windows::Win32::Foundation::PWSTR penv) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(penv);

        auto win32_impl_result = g_api_table.FreeEnvironmentStringsW(penv);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_GetEnvironmentVariableA(win32::Windows::Win32::Foundation::PSTR lpName, win32::Windows::Win32::Foundation::PSTR lpBuffer, uint32_t nSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpName);
        ORBIT_TRACK_PARAM(lpBuffer);
        ORBIT_TRACK_PARAM(nSize);

        auto win32_impl_result = g_api_table.GetEnvironmentVariableA(lpName, lpBuffer, nSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_GetEnvironmentVariableW(win32::Windows::Win32::Foundation::PWSTR lpName, win32::Windows::Win32::Foundation::PWSTR lpBuffer, uint32_t nSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpName);
        ORBIT_TRACK_PARAM(lpBuffer);
        ORBIT_TRACK_PARAM(nSize);

        auto win32_impl_result = g_api_table.GetEnvironmentVariableW(lpName, lpBuffer, nSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetEnvironmentVariableA(win32::Windows::Win32::Foundation::PSTR lpName, win32::Windows::Win32::Foundation::PSTR lpValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpName);
        ORBIT_TRACK_PARAM(lpValue);

        auto win32_impl_result = g_api_table.SetEnvironmentVariableA(lpName, lpValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetEnvironmentVariableW(win32::Windows::Win32::Foundation::PWSTR lpName, win32::Windows::Win32::Foundation::PWSTR lpValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpName);
        ORBIT_TRACK_PARAM(lpValue);

        auto win32_impl_result = g_api_table.SetEnvironmentVariableW(lpName, lpValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_ExpandEnvironmentStringsA(win32::Windows::Win32::Foundation::PSTR lpSrc, win32::Windows::Win32::Foundation::PSTR lpDst, uint32_t nSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpSrc);
        ORBIT_TRACK_PARAM(lpDst);
        ORBIT_TRACK_PARAM(nSize);

        auto win32_impl_result = g_api_table.ExpandEnvironmentStringsA(lpSrc, lpDst, nSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_ExpandEnvironmentStringsW(win32::Windows::Win32::Foundation::PWSTR lpSrc, win32::Windows::Win32::Foundation::PWSTR lpDst, uint32_t nSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpSrc);
        ORBIT_TRACK_PARAM(lpDst);
        ORBIT_TRACK_PARAM(nSize);

        auto win32_impl_result = g_api_table.ExpandEnvironmentStringsW(lpSrc, lpDst, nSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetCurrentDirectoryA(win32::Windows::Win32::Foundation::PSTR lpPathName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpPathName);

        auto win32_impl_result = g_api_table.SetCurrentDirectoryA(lpPathName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SetCurrentDirectoryW(win32::Windows::Win32::Foundation::PWSTR lpPathName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpPathName);

        auto win32_impl_result = g_api_table.SetCurrentDirectoryW(lpPathName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_GetCurrentDirectoryA(uint32_t nBufferLength, win32::Windows::Win32::Foundation::PSTR lpBuffer) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nBufferLength);
        ORBIT_TRACK_PARAM(lpBuffer);

        auto win32_impl_result = g_api_table.GetCurrentDirectoryA(nBufferLength, lpBuffer);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_GetCurrentDirectoryW(uint32_t nBufferLength, win32::Windows::Win32::Foundation::PWSTR lpBuffer) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nBufferLength);
        ORBIT_TRACK_PARAM(lpBuffer);

        auto win32_impl_result = g_api_table.GetCurrentDirectoryW(nBufferLength, lpBuffer);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_NeedCurrentDirectoryForExePathA(win32::Windows::Win32::Foundation::PSTR ExeName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ExeName);

        auto win32_impl_result = g_api_table.NeedCurrentDirectoryForExePathA(ExeName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_NeedCurrentDirectoryForExePathW(win32::Windows::Win32::Foundation::PWSTR ExeName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ExeName);

        auto win32_impl_result = g_api_table.NeedCurrentDirectoryForExePathW(ExeName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CreateEnvironmentBlock(void** lpEnvironment, win32::Windows::Win32::Foundation::HANDLE hToken, win32::Windows::Win32::Foundation::BOOL bInherit) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpEnvironment);
        ORBIT_TRACK_PARAM(hToken);
        ORBIT_TRACK_PARAM(bInherit);

        auto win32_impl_result = g_api_table.CreateEnvironmentBlock(lpEnvironment, hToken, bInherit);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_DestroyEnvironmentBlock(void* lpEnvironment) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpEnvironment);

        auto win32_impl_result = g_api_table.DestroyEnvironmentBlock(lpEnvironment);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ExpandEnvironmentStringsForUserA(win32::Windows::Win32::Foundation::HANDLE hToken, win32::Windows::Win32::Foundation::PSTR lpSrc, win32::Windows::Win32::Foundation::PSTR lpDest, uint32_t dwSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hToken);
        ORBIT_TRACK_PARAM(lpSrc);
        ORBIT_TRACK_PARAM(lpDest);
        ORBIT_TRACK_PARAM(dwSize);

        auto win32_impl_result = g_api_table.ExpandEnvironmentStringsForUserA(hToken, lpSrc, lpDest, dwSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_ExpandEnvironmentStringsForUserW(win32::Windows::Win32::Foundation::HANDLE hToken, win32::Windows::Win32::Foundation::PWSTR lpSrc, win32::Windows::Win32::Foundation::PWSTR lpDest, uint32_t dwSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hToken);
        ORBIT_TRACK_PARAM(lpSrc);
        ORBIT_TRACK_PARAM(lpDest);
        ORBIT_TRACK_PARAM(dwSize);

        auto win32_impl_result = g_api_table.ExpandEnvironmentStringsForUserW(hToken, lpSrc, lpDest, dwSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_IsEnclaveTypeSupported(uint32_t flEnclaveType) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(flEnclaveType);

        auto win32_impl_result = g_api_table.IsEnclaveTypeSupported(flEnclaveType);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void* __stdcall ORBIT_IMPL_CreateEnclave(win32::Windows::Win32::Foundation::HANDLE hProcess, void* lpAddress, size_t dwSize, size_t dwInitialCommitment, uint32_t flEnclaveType, void* lpEnclaveInformation, uint32_t dwInfoLength, uint32_t* lpEnclaveError) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hProcess);
        ORBIT_TRACK_PARAM(lpAddress);
        ORBIT_TRACK_PARAM(dwSize);
        ORBIT_TRACK_PARAM(dwInitialCommitment);
        ORBIT_TRACK_PARAM(flEnclaveType);
        ORBIT_TRACK_PARAM(lpEnclaveInformation);
        ORBIT_TRACK_PARAM(dwInfoLength);
        ORBIT_TRACK_PARAM(lpEnclaveError);

        auto win32_impl_result = g_api_table.CreateEnclave(hProcess, lpAddress, dwSize, dwInitialCommitment, flEnclaveType, lpEnclaveInformation, dwInfoLength, lpEnclaveError);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_LoadEnclaveData(win32::Windows::Win32::Foundation::HANDLE hProcess, void* lpAddress, void* lpBuffer, size_t nSize, uint32_t flProtect, void* lpPageInformation, uint32_t dwInfoLength, size_t* lpNumberOfBytesWritten, uint32_t* lpEnclaveError) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hProcess);
        ORBIT_TRACK_PARAM(lpAddress);
        ORBIT_TRACK_PARAM(lpBuffer);
        ORBIT_TRACK_PARAM(nSize);
        ORBIT_TRACK_PARAM(flProtect);
        ORBIT_TRACK_PARAM(lpPageInformation);
        ORBIT_TRACK_PARAM(dwInfoLength);
        ORBIT_TRACK_PARAM(lpNumberOfBytesWritten);
        ORBIT_TRACK_PARAM(lpEnclaveError);

        auto win32_impl_result = g_api_table.LoadEnclaveData(hProcess, lpAddress, lpBuffer, nSize, flProtect, lpPageInformation, dwInfoLength, lpNumberOfBytesWritten, lpEnclaveError);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_InitializeEnclave(win32::Windows::Win32::Foundation::HANDLE hProcess, void* lpAddress, void* lpEnclaveInformation, uint32_t dwInfoLength, uint32_t* lpEnclaveError) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hProcess);
        ORBIT_TRACK_PARAM(lpAddress);
        ORBIT_TRACK_PARAM(lpEnclaveInformation);
        ORBIT_TRACK_PARAM(dwInfoLength);
        ORBIT_TRACK_PARAM(lpEnclaveError);

        auto win32_impl_result = g_api_table.InitializeEnclave(hProcess, lpAddress, lpEnclaveInformation, dwInfoLength, lpEnclaveError);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_LoadEnclaveImageA(void* lpEnclaveAddress, win32::Windows::Win32::Foundation::PSTR lpImageName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpEnclaveAddress);
        ORBIT_TRACK_PARAM(lpImageName);

        auto win32_impl_result = g_api_table.LoadEnclaveImageA(lpEnclaveAddress, lpImageName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_LoadEnclaveImageW(void* lpEnclaveAddress, win32::Windows::Win32::Foundation::PWSTR lpImageName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpEnclaveAddress);
        ORBIT_TRACK_PARAM(lpImageName);

        auto win32_impl_result = g_api_table.LoadEnclaveImageW(lpEnclaveAddress, lpImageName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CallEnclave(intptr_t lpRoutine, void* lpParameter, win32::Windows::Win32::Foundation::BOOL fWaitForThread, void** lpReturnValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpRoutine);
        ORBIT_TRACK_PARAM(lpParameter);
        ORBIT_TRACK_PARAM(fWaitForThread);
        ORBIT_TRACK_PARAM(lpReturnValue);

        auto win32_impl_result = g_api_table.CallEnclave(lpRoutine, lpParameter, fWaitForThread, lpReturnValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_TerminateEnclave(void* lpAddress, win32::Windows::Win32::Foundation::BOOL fWait) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpAddress);
        ORBIT_TRACK_PARAM(fWait);

        auto win32_impl_result = g_api_table.TerminateEnclave(lpAddress, fWait);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_DeleteEnclave(void* lpAddress) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpAddress);

        auto win32_impl_result = g_api_table.DeleteEnclave(lpAddress);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_EnclaveGetAttestationReport(uint8_t* EnclaveData, void* Report, uint32_t BufferSize, uint32_t* OutputSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(EnclaveData);
        ORBIT_TRACK_PARAM(Report);
        ORBIT_TRACK_PARAM(BufferSize);
        ORBIT_TRACK_PARAM(OutputSize);

        auto win32_impl_result = g_api_table.EnclaveGetAttestationReport(EnclaveData, Report, BufferSize, OutputSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_EnclaveVerifyAttestationReport(uint32_t EnclaveType, void* Report, uint32_t ReportSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(EnclaveType);
        ORBIT_TRACK_PARAM(Report);
        ORBIT_TRACK_PARAM(ReportSize);

        auto win32_impl_result = g_api_table.EnclaveVerifyAttestationReport(EnclaveType, Report, ReportSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_EnclaveSealData(void* DataToEncrypt, uint32_t DataToEncryptSize, win32::Windows::Win32::System::Environment::ENCLAVE_SEALING_IDENTITY_POLICY IdentityPolicy, uint32_t RuntimePolicy, void* ProtectedBlob, uint32_t BufferSize, uint32_t* ProtectedBlobSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(DataToEncrypt);
        ORBIT_TRACK_PARAM(DataToEncryptSize);
        ORBIT_TRACK_PARAM(IdentityPolicy);
        ORBIT_TRACK_PARAM(RuntimePolicy);
        ORBIT_TRACK_PARAM(ProtectedBlob);
        ORBIT_TRACK_PARAM(BufferSize);
        ORBIT_TRACK_PARAM(ProtectedBlobSize);

        auto win32_impl_result = g_api_table.EnclaveSealData(DataToEncrypt, DataToEncryptSize, IdentityPolicy, RuntimePolicy, ProtectedBlob, BufferSize, ProtectedBlobSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_EnclaveUnsealData(void* ProtectedBlob, uint32_t ProtectedBlobSize, void* DecryptedData, uint32_t BufferSize, uint32_t* DecryptedDataSize, win32::Windows::Win32::System::Environment::ENCLAVE_IDENTITY* SealingIdentity, uint32_t* UnsealingFlags) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ProtectedBlob);
        ORBIT_TRACK_PARAM(ProtectedBlobSize);
        ORBIT_TRACK_PARAM(DecryptedData);
        ORBIT_TRACK_PARAM(BufferSize);
        ORBIT_TRACK_PARAM(DecryptedDataSize);
        ORBIT_TRACK_PARAM(SealingIdentity);
        ORBIT_TRACK_PARAM(UnsealingFlags);

        auto win32_impl_result = g_api_table.EnclaveUnsealData(ProtectedBlob, ProtectedBlobSize, DecryptedData, BufferSize, DecryptedDataSize, SealingIdentity, UnsealingFlags);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_EnclaveGetEnclaveInformation(uint32_t InformationSize, win32::Windows::Win32::System::Environment::ENCLAVE_INFORMATION* EnclaveInformation) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(InformationSize);
        ORBIT_TRACK_PARAM(EnclaveInformation);

        auto win32_impl_result = g_api_table.EnclaveGetEnclaveInformation(InformationSize, EnclaveInformation);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
