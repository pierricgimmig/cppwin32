// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_Gdi_0_H
#define WIN32_Windows_Win32_Graphics_Gdi_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BOOL;
    struct HINSTANCE;
    struct HWND;
    struct LPARAM;
    struct PSTR;
    struct RECT;
    struct WPARAM;
}
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::Gdi
{
#pragma region enums
    enum class ARC_DIRECTION : uint32_t
    {
        AD_COUNTERCLOCKWISE = 0x1,
        AD_CLOCKWISE = 0x2,
    };
    enum class BACKGROUND_MODE : uint32_t
    {
        OPAQUE = 0x2,
        TRANSPARENT = 0x1,
    };
    enum class CDS_TYPE : uint32_t
    {
        CDS_FULLSCREEN = 0x4,
        CDS_GLOBAL = 0x8,
        CDS_NORESET = 0x10000000,
        CDS_RESET = 0x40000000,
        CDS_SET_PRIMARY = 0x10,
        CDS_TEST = 0x2,
        CDS_UPDATEREGISTRY = 0x1,
        CDS_VIDEOPARAMETERS = 0x20,
        CDS_ENABLE_UNSAFE_MODES = 0x100,
        CDS_DISABLE_UNSAFE_MODES = 0x200,
        CDS_RESET_EX = 0x20000000,
    };
    enum class CREATE_FONT_PACKAGE_SUBSET_ENCODING : uint32_t
    {
        TTFCFP_STD_MAC_CHAR_SET = 0x0,
        TTFCFP_SYMBOL_CHAR_SET = 0x0,
        TTFCFP_UNICODE_CHAR_SET = 0x1,
    };
    enum class CREATE_FONT_PACKAGE_SUBSET_PLATFORM : uint32_t
    {
        TTFCFP_UNICODE_PLATFORMID = 0x0,
        TTFCFP_ISO_PLATFORMID = 0x2,
    };
    enum class CREATE_POLYGON_RGN_MODE : uint32_t
    {
        ALTERNATE = 0x1,
        WINDING = 0x2,
    };
    enum class DC_LAYOUT : uint32_t
    {
        LAYOUT_BITMAPORIENTATIONPRESERVED = 0x8,
        LAYOUT_RTL = 0x1,
    };
    enum class DFCS_STATE : uint32_t
    {
        DFCS_CAPTIONCLOSE = 0x0,
        DFCS_CAPTIONMIN = 0x1,
        DFCS_CAPTIONMAX = 0x2,
        DFCS_CAPTIONRESTORE = 0x3,
        DFCS_CAPTIONHELP = 0x4,
        DFCS_MENUARROW = 0x0,
        DFCS_MENUCHECK = 0x1,
        DFCS_MENUBULLET = 0x2,
        DFCS_MENUARROWRIGHT = 0x4,
        DFCS_SCROLLUP = 0x0,
        DFCS_SCROLLDOWN = 0x1,
        DFCS_SCROLLLEFT = 0x2,
        DFCS_SCROLLRIGHT = 0x3,
        DFCS_SCROLLCOMBOBOX = 0x5,
        DFCS_SCROLLSIZEGRIP = 0x8,
        DFCS_SCROLLSIZEGRIPRIGHT = 0x10,
        DFCS_BUTTONCHECK = 0x0,
        DFCS_BUTTONRADIOIMAGE = 0x1,
        DFCS_BUTTONRADIOMASK = 0x2,
        DFCS_BUTTONRADIO = 0x4,
        DFCS_BUTTON3STATE = 0x8,
        DFCS_BUTTONPUSH = 0x10,
        DFCS_INACTIVE = 0x100,
        DFCS_PUSHED = 0x200,
        DFCS_CHECKED = 0x400,
        DFCS_TRANSPARENT = 0x800,
        DFCS_HOT = 0x1000,
        DFCS_ADJUSTRECT = 0x2000,
        DFCS_FLAT = 0x4000,
        DFCS_MONO = 0x8000,
    };
    enum class DFC_TYPE : uint32_t
    {
        DFC_CAPTION = 0x1,
        DFC_MENU = 0x2,
        DFC_SCROLL = 0x3,
        DFC_BUTTON = 0x4,
        DFC_POPUPMENU = 0x5,
    };
    enum class DIB_USAGE : uint32_t
    {
        DIB_RGB_COLORS = 0x0,
        DIB_PAL_COLORS = 0x1,
    };
    enum class DISPLAYCONFIG_COLOR_ENCODING : int32_t
    {
        DISPLAYCONFIG_COLOR_ENCODING_RGB = 0,
        DISPLAYCONFIG_COLOR_ENCODING_YCBCR444 = 1,
        DISPLAYCONFIG_COLOR_ENCODING_YCBCR422 = 2,
        DISPLAYCONFIG_COLOR_ENCODING_YCBCR420 = 3,
        DISPLAYCONFIG_COLOR_ENCODING_INTENSITY = 4,
        DISPLAYCONFIG_COLOR_ENCODING_FORCE_UINT32 = -1,
    };
    enum class DISP_CHANGE : int32_t
    {
        DISP_CHANGE_SUCCESSFUL = 0,
        DISP_CHANGE_RESTART = 1,
        DISP_CHANGE_FAILED = -1,
        DISP_CHANGE_BADMODE = -2,
        DISP_CHANGE_NOTUPDATED = -3,
        DISP_CHANGE_BADFLAGS = -4,
        DISP_CHANGE_BADPARAM = -5,
        DISP_CHANGE_BADDUALVIEW = -6,
    };
    enum class DRAWEDGE_FLAGS : uint32_t
    {
        BDR_RAISEDOUTER = 0x1,
        BDR_SUNKENOUTER = 0x2,
        BDR_RAISEDINNER = 0x4,
        BDR_SUNKENINNER = 0x8,
        BDR_OUTER = 0x3,
        BDR_INNER = 0xc,
        BDR_RAISED = 0x5,
        BDR_SUNKEN = 0xa,
        EDGE_RAISED = 0x5,
        EDGE_SUNKEN = 0xa,
        EDGE_ETCHED = 0x6,
        EDGE_BUMP = 0x9,
    };
    enum class DRAWSTATE_FLAGS : uint32_t
    {
        DST_COMPLEX = 0x0,
        DST_TEXT = 0x1,
        DST_PREFIXTEXT = 0x2,
        DST_ICON = 0x3,
        DST_BITMAP = 0x4,
        DSS_NORMAL = 0x0,
        DSS_UNION = 0x10,
        DSS_DISABLED = 0x20,
        DSS_MONO = 0x80,
        DSS_HIDEPREFIX = 0x200,
        DSS_PREFIXONLY = 0x400,
        DSS_RIGHT = 0x8000,
    };
    enum class DRAW_CAPTION_FLAGS : uint32_t
    {
        DC_ACTIVE = 0x1,
        DC_BUTTONS = 0x1000,
        DC_GRADIENT = 0x20,
        DC_ICON = 0x4,
        DC_INBUTTON = 0x10,
        DC_SMALLCAP = 0x2,
        DC_TEXT = 0x8,
    };
    enum class DRAW_EDGE_FLAGS : uint32_t
    {
        BF_ADJUST = 0x2000,
        BF_BOTTOM = 0x8,
        BF_BOTTOMLEFT = 0x9,
        BF_BOTTOMRIGHT = 0xc,
        BF_DIAGONAL = 0x10,
        BF_DIAGONAL_ENDBOTTOMLEFT = 0x19,
        BF_DIAGONAL_ENDBOTTOMRIGHT = 0x1c,
        BF_DIAGONAL_ENDTOPLEFT = 0x13,
        BF_DIAGONAL_ENDTOPRIGHT = 0x16,
        BF_FLAT = 0x4000,
        BF_LEFT = 0x1,
        BF_MIDDLE = 0x800,
        BF_MONO = 0x8000,
        BF_RECT = 0xf,
        BF_RIGHT = 0x4,
        BF_SOFT = 0x1000,
        BF_TOP = 0x2,
        BF_TOPLEFT = 0x3,
        BF_TOPRIGHT = 0x6,
    };
    enum class DRAW_TEXT_FORMAT : uint32_t
    {
        DT_BOTTOM = 0x8,
        DT_CALCRECT = 0x400,
        DT_CENTER = 0x1,
        DT_EDITCONTROL = 0x2000,
        DT_END_ELLIPSIS = 0x8000,
        DT_EXPANDTABS = 0x40,
        DT_EXTERNALLEADING = 0x200,
        DT_HIDEPREFIX = 0x100000,
        DT_INTERNAL = 0x1000,
        DT_LEFT = 0x0,
        DT_MODIFYSTRING = 0x10000,
        DT_NOCLIP = 0x100,
        DT_NOFULLWIDTHCHARBREAK = 0x80000,
        DT_NOPREFIX = 0x800,
        DT_PATH_ELLIPSIS = 0x4000,
        DT_PREFIXONLY = 0x200000,
        DT_RIGHT = 0x2,
        DT_RTLREADING = 0x20000,
        DT_SINGLELINE = 0x20,
        DT_TABSTOP = 0x80,
        DT_TOP = 0x0,
        DT_VCENTER = 0x4,
        DT_WORDBREAK = 0x10,
        DT_WORD_ELLIPSIS = 0x40000,
    };
    enum class EMBEDDED_FONT_PRIV_STATUS : uint32_t
    {
        EMBED_PREVIEWPRINT = 0x1,
        EMBED_EDITABLE = 0x2,
        EMBED_INSTALLABLE = 0x3,
        EMBED_NOEMBEDDING = 0x4,
    };
    enum class EMBED_FONT_CHARSET : uint32_t
    {
        CHARSET_UNICODE = 0x1,
        CHARSET_SYMBOL = 0x2,
    };
    enum class ENUM_DISPLAY_SETTINGS_MODE : uint32_t
    {
        ENUM_CURRENT_SETTINGS = 0xffffffff,
        ENUM_REGISTRY_SETTINGS = 0xfffffffe,
    };
    enum class ETO_OPTIONS : uint32_t
    {
        ETO_OPAQUE = 0x2,
        ETO_CLIPPED = 0x4,
        ETO_GLYPH_INDEX = 0x10,
        ETO_RTLREADING = 0x80,
        ETO_NUMERICSLOCAL = 0x400,
        ETO_NUMERICSLATIN = 0x800,
        ETO_IGNORELANGUAGE = 0x1000,
        ETO_PDY = 0x2000,
        ETO_REVERSE_INDEX_MAP = 0x10000,
    };
    enum class EXT_FLOOD_FILL_TYPE : uint32_t
    {
        FLOODFILLBORDER = 0x0,
        FLOODFILLSURFACE = 0x1,
    };
    enum class FONT_CLIP_PRECISION : uint32_t
    {
        CLIP_CHARACTER_PRECIS = 0x1,
        CLIP_DEFAULT_PRECIS = 0x0,
        CLIP_DFA_DISABLE = 0x40,
        CLIP_EMBEDDED = 0x80,
        CLIP_LH_ANGLES = 0x10,
        CLIP_MASK = 0xf,
        CLIP_STROKE_PRECIS = 0x2,
        CLIP_TT_ALWAYS = 0x20,
    };
    enum class FONT_LICENSE_PRIVS : uint32_t
    {
        LICENSE_PREVIEWPRINT = 0x4,
        LICENSE_EDITABLE = 0x8,
        LICENSE_INSTALLABLE = 0x0,
        LICENSE_NOEMBEDDING = 0x2,
        LICENSE_DEFAULT = 0x0,
    };
    enum class FONT_OUTPUT_PRECISION : uint32_t
    {
        OUT_CHARACTER_PRECIS = 0x2,
        OUT_DEFAULT_PRECIS = 0x0,
        OUT_DEVICE_PRECIS = 0x5,
        OUT_OUTLINE_PRECIS = 0x8,
        OUT_PS_ONLY_PRECIS = 0xa,
        OUT_RASTER_PRECIS = 0x6,
        OUT_STRING_PRECIS = 0x1,
        OUT_STROKE_PRECIS = 0x3,
        OUT_TT_ONLY_PRECIS = 0x7,
        OUT_TT_PRECIS = 0x4,
    };
    enum class FONT_PITCH_AND_FAMILY : uint32_t
    {
        FF_DECORATIVE = 0x50,
        FF_DONTCARE = 0x0,
        FF_MODERN = 0x30,
        FF_ROMAN = 0x10,
        FF_SCRIPT = 0x40,
        FF_SWISS = 0x20,
    };
    enum class FONT_QUALITY : uint32_t
    {
        ANTIALIASED_QUALITY = 0x4,
        CLEARTYPE_QUALITY = 0x5,
        DEFAULT_QUALITY = 0x0,
        DRAFT_QUALITY = 0x1,
        NONANTIALIASED_QUALITY = 0x3,
        PROOF_QUALITY = 0x2,
    };
    enum class FONT_RESOURCE_CHARACTERISTICS : uint32_t
    {
        FR_PRIVATE = 0x10,
        FR_NOT_ENUM = 0x20,
    };
    enum class GET_CHARACTER_PLACEMENT_FLAGS : uint32_t
    {
        GCP_CLASSIN = 0x80000,
        GCP_DIACRITIC = 0x100,
        GCP_DISPLAYZWG = 0x400000,
        GCP_GLYPHSHAPE = 0x10,
        GCP_JUSTIFY = 0x10000,
        GCP_KASHIDA = 0x400,
        GCP_LIGATE = 0x20,
        GCP_MAXEXTENT = 0x100000,
        GCP_NEUTRALOVERRIDE = 0x2000000,
        GCP_NUMERICOVERRIDE = 0x1000000,
        GCP_NUMERICSLATIN = 0x4000000,
        GCP_NUMERICSLOCAL = 0x8000000,
        GCP_REORDER = 0x2,
        GCP_SYMSWAPOFF = 0x800000,
        GCP_USEKERNING = 0x8,
    };
    enum class GET_DCX_FLAGS : uint32_t
    {
        DCX_WINDOW = 0x1,
        DCX_CACHE = 0x2,
        DCX_PARENTCLIP = 0x20,
        DCX_CLIPSIBLINGS = 0x10,
        DCX_CLIPCHILDREN = 0x8,
        DCX_NORESETATTRS = 0x4,
        DCX_LOCKWINDOWUPDATE = 0x400,
        DCX_EXCLUDERGN = 0x40,
        DCX_INTERSECTRGN = 0x80,
        DCX_INTERSECTUPDATE = 0x200,
        DCX_VALIDATE = 0x200000,
    };
    enum class GET_DEVICE_CAPS_INDEX : uint32_t
    {
        DRIVERVERSION = 0x0,
        TECHNOLOGY = 0x2,
        HORZSIZE = 0x4,
        VERTSIZE = 0x6,
        HORZRES = 0x8,
        VERTRES = 0xa,
        BITSPIXEL = 0xc,
        PLANES = 0xe,
        NUMBRUSHES = 0x10,
        NUMPENS = 0x12,
        NUMMARKERS = 0x14,
        NUMFONTS = 0x16,
        NUMCOLORS = 0x18,
        PDEVICESIZE = 0x1a,
        CURVECAPS = 0x1c,
        LINECAPS = 0x1e,
        POLYGONALCAPS = 0x20,
        TEXTCAPS = 0x22,
        CLIPCAPS = 0x24,
        RASTERCAPS = 0x26,
        ASPECTX = 0x28,
        ASPECTY = 0x2a,
        ASPECTXY = 0x2c,
        LOGPIXELSX = 0x58,
        LOGPIXELSY = 0x5a,
        SIZEPALETTE = 0x68,
        NUMRESERVED = 0x6a,
        COLORRES = 0x6c,
        PHYSICALWIDTH = 0x6e,
        PHYSICALHEIGHT = 0x6f,
        PHYSICALOFFSETX = 0x70,
        PHYSICALOFFSETY = 0x71,
        SCALINGFACTORX = 0x72,
        SCALINGFACTORY = 0x73,
        VREFRESH = 0x74,
        DESKTOPVERTRES = 0x75,
        DESKTOPHORZRES = 0x76,
        BLTALIGNMENT = 0x77,
        SHADEBLENDCAPS = 0x78,
        COLORMGMTCAPS = 0x79,
    };
    enum class GET_GLYPH_OUTLINE_FORMAT : uint32_t
    {
        GGO_BEZIER = 0x3,
        GGO_BITMAP = 0x1,
        GGO_GLYPH_INDEX = 0x80,
        GGO_GRAY2_BITMAP = 0x4,
        GGO_GRAY4_BITMAP = 0x5,
        GGO_GRAY8_BITMAP = 0x6,
        GGO_METRICS = 0x0,
        GGO_NATIVE = 0x2,
        GGO_UNHINTED = 0x100,
    };
    enum class GET_STOCK_OBJECT_FLAGS : uint32_t
    {
        BLACK_BRUSH = 0x4,
        DKGRAY_BRUSH = 0x3,
        DC_BRUSH = 0x12,
        GRAY_BRUSH = 0x2,
        HOLLOW_BRUSH = 0x5,
        LTGRAY_BRUSH = 0x1,
        NULL_BRUSH = 0x5,
        WHITE_BRUSH = 0x0,
        BLACK_PEN = 0x7,
        DC_PEN = 0x13,
        NULL_PEN = 0x8,
        WHITE_PEN = 0x6,
        ANSI_FIXED_FONT = 0xb,
        ANSI_VAR_FONT = 0xc,
        DEVICE_DEFAULT_FONT = 0xe,
        DEFAULT_GUI_FONT = 0x11,
        OEM_FIXED_FONT = 0xa,
        SYSTEM_FONT = 0xd,
        SYSTEM_FIXED_FONT = 0x10,
        DEFAULT_PALETTE = 0xf,
    };
    enum class GRADIENT_FILL : uint32_t
    {
        GRADIENT_FILL_RECT_H = 0x0,
        GRADIENT_FILL_RECT_V = 0x1,
        GRADIENT_FILL_TRIANGLE = 0x2,
    };
    enum class GRAPHICS_MODE : uint32_t
    {
        GM_COMPATIBLE = 0x1,
        GM_ADVANCED = 0x2,
    };
    enum class HATCH_BRUSH_STYLE : uint32_t
    {
        HS_BDIAGONAL = 0x3,
        HS_CROSS = 0x4,
        HS_DIAGCROSS = 0x5,
        HS_FDIAGONAL = 0x2,
        HS_HORIZONTAL = 0x0,
        HS_VERTICAL = 0x1,
    };
    enum class HDC_MAP_MODE : uint32_t
    {
        MM_ANISOTROPIC = 0x8,
        MM_HIENGLISH = 0x5,
        MM_HIMETRIC = 0x3,
        MM_ISOTROPIC = 0x7,
        MM_LOENGLISH = 0x4,
        MM_LOMETRIC = 0x2,
        MM_TEXT = 0x1,
        MM_TWIPS = 0x6,
    };
    enum class MODIFY_WORLD_TRANSFORM_MODE : uint32_t
    {
        MWT_IDENTITY = 0x1,
        MWT_LEFTMULTIPLY = 0x2,
        MWT_RIGHTMULTIPLY = 0x3,
    };
    enum class MONITOR_FROM_FLAGS : uint32_t
    {
        MONITOR_DEFAULTTONEAREST = 0x2,
        MONITOR_DEFAULTTONULL = 0x0,
        MONITOR_DEFAULTTOPRIMARY = 0x1,
    };
    enum class OBJ_TYPE : int32_t
    {
        OBJ_PEN = 1,
        OBJ_BRUSH = 2,
        OBJ_DC = 3,
        OBJ_METADC = 4,
        OBJ_PAL = 5,
        OBJ_FONT = 6,
        OBJ_BITMAP = 7,
        OBJ_REGION = 8,
        OBJ_METAFILE = 9,
        OBJ_MEMDC = 10,
        OBJ_EXTPEN = 11,
        OBJ_ENHMETADC = 12,
        OBJ_ENHMETAFILE = 13,
        OBJ_COLORSPACE = 14,
    };
    enum class PEN_STYLE : uint32_t
    {
        PS_GEOMETRIC = 0x10000,
        PS_COSMETIC = 0x0,
        PS_SOLID = 0x0,
        PS_DASH = 0x1,
        PS_DOT = 0x2,
        PS_DASHDOT = 0x3,
        PS_DASHDOTDOT = 0x4,
        PS_NULL = 0x5,
        PS_INSIDEFRAME = 0x6,
        PS_USERSTYLE = 0x7,
        PS_ALTERNATE = 0x8,
        PS_STYLE_MASK = 0xf,
        PS_ENDCAP_ROUND = 0x0,
        PS_ENDCAP_SQUARE = 0x100,
        PS_ENDCAP_FLAT = 0x200,
        PS_ENDCAP_MASK = 0xf00,
        PS_JOIN_ROUND = 0x0,
        PS_JOIN_BEVEL = 0x1000,
        PS_JOIN_MITER = 0x2000,
        PS_JOIN_MASK = 0xf000,
        PS_TYPE_MASK = 0xf0000,
    };
    enum class R2_MODE : int32_t
    {
        R2_BLACK = 1,
        R2_NOTMERGEPEN = 2,
        R2_MASKNOTPEN = 3,
        R2_NOTCOPYPEN = 4,
        R2_MASKPENNOT = 5,
        R2_NOT = 6,
        R2_XORPEN = 7,
        R2_NOTMASKPEN = 8,
        R2_MASKPEN = 9,
        R2_NOTXORPEN = 10,
        R2_NOP = 11,
        R2_MERGENOTPEN = 12,
        R2_COPYPEN = 13,
        R2_MERGEPENNOT = 14,
        R2_MERGEPEN = 15,
        R2_WHITE = 16,
        R2_LAST = 16,
    };
    enum class REDRAW_WINDOW_FLAGS : uint32_t
    {
        RDW_INVALIDATE = 0x1,
        RDW_INTERNALPAINT = 0x2,
        RDW_ERASE = 0x4,
        RDW_VALIDATE = 0x8,
        RDW_NOINTERNALPAINT = 0x10,
        RDW_NOERASE = 0x20,
        RDW_NOCHILDREN = 0x40,
        RDW_ALLCHILDREN = 0x80,
        RDW_UPDATENOW = 0x100,
        RDW_ERASENOW = 0x200,
        RDW_FRAME = 0x400,
        RDW_NOFRAME = 0x800,
    };
    enum class RGN_COMBINE_MODE : int32_t
    {
        RGN_AND = 1,
        RGN_OR = 2,
        RGN_XOR = 3,
        RGN_DIFF = 4,
        RGN_COPY = 5,
        RGN_MIN = 1,
        RGN_MAX = 5,
    };
    enum class ROP_CODE : uint32_t
    {
        SRCCOPY = 0xcc0020,
        SRCPAINT = 0xee0086,
        SRCAND = 0x8800c6,
        SRCINVERT = 0x660046,
        SRCERASE = 0x440328,
        NOTSRCCOPY = 0x330008,
        NOTSRCERASE = 0x1100a6,
        MERGECOPY = 0xc000ca,
        MERGEPAINT = 0xbb0226,
        PATCOPY = 0xf00021,
        PATPAINT = 0xfb0a09,
        PATINVERT = 0x5a0049,
        DSTINVERT = 0x550009,
        BLACKNESS = 0x42,
        WHITENESS = 0xff0062,
        NOMIRRORBITMAP = 0x80000000,
        CAPTUREBLT = 0x40000000,
    };
    enum class SET_BOUNDS_RECT_FLAGS : uint32_t
    {
        DCB_ACCUMULATE = 0x2,
        DCB_DISABLE = 0x8,
        DCB_ENABLE = 0x4,
        DCB_RESET = 0x1,
    };
    enum class STRETCH_BLT_MODE : uint32_t
    {
        BLACKONWHITE = 0x1,
        COLORONCOLOR = 0x3,
        HALFTONE = 0x4,
        STRETCH_ANDSCANS = 0x1,
        STRETCH_DELETESCANS = 0x3,
        STRETCH_HALFTONE = 0x4,
        STRETCH_ORSCANS = 0x2,
        WHITEONBLACK = 0x2,
    };
    enum class SYSTEM_PALETTE_USE : uint32_t
    {
        SYSPAL_NOSTATIC = 0x2,
        SYSPAL_NOSTATIC256 = 0x3,
        SYSPAL_STATIC = 0x1,
    };
    enum class TEXT_ALIGN_OPTIONS : uint32_t
    {
        TA_NOUPDATECP = 0x0,
        TA_UPDATECP = 0x1,
        TA_LEFT = 0x0,
        TA_RIGHT = 0x2,
        TA_CENTER = 0x6,
        TA_TOP = 0x0,
        TA_BOTTOM = 0x8,
        TA_BASELINE = 0x18,
        TA_RTLREADING = 0x100,
        TA_MASK = 0x11f,
        VTA_BASELINE = 0x18,
        VTA_LEFT = 0x8,
        VTA_RIGHT = 0x0,
        VTA_CENTER = 0x6,
        VTA_BOTTOM = 0x2,
        VTA_TOP = 0x0,
    };
    enum class TTEMBED_FLAGS : uint32_t
    {
        TTEMBED_EMBEDEUDC = 0x20,
        TTEMBED_RAW = 0x0,
        TTEMBED_SUBSET = 0x1,
        TTEMBED_TTCOMPRESSED = 0x4,
    };
    enum class TTLOAD_EMBEDDED_FONT_STATUS : uint32_t
    {
        TTLOAD_FONT_SUBSETTED = 0x1,
        TTLOAD_FONT_IN_SYSSTARTUP = 0x2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ABC;
    struct ABCFLOAT;
    struct ABORTPATH;
    struct AXESLISTA;
    struct AXESLISTW;
    struct AXISINFOA;
    struct AXISINFOW;
    struct BITMAP;
    struct BITMAPCOREHEADER;
    struct BITMAPCOREINFO;
    struct BITMAPFILEHEADER;
    struct BITMAPINFO;
    struct BITMAPINFOHEADER;
    struct BITMAPV4HEADER;
    struct BITMAPV5HEADER;
    struct BLENDFUNCTION;
    struct CIEXYZ;
    struct CIEXYZTRIPLE;
    struct COLORADJUSTMENT;
    struct COLORCORRECTPALETTE;
    struct COLORMATCHTOTARGET;
    struct CreatedHDC;
    struct DESIGNVECTOR;
    struct DEVMODEA;
    struct DEVMODEW;
    struct DIBSECTION;
    struct DISPLAY_DEVICEA;
    struct DISPLAY_DEVICEW;
    struct DRAWTEXTPARAMS;
    struct EMR;
    struct EMRALPHABLEND;
    struct EMRANGLEARC;
    struct EMRARC;
    struct EMRBITBLT;
    struct EMRCREATEBRUSHINDIRECT;
    struct EMRCREATEDIBPATTERNBRUSHPT;
    struct EMRCREATEMONOBRUSH;
    struct EMRCREATEPALETTE;
    struct EMRCREATEPEN;
    struct EMRELLIPSE;
    struct EMREOF;
    struct EMREXCLUDECLIPRECT;
    struct EMREXTCREATEFONTINDIRECTW;
    struct EMREXTCREATEPEN;
    struct EMREXTESCAPE;
    struct EMREXTFLOODFILL;
    struct EMREXTSELECTCLIPRGN;
    struct EMREXTTEXTOUTA;
    struct EMRFILLPATH;
    struct EMRFILLRGN;
    struct EMRFORMAT;
    struct EMRFRAMERGN;
    struct EMRGDICOMMENT;
    struct EMRGLSBOUNDEDRECORD;
    struct EMRGLSRECORD;
    struct EMRGRADIENTFILL;
    struct EMRINVERTRGN;
    struct EMRLINETO;
    struct EMRMASKBLT;
    struct EMRMODIFYWORLDTRANSFORM;
    struct EMRNAMEDESCAPE;
    struct EMROFFSETCLIPRGN;
    struct EMRPLGBLT;
    struct EMRPOLYDRAW;
    struct EMRPOLYDRAW16;
    struct EMRPOLYLINE;
    struct EMRPOLYLINE16;
    struct EMRPOLYPOLYLINE;
    struct EMRPOLYPOLYLINE16;
    struct EMRPOLYTEXTOUTA;
    struct EMRRESIZEPALETTE;
    struct EMRRESTOREDC;
    struct EMRROUNDRECT;
    struct EMRSCALEVIEWPORTEXTEX;
    struct EMRSELECTCLIPPATH;
    struct EMRSELECTOBJECT;
    struct EMRSELECTPALETTE;
    struct EMRSETARCDIRECTION;
    struct EMRSETCOLORADJUSTMENT;
    struct EMRSETCOLORSPACE;
    struct EMRSETDIBITSTODEVICE;
    struct EMRSETICMPROFILE;
    struct EMRSETMAPPERFLAGS;
    struct EMRSETMITERLIMIT;
    struct EMRSETPALETTEENTRIES;
    struct EMRSETPIXELV;
    struct EMRSETTEXTCOLOR;
    struct EMRSETVIEWPORTEXTEX;
    struct EMRSETVIEWPORTORGEX;
    struct EMRSETWORLDTRANSFORM;
    struct EMRSTRETCHBLT;
    struct EMRSTRETCHDIBITS;
    struct EMRTEXT;
    struct EMRTRANSPARENTBLT;
    struct ENHMETAHEADER;
    struct ENHMETARECORD;
    struct ENUMLOGFONTA;
    struct ENUMLOGFONTEXA;
    struct ENUMLOGFONTEXDVA;
    struct ENUMLOGFONTEXDVW;
    struct ENUMLOGFONTEXW;
    struct ENUMLOGFONTW;
    struct EXTLOGFONTA;
    struct EXTLOGFONTW;
    struct EXTLOGPEN;
    struct EXTLOGPEN32;
    struct FIXED;
    struct GCP_RESULTSA;
    struct GCP_RESULTSW;
    struct GLYPHMETRICS;
    struct GLYPHSET;
    struct GRADIENT_RECT;
    struct GRADIENT_TRIANGLE;
    struct HANDLETABLE;
    struct HBITMAP;
    struct HBRUSH;
    struct HDC;
    struct HENHMETAFILE;
    struct HFONT;
    struct HGDIOBJ;
    struct HMETAFILE;
    struct HMONITOR;
    struct HPALETTE;
    struct HPEN;
    struct HRGN;
    struct HdcMetdataEnhFileHandle;
    struct HdcMetdataFileHandle;
    struct KERNINGPAIR;
    struct LOGBRUSH;
    struct LOGBRUSH32;
    struct LOGFONTA;
    struct LOGFONTW;
    struct LOGPALETTE;
    struct LOGPEN;
    struct MAT2;
    struct METAHEADER;
    struct METARECORD;
    struct MONITORINFO;
    struct MONITORINFOEXA;
    struct MONITORINFOEXW;
    struct NEWTEXTMETRICA;
    struct NEWTEXTMETRICW;
    struct OUTLINETEXTMETRICA;
    struct OUTLINETEXTMETRICW;
    struct PAINTSTRUCT;
    struct PALETTEENTRY;
    struct PANOSE;
    struct PELARRAY;
    struct POINTFX;
    struct POLYTEXTA;
    struct POLYTEXTW;
    struct RASTERIZER_STATUS;
    struct RGBQUAD;
    struct RGBTRIPLE;
    struct RGNDATA;
    struct RGNDATAHEADER;
    struct TEXTMETRICA;
    struct TEXTMETRICW;
    struct TRIVERTEX;
    struct TTEMBEDINFO;
    struct TTLOADINFO;
    struct TTPOLYCURVE;
    struct TTPOLYGONHEADER;
    struct TTVALIDATIONTESTSPARAMS;
    struct TTVALIDATIONTESTSPARAMSEX;
    struct WCRANGE;
    struct WGLSWAP;
    struct XFORM;
#pragma endregion forward_declarations

#pragma region delegates
    using FONTENUMPROCA = int32_t __stdcall(Windows::Win32::Graphics::Gdi::LOGFONTA*, Windows::Win32::Graphics::Gdi::TEXTMETRICA*, uint32_t, Windows::Win32::Foundation::LPARAM);
    using FONTENUMPROCW = int32_t __stdcall(Windows::Win32::Graphics::Gdi::LOGFONTW*, Windows::Win32::Graphics::Gdi::TEXTMETRICW*, uint32_t, Windows::Win32::Foundation::LPARAM);
    using GOBJENUMPROC = int32_t __stdcall(void*, Windows::Win32::Foundation::LPARAM);
    using LINEDDAPROC = void __stdcall(int32_t, int32_t, Windows::Win32::Foundation::LPARAM);
    using LPFNDEVMODE = uint32_t __stdcall(Windows::Win32::Foundation::HWND, Windows::Win32::Foundation::HINSTANCE, Windows::Win32::Graphics::Gdi::DEVMODEA*, Windows::Win32::Foundation::PSTR, Windows::Win32::Foundation::PSTR, Windows::Win32::Graphics::Gdi::DEVMODEA*, Windows::Win32::Foundation::PSTR, uint32_t);
    using LPFNDEVCAPS = uint32_t __stdcall(Windows::Win32::Foundation::PSTR, Windows::Win32::Foundation::PSTR, uint32_t, Windows::Win32::Foundation::PSTR, Windows::Win32::Graphics::Gdi::DEVMODEA*);
    using MFENUMPROC = int32_t __stdcall(Windows::Win32::Graphics::Gdi::HDC, Windows::Win32::Graphics::Gdi::HANDLETABLE*, Windows::Win32::Graphics::Gdi::METARECORD*, int32_t, Windows::Win32::Foundation::LPARAM);
    using ENHMFENUMPROC = int32_t __stdcall(Windows::Win32::Graphics::Gdi::HDC, Windows::Win32::Graphics::Gdi::HANDLETABLE*, Windows::Win32::Graphics::Gdi::ENHMETARECORD*, int32_t, Windows::Win32::Foundation::LPARAM);
    using CFP_ALLOCPROC = void* __stdcall(size_t);
    using CFP_REALLOCPROC = void* __stdcall(void*, size_t);
    using CFP_FREEPROC = void __stdcall(void*);
    using READEMBEDPROC = uint32_t __stdcall(void*, void*, uint32_t);
    using WRITEEMBEDPROC = uint32_t __stdcall(void*, void*, uint32_t);
    using GRAYSTRINGPROC = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Graphics::Gdi::HDC, Windows::Win32::Foundation::LPARAM, int32_t);
    using DRAWSTATEPROC = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Graphics::Gdi::HDC, Windows::Win32::Foundation::LPARAM, Windows::Win32::Foundation::WPARAM, int32_t, int32_t);
    using MONITORENUMPROC = Windows::Win32::Foundation::BOOL __stdcall(Windows::Win32::Graphics::Gdi::HMONITOR, Windows::Win32::Graphics::Gdi::HDC, Windows::Win32::Foundation::RECT*, Windows::Win32::Foundation::LPARAM);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
