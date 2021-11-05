// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Ole_0_H
#define WIN32_Windows_Win32_System_Ole_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct HRESULT;
    struct HWND;
    struct LPARAM;
    struct WPARAM;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::Ole
{
#pragma region enums
    enum class ACTIVATEFLAGS : int32_t
    {
        ACTIVATE_WINDOWLESS = 1,
    };
    enum class AspectInfoFlag : int32_t
    {
        DVASPECTINFOFLAG_CANOPTIMIZE = 1,
    };
    enum class BINDSPEED : int32_t
    {
        BINDSPEED_INDEFINITE = 1,
        BINDSPEED_MODERATE = 2,
        BINDSPEED_IMMEDIATE = 3,
    };
    enum class CALLCONV : int32_t
    {
        CC_FASTCALL = 0,
        CC_CDECL = 1,
        CC_MSCPASCAL = 2,
        CC_PASCAL = 2,
        CC_MACPASCAL = 3,
        CC_STDCALL = 4,
        CC_FPFASTCALL = 5,
        CC_SYSCALL = 6,
        CC_MPWCDECL = 7,
        CC_MPWPASCAL = 8,
        CC_MAX = 9,
    };
    enum class CHANGEKIND : int32_t
    {
        CHANGEKIND_ADDMEMBER = 0,
        CHANGEKIND_DELETEMEMBER = 1,
        CHANGEKIND_SETNAMES = 2,
        CHANGEKIND_SETDOCUMENTATION = 3,
        CHANGEKIND_GENERAL = 4,
        CHANGEKIND_INVALIDATE = 5,
        CHANGEKIND_CHANGEFAILED = 6,
        CHANGEKIND_MAX = 7,
    };
    enum class CTRLINFO : int32_t
    {
        CTRLINFO_EATS_RETURN = 1,
        CTRLINFO_EATS_ESCAPE = 2,
    };
    enum class DESCKIND : int32_t
    {
        DESCKIND_NONE = 0,
        DESCKIND_FUNCDESC = 1,
        DESCKIND_VARDESC = 2,
        DESCKIND_TYPECOMP = 3,
        DESCKIND_IMPLICITAPPOBJ = 4,
        DESCKIND_MAX = 5,
    };
    enum class DISCARDCACHE : int32_t
    {
        DISCARDCACHE_SAVEIFDIRTY = 0,
        DISCARDCACHE_NOSAVE = 1,
    };
    enum class DOCMISC : int32_t
    {
        DOCMISC_CANCREATEMULTIPLEVIEWS = 1,
        DOCMISC_SUPPORTCOMPLEXRECTANGLES = 2,
        DOCMISC_CANTOPENEDIT = 4,
        DOCMISC_NOFILESUPPORT = 8,
    };
    enum class DVASPECT2 : int32_t
    {
        DVASPECT_OPAQUE = 16,
        DVASPECT_TRANSPARENT = 32,
    };
    enum class ENUM_CONTROLS_WHICH_FLAGS : uint32_t
    {
        GCW_WCH_SIBLING = 0x1,
        GC_WCH_CONTAINER = 0x2,
        GC_WCH_CONTAINED = 0x3,
        GC_WCH_ALL = 0x4,
        GC_WCH_FREVERSEDIR = 0x8000000,
        GC_WCH_FONLYAFTER = 0x10000000,
        GC_WCH_FONLYBEFORE = 0x20000000,
        GC_WCH_FSELECTED = 0x40000000,
    };
    enum class ExtentMode : int32_t
    {
        DVEXTENT_CONTENT = 0,
        DVEXTENT_INTEGRAL = 1,
    };
    enum class FUNCFLAGS : int32_t
    {
        FUNCFLAG_FRESTRICTED = 1,
        FUNCFLAG_FSOURCE = 2,
        FUNCFLAG_FBINDABLE = 4,
        FUNCFLAG_FREQUESTEDIT = 8,
        FUNCFLAG_FDISPLAYBIND = 16,
        FUNCFLAG_FDEFAULTBIND = 32,
        FUNCFLAG_FHIDDEN = 64,
        FUNCFLAG_FUSESGETLASTERROR = 128,
        FUNCFLAG_FDEFAULTCOLLELEM = 256,
        FUNCFLAG_FUIDEFAULT = 512,
        FUNCFLAG_FNONBROWSABLE = 1024,
        FUNCFLAG_FREPLACEABLE = 2048,
        FUNCFLAG_FIMMEDIATEBIND = 4096,
    };
    enum class FUNCKIND : int32_t
    {
        FUNC_VIRTUAL = 0,
        FUNC_PUREVIRTUAL = 1,
        FUNC_NONVIRTUAL = 2,
        FUNC_STATIC = 3,
        FUNC_DISPATCH = 4,
    };
    enum class GUIDKIND : int32_t
    {
        GUIDKIND_DEFAULT_SOURCE_DISP_IID = 1,
    };
    enum class HITRESULT : int32_t
    {
        HITRESULT_OUTSIDE = 0,
        HITRESULT_TRANSPARENT = 1,
        HITRESULT_CLOSE = 2,
        HITRESULT_HIT = 3,
    };
    enum class IGNOREMIME : int32_t
    {
        IGNOREMIME_PROMPT = 1,
        IGNOREMIME_TEXT = 2,
    };
    enum class INVOKEKIND : int32_t
    {
        INVOKE_FUNC = 1,
        INVOKE_PROPERTYGET = 2,
        INVOKE_PROPERTYPUT = 4,
        INVOKE_PROPERTYPUTREF = 8,
    };
    enum class LIBFLAGS : int32_t
    {
        LIBFLAG_FRESTRICTED = 1,
        LIBFLAG_FCONTROL = 2,
        LIBFLAG_FHIDDEN = 4,
        LIBFLAG_FHASDISKIMAGE = 8,
    };
    enum class MEDIAPLAYBACK_STATE : int32_t
    {
        MEDIAPLAYBACK_RESUME = 0,
        MEDIAPLAYBACK_PAUSE = 1,
        MEDIAPLAYBACK_PAUSE_AND_SUSPEND = 2,
        MEDIAPLAYBACK_RESUME_FROM_SUSPEND = 3,
    };
    enum class MULTICLASSINFO_FLAGS : uint32_t
    {
        MULTICLASSINFO_GETTYPEINFO = 0x1,
        MULTICLASSINFO_GETNUMRESERVEDDISPIDS = 0x2,
        MULTICLASSINFO_GETIIDPRIMARY = 0x4,
        MULTICLASSINFO_GETIIDSOURCE = 0x8,
    };
    enum class OLECLOSE : int32_t
    {
        OLECLOSE_SAVEIFDIRTY = 0,
        OLECLOSE_NOSAVE = 1,
        OLECLOSE_PROMPTSAVE = 2,
    };
    enum class OLECMDEXECOPT : int32_t
    {
        OLECMDEXECOPT_DODEFAULT = 0,
        OLECMDEXECOPT_PROMPTUSER = 1,
        OLECMDEXECOPT_DONTPROMPTUSER = 2,
        OLECMDEXECOPT_SHOWHELP = 3,
    };
    enum class OLECMDF : int32_t
    {
        OLECMDF_SUPPORTED = 1,
        OLECMDF_ENABLED = 2,
        OLECMDF_LATCHED = 4,
        OLECMDF_NINCHED = 8,
        OLECMDF_INVISIBLE = 16,
        OLECMDF_DEFHIDEONCTXTMENU = 32,
    };
    enum class OLECMDID : int32_t
    {
        OLECMDID_OPEN = 1,
        OLECMDID_NEW = 2,
        OLECMDID_SAVE = 3,
        OLECMDID_SAVEAS = 4,
        OLECMDID_SAVECOPYAS = 5,
        OLECMDID_PRINT = 6,
        OLECMDID_PRINTPREVIEW = 7,
        OLECMDID_PAGESETUP = 8,
        OLECMDID_SPELL = 9,
        OLECMDID_PROPERTIES = 10,
        OLECMDID_CUT = 11,
        OLECMDID_COPY = 12,
        OLECMDID_PASTE = 13,
        OLECMDID_PASTESPECIAL = 14,
        OLECMDID_UNDO = 15,
        OLECMDID_REDO = 16,
        OLECMDID_SELECTALL = 17,
        OLECMDID_CLEARSELECTION = 18,
        OLECMDID_ZOOM = 19,
        OLECMDID_GETZOOMRANGE = 20,
        OLECMDID_UPDATECOMMANDS = 21,
        OLECMDID_REFRESH = 22,
        OLECMDID_STOP = 23,
        OLECMDID_HIDETOOLBARS = 24,
        OLECMDID_SETPROGRESSMAX = 25,
        OLECMDID_SETPROGRESSPOS = 26,
        OLECMDID_SETPROGRESSTEXT = 27,
        OLECMDID_SETTITLE = 28,
        OLECMDID_SETDOWNLOADSTATE = 29,
        OLECMDID_STOPDOWNLOAD = 30,
        OLECMDID_ONTOOLBARACTIVATED = 31,
        OLECMDID_FIND = 32,
        OLECMDID_DELETE = 33,
        OLECMDID_HTTPEQUIV = 34,
        OLECMDID_HTTPEQUIV_DONE = 35,
        OLECMDID_ENABLE_INTERACTION = 36,
        OLECMDID_ONUNLOAD = 37,
        OLECMDID_PROPERTYBAG2 = 38,
        OLECMDID_PREREFRESH = 39,
        OLECMDID_SHOWSCRIPTERROR = 40,
        OLECMDID_SHOWMESSAGE = 41,
        OLECMDID_SHOWFIND = 42,
        OLECMDID_SHOWPAGESETUP = 43,
        OLECMDID_SHOWPRINT = 44,
        OLECMDID_CLOSE = 45,
        OLECMDID_ALLOWUILESSSAVEAS = 46,
        OLECMDID_DONTDOWNLOADCSS = 47,
        OLECMDID_UPDATEPAGESTATUS = 48,
        OLECMDID_PRINT2 = 49,
        OLECMDID_PRINTPREVIEW2 = 50,
        OLECMDID_SETPRINTTEMPLATE = 51,
        OLECMDID_GETPRINTTEMPLATE = 52,
        OLECMDID_PAGEACTIONBLOCKED = 55,
        OLECMDID_PAGEACTIONUIQUERY = 56,
        OLECMDID_FOCUSVIEWCONTROLS = 57,
        OLECMDID_FOCUSVIEWCONTROLSQUERY = 58,
        OLECMDID_SHOWPAGEACTIONMENU = 59,
        OLECMDID_ADDTRAVELENTRY = 60,
        OLECMDID_UPDATETRAVELENTRY = 61,
        OLECMDID_UPDATEBACKFORWARDSTATE = 62,
        OLECMDID_OPTICAL_ZOOM = 63,
        OLECMDID_OPTICAL_GETZOOMRANGE = 64,
        OLECMDID_WINDOWSTATECHANGED = 65,
        OLECMDID_ACTIVEXINSTALLSCOPE = 66,
        OLECMDID_UPDATETRAVELENTRY_DATARECOVERY = 67,
        OLECMDID_SHOWTASKDLG = 68,
        OLECMDID_POPSTATEEVENT = 69,
        OLECMDID_VIEWPORT_MODE = 70,
        OLECMDID_LAYOUT_VIEWPORT_WIDTH = 71,
        OLECMDID_VISUAL_VIEWPORT_EXCLUDE_BOTTOM = 72,
        OLECMDID_USER_OPTICAL_ZOOM = 73,
        OLECMDID_PAGEAVAILABLE = 74,
        OLECMDID_GETUSERSCALABLE = 75,
        OLECMDID_UPDATE_CARET = 76,
        OLECMDID_ENABLE_VISIBILITY = 77,
        OLECMDID_MEDIA_PLAYBACK = 78,
        OLECMDID_SETFAVICON = 79,
        OLECMDID_SET_HOST_FULLSCREENMODE = 80,
        OLECMDID_EXITFULLSCREEN = 81,
        OLECMDID_SCROLLCOMPLETE = 82,
        OLECMDID_ONBEFOREUNLOAD = 83,
        OLECMDID_SHOWMESSAGE_BLOCKABLE = 84,
        OLECMDID_SHOWTASKDLG_BLOCKABLE = 85,
    };
    enum class OLECMDID_BROWSERSTATEFLAG : int32_t
    {
        OLECMDIDF_BROWSERSTATE_EXTENSIONSOFF = 1,
        OLECMDIDF_BROWSERSTATE_IESECURITY = 2,
        OLECMDIDF_BROWSERSTATE_PROTECTEDMODE_OFF = 4,
        OLECMDIDF_BROWSERSTATE_RESET = 8,
        OLECMDIDF_BROWSERSTATE_REQUIRESACTIVEX = 16,
        OLECMDIDF_BROWSERSTATE_DESKTOPHTMLDIALOG = 32,
        OLECMDIDF_BROWSERSTATE_BLOCKEDVERSION = 64,
    };
    enum class OLECMDID_OPTICAL_ZOOMFLAG : int32_t
    {
        OLECMDIDF_OPTICAL_ZOOM_NOPERSIST = 1,
        OLECMDIDF_OPTICAL_ZOOM_NOLAYOUT = 16,
        OLECMDIDF_OPTICAL_ZOOM_NOTRANSIENT = 32,
        OLECMDIDF_OPTICAL_ZOOM_RELOADFORNEWTAB = 64,
    };
    enum class OLECMDID_PAGEACTIONFLAG : int32_t
    {
        OLECMDIDF_PAGEACTION_FILEDOWNLOAD = 1,
        OLECMDIDF_PAGEACTION_ACTIVEXINSTALL = 2,
        OLECMDIDF_PAGEACTION_ACTIVEXTRUSTFAIL = 4,
        OLECMDIDF_PAGEACTION_ACTIVEXUSERDISABLE = 8,
        OLECMDIDF_PAGEACTION_ACTIVEXDISALLOW = 16,
        OLECMDIDF_PAGEACTION_ACTIVEXUNSAFE = 32,
        OLECMDIDF_PAGEACTION_POPUPWINDOW = 64,
        OLECMDIDF_PAGEACTION_LOCALMACHINE = 128,
        OLECMDIDF_PAGEACTION_MIMETEXTPLAIN = 256,
        OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE = 512,
        OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE_ACTIVEXINSTALL = 512,
        OLECMDIDF_PAGEACTION_PROTLOCKDOWNLOCALMACHINE = 1024,
        OLECMDIDF_PAGEACTION_PROTLOCKDOWNTRUSTED = 2048,
        OLECMDIDF_PAGEACTION_PROTLOCKDOWNINTRANET = 4096,
        OLECMDIDF_PAGEACTION_PROTLOCKDOWNINTERNET = 8192,
        OLECMDIDF_PAGEACTION_PROTLOCKDOWNRESTRICTED = 16384,
        OLECMDIDF_PAGEACTION_PROTLOCKDOWNDENY = 32768,
        OLECMDIDF_PAGEACTION_POPUPALLOWED = 65536,
        OLECMDIDF_PAGEACTION_SCRIPTPROMPT = 131072,
        OLECMDIDF_PAGEACTION_ACTIVEXUSERAPPROVAL = 262144,
        OLECMDIDF_PAGEACTION_MIXEDCONTENT = 524288,
        OLECMDIDF_PAGEACTION_INVALID_CERT = 1048576,
        OLECMDIDF_PAGEACTION_INTRANETZONEREQUEST = 2097152,
        OLECMDIDF_PAGEACTION_XSSFILTERED = 4194304,
        OLECMDIDF_PAGEACTION_SPOOFABLEIDNHOST = 8388608,
        OLECMDIDF_PAGEACTION_ACTIVEX_EPM_INCOMPATIBLE = 16777216,
        OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE_ACTIVEXUSERAPPROVAL = 33554432,
        OLECMDIDF_PAGEACTION_WPCBLOCKED = 67108864,
        OLECMDIDF_PAGEACTION_WPCBLOCKED_ACTIVEX = 134217728,
        OLECMDIDF_PAGEACTION_EXTENSION_COMPAT_BLOCKED = 268435456,
        OLECMDIDF_PAGEACTION_NORESETACTIVEX = 536870912,
        OLECMDIDF_PAGEACTION_GENERIC_STATE = 1073741824,
        OLECMDIDF_PAGEACTION_RESET = -2147483648,
    };
    enum class OLECMDID_REFRESHFLAG : int32_t
    {
        OLECMDIDF_REFRESH_NORMAL = 0,
        OLECMDIDF_REFRESH_IFEXPIRED = 1,
        OLECMDIDF_REFRESH_CONTINUE = 2,
        OLECMDIDF_REFRESH_COMPLETELY = 3,
        OLECMDIDF_REFRESH_NO_CACHE = 4,
        OLECMDIDF_REFRESH_RELOAD = 5,
        OLECMDIDF_REFRESH_LEVELMASK = 255,
        OLECMDIDF_REFRESH_CLEARUSERINPUT = 4096,
        OLECMDIDF_REFRESH_PROMPTIFOFFLINE = 8192,
        OLECMDIDF_REFRESH_THROUGHSCRIPT = 16384,
        OLECMDIDF_REFRESH_SKIPBEFOREUNLOADEVENT = 32768,
        OLECMDIDF_REFRESH_PAGEACTION_ACTIVEXINSTALL = 65536,
        OLECMDIDF_REFRESH_PAGEACTION_FILEDOWNLOAD = 131072,
        OLECMDIDF_REFRESH_PAGEACTION_LOCALMACHINE = 262144,
        OLECMDIDF_REFRESH_PAGEACTION_POPUPWINDOW = 524288,
        OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNLOCALMACHINE = 1048576,
        OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNTRUSTED = 2097152,
        OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNINTRANET = 4194304,
        OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNINTERNET = 8388608,
        OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNRESTRICTED = 16777216,
        OLECMDIDF_REFRESH_PAGEACTION_MIXEDCONTENT = 33554432,
        OLECMDIDF_REFRESH_PAGEACTION_INVALID_CERT = 67108864,
        OLECMDIDF_REFRESH_PAGEACTION_ALLOW_VERSION = 134217728,
    };
    enum class OLECMDID_VIEWPORT_MODE_FLAG : int32_t
    {
        OLECMDIDF_VIEWPORTMODE_FIXED_LAYOUT_WIDTH = 1,
        OLECMDIDF_VIEWPORTMODE_EXCLUDE_VISUAL_BOTTOM = 2,
        OLECMDIDF_VIEWPORTMODE_FIXED_LAYOUT_WIDTH_VALID = 65536,
        OLECMDIDF_VIEWPORTMODE_EXCLUDE_VISUAL_BOTTOM_VALID = 131072,
    };
    enum class OLECMDID_WINDOWSTATE_FLAG : int32_t
    {
        OLECMDIDF_WINDOWSTATE_USERVISIBLE = 1,
        OLECMDIDF_WINDOWSTATE_ENABLED = 2,
        OLECMDIDF_WINDOWSTATE_USERVISIBLE_VALID = 65536,
        OLECMDIDF_WINDOWSTATE_ENABLED_VALID = 131072,
    };
    enum class OLECMDTEXTF : int32_t
    {
        OLECMDTEXTF_NONE = 0,
        OLECMDTEXTF_NAME = 1,
        OLECMDTEXTF_STATUS = 2,
    };
    enum class OLECONTF : int32_t
    {
        OLECONTF_EMBEDDINGS = 1,
        OLECONTF_LINKS = 2,
        OLECONTF_OTHERS = 4,
        OLECONTF_ONLYUSER = 8,
        OLECONTF_ONLYIFRUNNING = 16,
    };
    enum class OLEDCFLAGS : int32_t
    {
        OLEDC_NODRAW = 1,
        OLEDC_PAINTBKGND = 2,
        OLEDC_OFFSCREEN = 4,
    };
    enum class OLEGETMONIKER : int32_t
    {
        OLEGETMONIKER_ONLYIFTHERE = 1,
        OLEGETMONIKER_FORCEASSIGN = 2,
        OLEGETMONIKER_UNASSIGN = 3,
        OLEGETMONIKER_TEMPFORUSER = 4,
    };
    enum class OLELINKBIND : int32_t
    {
        OLELINKBIND_EVENIFCLASSDIFF = 1,
    };
    enum class OLEMISC : int32_t
    {
        OLEMISC_RECOMPOSEONRESIZE = 1,
        OLEMISC_ONLYICONIC = 2,
        OLEMISC_INSERTNOTREPLACE = 4,
        OLEMISC_STATIC = 8,
        OLEMISC_CANTLINKINSIDE = 16,
        OLEMISC_CANLINKBYOLE1 = 32,
        OLEMISC_ISLINKOBJECT = 64,
        OLEMISC_INSIDEOUT = 128,
        OLEMISC_ACTIVATEWHENVISIBLE = 256,
        OLEMISC_RENDERINGISDEVICEINDEPENDENT = 512,
        OLEMISC_INVISIBLEATRUNTIME = 1024,
        OLEMISC_ALWAYSRUN = 2048,
        OLEMISC_ACTSLIKEBUTTON = 4096,
        OLEMISC_ACTSLIKELABEL = 8192,
        OLEMISC_NOUIACTIVATE = 16384,
        OLEMISC_ALIGNABLE = 32768,
        OLEMISC_SIMPLEFRAME = 65536,
        OLEMISC_SETCLIENTSITEFIRST = 131072,
        OLEMISC_IMEMODE = 262144,
        OLEMISC_IGNOREACTIVATEWHENVISIBLE = 524288,
        OLEMISC_WANTSTOMENUMERGE = 1048576,
        OLEMISC_SUPPORTSMULTILEVELUNDO = 2097152,
    };
    enum class OLERENDER : int32_t
    {
        OLERENDER_NONE = 0,
        OLERENDER_DRAW = 1,
        OLERENDER_FORMAT = 2,
        OLERENDER_ASIS = 3,
    };
    enum class OLEUIPASTEFLAG : int32_t
    {
        OLEUIPASTE_ENABLEICON = 2048,
        OLEUIPASTE_PASTEONLY = 0,
        OLEUIPASTE_PASTE = 512,
        OLEUIPASTE_LINKANYTYPE = 1024,
        OLEUIPASTE_LINKTYPE1 = 1,
        OLEUIPASTE_LINKTYPE2 = 2,
        OLEUIPASTE_LINKTYPE3 = 4,
        OLEUIPASTE_LINKTYPE4 = 8,
        OLEUIPASTE_LINKTYPE5 = 16,
        OLEUIPASTE_LINKTYPE6 = 32,
        OLEUIPASTE_LINKTYPE7 = 64,
        OLEUIPASTE_LINKTYPE8 = 128,
    };
    enum class OLEUPDATE : int32_t
    {
        OLEUPDATE_ALWAYS = 1,
        OLEUPDATE_ONCALL = 3,
    };
    enum class OLEVERBATTRIB : int32_t
    {
        OLEVERBATTRIB_NEVERDIRTIES = 1,
        OLEVERBATTRIB_ONCONTAINERMENU = 2,
    };
    enum class OLEWHICHMK : int32_t
    {
        OLEWHICHMK_CONTAINER = 1,
        OLEWHICHMK_OBJREL = 2,
        OLEWHICHMK_OBJFULL = 3,
    };
    enum class OLE_TRISTATE : int32_t
    {
        triUnchecked = 0,
        triChecked = 1,
        triGray = 2,
    };
    enum class PAGEACTION_UI : int32_t
    {
        PAGEACTION_UI_DEFAULT = 0,
        PAGEACTION_UI_MODAL = 1,
        PAGEACTION_UI_MODELESS = 2,
        PAGEACTION_UI_SILENT = 3,
    };
    enum class POINTERINACTIVE : int32_t
    {
        POINTERINACTIVE_ACTIVATEONENTRY = 1,
        POINTERINACTIVE_DEACTIVATEONLEAVE = 2,
        POINTERINACTIVE_ACTIVATEONDRAG = 4,
    };
    enum class PRINTFLAG : uint32_t
    {
        PRINTFLAG_MAYBOTHERUSER = 0x1,
        PRINTFLAG_PROMPTUSER = 0x2,
        PRINTFLAG_USERMAYCHANGEPRINTER = 0x4,
        PRINTFLAG_RECOMPOSETODEVICE = 0x8,
        PRINTFLAG_DONTACTUALLYPRINT = 0x10,
        PRINTFLAG_FORCEPROPERTIES = 0x20,
        PRINTFLAG_PRINTTOFILE = 0x40,
    };
    enum class PROPBAG2_TYPE : int32_t
    {
        PROPBAG2_TYPE_UNDEFINED = 0,
        PROPBAG2_TYPE_DATA = 1,
        PROPBAG2_TYPE_URL = 2,
        PROPBAG2_TYPE_OBJECT = 3,
        PROPBAG2_TYPE_STREAM = 4,
        PROPBAG2_TYPE_STORAGE = 5,
        PROPBAG2_TYPE_MONIKER = 6,
    };
    enum class PROPPAGESTATUS : int32_t
    {
        PROPPAGESTATUS_DIRTY = 1,
        PROPPAGESTATUS_VALIDATE = 2,
        PROPPAGESTATUS_CLEAN = 4,
    };
    enum class PictureAttributes : int32_t
    {
        PICTURE_SCALABLE = 1,
        PICTURE_TRANSPARENT = 2,
    };
    enum class QACONTAINERFLAGS : int32_t
    {
        QACONTAINER_SHOWHATCHING = 1,
        QACONTAINER_SHOWGRABHANDLES = 2,
        QACONTAINER_USERMODE = 4,
        QACONTAINER_DISPLAYASDEFAULT = 8,
        QACONTAINER_UIDEAD = 16,
        QACONTAINER_AUTOCLIP = 32,
        QACONTAINER_MESSAGEREFLECT = 64,
        QACONTAINER_SUPPORTSMNEMONICS = 128,
    };
    enum class READYSTATE : int32_t
    {
        READYSTATE_UNINITIALIZED = 0,
        READYSTATE_LOADING = 1,
        READYSTATE_LOADED = 2,
        READYSTATE_INTERACTIVE = 3,
        READYSTATE_COMPLETE = 4,
    };
    enum class REGKIND : int32_t
    {
        REGKIND_DEFAULT = 0,
        REGKIND_REGISTER = 1,
        REGKIND_NONE = 2,
    };
    enum class SF_TYPE : int32_t
    {
        SF_ERROR = 10,
        SF_I1 = 16,
        SF_I2 = 2,
        SF_I4 = 3,
        SF_I8 = 20,
        SF_BSTR = 8,
        SF_UNKNOWN = 13,
        SF_DISPATCH = 9,
        SF_VARIANT = 12,
        SF_RECORD = 36,
        SF_HAVEIID = 32781,
    };
    enum class SYSKIND : int32_t
    {
        SYS_WIN16 = 0,
        SYS_WIN32 = 1,
        SYS_MAC = 2,
        SYS_WIN64 = 3,
    };
    enum class TYPEFLAGS : int32_t
    {
        TYPEFLAG_FAPPOBJECT = 1,
        TYPEFLAG_FCANCREATE = 2,
        TYPEFLAG_FLICENSED = 4,
        TYPEFLAG_FPREDECLID = 8,
        TYPEFLAG_FHIDDEN = 16,
        TYPEFLAG_FCONTROL = 32,
        TYPEFLAG_FDUAL = 64,
        TYPEFLAG_FNONEXTENSIBLE = 128,
        TYPEFLAG_FOLEAUTOMATION = 256,
        TYPEFLAG_FRESTRICTED = 512,
        TYPEFLAG_FAGGREGATABLE = 1024,
        TYPEFLAG_FREPLACEABLE = 2048,
        TYPEFLAG_FDISPATCHABLE = 4096,
        TYPEFLAG_FREVERSEBIND = 8192,
        TYPEFLAG_FPROXY = 16384,
    };
    enum class TYPEKIND : int32_t
    {
        TKIND_ENUM = 0,
        TKIND_RECORD = 1,
        TKIND_MODULE = 2,
        TKIND_INTERFACE = 3,
        TKIND_DISPATCH = 4,
        TKIND_COCLASS = 5,
        TKIND_ALIAS = 6,
        TKIND_UNION = 7,
        TKIND_MAX = 8,
    };
    enum class UASFLAGS : int32_t
    {
        UAS_NORMAL = 0,
        UAS_BLOCKED = 1,
        UAS_NOPARENTENABLE = 2,
        UAS_MASK = 3,
    };
    enum class UPDFCACHE_FLAGS : uint32_t
    {
        UPDFCACHE_ALL = 0x7fffffff,
        UPDFCACHE_ALLBUTNODATACACHE = 0x7ffffffe,
        UPDFCACHE_NORMALCACHE = 0x8,
        UPDFCACHE_IFBLANK = 0x10,
        UPDFCACHE_ONLYIFBLANK = 0x80000000,
        UPDFCACHE_NODATACACHE = 0x1,
        UPDFCACHE_ONSAVECACHE = 0x2,
        UPDFCACHE_ONSTOPCACHE = 0x4,
        UPDFCACHE_IFBLANKORONSAVECACHE = 0x12,
    };
    enum class USERCLASSTYPE : int32_t
    {
        USERCLASSTYPE_FULL = 1,
        USERCLASSTYPE_SHORT = 2,
        USERCLASSTYPE_APPNAME = 3,
    };
    enum class VARENUM : int32_t
    {
        VT_EMPTY = 0,
        VT_NULL = 1,
        VT_I2 = 2,
        VT_I4 = 3,
        VT_R4 = 4,
        VT_R8 = 5,
        VT_CY = 6,
        VT_DATE = 7,
        VT_BSTR = 8,
        VT_DISPATCH = 9,
        VT_ERROR = 10,
        VT_BOOL = 11,
        VT_VARIANT = 12,
        VT_UNKNOWN = 13,
        VT_DECIMAL = 14,
        VT_I1 = 16,
        VT_UI1 = 17,
        VT_UI2 = 18,
        VT_UI4 = 19,
        VT_I8 = 20,
        VT_UI8 = 21,
        VT_INT = 22,
        VT_UINT = 23,
        VT_VOID = 24,
        VT_HRESULT = 25,
        VT_PTR = 26,
        VT_SAFEARRAY = 27,
        VT_CARRAY = 28,
        VT_USERDEFINED = 29,
        VT_LPSTR = 30,
        VT_LPWSTR = 31,
        VT_RECORD = 36,
        VT_INT_PTR = 37,
        VT_UINT_PTR = 38,
        VT_FILETIME = 64,
        VT_BLOB = 65,
        VT_STREAM = 66,
        VT_STORAGE = 67,
        VT_STREAMED_OBJECT = 68,
        VT_STORED_OBJECT = 69,
        VT_BLOB_OBJECT = 70,
        VT_CF = 71,
        VT_CLSID = 72,
        VT_VERSIONED_STREAM = 73,
        VT_BSTR_BLOB = 4095,
        VT_VECTOR = 4096,
        VT_ARRAY = 8192,
        VT_BYREF = 16384,
        VT_RESERVED = 32768,
        VT_ILLEGAL = 65535,
        VT_ILLEGALMASKED = 4095,
        VT_TYPEMASK = 4095,
    };
    enum class VARFLAGS : int32_t
    {
        VARFLAG_FREADONLY = 1,
        VARFLAG_FSOURCE = 2,
        VARFLAG_FBINDABLE = 4,
        VARFLAG_FREQUESTEDIT = 8,
        VARFLAG_FDISPLAYBIND = 16,
        VARFLAG_FDEFAULTBIND = 32,
        VARFLAG_FHIDDEN = 64,
        VARFLAG_FRESTRICTED = 128,
        VARFLAG_FDEFAULTCOLLELEM = 256,
        VARFLAG_FUIDEFAULT = 512,
        VARFLAG_FNONBROWSABLE = 1024,
        VARFLAG_FREPLACEABLE = 2048,
        VARFLAG_FIMMEDIATEBIND = 4096,
    };
    enum class VARKIND : int32_t
    {
        VAR_PERINSTANCE = 0,
        VAR_STATIC = 1,
        VAR_CONST = 2,
        VAR_DISPATCH = 3,
    };
    enum class VIEWSTATUS : int32_t
    {
        VIEWSTATUS_OPAQUE = 1,
        VIEWSTATUS_SOLIDBKGND = 2,
        VIEWSTATUS_DVASPECTOPAQUE = 4,
        VIEWSTATUS_DVASPECTTRANSPARENT = 8,
        VIEWSTATUS_SURFACE = 16,
        VIEWSTATUS_3DSURFACE = 32,
    };
    enum class WPCSETTING : int32_t
    {
        WPCSETTING_LOGGING_ENABLED = 1,
        WPCSETTING_FILEDOWNLOAD_BLOCKED = 2,
    };
    enum class XFORMCOORDS : int32_t
    {
        XFORMCOORDS_POSITION = 1,
        XFORMCOORDS_SIZE = 2,
        XFORMCOORDS_HIMETRICTOCONTAINER = 4,
        XFORMCOORDS_CONTAINERTOHIMETRIC = 8,
        XFORMCOORDS_EVENTCOMPAT = 16,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ARRAYDESC;
    struct AspectInfo;
    union BINDPTR;
    struct CADWORD;
    struct CALPOLESTR;
    struct CAUUID;
    struct CLEANLOCALSTORAGE;
    struct CONTROLINFO;
    struct CUSTDATA;
    struct CUSTDATAITEM;
    struct DISPPARAMS;
    struct ELEMDESC;
    struct EXCEPINFO;
    struct ExtentInfo;
    struct FONTDESC;
    struct FUNCDESC;
    struct IDLDESC;
    struct INTERFACEDATA;
    struct LICINFO;
    struct METHODDATA;
    struct NUMPARSE;
    struct OBJECTDESCRIPTOR;
    struct OCPFIPARAMS;
    struct OIFI;
    struct OLECMD;
    struct OLECMDTEXT;
    struct OLEUIBUSYA;
    struct OLEUIBUSYW;
    struct OLEUICHANGEICONA;
    struct OLEUICHANGEICONW;
    struct OLEUICHANGESOURCEA;
    struct OLEUICHANGESOURCEW;
    struct OLEUICONVERTA;
    struct OLEUICONVERTW;
    struct OLEUIEDITLINKSA;
    struct OLEUIEDITLINKSW;
    struct OLEUIGNRLPROPSA;
    struct OLEUIGNRLPROPSW;
    struct OLEUIINSERTOBJECTA;
    struct OLEUIINSERTOBJECTW;
    struct OLEUILINKPROPSA;
    struct OLEUILINKPROPSW;
    struct OLEUIOBJECTPROPSA;
    struct OLEUIOBJECTPROPSW;
    struct OLEUIPASTEENTRYA;
    struct OLEUIPASTEENTRYW;
    struct OLEUIPASTESPECIALA;
    struct OLEUIPASTESPECIALW;
    struct OLEUIVIEWPROPSA;
    struct OLEUIVIEWPROPSW;
    struct OLEVERB;
    struct OleMenuGroupWidths;
    struct PAGERANGE;
    struct PAGESET;
    struct PARAMDATA;
    struct PARAMDESC;
    struct PARAMDESCEX;
    struct PICTDESC;
    struct POINTF;
    struct PROPBAG2;
    struct PROPPAGEINFO;
    struct QACONTAINER;
    struct QACONTROL;
    struct TLIBATTR;
    struct TYPEATTR;
    struct TYPEDESC;
    struct UDATE;
    struct VARDESC;
    struct _wireBRECORD;
    struct _wireSAFEARRAY;
    struct _wireSAFEARRAY_UNION;
    struct _wireSAFEARR_BRECORD;
    struct _wireSAFEARR_BSTR;
    struct _wireSAFEARR_DISPATCH;
    struct _wireSAFEARR_HAVEIID;
    struct _wireSAFEARR_UNKNOWN;
    struct _wireSAFEARR_VARIANT;
    struct _wireVARIANT;
    struct IAdviseSinkEx;
    struct ICanHandleException;
    struct IClassFactory2;
    struct IContinue;
    struct IContinueCallback;
    struct ICreateErrorInfo;
    struct ICreateTypeInfo;
    struct ICreateTypeInfo2;
    struct ICreateTypeLib;
    struct ICreateTypeLib2;
    struct IDispError;
    struct IDispatch;
    struct IDispatchEx;
    struct IDropSource;
    struct IDropSourceNotify;
    struct IDropTarget;
    struct IEnterpriseDropTarget;
    struct IEnumOLEVERB;
    struct IEnumOleDocumentViews;
    struct IEnumOleUndoUnits;
    struct IEnumVARIANT;
    struct IErrorInfo;
    struct IErrorLog;
    struct IFont;
    struct IFontDisp;
    struct IFontEventsDisp;
    struct IGetOleObject;
    struct IGetVBAObject;
    struct IObjectIdentity;
    struct IObjectWithSite;
    struct IOleAdviseHolder;
    struct IOleCache;
    struct IOleCache2;
    struct IOleCacheControl;
    struct IOleClientSite;
    struct IOleCommandTarget;
    struct IOleContainer;
    struct IOleControl;
    struct IOleControlSite;
    struct IOleDocument;
    struct IOleDocumentSite;
    struct IOleDocumentView;
    struct IOleInPlaceActiveObject;
    struct IOleInPlaceFrame;
    struct IOleInPlaceObject;
    struct IOleInPlaceObjectWindowless;
    struct IOleInPlaceSite;
    struct IOleInPlaceSiteEx;
    struct IOleInPlaceSiteWindowless;
    struct IOleInPlaceUIWindow;
    struct IOleItemContainer;
    struct IOleLink;
    struct IOleObject;
    struct IOleParentUndoUnit;
    struct IOleUILinkContainerA;
    struct IOleUILinkContainerW;
    struct IOleUILinkInfoA;
    struct IOleUILinkInfoW;
    struct IOleUIObjInfoA;
    struct IOleUIObjInfoW;
    struct IOleUndoManager;
    struct IOleUndoUnit;
    struct IOleWindow;
    struct IParseDisplayName;
    struct IPerPropertyBrowsing;
    struct IPersistPropertyBag;
    struct IPersistPropertyBag2;
    struct IPicture;
    struct IPicture2;
    struct IPictureDisp;
    struct IPointerInactive;
    struct IPrint;
    struct IPropertyBag;
    struct IPropertyBag2;
    struct IPropertyNotifySink;
    struct IPropertyPage;
    struct IPropertyPage2;
    struct IPropertyPageSite;
    struct IProtectFocus;
    struct IProtectedModeMenuServices;
    struct IProvideClassInfo;
    struct IProvideClassInfo2;
    struct IProvideMultipleClassInfo;
    struct IProvideRuntimeContext;
    struct IQuickActivate;
    struct IRecordInfo;
    struct ISimpleFrameSite;
    struct ISpecifyPropertyPages;
    struct ISupportErrorInfo;
    struct ITypeChangeEvents;
    struct ITypeComp;
    struct ITypeFactory;
    struct ITypeInfo;
    struct ITypeInfo2;
    struct ITypeLib;
    struct ITypeLib2;
    struct ITypeLibRegistration;
    struct ITypeLibRegistrationReader;
    struct ITypeMarshal;
    struct IVBFormat;
    struct IVBGetControl;
    struct IVariantChangeType;
    struct IViewObject;
    struct IViewObject2;
    struct IViewObjectEx;
    struct IZoomEvents;
#pragma endregion forward_declarations

#pragma region delegates
    using LPEXCEPFINO_DEFERRED_FILLIN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::System::Ole::EXCEPINFO*);
    using LPFNOLEUIHOOK = uint32_t __stdcall(Windows::Win32::Foundation::HWND, uint32_t, Windows::Win32::Foundation::WPARAM, Windows::Win32::Foundation::LPARAM);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
