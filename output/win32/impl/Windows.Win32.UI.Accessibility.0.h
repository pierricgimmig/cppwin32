// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_Accessibility_0_H
#define WIN32_Windows_Win32_UI_Accessibility_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct BSTR;
    struct HRESULT;
    struct HWND;
    struct LRESULT;
    struct POINT;
    struct WPARAM;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::Com
{
    struct IUnknown;
    struct SAFEARRAY;
    struct VARIANT;
}
WIN32_EXPORT namespace win32::Windows::Win32::UI::Accessibility
{
#pragma region enums
    enum class ACC_UTILITY_STATE_FLAGS : uint32_t
    {
        ANRUS_ON_SCREEN_KEYBOARD_ACTIVE = 0x1,
        ANRUS_TOUCH_MODIFICATION_ACTIVE = 0x2,
        ANRUS_PRIORITY_AUDIO_ACTIVE = 0x4,
        ANRUS_PRIORITY_AUDIO_ACTIVE_NODUCK = 0x8,
    };
    enum class ActiveEnd : int32_t
    {
        ActiveEnd_None = 0,
        ActiveEnd_Start = 1,
        ActiveEnd_End = 2,
    };
    enum class AnimationStyle : int32_t
    {
        AnimationStyle_None = 0,
        AnimationStyle_LasVegasLights = 1,
        AnimationStyle_BlinkingBackground = 2,
        AnimationStyle_SparkleText = 3,
        AnimationStyle_MarchingBlackAnts = 4,
        AnimationStyle_MarchingRedAnts = 5,
        AnimationStyle_Shimmer = 6,
        AnimationStyle_Other = -1,
    };
    enum class AnnoScope : int32_t
    {
        ANNO_THIS = 0,
        ANNO_CONTAINER = 1,
    };
    enum class AsyncContentLoadedState : int32_t
    {
        AsyncContentLoadedState_Beginning = 0,
        AsyncContentLoadedState_Progress = 1,
        AsyncContentLoadedState_Completed = 2,
    };
    enum class AutomationElementMode : int32_t
    {
        AutomationElementMode_None = 0,
        AutomationElementMode_Full = 1,
    };
    enum class AutomationIdentifierType : int32_t
    {
        AutomationIdentifierType_Property = 0,
        AutomationIdentifierType_Pattern = 1,
        AutomationIdentifierType_Event = 2,
        AutomationIdentifierType_ControlType = 3,
        AutomationIdentifierType_TextAttribute = 4,
        AutomationIdentifierType_LandmarkType = 5,
        AutomationIdentifierType_Annotation = 6,
        AutomationIdentifierType_Changes = 7,
        AutomationIdentifierType_Style = 8,
    };
    enum class BulletStyle : int32_t
    {
        BulletStyle_None = 0,
        BulletStyle_HollowRoundBullet = 1,
        BulletStyle_FilledRoundBullet = 2,
        BulletStyle_HollowSquareBullet = 3,
        BulletStyle_FilledSquareBullet = 4,
        BulletStyle_DashBullet = 5,
        BulletStyle_Other = -1,
    };
    enum class CapStyle : int32_t
    {
        CapStyle_None = 0,
        CapStyle_SmallCap = 1,
        CapStyle_AllCap = 2,
        CapStyle_AllPetiteCaps = 3,
        CapStyle_PetiteCaps = 4,
        CapStyle_Unicase = 5,
        CapStyle_Titling = 6,
        CapStyle_Other = -1,
    };
    enum class CaretBidiMode : int32_t
    {
        CaretBidiMode_LTR = 0,
        CaretBidiMode_RTL = 1,
    };
    enum class CaretPosition : int32_t
    {
        CaretPosition_Unknown = 0,
        CaretPosition_EndOfLine = 1,
        CaretPosition_BeginningOfLine = 2,
    };
    enum class CoalesceEventsOptions : int32_t
    {
        CoalesceEventsOptions_Disabled = 0,
        CoalesceEventsOptions_Enabled = 1,
    };
    enum class ConditionType : int32_t
    {
        ConditionType_True = 0,
        ConditionType_False = 1,
        ConditionType_Property = 2,
        ConditionType_And = 3,
        ConditionType_Or = 4,
        ConditionType_Not = 5,
    };
    enum class ConnectionRecoveryBehaviorOptions : int32_t
    {
        ConnectionRecoveryBehaviorOptions_Disabled = 0,
        ConnectionRecoveryBehaviorOptions_Enabled = 1,
    };
    enum class DockPosition : int32_t
    {
        DockPosition_Top = 0,
        DockPosition_Left = 1,
        DockPosition_Bottom = 2,
        DockPosition_Right = 3,
        DockPosition_Fill = 4,
        DockPosition_None = 5,
    };
    enum class EventArgsType : int32_t
    {
        EventArgsType_Simple = 0,
        EventArgsType_PropertyChanged = 1,
        EventArgsType_StructureChanged = 2,
        EventArgsType_AsyncContentLoaded = 3,
        EventArgsType_WindowClosed = 4,
        EventArgsType_TextEditTextChanged = 5,
        EventArgsType_Changes = 6,
        EventArgsType_Notification = 7,
        EventArgsType_ActiveTextPositionChanged = 8,
        EventArgsType_StructuredMarkup = 9,
    };
    enum class ExpandCollapseState : int32_t
    {
        ExpandCollapseState_Collapsed = 0,
        ExpandCollapseState_Expanded = 1,
        ExpandCollapseState_PartiallyExpanded = 2,
        ExpandCollapseState_LeafNode = 3,
    };
    enum class FillType : int32_t
    {
        FillType_None = 0,
        FillType_Color = 1,
        FillType_Gradient = 2,
        FillType_Picture = 3,
        FillType_Pattern = 4,
    };
    enum class FlowDirections : int32_t
    {
        FlowDirections_Default = 0,
        FlowDirections_RightToLeft = 1,
        FlowDirections_BottomToTop = 2,
        FlowDirections_Vertical = 4,
    };
    enum class HIGHCONTRASTW_FLAGS : uint32_t
    {
        HCF_HIGHCONTRASTON = 0x1,
        HCF_AVAILABLE = 0x2,
        HCF_HOTKEYACTIVE = 0x4,
        HCF_CONFIRMHOTKEY = 0x8,
        HCF_HOTKEYSOUND = 0x10,
        HCF_INDICATOR = 0x20,
        HCF_HOTKEYAVAILABLE = 0x40,
        HCF_OPTION_NOTHEMECHANGE = 0x1000,
    };
    enum class HorizontalTextAlignment : int32_t
    {
        HorizontalTextAlignment_Left = 0,
        HorizontalTextAlignment_Centered = 1,
        HorizontalTextAlignment_Right = 2,
        HorizontalTextAlignment_Justified = 3,
    };
    enum class LiveSetting : int32_t
    {
        Off = 0,
        Polite = 1,
        Assertive = 2,
    };
    enum class NavigateDirection : int32_t
    {
        NavigateDirection_Parent = 0,
        NavigateDirection_NextSibling = 1,
        NavigateDirection_PreviousSibling = 2,
        NavigateDirection_FirstChild = 3,
        NavigateDirection_LastChild = 4,
    };
    enum class NormalizeState : int32_t
    {
        NormalizeState_None = 0,
        NormalizeState_View = 1,
        NormalizeState_Custom = 2,
    };
    enum class NotificationKind : int32_t
    {
        NotificationKind_ItemAdded = 0,
        NotificationKind_ItemRemoved = 1,
        NotificationKind_ActionCompleted = 2,
        NotificationKind_ActionAborted = 3,
        NotificationKind_Other = 4,
    };
    enum class NotificationProcessing : int32_t
    {
        NotificationProcessing_ImportantAll = 0,
        NotificationProcessing_ImportantMostRecent = 1,
        NotificationProcessing_All = 2,
        NotificationProcessing_MostRecent = 3,
        NotificationProcessing_CurrentThenMostRecent = 4,
    };
    enum class OrientationType : int32_t
    {
        OrientationType_None = 0,
        OrientationType_Horizontal = 1,
        OrientationType_Vertical = 2,
    };
    enum class OutlineStyles : int32_t
    {
        OutlineStyles_None = 0,
        OutlineStyles_Outline = 1,
        OutlineStyles_Shadow = 2,
        OutlineStyles_Engraved = 4,
        OutlineStyles_Embossed = 8,
    };
    enum class PropertyConditionFlags : int32_t
    {
        PropertyConditionFlags_None = 0,
        PropertyConditionFlags_IgnoreCase = 1,
        PropertyConditionFlags_MatchSubstring = 2,
    };
    enum class ProviderOptions : int32_t
    {
        ProviderOptions_ClientSideProvider = 1,
        ProviderOptions_ServerSideProvider = 2,
        ProviderOptions_NonClientAreaProvider = 4,
        ProviderOptions_OverrideProvider = 8,
        ProviderOptions_ProviderOwnsSetFocus = 16,
        ProviderOptions_UseComThreading = 32,
        ProviderOptions_RefuseNonClientSupport = 64,
        ProviderOptions_HasNativeIAccessible = 128,
        ProviderOptions_UseClientCoordinates = 256,
    };
    enum class ProviderType : int32_t
    {
        ProviderType_BaseHwnd = 0,
        ProviderType_Proxy = 1,
        ProviderType_NonClientArea = 2,
    };
    enum class RowOrColumnMajor : int32_t
    {
        RowOrColumnMajor_RowMajor = 0,
        RowOrColumnMajor_ColumnMajor = 1,
        RowOrColumnMajor_Indeterminate = 2,
    };
    enum class SERIALKEYS_FLAGS : uint32_t
    {
        SERKF_AVAILABLE = 0x2,
        SERKF_INDICATOR = 0x4,
        SERKF_SERIALKEYSON = 0x1,
    };
    enum class SOUNDSENTRY_FLAGS : uint32_t
    {
        SSF_SOUNDSENTRYON = 0x1,
        SSF_AVAILABLE = 0x2,
        SSF_INDICATOR = 0x4,
    };
    enum class SOUNDSENTRY_TEXT_EFFECT : uint32_t
    {
        SSTF_BORDER = 0x2,
        SSTF_CHARS = 0x1,
        SSTF_DISPLAY = 0x3,
        SSTF_NONE = 0x0,
    };
    enum class SOUNDSENTRY_WINDOWS_EFFECT : uint32_t
    {
        SSWF_CUSTOM = 0x4,
        SSWF_DISPLAY = 0x3,
        SSWF_NONE = 0x0,
        SSWF_TITLE = 0x1,
        SSWF_WINDOW = 0x2,
    };
    enum class SOUND_SENTRY_GRAPHICS_EFFECT : uint32_t
    {
        SSGF_DISPLAY = 0x3,
        SSGF_NONE = 0x0,
    };
    enum class STICKYKEYS_FLAGS : uint32_t
    {
        SKF_STICKYKEYSON = 0x1,
        SKF_AVAILABLE = 0x2,
        SKF_HOTKEYACTIVE = 0x4,
        SKF_CONFIRMHOTKEY = 0x8,
        SKF_HOTKEYSOUND = 0x10,
        SKF_INDICATOR = 0x20,
        SKF_AUDIBLEFEEDBACK = 0x40,
        SKF_TRISTATE = 0x80,
        SKF_TWOKEYSOFF = 0x100,
        SKF_LALTLATCHED = 0x10000000,
        SKF_LCTLLATCHED = 0x4000000,
        SKF_LSHIFTLATCHED = 0x1000000,
        SKF_RALTLATCHED = 0x20000000,
        SKF_RCTLLATCHED = 0x8000000,
        SKF_RSHIFTLATCHED = 0x2000000,
        SKF_LWINLATCHED = 0x40000000,
        SKF_RWINLATCHED = 0x80000000,
        SKF_LALTLOCKED = 0x100000,
        SKF_LCTLLOCKED = 0x40000,
        SKF_LSHIFTLOCKED = 0x10000,
        SKF_RALTLOCKED = 0x200000,
        SKF_RCTLLOCKED = 0x80000,
        SKF_RSHIFTLOCKED = 0x20000,
        SKF_LWINLOCKED = 0x400000,
        SKF_RWINLOCKED = 0x800000,
    };
    enum class SayAsInterpretAs : int32_t
    {
        SayAsInterpretAs_None = 0,
        SayAsInterpretAs_Spell = 1,
        SayAsInterpretAs_Cardinal = 2,
        SayAsInterpretAs_Ordinal = 3,
        SayAsInterpretAs_Number = 4,
        SayAsInterpretAs_Date = 5,
        SayAsInterpretAs_Time = 6,
        SayAsInterpretAs_Telephone = 7,
        SayAsInterpretAs_Currency = 8,
        SayAsInterpretAs_Net = 9,
        SayAsInterpretAs_Url = 10,
        SayAsInterpretAs_Address = 11,
        SayAsInterpretAs_Alphanumeric = 12,
        SayAsInterpretAs_Name = 13,
        SayAsInterpretAs_Media = 14,
        SayAsInterpretAs_Date_MonthDayYear = 15,
        SayAsInterpretAs_Date_DayMonthYear = 16,
        SayAsInterpretAs_Date_YearMonthDay = 17,
        SayAsInterpretAs_Date_YearMonth = 18,
        SayAsInterpretAs_Date_MonthYear = 19,
        SayAsInterpretAs_Date_DayMonth = 20,
        SayAsInterpretAs_Date_MonthDay = 21,
        SayAsInterpretAs_Date_Year = 22,
        SayAsInterpretAs_Time_HoursMinutesSeconds12 = 23,
        SayAsInterpretAs_Time_HoursMinutes12 = 24,
        SayAsInterpretAs_Time_HoursMinutesSeconds24 = 25,
        SayAsInterpretAs_Time_HoursMinutes24 = 26,
    };
    enum class ScrollAmount : int32_t
    {
        ScrollAmount_LargeDecrement = 0,
        ScrollAmount_SmallDecrement = 1,
        ScrollAmount_NoAmount = 2,
        ScrollAmount_LargeIncrement = 3,
        ScrollAmount_SmallIncrement = 4,
    };
    enum class StructureChangeType : int32_t
    {
        StructureChangeType_ChildAdded = 0,
        StructureChangeType_ChildRemoved = 1,
        StructureChangeType_ChildrenInvalidated = 2,
        StructureChangeType_ChildrenBulkAdded = 3,
        StructureChangeType_ChildrenBulkRemoved = 4,
        StructureChangeType_ChildrenReordered = 5,
    };
    enum class SupportedTextSelection : int32_t
    {
        SupportedTextSelection_None = 0,
        SupportedTextSelection_Single = 1,
        SupportedTextSelection_Multiple = 2,
    };
    enum class SynchronizedInputType : int32_t
    {
        SynchronizedInputType_KeyUp = 1,
        SynchronizedInputType_KeyDown = 2,
        SynchronizedInputType_LeftMouseUp = 4,
        SynchronizedInputType_LeftMouseDown = 8,
        SynchronizedInputType_RightMouseUp = 16,
        SynchronizedInputType_RightMouseDown = 32,
    };
    enum class TextDecorationLineStyle : int32_t
    {
        TextDecorationLineStyle_None = 0,
        TextDecorationLineStyle_Single = 1,
        TextDecorationLineStyle_WordsOnly = 2,
        TextDecorationLineStyle_Double = 3,
        TextDecorationLineStyle_Dot = 4,
        TextDecorationLineStyle_Dash = 5,
        TextDecorationLineStyle_DashDot = 6,
        TextDecorationLineStyle_DashDotDot = 7,
        TextDecorationLineStyle_Wavy = 8,
        TextDecorationLineStyle_ThickSingle = 9,
        TextDecorationLineStyle_DoubleWavy = 11,
        TextDecorationLineStyle_ThickWavy = 12,
        TextDecorationLineStyle_LongDash = 13,
        TextDecorationLineStyle_ThickDash = 14,
        TextDecorationLineStyle_ThickDashDot = 15,
        TextDecorationLineStyle_ThickDashDotDot = 16,
        TextDecorationLineStyle_ThickDot = 17,
        TextDecorationLineStyle_ThickLongDash = 18,
        TextDecorationLineStyle_Other = -1,
    };
    enum class TextEditChangeType : int32_t
    {
        TextEditChangeType_None = 0,
        TextEditChangeType_AutoCorrect = 1,
        TextEditChangeType_Composition = 2,
        TextEditChangeType_CompositionFinalized = 3,
        TextEditChangeType_AutoComplete = 4,
    };
    enum class TextPatternRangeEndpoint : int32_t
    {
        TextPatternRangeEndpoint_Start = 0,
        TextPatternRangeEndpoint_End = 1,
    };
    enum class TextUnit : int32_t
    {
        TextUnit_Character = 0,
        TextUnit_Format = 1,
        TextUnit_Word = 2,
        TextUnit_Line = 3,
        TextUnit_Paragraph = 4,
        TextUnit_Page = 5,
        TextUnit_Document = 6,
    };
    enum class ToggleState : int32_t
    {
        ToggleState_Off = 0,
        ToggleState_On = 1,
        ToggleState_Indeterminate = 2,
    };
    enum class TreeScope : int32_t
    {
        TreeScope_None = 0,
        TreeScope_Element = 1,
        TreeScope_Children = 2,
        TreeScope_Descendants = 4,
        TreeScope_Parent = 8,
        TreeScope_Ancestors = 16,
        TreeScope_Subtree = 7,
    };
    enum class TreeTraversalOptions : int32_t
    {
        TreeTraversalOptions_Default = 0,
        TreeTraversalOptions_PostOrder = 1,
        TreeTraversalOptions_LastToFirstOrder = 2,
    };
    enum class UIAutomationType : int32_t
    {
        UIAutomationType_Int = 1,
        UIAutomationType_Bool = 2,
        UIAutomationType_String = 3,
        UIAutomationType_Double = 4,
        UIAutomationType_Point = 5,
        UIAutomationType_Rect = 6,
        UIAutomationType_Element = 7,
        UIAutomationType_Array = 65536,
        UIAutomationType_Out = 131072,
        UIAutomationType_IntArray = 65537,
        UIAutomationType_BoolArray = 65538,
        UIAutomationType_StringArray = 65539,
        UIAutomationType_DoubleArray = 65540,
        UIAutomationType_PointArray = 65541,
        UIAutomationType_RectArray = 65542,
        UIAutomationType_ElementArray = 65543,
        UIAutomationType_OutInt = 131073,
        UIAutomationType_OutBool = 131074,
        UIAutomationType_OutString = 131075,
        UIAutomationType_OutDouble = 131076,
        UIAutomationType_OutPoint = 131077,
        UIAutomationType_OutRect = 131078,
        UIAutomationType_OutElement = 131079,
        UIAutomationType_OutIntArray = 196609,
        UIAutomationType_OutBoolArray = 196610,
        UIAutomationType_OutStringArray = 196611,
        UIAutomationType_OutDoubleArray = 196612,
        UIAutomationType_OutPointArray = 196613,
        UIAutomationType_OutRectArray = 196614,
        UIAutomationType_OutElementArray = 196615,
    };
    enum class VisualEffects : int32_t
    {
        VisualEffects_None = 0,
        VisualEffects_Shadow = 1,
        VisualEffects_Reflection = 2,
        VisualEffects_Glow = 4,
        VisualEffects_SoftEdges = 8,
        VisualEffects_Bevel = 16,
    };
    enum class WindowInteractionState : int32_t
    {
        WindowInteractionState_Running = 0,
        WindowInteractionState_Closing = 1,
        WindowInteractionState_ReadyForUserInteraction = 2,
        WindowInteractionState_BlockedByModalWindow = 3,
        WindowInteractionState_NotResponding = 4,
    };
    enum class WindowVisualState : int32_t
    {
        WindowVisualState_Normal = 0,
        WindowVisualState_Maximized = 1,
        WindowVisualState_Minimized = 2,
    };
    enum class ZoomUnit : int32_t
    {
        ZoomUnit_NoAmount = 0,
        ZoomUnit_LargeDecrement = 1,
        ZoomUnit_SmallDecrement = 2,
        ZoomUnit_LargeIncrement = 3,
        ZoomUnit_SmallIncrement = 4,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ACCESSTIMEOUT;
    struct CAccPropServices;
    struct CUIAutomation;
    struct CUIAutomation8;
    struct CUIAutomationRegistrar;
    struct ExtendedProperty;
    struct FILTERKEYS;
    struct HIGHCONTRASTA;
    struct HIGHCONTRASTW;
    struct HUIAEVENT;
    struct HUIANODE;
    struct HUIAPATTERNOBJECT;
    struct HUIATEXTRANGE;
    struct HWINEVENTHOOK;
    struct MOUSEKEYS;
    struct MSAAMENUINFO;
    struct SERIALKEYSA;
    struct SERIALKEYSW;
    struct SOUNDSENTRYA;
    struct SOUNDSENTRYW;
    struct STICKYKEYS;
    struct TOGGLEKEYS;
    struct UIAutomationEventInfo;
    struct UIAutomationMethodInfo;
    struct UIAutomationParameter;
    struct UIAutomationPatternInfo;
    struct UIAutomationPropertyInfo;
    struct UiaAndOrCondition;
    struct UiaAsyncContentLoadedEventArgs;
    struct UiaCacheRequest;
    struct UiaChangeInfo;
    struct UiaChangesEventArgs;
    struct UiaCondition;
    struct UiaEventArgs;
    struct UiaFindParams;
    struct UiaNotCondition;
    struct UiaPoint;
    struct UiaPropertyChangedEventArgs;
    struct UiaPropertyCondition;
    struct UiaRect;
    struct UiaStructureChangedEventArgs;
    struct UiaTextEditTextChangedEventArgs;
    struct UiaWindowClosedEventArgs;
    struct IAccIdentity;
    struct IAccPropServer;
    struct IAccPropServices;
    struct IAccessible;
    struct IAccessibleEx;
    struct IAccessibleHandler;
    struct IAccessibleHostingElementProviders;
    struct IAccessibleWindowlessSite;
    struct IAnnotationProvider;
    struct ICustomNavigationProvider;
    struct IDockProvider;
    struct IDragProvider;
    struct IDropTargetProvider;
    struct IExpandCollapseProvider;
    struct IGridItemProvider;
    struct IGridProvider;
    struct IInvokeProvider;
    struct IItemContainerProvider;
    struct ILegacyIAccessibleProvider;
    struct IMultipleViewProvider;
    struct IObjectModelProvider;
    struct IProxyProviderWinEventHandler;
    struct IProxyProviderWinEventSink;
    struct IRangeValueProvider;
    struct IRawElementProviderAdviseEvents;
    struct IRawElementProviderFragment;
    struct IRawElementProviderFragmentRoot;
    struct IRawElementProviderHostingAccessibles;
    struct IRawElementProviderHwndOverride;
    struct IRawElementProviderSimple;
    struct IRawElementProviderSimple2;
    struct IRawElementProviderSimple3;
    struct IRawElementProviderWindowlessSite;
    struct IRichEditUiaInformation;
    struct IRicheditWindowlessAccessibility;
    struct IScrollItemProvider;
    struct IScrollProvider;
    struct ISelectionItemProvider;
    struct ISelectionProvider;
    struct ISelectionProvider2;
    struct ISpreadsheetItemProvider;
    struct ISpreadsheetProvider;
    struct IStylesProvider;
    struct ISynchronizedInputProvider;
    struct ITableItemProvider;
    struct ITableProvider;
    struct ITextChildProvider;
    struct ITextEditProvider;
    struct ITextProvider;
    struct ITextProvider2;
    struct ITextRangeProvider;
    struct ITextRangeProvider2;
    struct IToggleProvider;
    struct ITransformProvider;
    struct ITransformProvider2;
    struct IUIAutomation;
    struct IUIAutomation2;
    struct IUIAutomation3;
    struct IUIAutomation4;
    struct IUIAutomation5;
    struct IUIAutomation6;
    struct IUIAutomationActiveTextPositionChangedEventHandler;
    struct IUIAutomationAndCondition;
    struct IUIAutomationAnnotationPattern;
    struct IUIAutomationBoolCondition;
    struct IUIAutomationCacheRequest;
    struct IUIAutomationChangesEventHandler;
    struct IUIAutomationCondition;
    struct IUIAutomationCustomNavigationPattern;
    struct IUIAutomationDockPattern;
    struct IUIAutomationDragPattern;
    struct IUIAutomationDropTargetPattern;
    struct IUIAutomationElement;
    struct IUIAutomationElement2;
    struct IUIAutomationElement3;
    struct IUIAutomationElement4;
    struct IUIAutomationElement5;
    struct IUIAutomationElement6;
    struct IUIAutomationElement7;
    struct IUIAutomationElement8;
    struct IUIAutomationElement9;
    struct IUIAutomationElementArray;
    struct IUIAutomationEventHandler;
    struct IUIAutomationEventHandlerGroup;
    struct IUIAutomationExpandCollapsePattern;
    struct IUIAutomationFocusChangedEventHandler;
    struct IUIAutomationGridItemPattern;
    struct IUIAutomationGridPattern;
    struct IUIAutomationInvokePattern;
    struct IUIAutomationItemContainerPattern;
    struct IUIAutomationLegacyIAccessiblePattern;
    struct IUIAutomationMultipleViewPattern;
    struct IUIAutomationNotCondition;
    struct IUIAutomationNotificationEventHandler;
    struct IUIAutomationObjectModelPattern;
    struct IUIAutomationOrCondition;
    struct IUIAutomationPatternHandler;
    struct IUIAutomationPatternInstance;
    struct IUIAutomationPropertyChangedEventHandler;
    struct IUIAutomationPropertyCondition;
    struct IUIAutomationProxyFactory;
    struct IUIAutomationProxyFactoryEntry;
    struct IUIAutomationProxyFactoryMapping;
    struct IUIAutomationRangeValuePattern;
    struct IUIAutomationRegistrar;
    struct IUIAutomationScrollItemPattern;
    struct IUIAutomationScrollPattern;
    struct IUIAutomationSelectionItemPattern;
    struct IUIAutomationSelectionPattern;
    struct IUIAutomationSelectionPattern2;
    struct IUIAutomationSpreadsheetItemPattern;
    struct IUIAutomationSpreadsheetPattern;
    struct IUIAutomationStructureChangedEventHandler;
    struct IUIAutomationStylesPattern;
    struct IUIAutomationSynchronizedInputPattern;
    struct IUIAutomationTableItemPattern;
    struct IUIAutomationTablePattern;
    struct IUIAutomationTextChildPattern;
    struct IUIAutomationTextEditPattern;
    struct IUIAutomationTextEditTextChangedEventHandler;
    struct IUIAutomationTextPattern;
    struct IUIAutomationTextPattern2;
    struct IUIAutomationTextRange;
    struct IUIAutomationTextRange2;
    struct IUIAutomationTextRange3;
    struct IUIAutomationTextRangeArray;
    struct IUIAutomationTogglePattern;
    struct IUIAutomationTransformPattern;
    struct IUIAutomationTransformPattern2;
    struct IUIAutomationTreeWalker;
    struct IUIAutomationValuePattern;
    struct IUIAutomationVirtualizedItemPattern;
    struct IUIAutomationWindowPattern;
    struct IValueProvider;
    struct IVirtualizedItemProvider;
    struct IWindowProvider;
#pragma endregion forward_declarations

#pragma region delegates
    using LPFNLRESULTFROMOBJECT = Windows::Win32::Foundation::LRESULT __stdcall(::win32::guid*, Windows::Win32::Foundation::WPARAM, Windows::Win32::System::Com::IUnknown*);
    using LPFNOBJECTFROMLRESULT = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::LRESULT, ::win32::guid*, Windows::Win32::Foundation::WPARAM, void**);
    using LPFNACCESSIBLEOBJECTFROMWINDOW = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::HWND, uint32_t, ::win32::guid*, void**);
    using LPFNACCESSIBLEOBJECTFROMPOINT = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::POINT, Windows::Win32::UI::Accessibility::IAccessible**, Windows::Win32::System::Com::VARIANT*);
    using LPFNCREATESTDACCESSIBLEOBJECT = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::Foundation::HWND, int32_t, ::win32::guid*, void**);
    using LPFNACCESSIBLECHILDREN = Windows::Win32::Foundation::HRESULT __stdcall(Windows::Win32::UI::Accessibility::IAccessible*, int32_t, int32_t, Windows::Win32::System::Com::VARIANT*, int32_t*);
    using UiaProviderCallback = Windows::Win32::System::Com::SAFEARRAY* __stdcall(Windows::Win32::Foundation::HWND, Windows::Win32::UI::Accessibility::ProviderType);
    using UiaEventCallback = void __stdcall(Windows::Win32::UI::Accessibility::UiaEventArgs*, Windows::Win32::System::Com::SAFEARRAY*, Windows::Win32::Foundation::BSTR);
    using WINEVENTPROC = void __stdcall(Windows::Win32::UI::Accessibility::HWINEVENTHOOK, uint32_t, Windows::Win32::Foundation::HWND, int32_t, int32_t, uint32_t, uint32_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif