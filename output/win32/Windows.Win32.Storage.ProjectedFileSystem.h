// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_ProjectedFileSystem_H
#define WIN32_Windows_Win32_Storage_ProjectedFileSystem_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Storage.ProjectedFileSystem.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::ProjectedFileSystem
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjStartVirtualizing(win32::Windows::Win32::Foundation::PWSTR virtualizationRootPath, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_CALLBACKS* callbacks, void* instanceContext, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_STARTVIRTUALIZING_OPTIONS* options, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT* namespaceVirtualizationContext) noexcept;
    void __stdcall ORBIT_IMPL_PrjStopVirtualizing(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjClearNegativePathCache(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, uint32_t* totalEntryNumber) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjGetVirtualizationInstanceInfo(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_VIRTUALIZATION_INSTANCE_INFO* virtualizationInstanceInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjMarkDirectoryAsPlaceholder(win32::Windows::Win32::Foundation::PWSTR rootPathName, win32::Windows::Win32::Foundation::PWSTR targetPathName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_VERSION_INFO* versionInfo, ::win32::guid* virtualizationInstanceID) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjWritePlaceholderInfo(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjWritePlaceholderInfo2(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_EXTENDED_INFO* ExtendedInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjUpdateFileIfNeeded(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_TYPES updateFlags, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_FAILURE_CAUSES* failureReason) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjDeleteFile(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_TYPES updateFlags, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_FAILURE_CAUSES* failureReason) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjWriteFileData(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, ::win32::guid* dataStreamId, void* buffer, uint64_t byteOffset, uint32_t length) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjGetOnDiskFileState(win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_FILE_STATE* fileState) noexcept;
    void* __stdcall ORBIT_IMPL_PrjAllocateAlignedBuffer(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, size_t size) noexcept;
    void __stdcall ORBIT_IMPL_PrjFreeAlignedBuffer(void* buffer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjCompleteCommand(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, int32_t commandId, win32::Windows::Win32::Foundation::HRESULT completionResult, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_COMPLETE_COMMAND_EXTENDED_PARAMETERS* extendedParameters) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjFillDirEntryBuffer(win32::Windows::Win32::Foundation::PWSTR fileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_FILE_BASIC_INFO* fileBasicInfo, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_DIR_ENTRY_BUFFER_HANDLE dirEntryBufferHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_PrjFillDirEntryBuffer2(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_DIR_ENTRY_BUFFER_HANDLE dirEntryBufferHandle, win32::Windows::Win32::Foundation::PWSTR fileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_FILE_BASIC_INFO* fileBasicInfo, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_EXTENDED_INFO* extendedInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOLEAN __stdcall ORBIT_IMPL_PrjFileNameMatch(win32::Windows::Win32::Foundation::PWSTR fileNameToCheck, win32::Windows::Win32::Foundation::PWSTR pattern) noexcept;
    int32_t __stdcall ORBIT_IMPL_PrjFileNameCompare(win32::Windows::Win32::Foundation::PWSTR fileName1, win32::Windows::Win32::Foundation::PWSTR fileName2) noexcept;
    win32::Windows::Win32::Foundation::BOOLEAN __stdcall ORBIT_IMPL_PrjDoesNameContainWildCards(win32::Windows::Win32::Foundation::PWSTR fileName) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjStartVirtualizing)(win32::Windows::Win32::Foundation::PWSTR virtualizationRootPath, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_CALLBACKS* callbacks, void* instanceContext, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_STARTVIRTUALIZING_OPTIONS* options, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT* namespaceVirtualizationContext) noexcept;
    void (__stdcall *PrjStopVirtualizing)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjClearNegativePathCache)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, uint32_t* totalEntryNumber) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjGetVirtualizationInstanceInfo)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_VIRTUALIZATION_INSTANCE_INFO* virtualizationInstanceInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjMarkDirectoryAsPlaceholder)(win32::Windows::Win32::Foundation::PWSTR rootPathName, win32::Windows::Win32::Foundation::PWSTR targetPathName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_VERSION_INFO* versionInfo, ::win32::guid* virtualizationInstanceID) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjWritePlaceholderInfo)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjWritePlaceholderInfo2)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_EXTENDED_INFO* ExtendedInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjUpdateFileIfNeeded)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_TYPES updateFlags, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_FAILURE_CAUSES* failureReason) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjDeleteFile)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_TYPES updateFlags, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_UPDATE_FAILURE_CAUSES* failureReason) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjWriteFileData)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, ::win32::guid* dataStreamId, void* buffer, uint64_t byteOffset, uint32_t length) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjGetOnDiskFileState)(win32::Windows::Win32::Foundation::PWSTR destinationFileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_FILE_STATE* fileState) noexcept;
    void* (__stdcall *PrjAllocateAlignedBuffer)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, size_t size) noexcept;
    void (__stdcall *PrjFreeAlignedBuffer)(void* buffer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjCompleteCommand)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT namespaceVirtualizationContext, int32_t commandId, win32::Windows::Win32::Foundation::HRESULT completionResult, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_COMPLETE_COMMAND_EXTENDED_PARAMETERS* extendedParameters) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjFillDirEntryBuffer)(win32::Windows::Win32::Foundation::PWSTR fileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_FILE_BASIC_INFO* fileBasicInfo, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_DIR_ENTRY_BUFFER_HANDLE dirEntryBufferHandle) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *PrjFillDirEntryBuffer2)(win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_DIR_ENTRY_BUFFER_HANDLE dirEntryBufferHandle, win32::Windows::Win32::Foundation::PWSTR fileName, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_FILE_BASIC_INFO* fileBasicInfo, win32::Windows::Win32::Storage::ProjectedFileSystem::PRJ_EXTENDED_INFO* extendedInfo) noexcept;
    win32::Windows::Win32::Foundation::BOOLEAN (__stdcall *PrjFileNameMatch)(win32::Windows::Win32::Foundation::PWSTR fileNameToCheck, win32::Windows::Win32::Foundation::PWSTR pattern) noexcept;
    int32_t (__stdcall *PrjFileNameCompare)(win32::Windows::Win32::Foundation::PWSTR fileName1, win32::Windows::Win32::Foundation::PWSTR fileName2) noexcept;
    win32::Windows::Win32::Foundation::BOOLEAN (__stdcall *PrjDoesNameContainWildCards)(win32::Windows::Win32::Foundation::PWSTR fileName) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
