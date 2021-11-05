// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_DistributedTransactionCoordinator_0_H
#define WIN32_Windows_Win32_System_DistributedTransactionCoordinator_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct HRESULT;
    struct PSTR;
    struct PWSTR;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::DistributedTransactionCoordinator
{
#pragma region enums
    enum class APPLICATIONTYPE : int32_t
    {
        LOCAL_APPLICATIONTYPE = 0,
        CLUSTERRESOURCE_APPLICATIONTYPE = 1,
    };
    enum class AUTHENTICATION_LEVEL : int32_t
    {
        NO_AUTHENTICATION_REQUIRED = 0,
        INCOMING_AUTHENTICATION_REQUIRED = 1,
        MUTUAL_AUTHENTICATION_REQUIRED = 2,
    };
    enum class DTC_STATUS_ : int32_t
    {
        DTC_STATUS_UNKNOWN = 0,
        DTC_STATUS_STARTING = 1,
        DTC_STATUS_STARTED = 2,
        DTC_STATUS_PAUSING = 3,
        DTC_STATUS_PAUSED = 4,
        DTC_STATUS_CONTINUING = 5,
        DTC_STATUS_STOPPING = 6,
        DTC_STATUS_STOPPED = 7,
        DTC_STATUS_E_CANTCONTROL = 8,
        DTC_STATUS_FAILED = 9,
    };
    enum class ISOFLAG : int32_t
    {
        ISOFLAG_RETAIN_COMMIT_DC = 1,
        ISOFLAG_RETAIN_COMMIT = 2,
        ISOFLAG_RETAIN_COMMIT_NO = 3,
        ISOFLAG_RETAIN_ABORT_DC = 4,
        ISOFLAG_RETAIN_ABORT = 8,
        ISOFLAG_RETAIN_ABORT_NO = 12,
        ISOFLAG_RETAIN_DONTCARE = 5,
        ISOFLAG_RETAIN_BOTH = 10,
        ISOFLAG_RETAIN_NONE = 15,
        ISOFLAG_OPTIMISTIC = 16,
        ISOFLAG_READONLY = 32,
    };
    enum class ISOLATIONLEVEL : int32_t
    {
        ISOLATIONLEVEL_UNSPECIFIED = -1,
        ISOLATIONLEVEL_CHAOS = 16,
        ISOLATIONLEVEL_READUNCOMMITTED = 256,
        ISOLATIONLEVEL_BROWSE = 256,
        ISOLATIONLEVEL_CURSORSTABILITY = 4096,
        ISOLATIONLEVEL_READCOMMITTED = 4096,
        ISOLATIONLEVEL_REPEATABLEREAD = 65536,
        ISOLATIONLEVEL_SERIALIZABLE = 1048576,
        ISOLATIONLEVEL_ISOLATED = 1048576,
    };
    enum class TX_MISC_CONSTANTS : int32_t
    {
        MAX_TRAN_DESC = 40,
    };
    enum class XACTCONST : int32_t
    {
        XACTCONST_TIMEOUTINFINITE = 0,
    };
    enum class XACTHEURISTIC : int32_t
    {
        XACTHEURISTIC_ABORT = 1,
        XACTHEURISTIC_COMMIT = 2,
        XACTHEURISTIC_DAMAGE = 3,
        XACTHEURISTIC_DANGER = 4,
    };
    enum class XACTRM : int32_t
    {
        XACTRM_OPTIMISTICLASTWINS = 1,
        XACTRM_NOREADONLYPREPARES = 2,
    };
    enum class XACTSTAT : int32_t
    {
        XACTSTAT_NONE = 0,
        XACTSTAT_OPENNORMAL = 1,
        XACTSTAT_OPENREFUSED = 2,
        XACTSTAT_PREPARING = 4,
        XACTSTAT_PREPARED = 8,
        XACTSTAT_PREPARERETAINING = 16,
        XACTSTAT_PREPARERETAINED = 32,
        XACTSTAT_COMMITTING = 64,
        XACTSTAT_COMMITRETAINING = 128,
        XACTSTAT_ABORTING = 256,
        XACTSTAT_ABORTED = 512,
        XACTSTAT_COMMITTED = 1024,
        XACTSTAT_HEURISTIC_ABORT = 2048,
        XACTSTAT_HEURISTIC_COMMIT = 4096,
        XACTSTAT_HEURISTIC_DAMAGE = 8192,
        XACTSTAT_HEURISTIC_DANGER = 16384,
        XACTSTAT_FORCED_ABORT = 32768,
        XACTSTAT_FORCED_COMMIT = 65536,
        XACTSTAT_INDOUBT = 131072,
        XACTSTAT_CLOSED = 262144,
        XACTSTAT_OPEN = 3,
        XACTSTAT_NOTPREPARED = 524227,
        XACTSTAT_ALL = 524287,
    };
    enum class XACTTC : int32_t
    {
        XACTTC_NONE = 0,
        XACTTC_SYNC_PHASEONE = 1,
        XACTTC_SYNC_PHASETWO = 2,
        XACTTC_SYNC = 2,
        XACTTC_ASYNC_PHASEONE = 4,
        XACTTC_ASYNC = 4,
    };
    enum class XACT_DTC_CONSTANTS : int32_t
    {
        XACT_E_CONNECTION_REQUEST_DENIED = -2147168000,
        XACT_E_TOOMANY_ENLISTMENTS = -2147167999,
        XACT_E_DUPLICATE_GUID = -2147167998,
        XACT_E_NOTSINGLEPHASE = -2147167997,
        XACT_E_RECOVERYALREADYDONE = -2147167996,
        XACT_E_PROTOCOL = -2147167995,
        XACT_E_RM_FAILURE = -2147167994,
        XACT_E_RECOVERY_FAILED = -2147167993,
        XACT_E_LU_NOT_FOUND = -2147167992,
        XACT_E_DUPLICATE_LU = -2147167991,
        XACT_E_LU_NOT_CONNECTED = -2147167990,
        XACT_E_DUPLICATE_TRANSID = -2147167989,
        XACT_E_LU_BUSY = -2147167988,
        XACT_E_LU_NO_RECOVERY_PROCESS = -2147167987,
        XACT_E_LU_DOWN = -2147167986,
        XACT_E_LU_RECOVERING = -2147167985,
        XACT_E_LU_RECOVERY_MISMATCH = -2147167984,
        XACT_E_RM_UNAVAILABLE = -2147167983,
        XACT_E_LRMRECOVERYALREADYDONE = -2147167982,
        XACT_E_NOLASTRESOURCEINTERFACE = -2147167981,
        XACT_S_NONOTIFY = 315648,
        XACT_OK_NONOTIFY = 315649,
        dwUSER_MS_SQLSERVER = 65535,
    };
    enum class _DtcLu_CompareState : int32_t
    {
        DTCLUCOMPARESTATE_COMMITTED = 1,
        DTCLUCOMPARESTATE_HEURISTICCOMMITTED = 2,
        DTCLUCOMPARESTATE_HEURISTICMIXED = 3,
        DTCLUCOMPARESTATE_HEURISTICRESET = 4,
        DTCLUCOMPARESTATE_INDOUBT = 5,
        DTCLUCOMPARESTATE_RESET = 6,
    };
    enum class _DtcLu_CompareStates_Confirmation : int32_t
    {
        DTCLUCOMPARESTATESCONFIRMATION_CONFIRM = 1,
        DTCLUCOMPARESTATESCONFIRMATION_PROTOCOL = 2,
    };
    enum class _DtcLu_CompareStates_Error : int32_t
    {
        DTCLUCOMPARESTATESERROR_PROTOCOL = 1,
    };
    enum class _DtcLu_CompareStates_Response : int32_t
    {
        DTCLUCOMPARESTATESRESPONSE_OK = 1,
        DTCLUCOMPARESTATESRESPONSE_PROTOCOL = 2,
    };
    enum class _DtcLu_LocalRecovery_Work : int32_t
    {
        DTCINITIATEDRECOVERYWORK_CHECKLUSTATUS = 1,
        DTCINITIATEDRECOVERYWORK_TRANS = 2,
        DTCINITIATEDRECOVERYWORK_TMDOWN = 3,
    };
    enum class _DtcLu_Xln : int32_t
    {
        DTCLUXLN_COLD = 1,
        DTCLUXLN_WARM = 2,
    };
    enum class _DtcLu_Xln_Confirmation : int32_t
    {
        DTCLUXLNCONFIRMATION_CONFIRM = 1,
        DTCLUXLNCONFIRMATION_LOGNAMEMISMATCH = 2,
        DTCLUXLNCONFIRMATION_COLDWARMMISMATCH = 3,
        DTCLUXLNCONFIRMATION_OBSOLETE = 4,
    };
    enum class _DtcLu_Xln_Error : int32_t
    {
        DTCLUXLNERROR_PROTOCOL = 1,
        DTCLUXLNERROR_LOGNAMEMISMATCH = 2,
        DTCLUXLNERROR_COLDWARMMISMATCH = 3,
    };
    enum class _DtcLu_Xln_Response : int32_t
    {
        DTCLUXLNRESPONSE_OK_SENDOURXLNBACK = 1,
        DTCLUXLNRESPONSE_OK_SENDCONFIRMATION = 2,
        DTCLUXLNRESPONSE_LOGNAMEMISMATCH = 3,
        DTCLUXLNRESPONSE_COLDWARMMISMATCH = 4,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct BOID;
    struct OLE_TM_CONFIG_PARAMS_V1;
    struct OLE_TM_CONFIG_PARAMS_V2;
    struct XACTOPT;
    struct XACTSTATS;
    struct XACTTRANSINFO;
    struct _ProxyConfigParams;
    struct xa_switch_t;
    struct xid_t;
    struct IDtcLuConfigure;
    struct IDtcLuRecovery;
    struct IDtcLuRecoveryFactory;
    struct IDtcLuRecoveryInitiatedByDtc;
    struct IDtcLuRecoveryInitiatedByDtcStatusWork;
    struct IDtcLuRecoveryInitiatedByDtcTransWork;
    struct IDtcLuRecoveryInitiatedByLu;
    struct IDtcLuRecoveryInitiatedByLuWork;
    struct IDtcLuRmEnlistment;
    struct IDtcLuRmEnlistmentFactory;
    struct IDtcLuRmEnlistmentSink;
    struct IDtcLuSubordinateDtc;
    struct IDtcLuSubordinateDtcFactory;
    struct IDtcLuSubordinateDtcSink;
    struct IDtcNetworkAccessConfig;
    struct IDtcNetworkAccessConfig2;
    struct IDtcNetworkAccessConfig3;
    struct IDtcToXaHelper;
    struct IDtcToXaHelperFactory;
    struct IDtcToXaHelperSinglePipe;
    struct IDtcToXaMapper;
    struct IGetDispenser;
    struct IKernelTransaction;
    struct ILastResourceManager;
    struct IPrepareInfo;
    struct IPrepareInfo2;
    struct IRMHelper;
    struct IResourceManager;
    struct IResourceManager2;
    struct IResourceManagerFactory;
    struct IResourceManagerFactory2;
    struct IResourceManagerRejoinable;
    struct IResourceManagerSink;
    struct ITipHelper;
    struct ITipPullSink;
    struct ITipTransaction;
    struct ITmNodeName;
    struct ITransaction;
    struct ITransaction2;
    struct ITransactionCloner;
    struct ITransactionDispenser;
    struct ITransactionEnlistmentAsync;
    struct ITransactionExport;
    struct ITransactionExportFactory;
    struct ITransactionImport;
    struct ITransactionImportWhereabouts;
    struct ITransactionLastEnlistmentAsync;
    struct ITransactionLastResourceAsync;
    struct ITransactionOptions;
    struct ITransactionOutcomeEvents;
    struct ITransactionPhase0EnlistmentAsync;
    struct ITransactionPhase0Factory;
    struct ITransactionPhase0NotifyAsync;
    struct ITransactionReceiver;
    struct ITransactionReceiverFactory;
    struct ITransactionResource;
    struct ITransactionResourceAsync;
    struct ITransactionTransmitter;
    struct ITransactionTransmitterFactory;
    struct ITransactionVoterBallotAsync2;
    struct ITransactionVoterFactory2;
    struct ITransactionVoterNotifyAsync2;
    struct IXAConfig;
    struct IXAObtainRMInfo;
    struct IXATransLookup;
    struct IXATransLookup2;
#pragma endregion forward_declarations

#pragma region delegates
    using DTC_GET_TRANSACTION_MANAGER = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PSTR, Windows::Win32::Foundation::PSTR, ::win32::guid*, uint32_t, uint16_t, void*, void**);
    using DTC_GET_TRANSACTION_MANAGER_EX_A = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PSTR, Windows::Win32::Foundation::PSTR, ::win32::guid*, uint32_t, void*, void**);
    using DTC_GET_TRANSACTION_MANAGER_EX_W = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::PWSTR, Windows::Win32::Foundation::PWSTR, ::win32::guid*, uint32_t, void*, void**);
    using DTC_INSTALL_CLIENT = Windows::Win32::Foundation::HRESULT __stdcall(int8_t*, uint32_t, uint32_t);
    using XA_OPEN_EPT = int32_t __stdcall(Windows::Win32::Foundation::PSTR, int32_t, int32_t);
    using XA_CLOSE_EPT = int32_t __stdcall(Windows::Win32::Foundation::PSTR, int32_t, int32_t);
    using XA_START_EPT = int32_t __stdcall(Windows::Win32::System::DistributedTransactionCoordinator::xid_t*, int32_t, int32_t);
    using XA_END_EPT = int32_t __stdcall(Windows::Win32::System::DistributedTransactionCoordinator::xid_t*, int32_t, int32_t);
    using XA_ROLLBACK_EPT = int32_t __stdcall(Windows::Win32::System::DistributedTransactionCoordinator::xid_t*, int32_t, int32_t);
    using XA_PREPARE_EPT = int32_t __stdcall(Windows::Win32::System::DistributedTransactionCoordinator::xid_t*, int32_t, int32_t);
    using XA_COMMIT_EPT = int32_t __stdcall(Windows::Win32::System::DistributedTransactionCoordinator::xid_t*, int32_t, int32_t);
    using XA_RECOVER_EPT = int32_t __stdcall(Windows::Win32::System::DistributedTransactionCoordinator::xid_t*, int32_t, int32_t, int32_t);
    using XA_FORGET_EPT = int32_t __stdcall(Windows::Win32::System::DistributedTransactionCoordinator::xid_t*, int32_t, int32_t);
    using XA_COMPLETE_EPT = int32_t __stdcall(int32_t*, int32_t*, int32_t, int32_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
