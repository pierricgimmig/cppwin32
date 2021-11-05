// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_PasswordManagement_2_H
#define WIN32_Windows_Win32_System_PasswordManagement_2_H
#include "win32/Windows.Win32.System.PasswordManagement.h"
#include "win32/impl/Windows.Win32.System.PasswordManagement.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::PasswordManagement
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall ORBIT_IMPL_MSChapSrvChangePassword(win32::Windows::Win32::Foundation::PWSTR ServerName, win32::Windows::Win32::Foundation::PWSTR UserName, win32::Windows::Win32::Foundation::BOOLEAN LmOldPresent, win32::Windows::Win32::System::PasswordManagement::LM_OWF_PASSWORD* LmOldOwfPassword, win32::Windows::Win32::System::PasswordManagement::LM_OWF_PASSWORD* LmNewOwfPassword, win32::Windows::Win32::System::PasswordManagement::LM_OWF_PASSWORD* NtOldOwfPassword, win32::Windows::Win32::System::PasswordManagement::LM_OWF_PASSWORD* NtNewOwfPassword) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ServerName);
        ORBIT_TRACK_PARAM(UserName);
        ORBIT_TRACK_PARAM(LmOldPresent);
        ORBIT_TRACK_PARAM(LmOldOwfPassword);
        ORBIT_TRACK_PARAM(LmNewOwfPassword);
        ORBIT_TRACK_PARAM(NtOldOwfPassword);
        ORBIT_TRACK_PARAM(NtNewOwfPassword);

        auto win32_impl_result = g_api_table.MSChapSrvChangePassword(ServerName, UserName, LmOldPresent, LmOldOwfPassword, LmNewOwfPassword, NtOldOwfPassword, NtNewOwfPassword);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_MSChapSrvChangePassword2(win32::Windows::Win32::Foundation::PWSTR ServerName, win32::Windows::Win32::Foundation::PWSTR UserName, win32::Windows::Win32::System::PasswordManagement::SAMPR_ENCRYPTED_USER_PASSWORD* NewPasswordEncryptedWithOldNt, win32::Windows::Win32::System::PasswordManagement::ENCRYPTED_LM_OWF_PASSWORD* OldNtOwfPasswordEncryptedWithNewNt, win32::Windows::Win32::Foundation::BOOLEAN LmPresent, win32::Windows::Win32::System::PasswordManagement::SAMPR_ENCRYPTED_USER_PASSWORD* NewPasswordEncryptedWithOldLm, win32::Windows::Win32::System::PasswordManagement::ENCRYPTED_LM_OWF_PASSWORD* OldLmOwfPasswordEncryptedWithNewLmOrNt) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ServerName);
        ORBIT_TRACK_PARAM(UserName);
        ORBIT_TRACK_PARAM(NewPasswordEncryptedWithOldNt);
        ORBIT_TRACK_PARAM(OldNtOwfPasswordEncryptedWithNewNt);
        ORBIT_TRACK_PARAM(LmPresent);
        ORBIT_TRACK_PARAM(NewPasswordEncryptedWithOldLm);
        ORBIT_TRACK_PARAM(OldLmOwfPasswordEncryptedWithNewLmOrNt);

        auto win32_impl_result = g_api_table.MSChapSrvChangePassword2(ServerName, UserName, NewPasswordEncryptedWithOldNt, OldNtOwfPasswordEncryptedWithNewNt, LmPresent, NewPasswordEncryptedWithOldLm, OldLmOwfPasswordEncryptedWithNewLmOrNt);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
