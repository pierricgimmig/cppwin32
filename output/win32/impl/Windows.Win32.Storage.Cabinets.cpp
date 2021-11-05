// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_Cabinets_2_H
#define WIN32_Windows_Win32_Storage_Cabinets_2_H
#include "win32/Windows.Win32.Storage.Cabinets.h"
#include "win32/impl/Windows.Win32.Storage.Cabinets.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::Cabinets
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    void* __stdcall ORBIT_IMPL_FCICreate(win32::Windows::Win32::Storage::Cabinets::ERF* perf, win32::Windows::Win32::Storage::Cabinets::PFNFCIFILEPLACED* pfnfcifp, win32::Windows::Win32::Storage::Cabinets::PFNFCIALLOC* pfna, win32::Windows::Win32::Storage::Cabinets::PFNFCIFREE* pfnf, win32::Windows::Win32::Storage::Cabinets::PFNFCIOPEN* pfnopen, win32::Windows::Win32::Storage::Cabinets::PFNFCIREAD* pfnread, win32::Windows::Win32::Storage::Cabinets::PFNFCIWRITE* pfnwrite, win32::Windows::Win32::Storage::Cabinets::PFNFCICLOSE* pfnclose, win32::Windows::Win32::Storage::Cabinets::PFNFCISEEK* pfnseek, win32::Windows::Win32::Storage::Cabinets::PFNFCIDELETE* pfndelete, win32::Windows::Win32::Storage::Cabinets::PFNFCIGETTEMPFILE* pfnfcigtf, win32::Windows::Win32::Storage::Cabinets::CCAB* pccab, void* pv) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(perf);
        ORBIT_TRACK_PARAM(pfnfcifp);
        ORBIT_TRACK_PARAM(pfna);
        ORBIT_TRACK_PARAM(pfnf);
        ORBIT_TRACK_PARAM(pfnopen);
        ORBIT_TRACK_PARAM(pfnread);
        ORBIT_TRACK_PARAM(pfnwrite);
        ORBIT_TRACK_PARAM(pfnclose);
        ORBIT_TRACK_PARAM(pfnseek);
        ORBIT_TRACK_PARAM(pfndelete);
        ORBIT_TRACK_PARAM(pfnfcigtf);
        ORBIT_TRACK_PARAM(pccab);
        ORBIT_TRACK_PARAM(pv);

        auto win32_impl_result = g_api_table.FCICreate(perf, pfnfcifp, pfna, pfnf, pfnopen, pfnread, pfnwrite, pfnclose, pfnseek, pfndelete, pfnfcigtf, pccab, pv);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FCIAddFile(void* hfci, win32::Windows::Win32::Foundation::PSTR pszSourceFile, win32::Windows::Win32::Foundation::PSTR pszFileName, win32::Windows::Win32::Foundation::BOOL fExecute, win32::Windows::Win32::Storage::Cabinets::PFNFCIGETNEXTCABINET* pfnfcignc, win32::Windows::Win32::Storage::Cabinets::PFNFCISTATUS* pfnfcis, win32::Windows::Win32::Storage::Cabinets::PFNFCIGETOPENINFO* pfnfcigoi, uint16_t typeCompress) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfci);
        ORBIT_TRACK_PARAM(pszSourceFile);
        ORBIT_TRACK_PARAM(pszFileName);
        ORBIT_TRACK_PARAM(fExecute);
        ORBIT_TRACK_PARAM(pfnfcignc);
        ORBIT_TRACK_PARAM(pfnfcis);
        ORBIT_TRACK_PARAM(pfnfcigoi);
        ORBIT_TRACK_PARAM(typeCompress);

        auto win32_impl_result = g_api_table.FCIAddFile(hfci, pszSourceFile, pszFileName, fExecute, pfnfcignc, pfnfcis, pfnfcigoi, typeCompress);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FCIFlushCabinet(void* hfci, win32::Windows::Win32::Foundation::BOOL fGetNextCab, win32::Windows::Win32::Storage::Cabinets::PFNFCIGETNEXTCABINET* pfnfcignc, win32::Windows::Win32::Storage::Cabinets::PFNFCISTATUS* pfnfcis) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfci);
        ORBIT_TRACK_PARAM(fGetNextCab);
        ORBIT_TRACK_PARAM(pfnfcignc);
        ORBIT_TRACK_PARAM(pfnfcis);

        auto win32_impl_result = g_api_table.FCIFlushCabinet(hfci, fGetNextCab, pfnfcignc, pfnfcis);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FCIFlushFolder(void* hfci, win32::Windows::Win32::Storage::Cabinets::PFNFCIGETNEXTCABINET* pfnfcignc, win32::Windows::Win32::Storage::Cabinets::PFNFCISTATUS* pfnfcis) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfci);
        ORBIT_TRACK_PARAM(pfnfcignc);
        ORBIT_TRACK_PARAM(pfnfcis);

        auto win32_impl_result = g_api_table.FCIFlushFolder(hfci, pfnfcignc, pfnfcis);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FCIDestroy(void* hfci) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfci);

        auto win32_impl_result = g_api_table.FCIDestroy(hfci);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void* __stdcall ORBIT_IMPL_FDICreate(win32::Windows::Win32::Storage::Cabinets::PFNALLOC* pfnalloc, win32::Windows::Win32::Storage::Cabinets::PFNFREE* pfnfree, win32::Windows::Win32::Storage::Cabinets::PFNOPEN* pfnopen, win32::Windows::Win32::Storage::Cabinets::PFNREAD* pfnread, win32::Windows::Win32::Storage::Cabinets::PFNWRITE* pfnwrite, win32::Windows::Win32::Storage::Cabinets::PFNCLOSE* pfnclose, win32::Windows::Win32::Storage::Cabinets::PFNSEEK* pfnseek, win32::Windows::Win32::Storage::Cabinets::FDICREATE_CPU_TYPE cpuType, win32::Windows::Win32::Storage::Cabinets::ERF* perf) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pfnalloc);
        ORBIT_TRACK_PARAM(pfnfree);
        ORBIT_TRACK_PARAM(pfnopen);
        ORBIT_TRACK_PARAM(pfnread);
        ORBIT_TRACK_PARAM(pfnwrite);
        ORBIT_TRACK_PARAM(pfnclose);
        ORBIT_TRACK_PARAM(pfnseek);
        ORBIT_TRACK_PARAM(cpuType);
        ORBIT_TRACK_PARAM(perf);

        auto win32_impl_result = g_api_table.FDICreate(pfnalloc, pfnfree, pfnopen, pfnread, pfnwrite, pfnclose, pfnseek, cpuType, perf);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FDIIsCabinet(void* hfdi, intptr_t hf, win32::Windows::Win32::Storage::Cabinets::FDICABINETINFO* pfdici) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfdi);
        ORBIT_TRACK_PARAM(hf);
        ORBIT_TRACK_PARAM(pfdici);

        auto win32_impl_result = g_api_table.FDIIsCabinet(hfdi, hf, pfdici);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FDICopy(void* hfdi, win32::Windows::Win32::Foundation::PSTR pszCabinet, win32::Windows::Win32::Foundation::PSTR pszCabPath, int32_t flags, win32::Windows::Win32::Storage::Cabinets::PFNFDINOTIFY* pfnfdin, win32::Windows::Win32::Storage::Cabinets::PFNFDIDECRYPT* pfnfdid, void* pvUser) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfdi);
        ORBIT_TRACK_PARAM(pszCabinet);
        ORBIT_TRACK_PARAM(pszCabPath);
        ORBIT_TRACK_PARAM(flags);
        ORBIT_TRACK_PARAM(pfnfdin);
        ORBIT_TRACK_PARAM(pfnfdid);
        ORBIT_TRACK_PARAM(pvUser);

        auto win32_impl_result = g_api_table.FDICopy(hfdi, pszCabinet, pszCabPath, flags, pfnfdin, pfnfdid, pvUser);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FDIDestroy(void* hfdi) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfdi);

        auto win32_impl_result = g_api_table.FDIDestroy(hfdi);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_FDITruncateCabinet(void* hfdi, win32::Windows::Win32::Foundation::PSTR pszCabinetName, uint16_t iFolderToDelete) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hfdi);
        ORBIT_TRACK_PARAM(pszCabinetName);
        ORBIT_TRACK_PARAM(iFolderToDelete);

        auto win32_impl_result = g_api_table.FDITruncateCabinet(hfdi, pszCabinetName, iFolderToDelete);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif