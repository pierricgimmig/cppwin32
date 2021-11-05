// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_Tapi_0_H
#define WIN32_Windows_Win32_Devices_Tapi_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct HRESULT;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::AddressBook
{
    struct IAddrBook;
    struct IMessage;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::Com
{
    struct IStream;
}
WIN32_EXPORT namespace win32::Windows::Win32::Devices::Tapi
{
#pragma region enums
    enum class ACDGROUP_EVENT : int32_t
    {
        ACDGE_NEW_GROUP = 0,
        ACDGE_GROUP_REMOVED = 1,
    };
    enum class ACDQUEUE_EVENT : int32_t
    {
        ACDQE_NEW_QUEUE = 0,
        ACDQE_QUEUE_REMOVED = 1,
    };
    enum class ADDRESS_CAPABILITY : int32_t
    {
        AC_ADDRESSTYPES = 0,
        AC_BEARERMODES = 1,
        AC_MAXACTIVECALLS = 2,
        AC_MAXONHOLDCALLS = 3,
        AC_MAXONHOLDPENDINGCALLS = 4,
        AC_MAXNUMCONFERENCE = 5,
        AC_MAXNUMTRANSCONF = 6,
        AC_MONITORDIGITSUPPORT = 7,
        AC_GENERATEDIGITSUPPORT = 8,
        AC_GENERATETONEMODES = 9,
        AC_GENERATETONEMAXNUMFREQ = 10,
        AC_MONITORTONEMAXNUMFREQ = 11,
        AC_MONITORTONEMAXNUMENTRIES = 12,
        AC_DEVCAPFLAGS = 13,
        AC_ANSWERMODES = 14,
        AC_LINEFEATURES = 15,
        AC_SETTABLEDEVSTATUS = 16,
        AC_PARKSUPPORT = 17,
        AC_CALLERIDSUPPORT = 18,
        AC_CALLEDIDSUPPORT = 19,
        AC_CONNECTEDIDSUPPORT = 20,
        AC_REDIRECTIONIDSUPPORT = 21,
        AC_REDIRECTINGIDSUPPORT = 22,
        AC_ADDRESSCAPFLAGS = 23,
        AC_CALLFEATURES1 = 24,
        AC_CALLFEATURES2 = 25,
        AC_REMOVEFROMCONFCAPS = 26,
        AC_REMOVEFROMCONFSTATE = 27,
        AC_TRANSFERMODES = 28,
        AC_ADDRESSFEATURES = 29,
        AC_PREDICTIVEAUTOTRANSFERSTATES = 30,
        AC_MAXCALLDATASIZE = 31,
        AC_LINEID = 32,
        AC_ADDRESSID = 33,
        AC_FORWARDMODES = 34,
        AC_MAXFORWARDENTRIES = 35,
        AC_MAXSPECIFICENTRIES = 36,
        AC_MINFWDNUMRINGS = 37,
        AC_MAXFWDNUMRINGS = 38,
        AC_MAXCALLCOMPLETIONS = 39,
        AC_CALLCOMPLETIONCONDITIONS = 40,
        AC_CALLCOMPLETIONMODES = 41,
        AC_PERMANENTDEVICEID = 42,
        AC_GATHERDIGITSMINTIMEOUT = 43,
        AC_GATHERDIGITSMAXTIMEOUT = 44,
        AC_GENERATEDIGITMINDURATION = 45,
        AC_GENERATEDIGITMAXDURATION = 46,
        AC_GENERATEDIGITDEFAULTDURATION = 47,
    };
    enum class ADDRESS_CAPABILITY_STRING : int32_t
    {
        ACS_PROTOCOL = 0,
        ACS_ADDRESSDEVICESPECIFIC = 1,
        ACS_LINEDEVICESPECIFIC = 2,
        ACS_PROVIDERSPECIFIC = 3,
        ACS_SWITCHSPECIFIC = 4,
        ACS_PERMANENTDEVICEGUID = 5,
    };
    enum class ADDRESS_EVENT : int32_t
    {
        AE_STATE = 0,
        AE_CAPSCHANGE = 1,
        AE_RINGING = 2,
        AE_CONFIGCHANGE = 3,
        AE_FORWARD = 4,
        AE_NEWTERMINAL = 5,
        AE_REMOVETERMINAL = 6,
        AE_MSGWAITON = 7,
        AE_MSGWAITOFF = 8,
        AE_LASTITEM = 8,
    };
    enum class ADDRESS_STATE : int32_t
    {
        AS_INSERVICE = 0,
        AS_OUTOFSERVICE = 1,
    };
    enum class AGENTHANDLER_EVENT : int32_t
    {
        AHE_NEW_AGENTHANDLER = 0,
        AHE_AGENTHANDLER_REMOVED = 1,
    };
    enum class AGENT_EVENT : int32_t
    {
        AE_NOT_READY = 0,
        AE_READY = 1,
        AE_BUSY_ACD = 2,
        AE_BUSY_INCOMING = 3,
        AE_BUSY_OUTGOING = 4,
        AE_UNKNOWN = 5,
    };
    enum class AGENT_SESSION_EVENT : int32_t
    {
        ASE_NEW_SESSION = 0,
        ASE_NOT_READY = 1,
        ASE_READY = 2,
        ASE_BUSY = 3,
        ASE_WRAPUP = 4,
        ASE_END = 5,
    };
    enum class AGENT_SESSION_STATE : int32_t
    {
        ASST_NOT_READY = 0,
        ASST_READY = 1,
        ASST_BUSY_ON_CALL = 2,
        ASST_BUSY_WRAPUP = 3,
        ASST_SESSION_ENDED = 4,
    };
    enum class AGENT_STATE : int32_t
    {
        AS_NOT_READY = 0,
        AS_READY = 1,
        AS_BUSY_ACD = 2,
        AS_BUSY_INCOMING = 3,
        AS_BUSY_OUTGOING = 4,
        AS_UNKNOWN = 5,
    };
    enum class CALLHUB_EVENT : int32_t
    {
        CHE_CALLJOIN = 0,
        CHE_CALLLEAVE = 1,
        CHE_CALLHUBNEW = 2,
        CHE_CALLHUBIDLE = 3,
        CHE_LASTITEM = 3,
    };
    enum class CALLHUB_STATE : int32_t
    {
        CHS_ACTIVE = 0,
        CHS_IDLE = 1,
    };
    enum class CALLINFOCHANGE_CAUSE : int32_t
    {
        CIC_OTHER = 0,
        CIC_DEVSPECIFIC = 1,
        CIC_BEARERMODE = 2,
        CIC_RATE = 3,
        CIC_APPSPECIFIC = 4,
        CIC_CALLID = 5,
        CIC_RELATEDCALLID = 6,
        CIC_ORIGIN = 7,
        CIC_REASON = 8,
        CIC_COMPLETIONID = 9,
        CIC_NUMOWNERINCR = 10,
        CIC_NUMOWNERDECR = 11,
        CIC_NUMMONITORS = 12,
        CIC_TRUNK = 13,
        CIC_CALLERID = 14,
        CIC_CALLEDID = 15,
        CIC_CONNECTEDID = 16,
        CIC_REDIRECTIONID = 17,
        CIC_REDIRECTINGID = 18,
        CIC_USERUSERINFO = 19,
        CIC_HIGHLEVELCOMP = 20,
        CIC_LOWLEVELCOMP = 21,
        CIC_CHARGINGINFO = 22,
        CIC_TREATMENT = 23,
        CIC_CALLDATA = 24,
        CIC_PRIVILEGE = 25,
        CIC_MEDIATYPE = 26,
        CIC_LASTITEM = 26,
    };
    enum class CALLINFO_BUFFER : int32_t
    {
        CIB_USERUSERINFO = 0,
        CIB_DEVSPECIFICBUFFER = 1,
        CIB_CALLDATABUFFER = 2,
        CIB_CHARGINGINFOBUFFER = 3,
        CIB_HIGHLEVELCOMPATIBILITYBUFFER = 4,
        CIB_LOWLEVELCOMPATIBILITYBUFFER = 5,
    };
    enum class CALLINFO_LONG : int32_t
    {
        CIL_MEDIATYPESAVAILABLE = 0,
        CIL_BEARERMODE = 1,
        CIL_CALLERIDADDRESSTYPE = 2,
        CIL_CALLEDIDADDRESSTYPE = 3,
        CIL_CONNECTEDIDADDRESSTYPE = 4,
        CIL_REDIRECTIONIDADDRESSTYPE = 5,
        CIL_REDIRECTINGIDADDRESSTYPE = 6,
        CIL_ORIGIN = 7,
        CIL_REASON = 8,
        CIL_APPSPECIFIC = 9,
        CIL_CALLPARAMSFLAGS = 10,
        CIL_CALLTREATMENT = 11,
        CIL_MINRATE = 12,
        CIL_MAXRATE = 13,
        CIL_COUNTRYCODE = 14,
        CIL_CALLID = 15,
        CIL_RELATEDCALLID = 16,
        CIL_COMPLETIONID = 17,
        CIL_NUMBEROFOWNERS = 18,
        CIL_NUMBEROFMONITORS = 19,
        CIL_TRUNK = 20,
        CIL_RATE = 21,
        CIL_GENERATEDIGITDURATION = 22,
        CIL_MONITORDIGITMODES = 23,
        CIL_MONITORMEDIAMODES = 24,
    };
    enum class CALLINFO_STRING : int32_t
    {
        CIS_CALLERIDNAME = 0,
        CIS_CALLERIDNUMBER = 1,
        CIS_CALLEDIDNAME = 2,
        CIS_CALLEDIDNUMBER = 3,
        CIS_CONNECTEDIDNAME = 4,
        CIS_CONNECTEDIDNUMBER = 5,
        CIS_REDIRECTIONIDNAME = 6,
        CIS_REDIRECTIONIDNUMBER = 7,
        CIS_REDIRECTINGIDNAME = 8,
        CIS_REDIRECTINGIDNUMBER = 9,
        CIS_CALLEDPARTYFRIENDLYNAME = 10,
        CIS_COMMENT = 11,
        CIS_DISPLAYABLEADDRESS = 12,
        CIS_CALLINGPARTYID = 13,
    };
    enum class CALL_MEDIA_EVENT : int32_t
    {
        CME_NEW_STREAM = 0,
        CME_STREAM_FAIL = 1,
        CME_TERMINAL_FAIL = 2,
        CME_STREAM_NOT_USED = 3,
        CME_STREAM_ACTIVE = 4,
        CME_STREAM_INACTIVE = 5,
        CME_LASTITEM = 5,
    };
    enum class CALL_MEDIA_EVENT_CAUSE : int32_t
    {
        CMC_UNKNOWN = 0,
        CMC_BAD_DEVICE = 1,
        CMC_CONNECT_FAIL = 2,
        CMC_LOCAL_REQUEST = 3,
        CMC_REMOTE_REQUEST = 4,
        CMC_MEDIA_TIMEOUT = 5,
        CMC_MEDIA_RECOVERED = 6,
        CMC_QUALITY_OF_SERVICE = 7,
    };
    enum class CALL_NOTIFICATION_EVENT : int32_t
    {
        CNE_OWNER = 0,
        CNE_MONITOR = 1,
        CNE_LASTITEM = 1,
    };
    enum class CALL_PRIVILEGE : int32_t
    {
        CP_OWNER = 0,
        CP_MONITOR = 1,
    };
    enum class CALL_STATE : int32_t
    {
        CS_IDLE = 0,
        CS_INPROGRESS = 1,
        CS_CONNECTED = 2,
        CS_DISCONNECTED = 3,
        CS_OFFERING = 4,
        CS_HOLD = 5,
        CS_QUEUED = 6,
        CS_LASTITEM = 6,
    };
    enum class CALL_STATE_EVENT_CAUSE : int32_t
    {
        CEC_NONE = 0,
        CEC_DISCONNECT_NORMAL = 1,
        CEC_DISCONNECT_BUSY = 2,
        CEC_DISCONNECT_BADADDRESS = 3,
        CEC_DISCONNECT_NOANSWER = 4,
        CEC_DISCONNECT_CANCELLED = 5,
        CEC_DISCONNECT_REJECTED = 6,
        CEC_DISCONNECT_FAILED = 7,
        CEC_DISCONNECT_BLOCKED = 8,
    };
    enum class DIRECTORY_OBJECT_TYPE : int32_t
    {
        OT_CONFERENCE = 1,
        OT_USER = 2,
    };
    enum class DIRECTORY_TYPE : int32_t
    {
        DT_NTDS = 1,
        DT_ILS = 2,
    };
    enum class DISCONNECT_CODE : int32_t
    {
        DC_NORMAL = 0,
        DC_NOANSWER = 1,
        DC_REJECTED = 2,
    };
    enum class FINISH_MODE : int32_t
    {
        FM_ASTRANSFER = 0,
        FM_ASCONFERENCE = 1,
    };
    enum class FT_STATE_EVENT_CAUSE : int32_t
    {
        FTEC_NORMAL = 0,
        FTEC_END_OF_FILE = 1,
        FTEC_READ_ERROR = 2,
        FTEC_WRITE_ERROR = 3,
    };
    enum class FULLDUPLEX_SUPPORT : int32_t
    {
        FDS_SUPPORTED = 0,
        FDS_NOTSUPPORTED = 1,
        FDS_UNKNOWN = 2,
    };
    enum class MSP_ADDRESS_EVENT : int32_t
    {
        ADDRESS_TERMINAL_AVAILABLE = 0,
        ADDRESS_TERMINAL_UNAVAILABLE = 1,
    };
    enum class MSP_CALL_EVENT : int32_t
    {
        CALL_NEW_STREAM = 0,
        CALL_STREAM_FAIL = 1,
        CALL_TERMINAL_FAIL = 2,
        CALL_STREAM_NOT_USED = 3,
        CALL_STREAM_ACTIVE = 4,
        CALL_STREAM_INACTIVE = 5,
    };
    enum class MSP_CALL_EVENT_CAUSE : int32_t
    {
        CALL_CAUSE_UNKNOWN = 0,
        CALL_CAUSE_BAD_DEVICE = 1,
        CALL_CAUSE_CONNECT_FAIL = 2,
        CALL_CAUSE_LOCAL_REQUEST = 3,
        CALL_CAUSE_REMOTE_REQUEST = 4,
        CALL_CAUSE_MEDIA_TIMEOUT = 5,
        CALL_CAUSE_MEDIA_RECOVERED = 6,
        CALL_CAUSE_QUALITY_OF_SERVICE = 7,
    };
    enum class MSP_EVENT : int32_t
    {
        ME_ADDRESS_EVENT = 0,
        ME_CALL_EVENT = 1,
        ME_TSP_DATA = 2,
        ME_PRIVATE_EVENT = 3,
        ME_ASR_TERMINAL_EVENT = 4,
        ME_TTS_TERMINAL_EVENT = 5,
        ME_FILE_TERMINAL_EVENT = 6,
        ME_TONE_TERMINAL_EVENT = 7,
    };
    enum class PHONECAPS_BUFFER : int32_t
    {
        PCB_DEVSPECIFICBUFFER = 0,
    };
    enum class PHONECAPS_LONG : int32_t
    {
        PCL_HOOKSWITCHES = 0,
        PCL_HANDSETHOOKSWITCHMODES = 1,
        PCL_HEADSETHOOKSWITCHMODES = 2,
        PCL_SPEAKERPHONEHOOKSWITCHMODES = 3,
        PCL_DISPLAYNUMROWS = 4,
        PCL_DISPLAYNUMCOLUMNS = 5,
        PCL_NUMRINGMODES = 6,
        PCL_NUMBUTTONLAMPS = 7,
        PCL_GENERICPHONE = 8,
    };
    enum class PHONECAPS_STRING : int32_t
    {
        PCS_PHONENAME = 0,
        PCS_PHONEINFO = 1,
        PCS_PROVIDERINFO = 2,
    };
    enum class PHONE_BUTTON_FUNCTION : int32_t
    {
        PBF_UNKNOWN = 0,
        PBF_CONFERENCE = 1,
        PBF_TRANSFER = 2,
        PBF_DROP = 3,
        PBF_HOLD = 4,
        PBF_RECALL = 5,
        PBF_DISCONNECT = 6,
        PBF_CONNECT = 7,
        PBF_MSGWAITON = 8,
        PBF_MSGWAITOFF = 9,
        PBF_SELECTRING = 10,
        PBF_ABBREVDIAL = 11,
        PBF_FORWARD = 12,
        PBF_PICKUP = 13,
        PBF_RINGAGAIN = 14,
        PBF_PARK = 15,
        PBF_REJECT = 16,
        PBF_REDIRECT = 17,
        PBF_MUTE = 18,
        PBF_VOLUMEUP = 19,
        PBF_VOLUMEDOWN = 20,
        PBF_SPEAKERON = 21,
        PBF_SPEAKEROFF = 22,
        PBF_FLASH = 23,
        PBF_DATAON = 24,
        PBF_DATAOFF = 25,
        PBF_DONOTDISTURB = 26,
        PBF_INTERCOM = 27,
        PBF_BRIDGEDAPP = 28,
        PBF_BUSY = 29,
        PBF_CALLAPP = 30,
        PBF_DATETIME = 31,
        PBF_DIRECTORY = 32,
        PBF_COVER = 33,
        PBF_CALLID = 34,
        PBF_LASTNUM = 35,
        PBF_NIGHTSRV = 36,
        PBF_SENDCALLS = 37,
        PBF_MSGINDICATOR = 38,
        PBF_REPDIAL = 39,
        PBF_SETREPDIAL = 40,
        PBF_SYSTEMSPEED = 41,
        PBF_STATIONSPEED = 42,
        PBF_CAMPON = 43,
        PBF_SAVEREPEAT = 44,
        PBF_QUEUECALL = 45,
        PBF_NONE = 46,
        PBF_SEND = 47,
    };
    enum class PHONE_BUTTON_MODE : int32_t
    {
        PBM_DUMMY = 0,
        PBM_CALL = 1,
        PBM_FEATURE = 2,
        PBM_KEYPAD = 3,
        PBM_LOCAL = 4,
        PBM_DISPLAY = 5,
    };
    enum class PHONE_BUTTON_STATE : int32_t
    {
        PBS_UP = 1,
        PBS_DOWN = 2,
        PBS_UNKNOWN = 4,
        PBS_UNAVAIL = 8,
    };
    enum class PHONE_EVENT : int32_t
    {
        PE_DISPLAY = 0,
        PE_LAMPMODE = 1,
        PE_RINGMODE = 2,
        PE_RINGVOLUME = 3,
        PE_HOOKSWITCH = 4,
        PE_CAPSCHANGE = 5,
        PE_BUTTON = 6,
        PE_CLOSE = 7,
        PE_NUMBERGATHERED = 8,
        PE_DIALING = 9,
        PE_ANSWER = 10,
        PE_DISCONNECT = 11,
        PE_LASTITEM = 11,
    };
    enum class PHONE_HOOK_SWITCH_DEVICE : int32_t
    {
        PHSD_HANDSET = 1,
        PHSD_SPEAKERPHONE = 2,
        PHSD_HEADSET = 4,
    };
    enum class PHONE_HOOK_SWITCH_STATE : int32_t
    {
        PHSS_ONHOOK = 1,
        PHSS_OFFHOOK_MIC_ONLY = 2,
        PHSS_OFFHOOK_SPEAKER_ONLY = 4,
        PHSS_OFFHOOK = 8,
    };
    enum class PHONE_LAMP_MODE : int32_t
    {
        LM_DUMMY = 1,
        LM_OFF = 2,
        LM_STEADY = 4,
        LM_WINK = 8,
        LM_FLASH = 16,
        LM_FLUTTER = 32,
        LM_BROKENFLUTTER = 64,
        LM_UNKNOWN = 128,
    };
    enum class PHONE_PRIVILEGE : int32_t
    {
        PP_OWNER = 0,
        PP_MONITOR = 1,
    };
    enum class PHONE_TONE : int32_t
    {
        PT_KEYPADZERO = 0,
        PT_KEYPADONE = 1,
        PT_KEYPADTWO = 2,
        PT_KEYPADTHREE = 3,
        PT_KEYPADFOUR = 4,
        PT_KEYPADFIVE = 5,
        PT_KEYPADSIX = 6,
        PT_KEYPADSEVEN = 7,
        PT_KEYPADEIGHT = 8,
        PT_KEYPADNINE = 9,
        PT_KEYPADSTAR = 10,
        PT_KEYPADPOUND = 11,
        PT_KEYPADA = 12,
        PT_KEYPADB = 13,
        PT_KEYPADC = 14,
        PT_KEYPADD = 15,
        PT_NORMALDIALTONE = 16,
        PT_EXTERNALDIALTONE = 17,
        PT_BUSY = 18,
        PT_RINGBACK = 19,
        PT_ERRORTONE = 20,
        PT_SILENCE = 21,
    };
    enum class QOS_EVENT : int32_t
    {
        QE_NOQOS = 1,
        QE_ADMISSIONFAILURE = 2,
        QE_POLICYFAILURE = 3,
        QE_GENERICERROR = 4,
        QE_LASTITEM = 4,
    };
    enum class QOS_SERVICE_LEVEL : int32_t
    {
        QSL_NEEDED = 1,
        QSL_IF_AVAILABLE = 2,
        QSL_BEST_EFFORT = 3,
    };
    enum class RND_ADVERTISING_SCOPE : int32_t
    {
        RAS_LOCAL = 1,
        RAS_SITE = 2,
        RAS_REGION = 3,
        RAS_WORLD = 4,
    };
    enum class TAPIOBJECT_EVENT : int32_t
    {
        TE_ADDRESSCREATE = 0,
        TE_ADDRESSREMOVE = 1,
        TE_REINIT = 2,
        TE_TRANSLATECHANGE = 3,
        TE_ADDRESSCLOSE = 4,
        TE_PHONECREATE = 5,
        TE_PHONEREMOVE = 6,
    };
    enum class TAPI_EVENT : int32_t
    {
        TE_TAPIOBJECT = 1,
        TE_ADDRESS = 2,
        TE_CALLNOTIFICATION = 4,
        TE_CALLSTATE = 8,
        TE_CALLMEDIA = 16,
        TE_CALLHUB = 32,
        TE_CALLINFOCHANGE = 64,
        TE_PRIVATE = 128,
        TE_REQUEST = 256,
        TE_AGENT = 512,
        TE_AGENTSESSION = 1024,
        TE_QOSEVENT = 2048,
        TE_AGENTHANDLER = 4096,
        TE_ACDGROUP = 8192,
        TE_QUEUE = 16384,
        TE_DIGITEVENT = 32768,
        TE_GENERATEEVENT = 65536,
        TE_ASRTERMINAL = 131072,
        TE_TTSTERMINAL = 262144,
        TE_FILETERMINAL = 524288,
        TE_TONETERMINAL = 1048576,
        TE_PHONEEVENT = 2097152,
        TE_TONEEVENT = 4194304,
        TE_GATHERDIGITS = 8388608,
        TE_ADDRESSDEVSPECIFIC = 16777216,
        TE_PHONEDEVSPECIFIC = 33554432,
    };
    enum class TAPI_GATHERTERM : int32_t
    {
        TGT_BUFFERFULL = 1,
        TGT_TERMDIGIT = 2,
        TGT_FIRSTTIMEOUT = 4,
        TGT_INTERTIMEOUT = 8,
        TGT_CANCEL = 16,
    };
    enum class TAPI_OBJECT_TYPE : int32_t
    {
        TOT_NONE = 0,
        TOT_TAPI = 1,
        TOT_ADDRESS = 2,
        TOT_TERMINAL = 3,
        TOT_CALL = 4,
        TOT_CALLHUB = 5,
        TOT_PHONE = 6,
    };
    enum class TAPI_TONEMODE : int32_t
    {
        TTM_RINGBACK = 2,
        TTM_BUSY = 4,
        TTM_BEEP = 8,
        TTM_BILLING = 16,
    };
    enum class TERMINAL_DIRECTION : int32_t
    {
        TD_CAPTURE = 0,
        TD_RENDER = 1,
        TD_BIDIRECTIONAL = 2,
        TD_MULTITRACK_MIXED = 3,
        TD_NONE = 4,
    };
    enum class TERMINAL_MEDIA_STATE : int32_t
    {
        TMS_IDLE = 0,
        TMS_ACTIVE = 1,
        TMS_PAUSED = 2,
        TMS_LASTITEM = 2,
    };
    enum class TERMINAL_STATE : int32_t
    {
        TS_INUSE = 0,
        TS_NOTINUSE = 1,
    };
    enum class TERMINAL_TYPE : int32_t
    {
        TT_STATIC = 0,
        TT_DYNAMIC = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct DispatchMapper;
    struct HDRVCALL__;
    struct HDRVDIALOGINSTANCE__;
    struct HDRVLINE__;
    struct HDRVMSPLINE__;
    struct HDRVPHONE__;
    struct HPROVIDER__;
    struct HTAPICALL__;
    struct HTAPILINE__;
    struct HTAPIPHONE__;
    struct LINEADDRESSCAPS;
    struct LINEADDRESSSTATUS;
    struct LINEAGENTACTIVITYENTRY;
    struct LINEAGENTACTIVITYLIST;
    struct LINEAGENTCAPS;
    struct LINEAGENTENTRY;
    struct LINEAGENTGROUPENTRY;
    struct LINEAGENTGROUPLIST;
    struct LINEAGENTINFO;
    struct LINEAGENTLIST;
    struct LINEAGENTSESSIONENTRY;
    struct LINEAGENTSESSIONINFO;
    struct LINEAGENTSESSIONLIST;
    struct LINEAGENTSTATUS;
    struct LINEAPPINFO;
    struct LINECALLINFO;
    struct LINECALLLIST;
    struct LINECALLPARAMS;
    struct LINECALLSTATUS;
    struct LINECALLTREATMENTENTRY;
    struct LINECARDENTRY;
    struct LINECOUNTRYENTRY;
    struct LINECOUNTRYLIST;
    struct LINEDEVCAPS;
    struct LINEDEVSTATUS;
    struct LINEDIALPARAMS;
    struct LINEEXTENSIONID;
    struct LINEFORWARD;
    struct LINEFORWARDLIST;
    struct LINEGENERATETONE;
    struct LINEINITIALIZEEXPARAMS;
    struct LINELOCATIONENTRY;
    struct LINEMEDIACONTROLCALLSTATE;
    struct LINEMEDIACONTROLDIGIT;
    struct LINEMEDIACONTROLMEDIA;
    struct LINEMEDIACONTROLTONE;
    struct LINEMESSAGE;
    struct LINEMONITORTONE;
    struct LINEPROVIDERENTRY;
    struct LINEPROVIDERLIST;
    struct LINEPROXYREQUEST;
    struct LINEPROXYREQUESTLIST;
    struct LINEQUEUEENTRY;
    struct LINEQUEUEINFO;
    struct LINEQUEUELIST;
    struct LINEREQMAKECALL;
    struct LINEREQMEDIACALL;
    struct LINETERMCAPS;
    struct LINETRANSLATECAPS;
    struct LINETRANSLATEOUTPUT;
    struct MSP_EVENT_INFO;
    struct McastAddressAllocation;
    struct NSID;
    struct PHONEBUTTONINFO;
    struct PHONECAPS;
    struct PHONEEXTENSIONID;
    struct PHONEINITIALIZEEXPARAMS;
    struct PHONEMESSAGE;
    struct PHONESTATUS;
    struct Rendezvous;
    struct RequestMakeCall;
    struct STnefProblem;
    struct STnefProblemArray;
    struct TAPI;
    struct TAPI_CUSTOMTONE;
    struct TAPI_DETECTTONE;
    struct TUISPICREATEDIALOGINSTANCEPARAMS;
    struct VARSTRING;
    struct _ADDR_ALIAS;
    struct _dtr;
    struct _renddata;
    struct _trp;
    struct linereqmakecallW_tag;
    struct linereqmediacallW_tag;
    struct IEnumACDGroup;
    struct IEnumAddress;
    struct IEnumAgent;
    struct IEnumAgentHandler;
    struct IEnumAgentSession;
    struct IEnumBstr;
    struct IEnumCall;
    struct IEnumCallHub;
    struct IEnumCallingCard;
    struct IEnumDialableAddrs;
    struct IEnumDirectory;
    struct IEnumDirectoryObject;
    struct IEnumLocation;
    struct IEnumMcastScope;
    struct IEnumPhone;
    struct IEnumPluggableSuperclassInfo;
    struct IEnumPluggableTerminalClassInfo;
    struct IEnumQueue;
    struct IEnumStream;
    struct IEnumSubStream;
    struct IEnumTerminal;
    struct IEnumTerminalClass;
    struct IMcastAddressAllocation;
    struct IMcastLeaseInfo;
    struct IMcastScope;
    struct ITACDGroup;
    struct ITACDGroupEvent;
    struct ITAMMediaFormat;
    struct ITASRTerminalEvent;
    struct ITAddress;
    struct ITAddress2;
    struct ITAddressCapabilities;
    struct ITAddressDeviceSpecificEvent;
    struct ITAddressEvent;
    struct ITAddressTranslation;
    struct ITAddressTranslationInfo;
    struct ITAgent;
    struct ITAgentEvent;
    struct ITAgentHandler;
    struct ITAgentHandlerEvent;
    struct ITAgentSession;
    struct ITAgentSessionEvent;
    struct ITAllocatorProperties;
    struct ITAutomatedPhoneControl;
    struct ITBasicAudioTerminal;
    struct ITBasicCallControl;
    struct ITBasicCallControl2;
    struct ITCallHub;
    struct ITCallHubEvent;
    struct ITCallInfo;
    struct ITCallInfo2;
    struct ITCallInfoChangeEvent;
    struct ITCallMediaEvent;
    struct ITCallNotificationEvent;
    struct ITCallStateEvent;
    struct ITCallingCard;
    struct ITCollection;
    struct ITCollection2;
    struct ITCustomTone;
    struct ITDetectTone;
    struct ITDigitDetectionEvent;
    struct ITDigitGenerationEvent;
    struct ITDigitsGatheredEvent;
    struct ITDirectory;
    struct ITDirectoryObject;
    struct ITDirectoryObjectConference;
    struct ITDirectoryObjectUser;
    struct ITDispatchMapper;
    struct ITFileTerminalEvent;
    struct ITFileTrack;
    struct ITForwardInformation;
    struct ITForwardInformation2;
    struct ITILSConfig;
    struct ITLegacyAddressMediaControl;
    struct ITLegacyAddressMediaControl2;
    struct ITLegacyCallMediaControl;
    struct ITLegacyCallMediaControl2;
    struct ITLegacyWaveSupport;
    struct ITLocationInfo;
    struct ITMSPAddress;
    struct ITMediaControl;
    struct ITMediaPlayback;
    struct ITMediaRecord;
    struct ITMediaSupport;
    struct ITMultiTrackTerminal;
    struct ITPhone;
    struct ITPhoneDeviceSpecificEvent;
    struct ITPhoneEvent;
    struct ITPluggableTerminalClassInfo;
    struct ITPluggableTerminalEventSink;
    struct ITPluggableTerminalEventSinkRegistration;
    struct ITPluggableTerminalSuperclassInfo;
    struct ITPrivateEvent;
    struct ITQOSEvent;
    struct ITQueue;
    struct ITQueueEvent;
    struct ITRendezvous;
    struct ITRequest;
    struct ITRequestEvent;
    struct ITScriptableAudioFormat;
    struct ITStaticAudioTerminal;
    struct ITStream;
    struct ITStreamControl;
    struct ITSubStream;
    struct ITSubStreamControl;
    struct ITTAPI;
    struct ITTAPI2;
    struct ITTAPICallCenter;
    struct ITTAPIDispatchEventNotification;
    struct ITTAPIEventNotification;
    struct ITTAPIObjectEvent;
    struct ITTAPIObjectEvent2;
    struct ITTTSTerminalEvent;
    struct ITTerminal;
    struct ITTerminalSupport;
    struct ITTerminalSupport2;
    struct ITToneDetectionEvent;
    struct ITToneTerminalEvent;
    struct ITnef;
#pragma endregion forward_declarations

#pragma region delegates
    using LINECALLBACK = void __stdcall(uint32_t, uint32_t, size_t, size_t, size_t, size_t);
    using PHONECALLBACK = void __stdcall(uint32_t, uint32_t, size_t, size_t, size_t, size_t);
    using ASYNC_COMPLETION = void __stdcall(uint32_t, int32_t);
    using LINEEVENT = void __stdcall(Windows::Win32::Devices::Tapi::HTAPILINE__*, Windows::Win32::Devices::Tapi::HTAPICALL__*, uint32_t, size_t, size_t, size_t);
    using PHONEEVENT = void __stdcall(Windows::Win32::Devices::Tapi::HTAPIPHONE__*, uint32_t, size_t, size_t, size_t);
    using TUISPIDLLCALLBACK = int32_t __stdcall(size_t, uint32_t, void*, uint32_t);
    using LPOPENTNEFSTREAM = Windows::Win32::Foundation::HRESULT __stdcall(void*, Windows::Win32::System::Com::IStream*, int8_t*, uint32_t, Windows::Win32::System::AddressBook::IMessage*, uint16_t, Windows::Win32::Devices::Tapi::ITnef**);
    using LPOPENTNEFSTREAMEX = Windows::Win32::Foundation::HRESULT __stdcall(void*, Windows::Win32::System::Com::IStream*, int8_t*, uint32_t, Windows::Win32::System::AddressBook::IMessage*, uint16_t, Windows::Win32::System::AddressBook::IAddrBook*, Windows::Win32::Devices::Tapi::ITnef**);
    using LPGETTNEFSTREAMCODEPAGE = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::System::Com::IStream*, uint32_t*, uint32_t*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
