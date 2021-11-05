// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_CloudFilters_2_H
#define WIN32_Windows_Win32_Storage_CloudFilters_2_H
#include "win32/Windows.Win32.Storage.CloudFilters.h"
#include "win32/impl/Windows.Win32.Storage.CloudFilters.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Storage::CloudFilters
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfGetPlatformInfo(win32::Windows::Win32::Storage::CloudFilters::CF_PLATFORM_INFO* PlatformVersion) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(PlatformVersion);

        auto win32_impl_result = g_api_table.CfGetPlatformInfo(PlatformVersion);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfRegisterSyncRoot(win32::Windows::Win32::Foundation::PWSTR SyncRootPath, win32::Windows::Win32::Storage::CloudFilters::CF_SYNC_REGISTRATION* Registration, win32::Windows::Win32::Storage::CloudFilters::CF_SYNC_POLICIES* Policies, win32::Windows::Win32::Storage::CloudFilters::CF_REGISTER_FLAGS RegisterFlags) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(SyncRootPath);
        ORBIT_TRACK_PARAM(Registration);
        ORBIT_TRACK_PARAM(Policies);
        ORBIT_TRACK_PARAM(RegisterFlags);

        auto win32_impl_result = g_api_table.CfRegisterSyncRoot(SyncRootPath, Registration, Policies, RegisterFlags);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfUnregisterSyncRoot(win32::Windows::Win32::Foundation::PWSTR SyncRootPath) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(SyncRootPath);

        auto win32_impl_result = g_api_table.CfUnregisterSyncRoot(SyncRootPath);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfConnectSyncRoot(win32::Windows::Win32::Foundation::PWSTR SyncRootPath, win32::Windows::Win32::Storage::CloudFilters::CF_CALLBACK_REGISTRATION* CallbackTable, void* CallbackContext, win32::Windows::Win32::Storage::CloudFilters::CF_CONNECT_FLAGS ConnectFlags, win32::Windows::Win32::Storage::CloudFilters::CF_CONNECTION_KEY* ConnectionKey) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(SyncRootPath);
        ORBIT_TRACK_PARAM(CallbackTable);
        ORBIT_TRACK_PARAM(CallbackContext);
        ORBIT_TRACK_PARAM(ConnectFlags);
        ORBIT_TRACK_PARAM(ConnectionKey);

        auto win32_impl_result = g_api_table.CfConnectSyncRoot(SyncRootPath, CallbackTable, CallbackContext, ConnectFlags, ConnectionKey);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfDisconnectSyncRoot(win32::Windows::Win32::Storage::CloudFilters::CF_CONNECTION_KEY ConnectionKey) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ConnectionKey);

        auto win32_impl_result = g_api_table.CfDisconnectSyncRoot(ConnectionKey);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfGetTransferKey(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Foundation::LARGE_INTEGER* TransferKey) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(TransferKey);

        auto win32_impl_result = g_api_table.CfGetTransferKey(FileHandle, TransferKey);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_CfReleaseTransferKey(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Foundation::LARGE_INTEGER* TransferKey) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(TransferKey);

        g_api_table.CfReleaseTransferKey(FileHandle, TransferKey);
        
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfExecute(win32::Windows::Win32::Storage::CloudFilters::CF_OPERATION_INFO* OpInfo, win32::Windows::Win32::Storage::CloudFilters::CF_OPERATION_PARAMETERS* OpParams) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(OpInfo);
        ORBIT_TRACK_PARAM(OpParams);

        auto win32_impl_result = g_api_table.CfExecute(OpInfo, OpParams);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfUpdateSyncProviderStatus(win32::Windows::Win32::Storage::CloudFilters::CF_CONNECTION_KEY ConnectionKey, win32::Windows::Win32::Storage::CloudFilters::CF_SYNC_PROVIDER_STATUS ProviderStatus) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ConnectionKey);
        ORBIT_TRACK_PARAM(ProviderStatus);

        auto win32_impl_result = g_api_table.CfUpdateSyncProviderStatus(ConnectionKey, ProviderStatus);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfQuerySyncProviderStatus(win32::Windows::Win32::Storage::CloudFilters::CF_CONNECTION_KEY ConnectionKey, win32::Windows::Win32::Storage::CloudFilters::CF_SYNC_PROVIDER_STATUS* ProviderStatus) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ConnectionKey);
        ORBIT_TRACK_PARAM(ProviderStatus);

        auto win32_impl_result = g_api_table.CfQuerySyncProviderStatus(ConnectionKey, ProviderStatus);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfReportSyncStatus(win32::Windows::Win32::Foundation::PWSTR SyncRootPath, win32::Windows::Win32::Storage::CloudFilters::CF_SYNC_STATUS* SyncStatus) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(SyncRootPath);
        ORBIT_TRACK_PARAM(SyncStatus);

        auto win32_impl_result = g_api_table.CfReportSyncStatus(SyncRootPath, SyncStatus);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfCreatePlaceholders(win32::Windows::Win32::Foundation::PWSTR BaseDirectoryPath, win32::Windows::Win32::Storage::CloudFilters::CF_PLACEHOLDER_CREATE_INFO* PlaceholderArray, uint32_t PlaceholderCount, win32::Windows::Win32::Storage::CloudFilters::CF_CREATE_FLAGS CreateFlags, uint32_t* EntriesProcessed) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(BaseDirectoryPath);
        ORBIT_TRACK_PARAM(PlaceholderArray);
        ORBIT_TRACK_PARAM(PlaceholderCount);
        ORBIT_TRACK_PARAM(CreateFlags);
        ORBIT_TRACK_PARAM(EntriesProcessed);

        auto win32_impl_result = g_api_table.CfCreatePlaceholders(BaseDirectoryPath, PlaceholderArray, PlaceholderCount, CreateFlags, EntriesProcessed);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfOpenFileWithOplock(win32::Windows::Win32::Foundation::PWSTR FilePath, win32::Windows::Win32::Storage::CloudFilters::CF_OPEN_FILE_FLAGS Flags, win32::Windows::Win32::Foundation::HANDLE* ProtectedHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FilePath);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(ProtectedHandle);

        auto win32_impl_result = g_api_table.CfOpenFileWithOplock(FilePath, Flags, ProtectedHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOLEAN __stdcall ORBIT_IMPL_CfReferenceProtectedHandle(win32::Windows::Win32::Foundation::HANDLE ProtectedHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ProtectedHandle);

        auto win32_impl_result = g_api_table.CfReferenceProtectedHandle(ProtectedHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_CfGetWin32HandleFromProtectedHandle(win32::Windows::Win32::Foundation::HANDLE ProtectedHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ProtectedHandle);

        auto win32_impl_result = g_api_table.CfGetWin32HandleFromProtectedHandle(ProtectedHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_CfReleaseProtectedHandle(win32::Windows::Win32::Foundation::HANDLE ProtectedHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ProtectedHandle);

        g_api_table.CfReleaseProtectedHandle(ProtectedHandle);
        
    }

    void __stdcall ORBIT_IMPL_CfCloseHandle(win32::Windows::Win32::Foundation::HANDLE FileHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);

        g_api_table.CfCloseHandle(FileHandle);
        
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfConvertToPlaceholder(win32::Windows::Win32::Foundation::HANDLE FileHandle, void* FileIdentity, uint32_t FileIdentityLength, win32::Windows::Win32::Storage::CloudFilters::CF_CONVERT_FLAGS ConvertFlags, int64_t* ConvertUsn, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(FileIdentity);
        ORBIT_TRACK_PARAM(FileIdentityLength);
        ORBIT_TRACK_PARAM(ConvertFlags);
        ORBIT_TRACK_PARAM(ConvertUsn);
        ORBIT_TRACK_PARAM(Overlapped);

        auto win32_impl_result = g_api_table.CfConvertToPlaceholder(FileHandle, FileIdentity, FileIdentityLength, ConvertFlags, ConvertUsn, Overlapped);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfUpdatePlaceholder(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Storage::CloudFilters::CF_FS_METADATA* FsMetadata, void* FileIdentity, uint32_t FileIdentityLength, win32::Windows::Win32::Storage::CloudFilters::CF_FILE_RANGE* DehydrateRangeArray, uint32_t DehydrateRangeCount, win32::Windows::Win32::Storage::CloudFilters::CF_UPDATE_FLAGS UpdateFlags, int64_t* UpdateUsn, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(FsMetadata);
        ORBIT_TRACK_PARAM(FileIdentity);
        ORBIT_TRACK_PARAM(FileIdentityLength);
        ORBIT_TRACK_PARAM(DehydrateRangeArray);
        ORBIT_TRACK_PARAM(DehydrateRangeCount);
        ORBIT_TRACK_PARAM(UpdateFlags);
        ORBIT_TRACK_PARAM(UpdateUsn);
        ORBIT_TRACK_PARAM(Overlapped);

        auto win32_impl_result = g_api_table.CfUpdatePlaceholder(FileHandle, FsMetadata, FileIdentity, FileIdentityLength, DehydrateRangeArray, DehydrateRangeCount, UpdateFlags, UpdateUsn, Overlapped);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfRevertPlaceholder(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Storage::CloudFilters::CF_REVERT_FLAGS RevertFlags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(RevertFlags);
        ORBIT_TRACK_PARAM(Overlapped);

        auto win32_impl_result = g_api_table.CfRevertPlaceholder(FileHandle, RevertFlags, Overlapped);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfHydratePlaceholder(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Foundation::LARGE_INTEGER StartingOffset, win32::Windows::Win32::Foundation::LARGE_INTEGER Length, win32::Windows::Win32::Storage::CloudFilters::CF_HYDRATE_FLAGS HydrateFlags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(StartingOffset);
        ORBIT_TRACK_PARAM(Length);
        ORBIT_TRACK_PARAM(HydrateFlags);
        ORBIT_TRACK_PARAM(Overlapped);

        auto win32_impl_result = g_api_table.CfHydratePlaceholder(FileHandle, StartingOffset, Length, HydrateFlags, Overlapped);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfDehydratePlaceholder(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Foundation::LARGE_INTEGER StartingOffset, win32::Windows::Win32::Foundation::LARGE_INTEGER Length, win32::Windows::Win32::Storage::CloudFilters::CF_DEHYDRATE_FLAGS DehydrateFlags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(StartingOffset);
        ORBIT_TRACK_PARAM(Length);
        ORBIT_TRACK_PARAM(DehydrateFlags);
        ORBIT_TRACK_PARAM(Overlapped);

        auto win32_impl_result = g_api_table.CfDehydratePlaceholder(FileHandle, StartingOffset, Length, DehydrateFlags, Overlapped);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfSetPinState(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Storage::CloudFilters::CF_PIN_STATE PinState, win32::Windows::Win32::Storage::CloudFilters::CF_SET_PIN_FLAGS PinFlags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(PinState);
        ORBIT_TRACK_PARAM(PinFlags);
        ORBIT_TRACK_PARAM(Overlapped);

        auto win32_impl_result = g_api_table.CfSetPinState(FileHandle, PinState, PinFlags, Overlapped);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfSetInSyncState(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Storage::CloudFilters::CF_IN_SYNC_STATE InSyncState, win32::Windows::Win32::Storage::CloudFilters::CF_SET_IN_SYNC_FLAGS InSyncFlags, int64_t* InSyncUsn) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(InSyncState);
        ORBIT_TRACK_PARAM(InSyncFlags);
        ORBIT_TRACK_PARAM(InSyncUsn);

        auto win32_impl_result = g_api_table.CfSetInSyncState(FileHandle, InSyncState, InSyncFlags, InSyncUsn);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfSetCorrelationVector(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::System::SystemServices::CORRELATION_VECTOR* CorrelationVector) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(CorrelationVector);

        auto win32_impl_result = g_api_table.CfSetCorrelationVector(FileHandle, CorrelationVector);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfGetCorrelationVector(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::System::SystemServices::CORRELATION_VECTOR* CorrelationVector) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(CorrelationVector);

        auto win32_impl_result = g_api_table.CfGetCorrelationVector(FileHandle, CorrelationVector);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Storage::CloudFilters::CF_PLACEHOLDER_STATE __stdcall ORBIT_IMPL_CfGetPlaceholderStateFromAttributeTag(uint32_t FileAttributes, uint32_t ReparseTag) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileAttributes);
        ORBIT_TRACK_PARAM(ReparseTag);

        auto win32_impl_result = g_api_table.CfGetPlaceholderStateFromAttributeTag(FileAttributes, ReparseTag);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Storage::CloudFilters::CF_PLACEHOLDER_STATE __stdcall ORBIT_IMPL_CfGetPlaceholderStateFromFileInfo(void* InfoBuffer, win32::Windows::Win32::Storage::FileSystem::FILE_INFO_BY_HANDLE_CLASS InfoClass) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(InfoBuffer);
        ORBIT_TRACK_PARAM(InfoClass);

        auto win32_impl_result = g_api_table.CfGetPlaceholderStateFromFileInfo(InfoBuffer, InfoClass);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Storage::CloudFilters::CF_PLACEHOLDER_STATE __stdcall ORBIT_IMPL_CfGetPlaceholderStateFromFindData(win32::Windows::Win32::Storage::FileSystem::WIN32_FIND_DATAA* FindData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FindData);

        auto win32_impl_result = g_api_table.CfGetPlaceholderStateFromFindData(FindData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfGetPlaceholderInfo(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Storage::CloudFilters::CF_PLACEHOLDER_INFO_CLASS InfoClass, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(InfoClass);
        ORBIT_TRACK_PARAM(InfoBuffer);
        ORBIT_TRACK_PARAM(InfoBufferLength);
        ORBIT_TRACK_PARAM(ReturnedLength);

        auto win32_impl_result = g_api_table.CfGetPlaceholderInfo(FileHandle, InfoClass, InfoBuffer, InfoBufferLength, ReturnedLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfGetSyncRootInfoByPath(win32::Windows::Win32::Foundation::PWSTR FilePath, win32::Windows::Win32::Storage::CloudFilters::CF_SYNC_ROOT_INFO_CLASS InfoClass, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FilePath);
        ORBIT_TRACK_PARAM(InfoClass);
        ORBIT_TRACK_PARAM(InfoBuffer);
        ORBIT_TRACK_PARAM(InfoBufferLength);
        ORBIT_TRACK_PARAM(ReturnedLength);

        auto win32_impl_result = g_api_table.CfGetSyncRootInfoByPath(FilePath, InfoClass, InfoBuffer, InfoBufferLength, ReturnedLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfGetSyncRootInfoByHandle(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Storage::CloudFilters::CF_SYNC_ROOT_INFO_CLASS InfoClass, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(InfoClass);
        ORBIT_TRACK_PARAM(InfoBuffer);
        ORBIT_TRACK_PARAM(InfoBufferLength);
        ORBIT_TRACK_PARAM(ReturnedLength);

        auto win32_impl_result = g_api_table.CfGetSyncRootInfoByHandle(FileHandle, InfoClass, InfoBuffer, InfoBufferLength, ReturnedLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfGetPlaceholderRangeInfo(win32::Windows::Win32::Foundation::HANDLE FileHandle, win32::Windows::Win32::Storage::CloudFilters::CF_PLACEHOLDER_RANGE_INFO_CLASS InfoClass, win32::Windows::Win32::Foundation::LARGE_INTEGER StartingOffset, win32::Windows::Win32::Foundation::LARGE_INTEGER Length, void* InfoBuffer, uint32_t InfoBufferLength, uint32_t* ReturnedLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(FileHandle);
        ORBIT_TRACK_PARAM(InfoClass);
        ORBIT_TRACK_PARAM(StartingOffset);
        ORBIT_TRACK_PARAM(Length);
        ORBIT_TRACK_PARAM(InfoBuffer);
        ORBIT_TRACK_PARAM(InfoBufferLength);
        ORBIT_TRACK_PARAM(ReturnedLength);

        auto win32_impl_result = g_api_table.CfGetPlaceholderRangeInfo(FileHandle, InfoClass, StartingOffset, Length, InfoBuffer, InfoBufferLength, ReturnedLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfReportProviderProgress(win32::Windows::Win32::Storage::CloudFilters::CF_CONNECTION_KEY ConnectionKey, win32::Windows::Win32::Foundation::LARGE_INTEGER TransferKey, win32::Windows::Win32::Foundation::LARGE_INTEGER ProviderProgressTotal, win32::Windows::Win32::Foundation::LARGE_INTEGER ProviderProgressCompleted) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ConnectionKey);
        ORBIT_TRACK_PARAM(TransferKey);
        ORBIT_TRACK_PARAM(ProviderProgressTotal);
        ORBIT_TRACK_PARAM(ProviderProgressCompleted);

        auto win32_impl_result = g_api_table.CfReportProviderProgress(ConnectionKey, TransferKey, ProviderProgressTotal, ProviderProgressCompleted);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CfReportProviderProgress2(win32::Windows::Win32::Storage::CloudFilters::CF_CONNECTION_KEY ConnectionKey, win32::Windows::Win32::Foundation::LARGE_INTEGER TransferKey, win32::Windows::Win32::Foundation::LARGE_INTEGER RequestKey, win32::Windows::Win32::Foundation::LARGE_INTEGER ProviderProgressTotal, win32::Windows::Win32::Foundation::LARGE_INTEGER ProviderProgressCompleted, uint32_t TargetSessionId) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ConnectionKey);
        ORBIT_TRACK_PARAM(TransferKey);
        ORBIT_TRACK_PARAM(RequestKey);
        ORBIT_TRACK_PARAM(ProviderProgressTotal);
        ORBIT_TRACK_PARAM(ProviderProgressCompleted);
        ORBIT_TRACK_PARAM(TargetSessionId);

        auto win32_impl_result = g_api_table.CfReportProviderProgress2(ConnectionKey, TransferKey, RequestKey, ProviderProgressTotal, ProviderProgressCompleted, TargetSessionId);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif