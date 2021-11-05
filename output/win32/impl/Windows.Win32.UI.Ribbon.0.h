// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_Ribbon_0_H
#define WIN32_Windows_Win32_UI_Ribbon_0_H
WIN32_EXPORT namespace win32::Windows::Win32::UI::Ribbon
{
#pragma region enums
    enum class UI_COLLECTIONCHANGE : int32_t
    {
        UI_COLLECTIONCHANGE_INSERT = 0,
        UI_COLLECTIONCHANGE_REMOVE = 1,
        UI_COLLECTIONCHANGE_REPLACE = 2,
        UI_COLLECTIONCHANGE_RESET = 3,
    };
    enum class UI_COMMANDTYPE : int32_t
    {
        UI_COMMANDTYPE_UNKNOWN = 0,
        UI_COMMANDTYPE_GROUP = 1,
        UI_COMMANDTYPE_ACTION = 2,
        UI_COMMANDTYPE_ANCHOR = 3,
        UI_COMMANDTYPE_CONTEXT = 4,
        UI_COMMANDTYPE_COLLECTION = 5,
        UI_COMMANDTYPE_COMMANDCOLLECTION = 6,
        UI_COMMANDTYPE_DECIMAL = 7,
        UI_COMMANDTYPE_BOOLEAN = 8,
        UI_COMMANDTYPE_FONT = 9,
        UI_COMMANDTYPE_RECENTITEMS = 10,
        UI_COMMANDTYPE_COLORANCHOR = 11,
        UI_COMMANDTYPE_COLORCOLLECTION = 12,
    };
    enum class UI_CONTEXTAVAILABILITY : int32_t
    {
        UI_CONTEXTAVAILABILITY_NOTAVAILABLE = 0,
        UI_CONTEXTAVAILABILITY_AVAILABLE = 1,
        UI_CONTEXTAVAILABILITY_ACTIVE = 2,
    };
    enum class UI_CONTROLDOCK : int32_t
    {
        UI_CONTROLDOCK_TOP = 1,
        UI_CONTROLDOCK_BOTTOM = 3,
    };
    enum class UI_EVENTLOCATION : int32_t
    {
        UI_EVENTLOCATION_Ribbon = 0,
        UI_EVENTLOCATION_QAT = 1,
        UI_EVENTLOCATION_ApplicationMenu = 2,
        UI_EVENTLOCATION_ContextPopup = 3,
    };
    enum class UI_EVENTTYPE : int32_t
    {
        UI_EVENTTYPE_ApplicationMenuOpened = 0,
        UI_EVENTTYPE_RibbonMinimized = 1,
        UI_EVENTTYPE_RibbonExpanded = 2,
        UI_EVENTTYPE_ApplicationModeSwitched = 3,
        UI_EVENTTYPE_TabActivated = 4,
        UI_EVENTTYPE_MenuOpened = 5,
        UI_EVENTTYPE_CommandExecuted = 6,
        UI_EVENTTYPE_TooltipShown = 7,
    };
    enum class UI_EXECUTIONVERB : int32_t
    {
        UI_EXECUTIONVERB_EXECUTE = 0,
        UI_EXECUTIONVERB_PREVIEW = 1,
        UI_EXECUTIONVERB_CANCELPREVIEW = 2,
    };
    enum class UI_FONTDELTASIZE : int32_t
    {
        UI_FONTDELTASIZE_GROW = 0,
        UI_FONTDELTASIZE_SHRINK = 1,
    };
    enum class UI_FONTPROPERTIES : int32_t
    {
        UI_FONTPROPERTIES_NOTAVAILABLE = 0,
        UI_FONTPROPERTIES_NOTSET = 1,
        UI_FONTPROPERTIES_SET = 2,
    };
    enum class UI_FONTUNDERLINE : int32_t
    {
        UI_FONTUNDERLINE_NOTAVAILABLE = 0,
        UI_FONTUNDERLINE_NOTSET = 1,
        UI_FONTUNDERLINE_SET = 2,
    };
    enum class UI_FONTVERTICALPOSITION : int32_t
    {
        UI_FONTVERTICALPOSITION_NOTAVAILABLE = 0,
        UI_FONTVERTICALPOSITION_NOTSET = 1,
        UI_FONTVERTICALPOSITION_SUPERSCRIPT = 2,
        UI_FONTVERTICALPOSITION_SUBSCRIPT = 3,
    };
    enum class UI_INVALIDATIONS : int32_t
    {
        UI_INVALIDATIONS_STATE = 1,
        UI_INVALIDATIONS_VALUE = 2,
        UI_INVALIDATIONS_PROPERTY = 4,
        UI_INVALIDATIONS_ALLPROPERTIES = 8,
    };
    enum class UI_OWNERSHIP : int32_t
    {
        UI_OWNERSHIP_TRANSFER = 0,
        UI_OWNERSHIP_COPY = 1,
    };
    enum class UI_SWATCHCOLORMODE : int32_t
    {
        UI_SWATCHCOLORMODE_NORMAL = 0,
        UI_SWATCHCOLORMODE_MONOCHROME = 1,
    };
    enum class UI_SWATCHCOLORTYPE : int32_t
    {
        UI_SWATCHCOLORTYPE_NOCOLOR = 0,
        UI_SWATCHCOLORTYPE_AUTOMATIC = 1,
        UI_SWATCHCOLORTYPE_RGB = 2,
    };
    enum class UI_VIEWTYPE : int32_t
    {
        UI_VIEWTYPE_RIBBON = 1,
    };
    enum class UI_VIEWVERB : int32_t
    {
        UI_VIEWVERB_CREATE = 0,
        UI_VIEWVERB_DESTROY = 1,
        UI_VIEWVERB_SIZE = 2,
        UI_VIEWVERB_ERROR = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct UIRibbonFramework;
    struct UIRibbonImageFromBitmapFactory;
    struct UI_EVENTPARAMS;
    struct UI_EVENTPARAMS_COMMAND;
    struct IUIApplication;
    struct IUICollection;
    struct IUICollectionChangedEvent;
    struct IUICommandHandler;
    struct IUIContextualUI;
    struct IUIEventLogger;
    struct IUIEventingManager;
    struct IUIFramework;
    struct IUIImage;
    struct IUIImageFromBitmap;
    struct IUIRibbon;
    struct IUISimplePropertySet;
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
