// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_PropertiesSystem_0_H
#define WIN32_Windows_Win32_System_PropertiesSystem_0_H
WIN32_EXPORT namespace win32::Windows::Win32::System::PropertiesSystem
{
#pragma region enums
    enum class DRAWPROGRESSFLAGS : int32_t
    {
        DPF_NONE = 0,
        DPF_MARQUEE = 1,
        DPF_MARQUEE_COMPLETE = 2,
        DPF_ERROR = 4,
        DPF_WARNING = 8,
        DPF_STOPPED = 16,
    };
    enum class GETPROPERTYSTOREFLAGS : int32_t
    {
        GPS_DEFAULT = 0,
        GPS_HANDLERPROPERTIESONLY = 1,
        GPS_READWRITE = 2,
        GPS_TEMPORARY = 4,
        GPS_FASTPROPERTIESONLY = 8,
        GPS_OPENSLOWITEM = 16,
        GPS_DELAYCREATION = 32,
        GPS_BESTEFFORT = 64,
        GPS_NO_OPLOCK = 128,
        GPS_PREFERQUERYPROPERTIES = 256,
        GPS_EXTRINSICPROPERTIES = 512,
        GPS_EXTRINSICPROPERTIESONLY = 1024,
        GPS_VOLATILEPROPERTIES = 2048,
        GPS_VOLATILEPROPERTIESONLY = 4096,
        GPS_MASK_VALID = 8191,
    };
    enum class PDOPSTATUS : int32_t
    {
        PDOPS_RUNNING = 1,
        PDOPS_PAUSED = 2,
        PDOPS_CANCELLED = 3,
        PDOPS_STOPPED = 4,
        PDOPS_ERRORS = 5,
    };
    enum class PKA_FLAGS : int32_t
    {
        PKA_SET = 0,
        PKA_APPEND = 1,
        PKA_DELETE = 2,
    };
    enum class PLACEHOLDER_STATES : int32_t
    {
        PS_NONE = 0,
        PS_MARKED_FOR_OFFLINE_AVAILABILITY = 1,
        PS_FULL_PRIMARY_STREAM_AVAILABLE = 2,
        PS_CREATE_FILE_ACCESSIBLE = 4,
        PS_CLOUDFILE_PLACEHOLDER = 8,
        PS_DEFAULT = 7,
        PS_ALL = 15,
    };
    enum class PROPDESC_AGGREGATION_TYPE : int32_t
    {
        PDAT_DEFAULT = 0,
        PDAT_FIRST = 1,
        PDAT_SUM = 2,
        PDAT_AVERAGE = 3,
        PDAT_DATERANGE = 4,
        PDAT_UNION = 5,
        PDAT_MAX = 6,
        PDAT_MIN = 7,
    };
    enum class PROPDESC_COLUMNINDEX_TYPE : int32_t
    {
        PDCIT_NONE = 0,
        PDCIT_ONDISK = 1,
        PDCIT_INMEMORY = 2,
        PDCIT_ONDEMAND = 3,
        PDCIT_ONDISKALL = 4,
        PDCIT_ONDISKVECTOR = 5,
    };
    enum class PROPDESC_CONDITION_TYPE : int32_t
    {
        PDCOT_NONE = 0,
        PDCOT_STRING = 1,
        PDCOT_SIZE = 2,
        PDCOT_DATETIME = 3,
        PDCOT_BOOLEAN = 4,
        PDCOT_NUMBER = 5,
    };
    enum class PROPDESC_DISPLAYTYPE : int32_t
    {
        PDDT_STRING = 0,
        PDDT_NUMBER = 1,
        PDDT_BOOLEAN = 2,
        PDDT_DATETIME = 3,
        PDDT_ENUMERATED = 4,
    };
    enum class PROPDESC_ENUMFILTER : int32_t
    {
        PDEF_ALL = 0,
        PDEF_SYSTEM = 1,
        PDEF_NONSYSTEM = 2,
        PDEF_VIEWABLE = 3,
        PDEF_QUERYABLE = 4,
        PDEF_INFULLTEXTQUERY = 5,
        PDEF_COLUMN = 6,
    };
    enum class PROPDESC_FORMAT_FLAGS : int32_t
    {
        PDFF_DEFAULT = 0,
        PDFF_PREFIXNAME = 1,
        PDFF_FILENAME = 2,
        PDFF_ALWAYSKB = 4,
        PDFF_RESERVED_RIGHTTOLEFT = 8,
        PDFF_SHORTTIME = 16,
        PDFF_LONGTIME = 32,
        PDFF_HIDETIME = 64,
        PDFF_SHORTDATE = 128,
        PDFF_LONGDATE = 256,
        PDFF_HIDEDATE = 512,
        PDFF_RELATIVEDATE = 1024,
        PDFF_USEEDITINVITATION = 2048,
        PDFF_READONLY = 4096,
        PDFF_NOAUTOREADINGORDER = 8192,
    };
    enum class PROPDESC_GROUPING_RANGE : int32_t
    {
        PDGR_DISCRETE = 0,
        PDGR_ALPHANUMERIC = 1,
        PDGR_SIZE = 2,
        PDGR_DYNAMIC = 3,
        PDGR_DATE = 4,
        PDGR_PERCENT = 5,
        PDGR_ENUMERATED = 6,
    };
    enum class PROPDESC_RELATIVEDESCRIPTION_TYPE : int32_t
    {
        PDRDT_GENERAL = 0,
        PDRDT_DATE = 1,
        PDRDT_SIZE = 2,
        PDRDT_COUNT = 3,
        PDRDT_REVISION = 4,
        PDRDT_LENGTH = 5,
        PDRDT_DURATION = 6,
        PDRDT_SPEED = 7,
        PDRDT_RATE = 8,
        PDRDT_RATING = 9,
        PDRDT_PRIORITY = 10,
    };
    enum class PROPDESC_SEARCHINFO_FLAGS : int32_t
    {
        PDSIF_DEFAULT = 0,
        PDSIF_ININVERTEDINDEX = 1,
        PDSIF_ISCOLUMN = 2,
        PDSIF_ISCOLUMNSPARSE = 4,
        PDSIF_ALWAYSINCLUDE = 8,
        PDSIF_USEFORTYPEAHEAD = 16,
    };
    enum class PROPDESC_SORTDESCRIPTION : int32_t
    {
        PDSD_GENERAL = 0,
        PDSD_A_Z = 1,
        PDSD_LOWEST_HIGHEST = 2,
        PDSD_SMALLEST_BIGGEST = 3,
        PDSD_OLDEST_NEWEST = 4,
    };
    enum class PROPDESC_TYPE_FLAGS : int32_t
    {
        PDTF_DEFAULT = 0,
        PDTF_MULTIPLEVALUES = 1,
        PDTF_ISINNATE = 2,
        PDTF_ISGROUP = 4,
        PDTF_CANGROUPBY = 8,
        PDTF_CANSTACKBY = 16,
        PDTF_ISTREEPROPERTY = 32,
        PDTF_INCLUDEINFULLTEXTQUERY = 64,
        PDTF_ISVIEWABLE = 128,
        PDTF_ISQUERYABLE = 256,
        PDTF_CANBEPURGED = 512,
        PDTF_SEARCHRAWVALUE = 1024,
        PDTF_DONTCOERCEEMPTYSTRINGS = 2048,
        PDTF_ALWAYSINSUPPLEMENTALSTORE = 4096,
        PDTF_ISSYSTEMPROPERTY = -2147483648,
        PDTF_MASK_ALL = -2147475457,
    };
    enum class PROPDESC_VIEW_FLAGS : int32_t
    {
        PDVF_DEFAULT = 0,
        PDVF_CENTERALIGN = 1,
        PDVF_RIGHTALIGN = 2,
        PDVF_BEGINNEWGROUP = 4,
        PDVF_FILLAREA = 8,
        PDVF_SORTDESCENDING = 16,
        PDVF_SHOWONLYIFPRESENT = 32,
        PDVF_SHOWBYDEFAULT = 64,
        PDVF_SHOWINPRIMARYLIST = 128,
        PDVF_SHOWINSECONDARYLIST = 256,
        PDVF_HIDELABEL = 512,
        PDVF_HIDDEN = 2048,
        PDVF_CANWRAP = 4096,
        PDVF_MASK_ALL = 7167,
    };
    enum class PROPENUMTYPE : int32_t
    {
        PET_DISCRETEVALUE = 0,
        PET_RANGEDVALUE = 1,
        PET_DEFAULTVALUE = 2,
        PET_ENDRANGE = 3,
    };
    enum class PROPVAR_CHANGE_FLAGS : int32_t
    {
        PVCHF_DEFAULT = 0,
        PVCHF_NOVALUEPROP = 1,
        PVCHF_ALPHABOOL = 2,
        PVCHF_NOUSEROVERRIDE = 4,
        PVCHF_LOCALBOOL = 8,
        PVCHF_NOHEXSTRING = 16,
    };
    enum class PROPVAR_COMPARE_FLAGS : int32_t
    {
        PVCF_DEFAULT = 0,
        PVCF_TREATEMPTYASGREATERTHAN = 1,
        PVCF_USESTRCMP = 2,
        PVCF_USESTRCMPC = 4,
        PVCF_USESTRCMPI = 8,
        PVCF_USESTRCMPIC = 16,
        PVCF_DIGITSASNUMBERS_CASESENSITIVE = 32,
    };
    enum class PROPVAR_COMPARE_UNIT : int32_t
    {
        PVCU_DEFAULT = 0,
        PVCU_SECOND = 1,
        PVCU_MINUTE = 2,
        PVCU_HOUR = 3,
        PVCU_DAY = 4,
        PVCU_MONTH = 5,
        PVCU_YEAR = 6,
    };
    enum class PSC_STATE : int32_t
    {
        PSC_NORMAL = 0,
        PSC_NOTINSOURCE = 1,
        PSC_DIRTY = 2,
        PSC_READONLY = 3,
    };
    enum class PSTIME_FLAGS : int32_t
    {
        PSTF_UTC = 0,
        PSTF_LOCAL = 1,
    };
    enum class SYNC_ENGINE_STATE_FLAGS : int32_t
    {
        SESF_NONE = 0,
        SESF_SERVICE_QUOTA_NEARING_LIMIT = 1,
        SESF_SERVICE_QUOTA_EXCEEDED_LIMIT = 2,
        SESF_AUTHENTICATION_ERROR = 4,
        SESF_PAUSED_DUE_TO_METERED_NETWORK = 8,
        SESF_PAUSED_DUE_TO_DISK_SPACE_FULL = 16,
        SESF_PAUSED_DUE_TO_CLIENT_POLICY = 32,
        SESF_PAUSED_DUE_TO_SERVICE_POLICY = 64,
        SESF_SERVICE_UNAVAILABLE = 128,
        SESF_PAUSED_DUE_TO_USER_REQUEST = 256,
        SESF_ALL_FLAGS = 511,
    };
    enum class SYNC_TRANSFER_STATUS : int32_t
    {
        STS_NONE = 0,
        STS_NEEDSUPLOAD = 1,
        STS_NEEDSDOWNLOAD = 2,
        STS_TRANSFERRING = 4,
        STS_PAUSED = 8,
        STS_HASERROR = 16,
        STS_FETCHING_METADATA = 32,
        STS_USER_REQUESTED_REFRESH = 64,
        STS_HASWARNING = 128,
        STS_EXCLUDED = 256,
        STS_INCOMPLETE = 512,
        STS_PLACEHOLDER_IFEMPTY = 1024,
    };
    enum class _PERSIST_SPROPSTORE_FLAGS : int32_t
    {
        FPSPS_DEFAULT = 0,
        FPSPS_READONLY = 1,
        FPSPS_TREAT_NEW_VALUES_AS_DIRTY = 2,
    };
    enum class _PROPERTYUI_FLAGS : int32_t
    {
        PUIF_DEFAULT = 0,
        PUIF_RIGHTALIGN = 1,
        PUIF_NOLABELININFOTIP = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct InMemoryPropertyStore;
    struct InMemoryPropertyStoreMarshalByValue;
    struct PROPERTYKEY;
    struct PROPPRG;
    struct PropertySystem;
    struct SERIALIZEDPROPSTORAGE;
    struct ICreateObject;
    struct IDelayedPropertyStoreFactory;
    struct IInitializeWithFile;
    struct IInitializeWithStream;
    struct INamedPropertyStore;
    struct IObjectWithPropertyKey;
    struct IPersistSerializedPropStorage;
    struct IPersistSerializedPropStorage2;
    struct IPropertyChange;
    struct IPropertyChangeArray;
    struct IPropertyDescription;
    struct IPropertyDescription2;
    struct IPropertyDescriptionAliasInfo;
    struct IPropertyDescriptionList;
    struct IPropertyDescriptionRelatedPropertyInfo;
    struct IPropertyDescriptionSearchInfo;
    struct IPropertyEnumType;
    struct IPropertyEnumType2;
    struct IPropertyEnumTypeList;
    struct IPropertyStore;
    struct IPropertyStoreCache;
    struct IPropertyStoreCapabilities;
    struct IPropertyStoreFactory;
    struct IPropertySystem;
    struct IPropertySystemChangeNotify;
    struct IPropertyUI;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
