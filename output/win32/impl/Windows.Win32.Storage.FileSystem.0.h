// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_FileSystem_0_H
#define WIN32_Windows_Win32_Storage_FileSystem_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOL;
    struct HANDLE;
    union LARGE_INTEGER;
    struct PSTR;
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Security
{
    struct GENERIC_MAPPING;
    struct PRIVILEGE_SET;
    struct SECURITY_DESCRIPTOR;
}
WIN32_EXPORT namespace win32::Windows::Win32::Storage::FileSystem
{
#pragma region enums
    enum class CLFS_CONTEXT_MODE : int32_t
    {
        ClfsContextNone = 0,
        ClfsContextUndoNext = 1,
        ClfsContextPrevious = 2,
        ClfsContextForward = 3,
    };
    enum class CLFS_FLAG : uint32_t
    {
        CLFS_FLAG_FORCE_APPEND = 0x1,
        CLFS_FLAG_FORCE_FLUSH = 0x2,
        CLFS_FLAG_NO_FLAGS = 0x0,
        CLFS_FLAG_USE_RESERVATION = 0x4,
    };
    enum class CLFS_IOSTATS_CLASS : int32_t
    {
        ClfsIoStatsDefault = 0,
        ClfsIoStatsMax = 65535,
    };
    enum class CLFS_LOG_ARCHIVE_MODE : int32_t
    {
        ClfsLogArchiveEnabled = 1,
        ClfsLogArchiveDisabled = 2,
    };
    enum class CLFS_MGMT_NOTIFICATION_TYPE : int32_t
    {
        ClfsMgmtAdvanceTailNotification = 0,
        ClfsMgmtLogFullHandlerNotification = 1,
        ClfsMgmtLogUnpinnedNotification = 2,
        ClfsMgmtLogWriteNotification = 3,
    };
    enum class CLFS_MGMT_POLICY_TYPE : int32_t
    {
        ClfsMgmtPolicyMaximumSize = 0,
        ClfsMgmtPolicyMinimumSize = 1,
        ClfsMgmtPolicyNewContainerSize = 2,
        ClfsMgmtPolicyGrowthRate = 3,
        ClfsMgmtPolicyLogTail = 4,
        ClfsMgmtPolicyAutoShrink = 5,
        ClfsMgmtPolicyAutoGrow = 6,
        ClfsMgmtPolicyNewContainerPrefix = 7,
        ClfsMgmtPolicyNewContainerSuffix = 8,
        ClfsMgmtPolicyNewContainerExtension = 9,
        ClfsMgmtPolicyInvalid = 10,
    };
    enum class CLS_CONTEXT_MODE : int32_t
    {
        ClsContextNone = 0,
        ClsContextUndoNext = 1,
        ClsContextPrevious = 2,
        ClsContextForward = 3,
    };
    enum class CLS_IOSTATS_CLASS : int32_t
    {
        ClsIoStatsDefault = 0,
        ClsIoStatsMax = 65535,
    };
    enum class CLS_LOG_INFORMATION_CLASS : int32_t
    {
        ClfsLogBasicInformation = 0,
        ClfsLogBasicInformationPhysical = 1,
        ClfsLogPhysicalNameInformation = 2,
        ClfsLogStreamIdentifierInformation = 3,
        ClfsLogSystemMarkingInformation = 4,
        ClfsLogPhysicalLsnInformation = 5,
    };
    enum class COPYFILE2_COPY_PHASE : int32_t
    {
        COPYFILE2_PHASE_NONE = 0,
        COPYFILE2_PHASE_PREPARE_SOURCE = 1,
        COPYFILE2_PHASE_PREPARE_DEST = 2,
        COPYFILE2_PHASE_READ_SOURCE = 3,
        COPYFILE2_PHASE_WRITE_DESTINATION = 4,
        COPYFILE2_PHASE_SERVER_COPY = 5,
        COPYFILE2_PHASE_NAMEGRAFT_COPY = 6,
        COPYFILE2_PHASE_MAX = 7,
    };
    enum class COPYFILE2_MESSAGE_ACTION : int32_t
    {
        COPYFILE2_PROGRESS_CONTINUE = 0,
        COPYFILE2_PROGRESS_CANCEL = 1,
        COPYFILE2_PROGRESS_STOP = 2,
        COPYFILE2_PROGRESS_QUIET = 3,
        COPYFILE2_PROGRESS_PAUSE = 4,
    };
    enum class COPYFILE2_MESSAGE_TYPE : int32_t
    {
        COPYFILE2_CALLBACK_NONE = 0,
        COPYFILE2_CALLBACK_CHUNK_STARTED = 1,
        COPYFILE2_CALLBACK_CHUNK_FINISHED = 2,
        COPYFILE2_CALLBACK_STREAM_STARTED = 3,
        COPYFILE2_CALLBACK_STREAM_FINISHED = 4,
        COPYFILE2_CALLBACK_POLL_CONTINUE = 5,
        COPYFILE2_CALLBACK_ERROR = 6,
        COPYFILE2_CALLBACK_MAX = 7,
    };
    enum class CREATE_TAPE_PARTITION_METHOD : int32_t
    {
        TAPE_FIXED_PARTITIONS = 0,
        TAPE_INITIATOR_PARTITIONS = 2,
        TAPE_SELECT_PARTITIONS = 1,
    };
    enum class DEFINE_DOS_DEVICE_FLAGS : uint32_t
    {
        DDD_RAW_TARGET_PATH = 0x1,
        DDD_REMOVE_DEFINITION = 0x2,
        DDD_EXACT_MATCH_ON_REMOVE = 0x4,
        DDD_NO_BROADCAST_SYSTEM = 0x8,
        DDD_LUID_BROADCAST_DRIVE = 0x10,
    };
    enum class DISKQUOTA_USERNAME_RESOLVE : uint32_t
    {
        DISKQUOTA_USERNAME_RESOLVE_ASYNC = 0x2,
        DISKQUOTA_USERNAME_RESOLVE_NONE = 0x0,
        DISKQUOTA_USERNAME_RESOLVE_SYNC = 0x1,
    };
    enum class ERASE_TAPE_TYPE : int32_t
    {
        TAPE_ERASE_LONG = 1,
        TAPE_ERASE_SHORT = 0,
    };
    enum class FILE_ACCESS_FLAGS : uint32_t
    {
        FILE_READ_DATA = 0x1,
        FILE_LIST_DIRECTORY = 0x1,
        FILE_WRITE_DATA = 0x2,
        FILE_ADD_FILE = 0x2,
        FILE_APPEND_DATA = 0x4,
        FILE_ADD_SUBDIRECTORY = 0x4,
        FILE_CREATE_PIPE_INSTANCE = 0x4,
        FILE_READ_EA = 0x8,
        FILE_WRITE_EA = 0x10,
        FILE_EXECUTE = 0x20,
        FILE_TRAVERSE = 0x20,
        FILE_DELETE_CHILD = 0x40,
        FILE_READ_ATTRIBUTES = 0x80,
        FILE_WRITE_ATTRIBUTES = 0x100,
        READ_CONTROL = 0x20000,
        SYNCHRONIZE = 0x100000,
        STANDARD_RIGHTS_REQUIRED = 0xf0000,
        STANDARD_RIGHTS_READ = 0x20000,
        STANDARD_RIGHTS_WRITE = 0x20000,
        STANDARD_RIGHTS_EXECUTE = 0x20000,
        STANDARD_RIGHTS_ALL = 0x1f0000,
        SPECIFIC_RIGHTS_ALL = 0xffff,
        FILE_ALL_ACCESS = 0x1f01ff,
        FILE_GENERIC_READ = 0x120089,
        FILE_GENERIC_WRITE = 0x120116,
        FILE_GENERIC_EXECUTE = 0x1200a0,
    };
    enum class FILE_ACTION : uint32_t
    {
        FILE_ACTION_ADDED = 0x1,
        FILE_ACTION_REMOVED = 0x2,
        FILE_ACTION_MODIFIED = 0x3,
        FILE_ACTION_RENAMED_OLD_NAME = 0x4,
        FILE_ACTION_RENAMED_NEW_NAME = 0x5,
    };
    enum class FILE_CREATION_DISPOSITION : uint32_t
    {
        CREATE_NEW = 0x1,
        CREATE_ALWAYS = 0x2,
        OPEN_EXISTING = 0x3,
        OPEN_ALWAYS = 0x4,
        TRUNCATE_EXISTING = 0x5,
    };
    enum class FILE_DEVICE_TYPE : uint32_t
    {
        FILE_DEVICE_CD_ROM = 0x2,
        FILE_DEVICE_DISK = 0x7,
        FILE_DEVICE_TAPE = 0x1f,
        FILE_DEVICE_DVD = 0x33,
    };
    enum class FILE_FLAGS_AND_ATTRIBUTES : uint32_t
    {
        FILE_ATTRIBUTE_READONLY = 0x1,
        FILE_ATTRIBUTE_HIDDEN = 0x2,
        FILE_ATTRIBUTE_SYSTEM = 0x4,
        FILE_ATTRIBUTE_DIRECTORY = 0x10,
        FILE_ATTRIBUTE_ARCHIVE = 0x20,
        FILE_ATTRIBUTE_DEVICE = 0x40,
        FILE_ATTRIBUTE_NORMAL = 0x80,
        FILE_ATTRIBUTE_TEMPORARY = 0x100,
        FILE_ATTRIBUTE_SPARSE_FILE = 0x200,
        FILE_ATTRIBUTE_REPARSE_POINT = 0x400,
        FILE_ATTRIBUTE_COMPRESSED = 0x800,
        FILE_ATTRIBUTE_OFFLINE = 0x1000,
        FILE_ATTRIBUTE_NOT_CONTENT_INDEXED = 0x2000,
        FILE_ATTRIBUTE_ENCRYPTED = 0x4000,
        FILE_ATTRIBUTE_INTEGRITY_STREAM = 0x8000,
        FILE_ATTRIBUTE_VIRTUAL = 0x10000,
        FILE_ATTRIBUTE_NO_SCRUB_DATA = 0x20000,
        FILE_ATTRIBUTE_EA = 0x40000,
        FILE_ATTRIBUTE_PINNED = 0x80000,
        FILE_ATTRIBUTE_UNPINNED = 0x100000,
        FILE_ATTRIBUTE_RECALL_ON_OPEN = 0x40000,
        FILE_ATTRIBUTE_RECALL_ON_DATA_ACCESS = 0x400000,
        FILE_FLAG_WRITE_THROUGH = 0x80000000,
        FILE_FLAG_OVERLAPPED = 0x40000000,
        FILE_FLAG_NO_BUFFERING = 0x20000000,
        FILE_FLAG_RANDOM_ACCESS = 0x10000000,
        FILE_FLAG_SEQUENTIAL_SCAN = 0x8000000,
        FILE_FLAG_DELETE_ON_CLOSE = 0x4000000,
        FILE_FLAG_BACKUP_SEMANTICS = 0x2000000,
        FILE_FLAG_POSIX_SEMANTICS = 0x1000000,
        FILE_FLAG_SESSION_AWARE = 0x800000,
        FILE_FLAG_OPEN_REPARSE_POINT = 0x200000,
        FILE_FLAG_OPEN_NO_RECALL = 0x100000,
        FILE_FLAG_FIRST_PIPE_INSTANCE = 0x80000,
        PIPE_ACCESS_DUPLEX = 0x3,
        PIPE_ACCESS_INBOUND = 0x1,
        PIPE_ACCESS_OUTBOUND = 0x2,
        SECURITY_ANONYMOUS = 0x0,
        SECURITY_IDENTIFICATION = 0x10000,
        SECURITY_IMPERSONATION = 0x20000,
        SECURITY_DELEGATION = 0x30000,
        SECURITY_CONTEXT_TRACKING = 0x40000,
        SECURITY_EFFECTIVE_ONLY = 0x80000,
        SECURITY_SQOS_PRESENT = 0x100000,
        SECURITY_VALID_SQOS_FLAGS = 0x1f0000,
    };
    enum class FILE_ID_TYPE : int32_t
    {
        FileIdType = 0,
        ObjectIdType = 1,
        ExtendedFileIdType = 2,
        MaximumFileIdType = 3,
    };
    enum class FILE_INFO_BY_HANDLE_CLASS : int32_t
    {
        FileBasicInfo = 0,
        FileStandardInfo = 1,
        FileNameInfo = 2,
        FileRenameInfo = 3,
        FileDispositionInfo = 4,
        FileAllocationInfo = 5,
        FileEndOfFileInfo = 6,
        FileStreamInfo = 7,
        FileCompressionInfo = 8,
        FileAttributeTagInfo = 9,
        FileIdBothDirectoryInfo = 10,
        FileIdBothDirectoryRestartInfo = 11,
        FileIoPriorityHintInfo = 12,
        FileRemoteProtocolInfo = 13,
        FileFullDirectoryInfo = 14,
        FileFullDirectoryRestartInfo = 15,
        FileStorageInfo = 16,
        FileAlignmentInfo = 17,
        FileIdInfo = 18,
        FileIdExtdDirectoryInfo = 19,
        FileIdExtdDirectoryRestartInfo = 20,
        FileDispositionInfoEx = 21,
        FileRenameInfoEx = 22,
        FileCaseSensitiveInfo = 23,
        FileNormalizedNameInfo = 24,
        MaximumFileInfoByHandleClass = 25,
    };
    enum class FILE_INFO_FLAGS_PERMISSIONS : uint32_t
    {
        PERM_FILE_READ = 0x1,
        PERM_FILE_WRITE = 0x2,
        PERM_FILE_CREATE = 0x4,
    };
    enum class FILE_NAME : uint32_t
    {
        FILE_NAME_NORMALIZED = 0x0,
        FILE_NAME_OPENED = 0x8,
    };
    enum class FILE_NOTIFY_CHANGE : uint32_t
    {
        FILE_NOTIFY_CHANGE_FILE_NAME = 0x1,
        FILE_NOTIFY_CHANGE_DIR_NAME = 0x2,
        FILE_NOTIFY_CHANGE_ATTRIBUTES = 0x4,
        FILE_NOTIFY_CHANGE_SIZE = 0x8,
        FILE_NOTIFY_CHANGE_LAST_WRITE = 0x10,
        FILE_NOTIFY_CHANGE_LAST_ACCESS = 0x20,
        FILE_NOTIFY_CHANGE_CREATION = 0x40,
        FILE_NOTIFY_CHANGE_SECURITY = 0x100,
    };
    enum class FILE_SHARE_MODE : uint32_t
    {
        FILE_SHARE_NONE = 0x0,
        FILE_SHARE_DELETE = 0x4,
        FILE_SHARE_READ = 0x1,
        FILE_SHARE_WRITE = 0x2,
    };
    enum class FINDEX_INFO_LEVELS : int32_t
    {
        FindExInfoStandard = 0,
        FindExInfoBasic = 1,
        FindExInfoMaxInfoLevel = 2,
    };
    enum class FINDEX_SEARCH_OPS : int32_t
    {
        FindExSearchNameMatch = 0,
        FindExSearchLimitToDirectories = 1,
        FindExSearchLimitToDevices = 2,
        FindExSearchMaxSearchOp = 3,
    };
    enum class FIND_FIRST_EX_FLAGS : uint32_t
    {
        FIND_FIRST_EX_CASE_SENSITIVE = 0x1,
        FIND_FIRST_EX_LARGE_FETCH = 0x2,
        FIND_FIRST_EX_ON_DISK_ENTRIES_ONLY = 0x4,
    };
    enum class GET_FILEEX_INFO_LEVELS : int32_t
    {
        GetFileExInfoStandard = 0,
        GetFileExMaxInfoLevel = 1,
    };
    enum class GET_FILE_VERSION_INFO_FLAGS : uint32_t
    {
        FILE_VER_GET_LOCALISED = 0x1,
        FILE_VER_GET_NEUTRAL = 0x2,
        FILE_VER_GET_PREFETCHED = 0x4,
    };
    enum class GET_TAPE_DRIVE_PARAMETERS_OPERATION : uint32_t
    {
        GET_TAPE_DRIVE_INFORMATION = 0x1,
        GET_TAPE_MEDIA_INFORMATION = 0x0,
    };
    enum class IORING_CREATE_ADVISORY_FLAGS : int32_t
    {
        IORING_CREATE_ADVISORY_FLAGS_NONE = 0,
    };
    enum class IORING_CREATE_REQUIRED_FLAGS : int32_t
    {
        IORING_CREATE_REQUIRED_FLAGS_NONE = 0,
    };
    enum class IORING_FEATURE_FLAGS : int32_t
    {
        IORING_FEATURE_FLAGS_NONE = 0,
        IORING_FEATURE_UM_EMULATION = 1,
        IORING_FEATURE_SET_COMPLETION_EVENT = 2,
    };
    enum class IORING_OP_CODE : int32_t
    {
        IORING_OP_NOP = 0,
        IORING_OP_READ = 1,
        IORING_OP_REGISTER_FILES = 2,
        IORING_OP_REGISTER_BUFFERS = 3,
        IORING_OP_CANCEL = 4,
    };
    enum class IORING_REF_KIND : int32_t
    {
        IORING_REF_RAW = 0,
        IORING_REF_REGISTERED = 1,
    };
    enum class IORING_SQE_FLAGS : int32_t
    {
        IOSQE_FLAGS_NONE = 0,
    };
    enum class IORING_VERSION : int32_t
    {
        IORING_VERSION_INVALID = 0,
        IORING_VERSION_1 = 1,
    };
    enum class LOCK_FILE_FLAGS : uint32_t
    {
        LOCKFILE_EXCLUSIVE_LOCK = 0x2,
        LOCKFILE_FAIL_IMMEDIATELY = 0x1,
    };
    enum class LPPROGRESS_ROUTINE_CALLBACK_REASON : uint32_t
    {
        CALLBACK_CHUNK_FINISHED = 0x0,
        CALLBACK_STREAM_SWITCH = 0x1,
    };
    enum class LZOPENFILE_STYLE : uint32_t
    {
        OF_CANCEL = 0x800,
        OF_CREATE = 0x1000,
        OF_DELETE = 0x200,
        OF_EXIST = 0x4000,
        OF_PARSE = 0x100,
        OF_PROMPT = 0x2000,
        OF_READ = 0x0,
        OF_READWRITE = 0x2,
        OF_REOPEN = 0x8000,
        OF_SHARE_DENY_NONE = 0x40,
        OF_SHARE_DENY_READ = 0x30,
        OF_SHARE_DENY_WRITE = 0x20,
        OF_SHARE_EXCLUSIVE = 0x10,
        OF_WRITE = 0x1,
        OF_SHARE_COMPAT = 0x0,
        OF_VERIFY = 0x400,
    };
    enum class MOVE_FILE_FLAGS : uint32_t
    {
        MOVEFILE_COPY_ALLOWED = 0x2,
        MOVEFILE_CREATE_HARDLINK = 0x10,
        MOVEFILE_DELAY_UNTIL_REBOOT = 0x4,
        MOVEFILE_REPLACE_EXISTING = 0x1,
        MOVEFILE_WRITE_THROUGH = 0x8,
        MOVEFILE_FAIL_IF_NOT_TRACKABLE = 0x20,
    };
    enum class NTMS_OMID_TYPE : uint32_t
    {
        NTMS_OMID_TYPE_FILESYSTEM_INFO = 0x2,
        NTMS_OMID_TYPE_RAW_LABEL = 0x1,
    };
    enum class NtmsAccessMask : int32_t
    {
        NTMS_USE_ACCESS = 1,
        NTMS_MODIFY_ACCESS = 2,
        NTMS_CONTROL_ACCESS = 4,
    };
    enum class NtmsAllocateOptions : int32_t
    {
        NTMS_ALLOCATE_NEW = 1,
        NTMS_ALLOCATE_NEXT = 2,
        NTMS_ALLOCATE_ERROR_IF_UNAVAILABLE = 4,
    };
    enum class NtmsAllocationPolicy : int32_t
    {
        NTMS_ALLOCATE_FROMSCRATCH = 1,
    };
    enum class NtmsAsyncOperations : int32_t
    {
        NTMS_ASYNCOP_MOUNT = 1,
    };
    enum class NtmsAsyncStatus : int32_t
    {
        NTMS_ASYNCSTATE_QUEUED = 0,
        NTMS_ASYNCSTATE_WAIT_RESOURCE = 1,
        NTMS_ASYNCSTATE_WAIT_OPERATOR = 2,
        NTMS_ASYNCSTATE_INPROCESS = 3,
        NTMS_ASYNCSTATE_COMPLETE = 4,
    };
    enum class NtmsBarCodeState : int32_t
    {
        NTMS_BARCODESTATE_OK = 1,
        NTMS_BARCODESTATE_UNREADABLE = 2,
    };
    enum class NtmsCreateNtmsMediaOptions : int32_t
    {
        NTMS_ERROR_ON_DUPLICATE = 1,
    };
    enum class NtmsCreateOptions : int32_t
    {
        NTMS_OPEN_EXISTING = 1,
        NTMS_CREATE_NEW = 2,
        NTMS_OPEN_ALWAYS = 3,
    };
    enum class NtmsDeallocationPolicy : int32_t
    {
        NTMS_DEALLOCATE_TOSCRATCH = 1,
    };
    enum class NtmsDismountOptions : int32_t
    {
        NTMS_DISMOUNT_DEFERRED = 1,
        NTMS_DISMOUNT_IMMEDIATE = 2,
    };
    enum class NtmsDoorState : int32_t
    {
        NTMS_DOORSTATE_UNKNOWN = 0,
        NTMS_DOORSTATE_CLOSED = 1,
        NTMS_DOORSTATE_OPEN = 2,
    };
    enum class NtmsDriveState : int32_t
    {
        NTMS_DRIVESTATE_DISMOUNTED = 0,
        NTMS_DRIVESTATE_MOUNTED = 1,
        NTMS_DRIVESTATE_LOADED = 2,
        NTMS_DRIVESTATE_UNLOADED = 5,
        NTMS_DRIVESTATE_BEING_CLEANED = 6,
        NTMS_DRIVESTATE_DISMOUNTABLE = 7,
    };
    enum class NtmsDriveType : int32_t
    {
        NTMS_UNKNOWN_DRIVE = 0,
    };
    enum class NtmsEjectOperation : int32_t
    {
        NTMS_EJECT_START = 0,
        NTMS_EJECT_STOP = 1,
        NTMS_EJECT_QUEUE = 2,
        NTMS_EJECT_FORCE = 3,
        NTMS_EJECT_IMMEDIATE = 4,
        NTMS_EJECT_ASK_USER = 5,
    };
    enum class NtmsEnumerateOption : int32_t
    {
        NTMS_ENUM_DEFAULT = 0,
        NTMS_ENUM_ROOTPOOL = 1,
    };
    enum class NtmsInjectOperation : int32_t
    {
        NTMS_INJECT_START = 0,
        NTMS_INJECT_STOP = 1,
        NTMS_INJECT_RETRACT = 2,
        NTMS_INJECT_STARTMANY = 3,
    };
    enum class NtmsInventoryMethod : int32_t
    {
        NTMS_INVENTORY_NONE = 0,
        NTMS_INVENTORY_FAST = 1,
        NTMS_INVENTORY_OMID = 2,
        NTMS_INVENTORY_DEFAULT = 3,
        NTMS_INVENTORY_SLOT = 4,
        NTMS_INVENTORY_STOP = 5,
        NTMS_INVENTORY_MAX = 6,
    };
    enum class NtmsLibRequestFlags : int32_t
    {
        NTMS_LIBREQFLAGS_NOAUTOPURGE = 1,
        NTMS_LIBREQFLAGS_NOFAILEDPURGE = 2,
    };
    enum class NtmsLibraryFlags : int32_t
    {
        NTMS_LIBRARYFLAG_FIXEDOFFLINE = 1,
        NTMS_LIBRARYFLAG_CLEANERPRESENT = 2,
        NTMS_LIBRARYFLAG_AUTODETECTCHANGE = 4,
        NTMS_LIBRARYFLAG_IGNORECLEANERUSESREMAINING = 8,
        NTMS_LIBRARYFLAG_RECOGNIZECLEANERBARCODE = 16,
    };
    enum class NtmsLibraryType : int32_t
    {
        NTMS_LIBRARYTYPE_UNKNOWN = 0,
        NTMS_LIBRARYTYPE_OFFLINE = 1,
        NTMS_LIBRARYTYPE_ONLINE = 2,
        NTMS_LIBRARYTYPE_STANDALONE = 3,
    };
    enum class NtmsLmOperation : int32_t
    {
        NTMS_LM_REMOVE = 0,
        NTMS_LM_DISABLECHANGER = 1,
        NTMS_LM_DISABLELIBRARY = 1,
        NTMS_LM_ENABLECHANGER = 2,
        NTMS_LM_ENABLELIBRARY = 2,
        NTMS_LM_DISABLEDRIVE = 3,
        NTMS_LM_ENABLEDRIVE = 4,
        NTMS_LM_DISABLEMEDIA = 5,
        NTMS_LM_ENABLEMEDIA = 6,
        NTMS_LM_UPDATEOMID = 7,
        NTMS_LM_INVENTORY = 8,
        NTMS_LM_DOORACCESS = 9,
        NTMS_LM_EJECT = 10,
        NTMS_LM_EJECTCLEANER = 11,
        NTMS_LM_INJECT = 12,
        NTMS_LM_INJECTCLEANER = 13,
        NTMS_LM_PROCESSOMID = 14,
        NTMS_LM_CLEANDRIVE = 15,
        NTMS_LM_DISMOUNT = 16,
        NTMS_LM_MOUNT = 17,
        NTMS_LM_WRITESCRATCH = 18,
        NTMS_LM_CLASSIFY = 19,
        NTMS_LM_RESERVECLEANER = 20,
        NTMS_LM_RELEASECLEANER = 21,
        NTMS_LM_MAXWORKITEM = 22,
    };
    enum class NtmsLmState : int32_t
    {
        NTMS_LM_QUEUED = 0,
        NTMS_LM_INPROCESS = 1,
        NTMS_LM_PASSED = 2,
        NTMS_LM_FAILED = 3,
        NTMS_LM_INVALID = 4,
        NTMS_LM_WAITING = 5,
        NTMS_LM_DEFERRED = 6,
        NTMS_LM_DEFFERED = 6,
        NTMS_LM_CANCELLED = 7,
        NTMS_LM_STOPPED = 8,
    };
    enum class NtmsMediaPoolPolicy : int32_t
    {
        NTMS_POOLPOLICY_PURGEOFFLINESCRATCH = 1,
        NTMS_POOLPOLICY_KEEPOFFLINEIMPORT = 2,
    };
    enum class NtmsMediaState : int32_t
    {
        NTMS_MEDIASTATE_IDLE = 0,
        NTMS_MEDIASTATE_INUSE = 1,
        NTMS_MEDIASTATE_MOUNTED = 2,
        NTMS_MEDIASTATE_LOADED = 3,
        NTMS_MEDIASTATE_UNLOADED = 4,
        NTMS_MEDIASTATE_OPERROR = 5,
        NTMS_MEDIASTATE_OPREQ = 6,
    };
    enum class NtmsMountOptions : int32_t
    {
        NTMS_MOUNT_READ = 1,
        NTMS_MOUNT_WRITE = 2,
        NTMS_MOUNT_ERROR_NOT_AVAILABLE = 4,
        NTMS_MOUNT_ERROR_IF_UNAVAILABLE = 4,
        NTMS_MOUNT_ERROR_OFFLINE = 8,
        NTMS_MOUNT_ERROR_IF_OFFLINE = 8,
        NTMS_MOUNT_SPECIFIC_DRIVE = 16,
        NTMS_MOUNT_NOWAIT = 32,
    };
    enum class NtmsMountPriority : int32_t
    {
        NTMS_PRIORITY_DEFAULT = 0,
        NTMS_PRIORITY_HIGHEST = 15,
        NTMS_PRIORITY_HIGH = 7,
        NTMS_PRIORITY_NORMAL = 0,
        NTMS_PRIORITY_LOW = -7,
        NTMS_PRIORITY_LOWEST = -15,
    };
    enum class NtmsNotificationOperations : int32_t
    {
        NTMS_OBJ_UPDATE = 1,
        NTMS_OBJ_INSERT = 2,
        NTMS_OBJ_DELETE = 3,
        NTMS_EVENT_SIGNAL = 4,
        NTMS_EVENT_COMPLETE = 5,
    };
    enum class NtmsObjectsTypes : int32_t
    {
        NTMS_UNKNOWN = 0,
        NTMS_OBJECT = 1,
        NTMS_CHANGER = 2,
        NTMS_CHANGER_TYPE = 3,
        NTMS_COMPUTER = 4,
        NTMS_DRIVE = 5,
        NTMS_DRIVE_TYPE = 6,
        NTMS_IEDOOR = 7,
        NTMS_IEPORT = 8,
        NTMS_LIBRARY = 9,
        NTMS_LIBREQUEST = 10,
        NTMS_LOGICAL_MEDIA = 11,
        NTMS_MEDIA_POOL = 12,
        NTMS_MEDIA_TYPE = 13,
        NTMS_PARTITION = 14,
        NTMS_PHYSICAL_MEDIA = 15,
        NTMS_STORAGESLOT = 16,
        NTMS_OPREQUEST = 17,
        NTMS_UI_DESTINATION = 18,
        NTMS_NUMBER_OF_OBJECT_TYPES = 19,
    };
    enum class NtmsOpRequestFlags : int32_t
    {
        NTMS_OPREQFLAGS_NOAUTOPURGE = 1,
        NTMS_OPREQFLAGS_NOFAILEDPURGE = 2,
        NTMS_OPREQFLAGS_NOALERTS = 16,
        NTMS_OPREQFLAGS_NOTRAYICON = 32,
    };
    enum class NtmsOperationalState : int32_t
    {
        NTMS_READY = 0,
        NTMS_INITIALIZING = 10,
        NTMS_NEEDS_SERVICE = 20,
        NTMS_NOT_PRESENT = 21,
    };
    enum class NtmsOpreqCommand : int32_t
    {
        NTMS_OPREQ_UNKNOWN = 0,
        NTMS_OPREQ_NEWMEDIA = 1,
        NTMS_OPREQ_CLEANER = 2,
        NTMS_OPREQ_DEVICESERVICE = 3,
        NTMS_OPREQ_MOVEMEDIA = 4,
        NTMS_OPREQ_MESSAGE = 5,
    };
    enum class NtmsOpreqState : int32_t
    {
        NTMS_OPSTATE_UNKNOWN = 0,
        NTMS_OPSTATE_SUBMITTED = 1,
        NTMS_OPSTATE_ACTIVE = 2,
        NTMS_OPSTATE_INPROGRESS = 3,
        NTMS_OPSTATE_REFUSED = 4,
        NTMS_OPSTATE_COMPLETE = 5,
    };
    enum class NtmsPartitionState : int32_t
    {
        NTMS_PARTSTATE_UNKNOWN = 0,
        NTMS_PARTSTATE_UNPREPARED = 1,
        NTMS_PARTSTATE_INCOMPATIBLE = 2,
        NTMS_PARTSTATE_DECOMMISSIONED = 3,
        NTMS_PARTSTATE_AVAILABLE = 4,
        NTMS_PARTSTATE_ALLOCATED = 5,
        NTMS_PARTSTATE_COMPLETE = 6,
        NTMS_PARTSTATE_FOREIGN = 7,
        NTMS_PARTSTATE_IMPORT = 8,
        NTMS_PARTSTATE_RESERVED = 9,
    };
    enum class NtmsPoolType : int32_t
    {
        NTMS_POOLTYPE_UNKNOWN = 0,
        NTMS_POOLTYPE_SCRATCH = 1,
        NTMS_POOLTYPE_FOREIGN = 2,
        NTMS_POOLTYPE_IMPORT = 3,
        NTMS_POOLTYPE_APPLICATION = 1000,
    };
    enum class NtmsPortContent : int32_t
    {
        NTMS_PORTCONTENT_UNKNOWN = 0,
        NTMS_PORTCONTENT_FULL = 1,
        NTMS_PORTCONTENT_EMPTY = 2,
    };
    enum class NtmsPortPosition : int32_t
    {
        NTMS_PORTPOSITION_UNKNOWN = 0,
        NTMS_PORTPOSITION_EXTENDED = 1,
        NTMS_PORTPOSITION_RETRACTED = 2,
    };
    enum class NtmsReadWriteCharacteristics : int32_t
    {
        NTMS_MEDIARW_UNKNOWN = 0,
        NTMS_MEDIARW_REWRITABLE = 1,
        NTMS_MEDIARW_WRITEONCE = 2,
        NTMS_MEDIARW_READONLY = 3,
    };
    enum class NtmsSessionOptions : int32_t
    {
        NTMS_SESSION_QUERYEXPEDITE = 1,
    };
    enum class NtmsSlotState : int32_t
    {
        NTMS_SLOTSTATE_UNKNOWN = 0,
        NTMS_SLOTSTATE_FULL = 1,
        NTMS_SLOTSTATE_EMPTY = 2,
        NTMS_SLOTSTATE_NOTPRESENT = 3,
        NTMS_SLOTSTATE_NEEDSINVENTORY = 4,
    };
    enum class NtmsUIOperations : int32_t
    {
        NTMS_UIDEST_ADD = 1,
        NTMS_UIDEST_DELETE = 2,
        NTMS_UIDEST_DELETEALL = 3,
        NTMS_UIOPERATION_MAX = 4,
    };
    enum class NtmsUITypes : int32_t
    {
        NTMS_UITYPE_INVALID = 0,
        NTMS_UITYPE_INFO = 1,
        NTMS_UITYPE_REQ = 2,
        NTMS_UITYPE_ERR = 3,
        NTMS_UITYPE_MAX = 4,
    };
    enum class PREPARE_TAPE_OPERATION : int32_t
    {
        TAPE_FORMAT = 5,
        TAPE_LOAD = 0,
        TAPE_LOCK = 3,
        TAPE_TENSION = 2,
        TAPE_UNLOAD = 1,
        TAPE_UNLOCK = 4,
    };
    enum class PRIORITY_HINT : int32_t
    {
        IoPriorityHintVeryLow = 0,
        IoPriorityHintLow = 1,
        IoPriorityHintNormal = 2,
        MaximumIoPriorityHintType = 3,
    };
    enum class READ_DIRECTORY_NOTIFY_INFORMATION_CLASS : int32_t
    {
        ReadDirectoryNotifyInformation = 1,
        ReadDirectoryNotifyExtendedInformation = 2,
    };
    enum class REPLACE_FILE_FLAGS : uint32_t
    {
        REPLACEFILE_WRITE_THROUGH = 0x1,
        REPLACEFILE_IGNORE_MERGE_ERRORS = 0x2,
        REPLACEFILE_IGNORE_ACL_ERRORS = 0x4,
    };
    enum class SERVER_CERTIFICATE_TYPE : int32_t
    {
        QUIC = 0,
    };
    enum class SESSION_INFO_USER_FLAGS : uint32_t
    {
        SESS_GUEST = 0x1,
        SESS_NOENCRYPTION = 0x2,
    };
    enum class SET_FILE_POINTER_MOVE_METHOD : uint32_t
    {
        FILE_BEGIN = 0x0,
        FILE_CURRENT = 0x1,
        FILE_END = 0x2,
    };
    enum class SHARE_INFO_PERMISSIONS : uint32_t
    {
        ACCESS_READ = 0x1,
        ACCESS_WRITE = 0x2,
        ACCESS_CREATE = 0x4,
        ACCESS_EXEC = 0x8,
        ACCESS_DELETE = 0x10,
        ACCESS_ATRIB = 0x20,
        ACCESS_PERM = 0x40,
        ACCESS_ALL = 0x8000,
    };
    enum class SHARE_TYPE : uint32_t
    {
        STYPE_DISKTREE = 0x0,
        STYPE_PRINTQ = 0x1,
        STYPE_DEVICE = 0x2,
        STYPE_IPC = 0x3,
        STYPE_SPECIAL = 0x80000000,
        STYPE_TEMPORARY = 0x40000000,
        STYPE_MASK = 0xff,
    };
    enum class STORAGE_BUS_TYPE : int32_t
    {
        BusTypeUnknown = 0,
        BusTypeScsi = 1,
        BusTypeAtapi = 2,
        BusTypeAta = 3,
        BusType1394 = 4,
        BusTypeSsa = 5,
        BusTypeFibre = 6,
        BusTypeUsb = 7,
        BusTypeRAID = 8,
        BusTypeiScsi = 9,
        BusTypeSas = 10,
        BusTypeSata = 11,
        BusTypeSd = 12,
        BusTypeMmc = 13,
        BusTypeVirtual = 14,
        BusTypeFileBackedVirtual = 15,
        BusTypeSpaces = 16,
        BusTypeNvme = 17,
        BusTypeSCM = 18,
        BusTypeUfs = 19,
        BusTypeMax = 20,
        BusTypeMaxReserved = 127,
    };
    enum class STREAM_INFO_LEVELS : int32_t
    {
        FindStreamInfoStandard = 0,
        FindStreamInfoMaxInfoLevel = 1,
    };
    enum class SYMBOLIC_LINK_FLAGS : uint32_t
    {
        SYMBOLIC_LINK_FLAG_DIRECTORY = 0x1,
        SYMBOLIC_LINK_FLAG_ALLOW_UNPRIVILEGED_CREATE = 0x2,
    };
    enum class TAPEMARK_TYPE : int32_t
    {
        TAPE_FILEMARKS = 1,
        TAPE_LONG_FILEMARKS = 3,
        TAPE_SETMARKS = 0,
        TAPE_SHORT_FILEMARKS = 2,
    };
    enum class TAPE_INFORMATION_TYPE : uint32_t
    {
        SET_TAPE_DRIVE_INFORMATION = 0x1,
        SET_TAPE_MEDIA_INFORMATION = 0x0,
    };
    enum class TAPE_POSITION_METHOD : int32_t
    {
        TAPE_ABSOLUTE_BLOCK = 1,
        TAPE_LOGICAL_BLOCK = 2,
        TAPE_REWIND = 0,
        TAPE_SPACE_END_OF_DATA = 4,
        TAPE_SPACE_FILEMARKS = 6,
        TAPE_SPACE_RELATIVE_BLOCKS = 5,
        TAPE_SPACE_SEQUENTIAL_FMKS = 7,
        TAPE_SPACE_SEQUENTIAL_SMKS = 9,
        TAPE_SPACE_SETMARKS = 8,
    };
    enum class TAPE_POSITION_TYPE : int32_t
    {
        TAPE_ABSOLUTE_POSITION = 0,
        TAPE_LOGICAL_POSITION = 1,
    };
    enum class TRANSACTION_OUTCOME : int32_t
    {
        TransactionOutcomeUndetermined = 1,
        TransactionOutcomeCommitted = 2,
        TransactionOutcomeAborted = 3,
    };
    enum class TXFS_MINIVERSION : uint32_t
    {
        TXFS_MINIVERSION_COMMITTED_VIEW = 0x0,
        TXFS_MINIVERSION_DIRTY_VIEW = 0xffff,
        TXFS_MINIVERSION_DEFAULT_VIEW = 0xfffe,
    };
    enum class TXF_LOG_RECORD_TYPE : uint16_t
    {
        TXF_LOG_RECORD_TYPE_AFFECTED_FILE = 0x4,
        TXF_LOG_RECORD_TYPE_TRUNCATE = 0x2,
        TXF_LOG_RECORD_TYPE_WRITE = 0x1,
    };
    enum class VER_FIND_FILE_FLAGS : uint32_t
    {
        VFFF_ISSHAREDFILE = 0x1,
    };
    enum class VER_FIND_FILE_STATUS : uint32_t
    {
        VFF_CURNEDEST = 0x1,
        VFF_FILEINUSE = 0x2,
        VFF_BUFFTOOSMALL = 0x4,
    };
    enum class VER_INSTALL_FILE_FLAGS : uint32_t
    {
        VIFF_FORCEINSTALL = 0x1,
        VIFF_DONTDELETEOLD = 0x2,
    };
    enum class VER_INSTALL_FILE_STATUS : uint32_t
    {
        VIF_TEMPFILE = 0x1,
        VIF_MISMATCH = 0x2,
        VIF_SRCOLD = 0x4,
        VIF_DIFFLANG = 0x8,
        VIF_DIFFCODEPG = 0x10,
        VIF_DIFFTYPE = 0x20,
        VIF_WRITEPROT = 0x40,
        VIF_FILEINUSE = 0x80,
        VIF_OUTOFSPACE = 0x100,
        VIF_ACCESSVIOLATION = 0x200,
        VIF_SHARINGVIOLATION = 0x400,
        VIF_CANNOTCREATE = 0x800,
        VIF_CANNOTDELETE = 0x1000,
        VIF_CANNOTRENAME = 0x2000,
        VIF_CANNOTDELETECUR = 0x4000,
        VIF_OUTOFMEMORY = 0x8000,
        VIF_CANNOTREADSRC = 0x10000,
        VIF_CANNOTREADDST = 0x20000,
        VIF_BUFFTOOSMALL = 0x40000,
        VIF_CANNOTLOADLZ32 = 0x80000,
        VIF_CANNOTLOADCABINET = 0x100000,
    };
    enum class VS_FIXEDFILEINFO_FILE_FLAGS : uint32_t
    {
        VS_FF_DEBUG = 0x1,
        VS_FF_PRERELEASE = 0x2,
        VS_FF_PATCHED = 0x4,
        VS_FF_PRIVATEBUILD = 0x8,
        VS_FF_INFOINFERRED = 0x10,
        VS_FF_SPECIALBUILD = 0x20,
    };
    enum class VS_FIXEDFILEINFO_FILE_OS : int32_t
    {
        VOS_UNKNOWN = 0,
        VOS_DOS = 65536,
        VOS_OS216 = 131072,
        VOS_OS232 = 196608,
        VOS_NT = 262144,
        VOS_WINCE = 327680,
        VOS__BASE = 0,
        VOS__WINDOWS16 = 1,
        VOS__PM16 = 2,
        VOS__PM32 = 3,
        VOS__WINDOWS32 = 4,
        VOS_DOS_WINDOWS16 = 65537,
        VOS_DOS_WINDOWS32 = 65540,
        VOS_OS216_PM16 = 131074,
        VOS_OS232_PM32 = 196611,
        VOS_NT_WINDOWS32 = 262148,
    };
    enum class VS_FIXEDFILEINFO_FILE_SUBTYPE : int32_t
    {
        VFT2_UNKNOWN = 0,
        VFT2_DRV_PRINTER = 1,
        VFT2_DRV_KEYBOARD = 2,
        VFT2_DRV_LANGUAGE = 3,
        VFT2_DRV_DISPLAY = 4,
        VFT2_DRV_MOUSE = 5,
        VFT2_DRV_NETWORK = 6,
        VFT2_DRV_SYSTEM = 7,
        VFT2_DRV_INSTALLABLE = 8,
        VFT2_DRV_SOUND = 9,
        VFT2_DRV_COMM = 10,
        VFT2_DRV_INPUTMETHOD = 11,
        VFT2_DRV_VERSIONED_PRINTER = 12,
        VFT2_FONT_RASTER = 1,
        VFT2_FONT_VECTOR = 2,
        VFT2_FONT_TRUETYPE = 3,
    };
    enum class VS_FIXEDFILEINFO_FILE_TYPE : int32_t
    {
        VFT_UNKNOWN = 0,
        VFT_APP = 1,
        VFT_DLL = 2,
        VFT_DRV = 3,
        VFT_FONT = 4,
        VFT_VXD = 5,
        VFT_STATIC_LIB = 7,
    };
    enum class WIN_STREAM_ID : uint32_t
    {
        BACKUP_ALTERNATE_DATA = 0x4,
        BACKUP_DATA = 0x1,
        BACKUP_EA_DATA = 0x2,
        BACKUP_LINK = 0x5,
        BACKUP_OBJECT_ID = 0x7,
        BACKUP_PROPERTY_DATA = 0x6,
        BACKUP_REPARSE_DATA = 0x8,
        BACKUP_SECURITY_DATA = 0x3,
        BACKUP_SPARSE_BLOCK = 0x9,
        BACKUP_TXFS_DATA = 0xa,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct BY_HANDLE_FILE_INFORMATION;
    struct CLFS_LOG_NAME_INFORMATION;
    struct CLFS_MGMT_NOTIFICATION;
    struct CLFS_MGMT_POLICY;
    struct CLFS_NODE_ID;
    struct CLFS_PHYSICAL_LSN_INFORMATION;
    struct CLFS_STREAM_ID_INFORMATION;
    struct CLS_ARCHIVE_DESCRIPTOR;
    struct CLS_CONTAINER_INFORMATION;
    struct CLS_INFORMATION;
    struct CLS_IO_STATISTICS;
    struct CLS_IO_STATISTICS_HEADER;
    struct CLS_LSN;
    struct CLS_SCAN_CONTEXT;
    struct CLS_WRITE_ENTRY;
    struct CONNECTION_INFO_0;
    struct CONNECTION_INFO_1;
    struct COPYFILE2_EXTENDED_PARAMETERS;
    struct COPYFILE2_MESSAGE;
    struct CREATEFILE2_EXTENDED_PARAMETERS;
    struct DISKQUOTA_USER_INFORMATION;
    struct DISK_SPACE_INFORMATION;
    struct EFS_CERTIFICATE_BLOB;
    struct EFS_COMPATIBILITY_INFO;
    struct EFS_DECRYPTION_STATUS_INFO;
    struct EFS_ENCRYPTION_STATUS_INFO;
    struct EFS_HASH_BLOB;
    struct EFS_KEY_INFO;
    struct EFS_PIN_BLOB;
    struct EFS_RPC_BLOB;
    struct EFS_VERSION_INFO;
    struct ENCRYPTED_FILE_METADATA_SIGNATURE;
    struct ENCRYPTION_CERTIFICATE;
    struct ENCRYPTION_CERTIFICATE_HASH;
    struct ENCRYPTION_CERTIFICATE_HASH_LIST;
    struct ENCRYPTION_CERTIFICATE_LIST;
    struct ENCRYPTION_PROTECTOR;
    struct ENCRYPTION_PROTECTOR_LIST;
    struct FH_OVERLAPPED;
    struct FILE_ALIGNMENT_INFO;
    struct FILE_ALLOCATION_INFO;
    struct FILE_ATTRIBUTE_TAG_INFO;
    struct FILE_BASIC_INFO;
    struct FILE_COMPRESSION_INFO;
    struct FILE_DISPOSITION_INFO;
    struct FILE_END_OF_FILE_INFO;
    struct FILE_EXTENT;
    struct FILE_FULL_DIR_INFO;
    struct FILE_ID_128;
    struct FILE_ID_BOTH_DIR_INFO;
    struct FILE_ID_DESCRIPTOR;
    struct FILE_ID_EXTD_DIR_INFO;
    struct FILE_ID_INFO;
    struct FILE_INFO_2;
    struct FILE_INFO_3;
    struct FILE_IO_PRIORITY_HINT_INFO;
    struct FILE_NAME_INFO;
    struct FILE_NOTIFY_EXTENDED_INFORMATION;
    struct FILE_NOTIFY_INFORMATION;
    struct FILE_REMOTE_PROTOCOL_INFO;
    struct FILE_RENAME_INFO;
    union FILE_SEGMENT_ELEMENT;
    struct FILE_STANDARD_INFO;
    struct FILE_STORAGE_INFO;
    struct FILE_STREAM_INFO;
    struct FIO_CONTEXT;
    struct FindChangeNotificationHandle;
    struct FindFileHandle;
    struct FindFileNameHandle;
    struct FindStreamHandle;
    struct FindVolumeHandle;
    struct FindVolumeMointPointHandle;
    struct HIORING__;
    struct IORING_BUFFER_INFO;
    struct IORING_BUFFER_REF;
    struct IORING_CAPABILITIES;
    struct IORING_CQE;
    struct IORING_CREATE_FLAGS;
    struct IORING_HANDLE_REF;
    struct IORING_INFO;
    struct IORING_REGISTERED_BUFFER;
    struct KCRM_MARSHAL_HEADER;
    struct KCRM_PROTOCOL_BLOB;
    struct KCRM_TRANSACTION_BLOB;
    struct LOG_MANAGEMENT_CALLBACKS;
    struct MediaLabelInfo;
    struct NAME_CACHE_CONTEXT;
    struct NTMS_ALLOCATION_INFORMATION;
    struct NTMS_ASYNC_IO;
    struct NTMS_CHANGERINFORMATIONA;
    struct NTMS_CHANGERINFORMATIONW;
    struct NTMS_CHANGERTYPEINFORMATIONA;
    struct NTMS_CHANGERTYPEINFORMATIONW;
    struct NTMS_COMPUTERINFORMATION;
    struct NTMS_DRIVEINFORMATIONA;
    struct NTMS_DRIVEINFORMATIONW;
    struct NTMS_DRIVETYPEINFORMATIONA;
    struct NTMS_DRIVETYPEINFORMATIONW;
    struct NTMS_FILESYSTEM_INFO;
    struct NTMS_I1_LIBRARYINFORMATION;
    struct NTMS_I1_LIBREQUESTINFORMATIONA;
    struct NTMS_I1_LIBREQUESTINFORMATIONW;
    struct NTMS_I1_OBJECTINFORMATIONA;
    struct NTMS_I1_OBJECTINFORMATIONW;
    struct NTMS_I1_OPREQUESTINFORMATIONA;
    struct NTMS_I1_OPREQUESTINFORMATIONW;
    struct NTMS_I1_PARTITIONINFORMATIONA;
    struct NTMS_I1_PARTITIONINFORMATIONW;
    struct NTMS_I1_PMIDINFORMATIONA;
    struct NTMS_I1_PMIDINFORMATIONW;
    struct NTMS_IEDOORINFORMATION;
    struct NTMS_IEPORTINFORMATION;
    struct NTMS_LIBRARYINFORMATION;
    struct NTMS_LIBREQUESTINFORMATIONA;
    struct NTMS_LIBREQUESTINFORMATIONW;
    struct NTMS_LMIDINFORMATION;
    struct NTMS_MEDIAPOOLINFORMATION;
    struct NTMS_MEDIATYPEINFORMATION;
    struct NTMS_MOUNT_INFORMATION;
    struct NTMS_NOTIFICATIONINFORMATION;
    struct NTMS_OBJECTINFORMATIONA;
    struct NTMS_OBJECTINFORMATIONW;
    struct NTMS_OPREQUESTINFORMATIONA;
    struct NTMS_OPREQUESTINFORMATIONW;
    struct NTMS_PARTITIONINFORMATIONA;
    struct NTMS_PARTITIONINFORMATIONW;
    struct NTMS_PMIDINFORMATIONA;
    struct NTMS_PMIDINFORMATIONW;
    struct NTMS_STORAGESLOTINFORMATION;
    struct OFSTRUCT;
    struct REPARSE_GUID_DATA_BUFFER;
    struct SERVER_ALIAS_INFO_0;
    struct SERVER_CERTIFICATE_INFO_0;
    struct SESSION_INFO_0;
    struct SESSION_INFO_1;
    struct SESSION_INFO_10;
    struct SESSION_INFO_2;
    struct SESSION_INFO_502;
    struct SHARE_INFO_0;
    struct SHARE_INFO_1;
    struct SHARE_INFO_1004;
    struct SHARE_INFO_1005;
    struct SHARE_INFO_1006;
    struct SHARE_INFO_1501;
    struct SHARE_INFO_1503;
    struct SHARE_INFO_2;
    struct SHARE_INFO_501;
    struct SHARE_INFO_502;
    struct SHARE_INFO_503;
    struct STAT_SERVER_0;
    struct STAT_WORKSTATION_0;
    struct TRANSACTION_NOTIFICATION;
    struct TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT;
    struct TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT;
    struct TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT;
    struct TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT;
    struct TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT;
    struct TXF_ID;
    struct TXF_LOG_RECORD_AFFECTED_FILE;
    struct TXF_LOG_RECORD_BASE;
    struct TXF_LOG_RECORD_TRUNCATE;
    struct TXF_LOG_RECORD_WRITE;
    struct VOLUME_ALLOCATE_BC_STREAM_INPUT;
    struct VOLUME_ALLOCATE_BC_STREAM_OUTPUT;
    struct VOLUME_ALLOCATION_HINT_INPUT;
    struct VOLUME_ALLOCATION_HINT_OUTPUT;
    struct VOLUME_CRITICAL_IO;
    struct VOLUME_FAILOVER_SET;
    struct VOLUME_GET_BC_PROPERTIES_INPUT;
    struct VOLUME_GET_BC_PROPERTIES_OUTPUT;
    struct VOLUME_LOGICAL_OFFSET;
    struct VOLUME_NUMBER;
    struct VOLUME_PHYSICAL_OFFSET;
    struct VOLUME_PHYSICAL_OFFSETS;
    struct VOLUME_READ_PLEX_INPUT;
    struct VOLUME_SET_GPT_ATTRIBUTES_INFORMATION;
    struct VOLUME_SHRINK_INFO;
    struct VS_FIXEDFILEINFO;
    struct WIM_ENTRY_INFO;
    struct WIM_EXTERNAL_FILE_INFO;
    struct WIN32_FILE_ATTRIBUTE_DATA;
    struct WIN32_FIND_DATAA;
    struct WIN32_FIND_DATAW;
    struct WIN32_FIND_STREAM_DATA;
    struct WIN32_STREAM_ID;
    struct WOF_FILE_COMPRESSION_INFO_V0;
    struct WOF_FILE_COMPRESSION_INFO_V1;
    struct IDiskQuotaControl;
    struct IDiskQuotaEvents;
    struct IDiskQuotaUser;
    struct IDiskQuotaUserBatch;
    struct IEnumDiskQuotaUsers;
#pragma endregion forward_declarations

#pragma region delegates
    using MAXMEDIALABEL = uint32_t __stdcall(uint32_t*);
    using CLAIMMEDIALABEL = uint32_t __stdcall(uint8_t*, uint32_t, Windows::Win32::Storage::FileSystem::MediaLabelInfo*);
    using CLAIMMEDIALABELEX = uint32_t __stdcall(uint8_t*, uint32_t, Windows::Win32::Storage::FileSystem::MediaLabelInfo*, ::win32::guid*);
    using CLFS_BLOCK_ALLOCATION = void* __stdcall(uint32_t, void*);
    using CLFS_BLOCK_DEALLOCATION = void __stdcall(void*, void*);
    using PCLFS_COMPLETION_ROUTINE = void __stdcall(void*, uint32_t);
    using PLOG_TAIL_ADVANCE_CALLBACK = void __stdcall(Windows::Win32::Foundation::HANDLE, Windows::Win32::Storage::FileSystem::CLS_LSN, void*);
    using PLOG_FULL_HANDLER_CALLBACK = void __stdcall(Windows::Win32::Foundation::HANDLE, uint32_t, Windows::Win32::Foundation::BOOL, void*);
    using PLOG_UNPINNED_CALLBACK = void __stdcall(Windows::Win32::Foundation::HANDLE, void*);
    using WofEnumEntryProc = Windows::Win32::Foundation::BOOL __stdcall(void*, void*);
    using WofEnumFilesProc = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Foundation::PWSTR, void*, void*);
    using PFN_IO_COMPLETION = void __stdcall(Windows::Win32::Storage::FileSystem::FIO_CONTEXT*, Windows::Win32::Storage::FileSystem::FH_OVERLAPPED*, uint32_t, uint32_t);
    using FCACHE_CREATE_CALLBACK = Windows::Win32::Foundation::HANDLE __stdcall(Windows::Win32::Foundation::PSTR, void*, uint32_t*, uint32_t*);
    using FCACHE_RICHCREATE_CALLBACK = Windows::Win32::Foundation::HANDLE __stdcall(Windows::Win32::Foundation::PSTR, void*, uint32_t*, uint32_t*, Windows::Win32::Foundation::BOOL*, Windows::Win32::Foundation::BOOL*, Windows::Win32::Foundation::BOOL*, Windows::Win32::Foundation::BOOL*);
    using CACHE_KEY_COMPARE = int32_t __stdcall(uint32_t, uint8_t*, uint32_t, uint8_t*);
    using CACHE_KEY_HASH = uint32_t __stdcall(uint8_t*, uint32_t);
    using CACHE_READ_CALLBACK = Windows::Win32::Foundation::BOOL __stdcall(uint32_t, uint8_t*, void*);
    using CACHE_DESTROY_CALLBACK = void __stdcall(uint32_t, uint8_t*);
    using CACHE_ACCESS_CHECK = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Security::SECURITY_DESCRIPTOR*, Windows::Win32::Foundation::HANDLE, uint32_t, Windows::Win32::Security::GENERIC_MAPPING*, Windows::Win32::Security::PRIVILEGE_SET*, uint32_t*, uint32_t*, int32_t*);
    using PFE_EXPORT_FUNC = uint32_t __stdcall(uint8_t*, void*, uint32_t);
    using PFE_IMPORT_FUNC = uint32_t __stdcall(uint8_t*, void*, uint32_t*);
    using LPPROGRESS_ROUTINE = uint32_t __stdcall(Windows::Win32::Foundation::LARGE_INTEGER, Windows::Win32::Foundation::LARGE_INTEGER, Windows::Win32::Foundation::LARGE_INTEGER, Windows::Win32::Foundation::LARGE_INTEGER, uint32_t, Windows::Win32::Storage::FileSystem::LPPROGRESS_ROUTINE_CALLBACK_REASON, Windows::Win32::Foundation::HANDLE, Windows::Win32::Foundation::HANDLE, void*);
    using PCOPYFILE2_PROGRESS_ROUTINE = Windows::Win32::Storage::FileSystem::COPYFILE2_MESSAGE_ACTION __stdcall(Windows::Win32::Storage::FileSystem::COPYFILE2_MESSAGE*, void*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif