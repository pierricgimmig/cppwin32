// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Com_StructuredStorage_H
#define WIN32_Windows_Win32_System_Com_StructuredStorage_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.Com.StructuredStorage.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::Com::StructuredStorage
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CoGetInstanceFromFile(win32::Windows::Win32::System::Com::COSERVERINFO* pServerInfo, ::win32::guid* pClsid, win32::Windows::Win32::System::Com::IUnknown* punkOuter, win32::Windows::Win32::System::Com::CLSCTX dwClsCtx, uint32_t grfMode, win32::Windows::Win32::Foundation::PWSTR pwszName, uint32_t dwCount, win32::Windows::Win32::System::Com::MULTI_QI* pResults) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CoGetInstanceFromIStorage(win32::Windows::Win32::System::Com::COSERVERINFO* pServerInfo, ::win32::guid* pClsid, win32::Windows::Win32::System::Com::IUnknown* punkOuter, win32::Windows::Win32::System::Com::CLSCTX dwClsCtx, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint32_t dwCount, win32::Windows::Win32::System::Com::MULTI_QI* pResults) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgOpenAsyncDocfileOnIFillLockBytes(win32::Windows::Win32::System::Com::StructuredStorage::IFillLockBytes* pflb, uint32_t grfMode, uint32_t asyncFlags, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgGetIFillLockBytesOnILockBytes(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* pilb, win32::Windows::Win32::System::Com::StructuredStorage::IFillLockBytes** ppflb) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgGetIFillLockBytesOnFile(win32::Windows::Win32::Foundation::PWSTR pwcsName, win32::Windows::Win32::System::Com::StructuredStorage::IFillLockBytes** ppflb) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgOpenLayoutDocfile(win32::Windows::Win32::Foundation::PWSTR pwcsDfName, uint32_t grfMode, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CreateStreamOnHGlobal(intptr_t hGlobal, win32::Windows::Win32::Foundation::BOOL fDeleteOnRelease, win32::Windows::Win32::System::Com::IStream** ppstm) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetHGlobalFromStream(win32::Windows::Win32::System::Com::IStream* pstm, intptr_t* phglobal) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CoGetInterfaceAndReleaseStream(win32::Windows::Win32::System::Com::IStream* pStm, ::win32::guid* iid, void** ppv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PropVariantCopy(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvarDest, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvarSrc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PropVariantClear(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvar) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_FreePropVariantArray(uint32_t cVariants, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* rgvars) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgCreateDocfile(win32::Windows::Win32::Foundation::PWSTR pwcsName, uint32_t grfMode, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgCreateDocfileOnILockBytes(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt, uint32_t grfMode, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgOpenStorage(win32::Windows::Win32::Foundation::PWSTR pwcsName, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstgPriority, uint32_t grfMode, uint16_t** snbExclude, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgOpenStorageOnILockBytes(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstgPriority, uint32_t grfMode, uint16_t** snbExclude, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgIsStorageFile(win32::Windows::Win32::Foundation::PWSTR pwcsName) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgIsStorageILockBytes(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgSetTimes(win32::Windows::Win32::Foundation::PWSTR lpszName, win32::Windows::Win32::Foundation::FILETIME* pctime, win32::Windows::Win32::Foundation::FILETIME* patime, win32::Windows::Win32::Foundation::FILETIME* pmtime) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgCreateStorageEx(win32::Windows::Win32::Foundation::PWSTR pwcsName, uint32_t grfMode, uint32_t stgfmt, uint32_t grfAttrs, win32::Windows::Win32::System::Com::StructuredStorage::STGOPTIONS* pStgOptions, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* pSecurityDescriptor, ::win32::guid* riid, void** ppObjectOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgOpenStorageEx(win32::Windows::Win32::Foundation::PWSTR pwcsName, uint32_t grfMode, uint32_t stgfmt, uint32_t grfAttrs, win32::Windows::Win32::System::Com::StructuredStorage::STGOPTIONS* pStgOptions, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* pSecurityDescriptor, ::win32::guid* riid, void** ppObjectOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgCreatePropStg(win32::Windows::Win32::System::Com::IUnknown* pUnk, ::win32::guid* fmtid, ::win32::guid* pclsid, uint32_t grfFlags, uint32_t dwReserved, win32::Windows::Win32::System::Com::StructuredStorage::IPropertyStorage** ppPropStg) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgOpenPropStg(win32::Windows::Win32::System::Com::IUnknown* pUnk, ::win32::guid* fmtid, uint32_t grfFlags, uint32_t dwReserved, win32::Windows::Win32::System::Com::StructuredStorage::IPropertyStorage** ppPropStg) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgCreatePropSetStg(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStorage, uint32_t dwReserved, win32::Windows::Win32::System::Com::StructuredStorage::IPropertySetStorage** ppPropSetStg) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_FmtIdToPropStgName(::win32::guid* pfmtid, win32::Windows::Win32::Foundation::PWSTR oszName) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PropStgNameToFmtId(win32::Windows::Win32::Foundation::PWSTR oszName, ::win32::guid* pfmtid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ReadClassStg(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg, ::win32::guid* pclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WriteClassStg(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg, ::win32::guid* rclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ReadClassStm(win32::Windows::Win32::System::Com::IStream* pStm, ::win32::guid* pclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WriteClassStm(win32::Windows::Win32::System::Com::IStream* pStm, ::win32::guid* rclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetHGlobalFromILockBytes(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt, intptr_t* phglobal) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CreateILockBytesOnHGlobal(intptr_t hGlobal, win32::Windows::Win32::Foundation::BOOL fDeleteOnRelease, win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes** pplkbyt) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetConvertStg(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg) noexcept;
    win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* __stdcall ORBIT_IMPL_StgConvertVariantToProperty(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvar, uint16_t CodePage, win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pprop, uint32_t* pcb, uint32_t pid, win32::Windows::Win32::Foundation::BOOLEAN fReserved, uint32_t* pcIndirect) noexcept;
    win32::Windows::Win32::Foundation::BOOLEAN __stdcall ORBIT_IMPL_StgConvertPropertyToVariant(win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pprop, uint16_t CodePage, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvar, win32::Windows::Win32::System::Com::StructuredStorage::PMemoryAllocator* pma) noexcept;
    uint32_t __stdcall ORBIT_IMPL_StgPropertyLengthAsVariant(win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pProp, uint32_t cbProp, uint16_t CodePage, uint8_t bReserved) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WriteFmtUserTypeStg(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t cf, win32::Windows::Win32::Foundation::PWSTR lpszUserType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ReadFmtUserTypeStg(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t* pcf, win32::Windows::Win32::Foundation::PWSTR* lplpszUserType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_OleConvertOLESTREAMToIStorage(win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* lpolestream, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, win32::Windows::Win32::System::Com::DVTARGETDEVICE* ptd) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_OleConvertIStorageToOLESTREAM(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* lpolestream) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetConvertStg(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg, win32::Windows::Win32::Foundation::BOOL fConvert) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_OleConvertIStorageToOLESTREAMEx(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t cfFormat, int32_t lWidth, int32_t lHeight, uint32_t dwSize, win32::Windows::Win32::System::Com::STGMEDIUM* pmedium, win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* polestm) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_OleConvertOLESTREAMToIStorageEx(win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* polestm, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t* pcfFormat, int32_t* plwWidth, int32_t* plHeight, uint32_t* pdwSize, win32::Windows::Win32::System::Com::STGMEDIUM* pmedium) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgSerializePropVariant(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* ppropvar, win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE** ppProp, uint32_t* pcb) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StgDeserializePropVariant(win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pprop, uint32_t cbMax, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* ppropvar) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CoGetInstanceFromFile)(win32::Windows::Win32::System::Com::COSERVERINFO* pServerInfo, ::win32::guid* pClsid, win32::Windows::Win32::System::Com::IUnknown* punkOuter, win32::Windows::Win32::System::Com::CLSCTX dwClsCtx, uint32_t grfMode, win32::Windows::Win32::Foundation::PWSTR pwszName, uint32_t dwCount, win32::Windows::Win32::System::Com::MULTI_QI* pResults) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CoGetInstanceFromIStorage)(win32::Windows::Win32::System::Com::COSERVERINFO* pServerInfo, ::win32::guid* pClsid, win32::Windows::Win32::System::Com::IUnknown* punkOuter, win32::Windows::Win32::System::Com::CLSCTX dwClsCtx, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint32_t dwCount, win32::Windows::Win32::System::Com::MULTI_QI* pResults) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgOpenAsyncDocfileOnIFillLockBytes)(win32::Windows::Win32::System::Com::StructuredStorage::IFillLockBytes* pflb, uint32_t grfMode, uint32_t asyncFlags, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgGetIFillLockBytesOnILockBytes)(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* pilb, win32::Windows::Win32::System::Com::StructuredStorage::IFillLockBytes** ppflb) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgGetIFillLockBytesOnFile)(win32::Windows::Win32::Foundation::PWSTR pwcsName, win32::Windows::Win32::System::Com::StructuredStorage::IFillLockBytes** ppflb) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgOpenLayoutDocfile)(win32::Windows::Win32::Foundation::PWSTR pwcsDfName, uint32_t grfMode, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CreateStreamOnHGlobal)(intptr_t hGlobal, win32::Windows::Win32::Foundation::BOOL fDeleteOnRelease, win32::Windows::Win32::System::Com::IStream** ppstm) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetHGlobalFromStream)(win32::Windows::Win32::System::Com::IStream* pstm, intptr_t* phglobal) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CoGetInterfaceAndReleaseStream)(win32::Windows::Win32::System::Com::IStream* pStm, ::win32::guid* iid, void** ppv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PropVariantCopy)(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvarDest, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvarSrc) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PropVariantClear)(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvar) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *FreePropVariantArray)(uint32_t cVariants, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* rgvars) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgCreateDocfile)(win32::Windows::Win32::Foundation::PWSTR pwcsName, uint32_t grfMode, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgCreateDocfileOnILockBytes)(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt, uint32_t grfMode, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgOpenStorage)(win32::Windows::Win32::Foundation::PWSTR pwcsName, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstgPriority, uint32_t grfMode, uint16_t** snbExclude, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgOpenStorageOnILockBytes)(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstgPriority, uint32_t grfMode, uint16_t** snbExclude, uint32_t reserved, win32::Windows::Win32::System::Com::StructuredStorage::IStorage** ppstgOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgIsStorageFile)(win32::Windows::Win32::Foundation::PWSTR pwcsName) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgIsStorageILockBytes)(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgSetTimes)(win32::Windows::Win32::Foundation::PWSTR lpszName, win32::Windows::Win32::Foundation::FILETIME* pctime, win32::Windows::Win32::Foundation::FILETIME* patime, win32::Windows::Win32::Foundation::FILETIME* pmtime) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgCreateStorageEx)(win32::Windows::Win32::Foundation::PWSTR pwcsName, uint32_t grfMode, uint32_t stgfmt, uint32_t grfAttrs, win32::Windows::Win32::System::Com::StructuredStorage::STGOPTIONS* pStgOptions, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* pSecurityDescriptor, ::win32::guid* riid, void** ppObjectOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgOpenStorageEx)(win32::Windows::Win32::Foundation::PWSTR pwcsName, uint32_t grfMode, uint32_t stgfmt, uint32_t grfAttrs, win32::Windows::Win32::System::Com::StructuredStorage::STGOPTIONS* pStgOptions, win32::Windows::Win32::Security::SECURITY_DESCRIPTOR* pSecurityDescriptor, ::win32::guid* riid, void** ppObjectOpen) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgCreatePropStg)(win32::Windows::Win32::System::Com::IUnknown* pUnk, ::win32::guid* fmtid, ::win32::guid* pclsid, uint32_t grfFlags, uint32_t dwReserved, win32::Windows::Win32::System::Com::StructuredStorage::IPropertyStorage** ppPropStg) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgOpenPropStg)(win32::Windows::Win32::System::Com::IUnknown* pUnk, ::win32::guid* fmtid, uint32_t grfFlags, uint32_t dwReserved, win32::Windows::Win32::System::Com::StructuredStorage::IPropertyStorage** ppPropStg) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgCreatePropSetStg)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStorage, uint32_t dwReserved, win32::Windows::Win32::System::Com::StructuredStorage::IPropertySetStorage** ppPropSetStg) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *FmtIdToPropStgName)(::win32::guid* pfmtid, win32::Windows::Win32::Foundation::PWSTR oszName) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PropStgNameToFmtId)(win32::Windows::Win32::Foundation::PWSTR oszName, ::win32::guid* pfmtid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ReadClassStg)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg, ::win32::guid* pclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WriteClassStg)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg, ::win32::guid* rclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ReadClassStm)(win32::Windows::Win32::System::Com::IStream* pStm, ::win32::guid* pclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WriteClassStm)(win32::Windows::Win32::System::Com::IStream* pStm, ::win32::guid* rclsid) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetHGlobalFromILockBytes)(win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes* plkbyt, intptr_t* phglobal) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CreateILockBytesOnHGlobal)(intptr_t hGlobal, win32::Windows::Win32::Foundation::BOOL fDeleteOnRelease, win32::Windows::Win32::System::Com::StructuredStorage::ILockBytes** pplkbyt) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetConvertStg)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg) noexcept;
    win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* (__stdcall *StgConvertVariantToProperty)(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvar, uint16_t CodePage, win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pprop, uint32_t* pcb, uint32_t pid, win32::Windows::Win32::Foundation::BOOLEAN fReserved, uint32_t* pcIndirect) noexcept;
    win32::Windows::Win32::Foundation::BOOLEAN (__stdcall *StgConvertPropertyToVariant)(win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pprop, uint16_t CodePage, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* pvar, win32::Windows::Win32::System::Com::StructuredStorage::PMemoryAllocator* pma) noexcept;
    uint32_t (__stdcall *StgPropertyLengthAsVariant)(win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pProp, uint32_t cbProp, uint16_t CodePage, uint8_t bReserved) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *WriteFmtUserTypeStg)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t cf, win32::Windows::Win32::Foundation::PWSTR lpszUserType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ReadFmtUserTypeStg)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t* pcf, win32::Windows::Win32::Foundation::PWSTR* lplpszUserType) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *OleConvertOLESTREAMToIStorage)(win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* lpolestream, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, win32::Windows::Win32::System::Com::DVTARGETDEVICE* ptd) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *OleConvertIStorageToOLESTREAM)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* lpolestream) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetConvertStg)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pStg, win32::Windows::Win32::Foundation::BOOL fConvert) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *OleConvertIStorageToOLESTREAMEx)(win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t cfFormat, int32_t lWidth, int32_t lHeight, uint32_t dwSize, win32::Windows::Win32::System::Com::STGMEDIUM* pmedium, win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* polestm) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *OleConvertOLESTREAMToIStorageEx)(win32::Windows::Win32::System::Com::StructuredStorage::OLESTREAM* polestm, win32::Windows::Win32::System::Com::StructuredStorage::IStorage* pstg, uint16_t* pcfFormat, int32_t* plwWidth, int32_t* plHeight, uint32_t* pdwSize, win32::Windows::Win32::System::Com::STGMEDIUM* pmedium) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgSerializePropVariant)(win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* ppropvar, win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE** ppProp, uint32_t* pcb) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StgDeserializePropVariant)(win32::Windows::Win32::System::Com::StructuredStorage::SERIALIZEDPROPERTYVALUE* pprop, uint32_t cbMax, win32::Windows::Win32::System::Com::StructuredStorage::PROPVARIANT* ppropvar) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif