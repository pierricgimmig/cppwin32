// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_Imapi_2_H
#define WIN32_Windows_Win32_Storage_Imapi_2_H
#include "win32/Windows.Win32.Storage.Imapi.h"
#include "win32/impl/Windows.Win32.Storage.Imapi.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::Imapi
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    int32_t __stdcall ORBIT_IMPL_OpenIMsgSession(win32::Windows::Win32::System::Com::IMalloc* lpMalloc, uint32_t ulFlags, win32::Windows::Win32::Storage::Imapi::_MSGSESS** lppMsgSess) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpMalloc);
        ORBIT_TRACK_PARAM(ulFlags);
        ORBIT_TRACK_PARAM(lppMsgSess);

        auto win32_impl_result = g_api_table.OpenIMsgSession(lpMalloc, ulFlags, lppMsgSess);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_CloseIMsgSession(win32::Windows::Win32::Storage::Imapi::_MSGSESS* lpMsgSess) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpMsgSess);

        g_api_table.CloseIMsgSession(lpMsgSess);
        
    }

    int32_t __stdcall ORBIT_IMPL_OpenIMsgOnIStg(win32::Windows::Win32::Storage::Imapi::_MSGSESS* lpMsgSess, win32::Windows::Win32::System::AddressBook::LPALLOCATEBUFFER* lpAllocateBuffer, win32::Windows::Win32::System::AddressBook::LPALLOCATEMORE* lpAllocateMore, win32::Windows::Win32::System::AddressBook::LPFREEBUFFER* lpFreeBuffer, win32::Windows::Win32::System::Com::IMalloc* lpMalloc, void* lpMapiSup, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* lpStg, win32::Windows::Win32::Storage::Imapi::MSGCALLRELEASE** lpfMsgCallRelease, uint32_t ulCallerData, uint32_t ulFlags, win32::Windows::Win32::System::AddressBook::IMessage** lppMsg) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpMsgSess);
        ORBIT_TRACK_PARAM(lpAllocateBuffer);
        ORBIT_TRACK_PARAM(lpAllocateMore);
        ORBIT_TRACK_PARAM(lpFreeBuffer);
        ORBIT_TRACK_PARAM(lpMalloc);
        ORBIT_TRACK_PARAM(lpMapiSup);
        ORBIT_TRACK_PARAM(lpStg);
        ORBIT_TRACK_PARAM(lpfMsgCallRelease);
        ORBIT_TRACK_PARAM(ulCallerData);
        ORBIT_TRACK_PARAM(ulFlags);
        ORBIT_TRACK_PARAM(lppMsg);

        auto win32_impl_result = g_api_table.OpenIMsgOnIStg(lpMsgSess, lpAllocateBuffer, lpAllocateMore, lpFreeBuffer, lpMalloc, lpMapiSup, lpStg, lpfMsgCallRelease, ulCallerData, ulFlags, lppMsg);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetAttribIMsgOnIStg(void* lpObject, win32::Windows::Win32::System::AddressBook::SPropTagArray* lpPropTagArray, win32::Windows::Win32::Storage::Imapi::SPropAttrArray** lppPropAttrArray) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpObject);
        ORBIT_TRACK_PARAM(lpPropTagArray);
        ORBIT_TRACK_PARAM(lppPropAttrArray);

        auto win32_impl_result = g_api_table.GetAttribIMsgOnIStg(lpObject, lpPropTagArray, lppPropAttrArray);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetAttribIMsgOnIStg(void* lpObject, win32::Windows::Win32::System::AddressBook::SPropTagArray* lpPropTags, win32::Windows::Win32::Storage::Imapi::SPropAttrArray* lpPropAttrs, win32::Windows::Win32::System::AddressBook::SPropProblemArray** lppPropProblems) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpObject);
        ORBIT_TRACK_PARAM(lpPropTags);
        ORBIT_TRACK_PARAM(lpPropAttrs);
        ORBIT_TRACK_PARAM(lppPropProblems);

        auto win32_impl_result = g_api_table.SetAttribIMsgOnIStg(lpObject, lpPropTags, lpPropAttrs, lppPropProblems);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_MapStorageSCode(int32_t StgSCode) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(StgSCode);

        auto win32_impl_result = g_api_table.MapStorageSCode(StgSCode);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif