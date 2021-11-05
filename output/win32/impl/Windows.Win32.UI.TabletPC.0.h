// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_TabletPC_0_H
#define WIN32_Windows_Win32_UI_TabletPC_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct HRESULT;
}
WIN32_EXPORT namespace win32::Windows::Win32::UI::TabletPC
{
#pragma region enums
    enum class ALT_BREAKS : int32_t
    {
        ALT_BREAKS_SAME = 0,
        ALT_BREAKS_UNIQUE = 1,
        ALT_BREAKS_FULL = 2,
    };
    enum class AppearanceConstants : int32_t
    {
        rtfFlat = 0,
        rtfThreeD = 1,
    };
    enum class BorderStyleConstants : int32_t
    {
        rtfNoBorder = 0,
        rtfFixedSingle = 1,
    };
    enum class CONFIDENCE_LEVEL : int32_t
    {
        CFL_STRONG = 0,
        CFL_INTERMEDIATE = 1,
        CFL_POOR = 2,
    };
    enum class CorrectionMode : int32_t
    {
        CorrectionMode_NotVisible = 0,
        CorrectionMode_PreInsertion = 1,
        CorrectionMode_PostInsertionCollapsed = 2,
        CorrectionMode_PostInsertionExpanded = 3,
    };
    enum class CorrectionPosition : int32_t
    {
        CorrectionPosition_Auto = 0,
        CorrectionPosition_Bottom = 1,
        CorrectionPosition_Top = 2,
    };
    enum class DISPID_Ink : int32_t
    {
        DISPID_IStrokes = 1,
        DISPID_IExtendedProperties = 2,
        DISPID_IGetBoundingBox = 3,
        DISPID_IDeleteStrokes = 4,
        DISPID_IDeleteStroke = 5,
        DISPID_IExtractStrokes = 6,
        DISPID_IExtractWithRectangle = 7,
        DISPID_IDirty = 8,
        DISPID_ICustomStrokes = 9,
        DISPID_IClone = 10,
        DISPID_IHitTestCircle = 11,
        DISPID_IHitTestWithRectangle = 12,
        DISPID_IHitTestWithLasso = 13,
        DISPID_INearestPoint = 14,
        DISPID_ICreateStrokes = 15,
        DISPID_ICreateStroke = 16,
        DISPID_IAddStrokesAtRectangle = 17,
        DISPID_IClip = 18,
        DISPID_ISave = 19,
        DISPID_ILoad = 20,
        DISPID_ICreateStrokeFromPoints = 21,
        DISPID_IClipboardCopyWithRectangle = 22,
        DISPID_IClipboardCopy = 23,
        DISPID_ICanPaste = 24,
        DISPID_IClipboardPaste = 25,
    };
    enum class DISPID_InkCollector : int32_t
    {
        DISPID_ICEnabled = 1,
        DISPID_ICHwnd = 2,
        DISPID_ICPaint = 3,
        DISPID_ICText = 4,
        DISPID_ICDefaultDrawingAttributes = 5,
        DISPID_ICRenderer = 6,
        DISPID_ICInk = 7,
        DISPID_ICAutoRedraw = 8,
        DISPID_ICCollectingInk = 9,
        DISPID_ICSetEventInterest = 10,
        DISPID_ICGetEventInterest = 11,
        DISPID_IOEditingMode = 12,
        DISPID_IOSelection = 13,
        DISPID_IOAttachMode = 14,
        DISPID_IOHitTestSelection = 15,
        DISPID_IODraw = 16,
        DISPID_IPPicture = 17,
        DISPID_IPSizeMode = 18,
        DISPID_IPBackColor = 19,
        DISPID_ICCursors = 20,
        DISPID_ICMarginX = 21,
        DISPID_ICMarginY = 22,
        DISPID_ICSetWindowInputRectangle = 23,
        DISPID_ICGetWindowInputRectangle = 24,
        DISPID_ICTablet = 25,
        DISPID_ICSetAllTabletsMode = 26,
        DISPID_ICSetSingleTabletIntegratedMode = 27,
        DISPID_ICCollectionMode = 28,
        DISPID_ICSetGestureStatus = 29,
        DISPID_ICGetGestureStatus = 30,
        DISPID_ICDynamicRendering = 31,
        DISPID_ICDesiredPacketDescription = 32,
        DISPID_IOEraserMode = 33,
        DISPID_IOEraserWidth = 34,
        DISPID_ICMouseIcon = 35,
        DISPID_ICMousePointer = 36,
        DISPID_IPInkEnabled = 37,
        DISPID_ICSupportHighContrastInk = 38,
        DISPID_IOSupportHighContrastSelectionUI = 39,
    };
    enum class DISPID_InkCollectorEvent : int32_t
    {
        DISPID_ICEStroke = 1,
        DISPID_ICECursorDown = 2,
        DISPID_ICENewPackets = 3,
        DISPID_ICENewInAirPackets = 4,
        DISPID_ICECursorButtonDown = 5,
        DISPID_ICECursorButtonUp = 6,
        DISPID_ICECursorInRange = 7,
        DISPID_ICECursorOutOfRange = 8,
        DISPID_ICESystemGesture = 9,
        DISPID_ICEGesture = 10,
        DISPID_ICETabletAdded = 11,
        DISPID_ICETabletRemoved = 12,
        DISPID_IOEPainting = 13,
        DISPID_IOEPainted = 14,
        DISPID_IOESelectionChanging = 15,
        DISPID_IOESelectionChanged = 16,
        DISPID_IOESelectionMoving = 17,
        DISPID_IOESelectionMoved = 18,
        DISPID_IOESelectionResizing = 19,
        DISPID_IOESelectionResized = 20,
        DISPID_IOEStrokesDeleting = 21,
        DISPID_IOEStrokesDeleted = 22,
        DISPID_IPEChangeUICues = 23,
        DISPID_IPEClick = 24,
        DISPID_IPEDblClick = 25,
        DISPID_IPEInvalidated = 26,
        DISPID_IPEMouseDown = 27,
        DISPID_IPEMouseEnter = 28,
        DISPID_IPEMouseHover = 29,
        DISPID_IPEMouseLeave = 30,
        DISPID_IPEMouseMove = 31,
        DISPID_IPEMouseUp = 32,
        DISPID_IPEMouseWheel = 33,
        DISPID_IPESizeModeChanged = 34,
        DISPID_IPEStyleChanged = 35,
        DISPID_IPESystemColorsChanged = 36,
        DISPID_IPEKeyDown = 37,
        DISPID_IPEKeyPress = 38,
        DISPID_IPEKeyUp = 39,
        DISPID_IPEResize = 40,
        DISPID_IPESizeChanged = 41,
    };
    enum class DISPID_InkCursor : int32_t
    {
        DISPID_ICsrName = 0,
        DISPID_ICsrId = 1,
        DISPID_ICsrDrawingAttributes = 2,
        DISPID_ICsrButtons = 3,
        DISPID_ICsrInverted = 4,
        DISPID_ICsrTablet = 5,
    };
    enum class DISPID_InkCursorButton : int32_t
    {
        DISPID_ICBName = 0,
        DISPID_ICBId = 1,
        DISPID_ICBState = 2,
    };
    enum class DISPID_InkCursorButtons : int32_t
    {
        DISPID_ICBs_NewEnum = -4,
        DISPID_ICBsItem = 0,
        DISPID_ICBsCount = 1,
    };
    enum class DISPID_InkCursors : int32_t
    {
        DISPID_ICs_NewEnum = -4,
        DISPID_ICsItem = 0,
        DISPID_ICsCount = 1,
    };
    enum class DISPID_InkCustomStrokes : int32_t
    {
        DISPID_ICSs_NewEnum = -4,
        DISPID_ICSsItem = 0,
        DISPID_ICSsCount = 1,
        DISPID_ICSsAdd = 2,
        DISPID_ICSsRemove = 3,
        DISPID_ICSsClear = 4,
    };
    enum class DISPID_InkDivider : int32_t
    {
        DISPID_IInkDivider_Strokes = 1,
        DISPID_IInkDivider_RecognizerContext = 2,
        DISPID_IInkDivider_LineHeight = 3,
        DISPID_IInkDivider_Divide = 4,
    };
    enum class DISPID_InkDivisionResult : int32_t
    {
        DISPID_IInkDivisionResult_Strokes = 1,
        DISPID_IInkDivisionResult_ResultByType = 2,
    };
    enum class DISPID_InkDivisionUnit : int32_t
    {
        DISPID_IInkDivisionUnit_Strokes = 1,
        DISPID_IInkDivisionUnit_DivisionType = 2,
        DISPID_IInkDivisionUnit_RecognizedString = 3,
        DISPID_IInkDivisionUnit_RotationTransform = 4,
    };
    enum class DISPID_InkDivisionUnits : int32_t
    {
        DISPID_IInkDivisionUnits_NewEnum = -4,
        DISPID_IInkDivisionUnits_Item = 0,
        DISPID_IInkDivisionUnits_Count = 1,
    };
    enum class DISPID_InkDrawingAttributes : int32_t
    {
        DISPID_DAHeight = 1,
        DISPID_DAColor = 2,
        DISPID_DAWidth = 3,
        DISPID_DAFitToCurve = 4,
        DISPID_DAIgnorePressure = 5,
        DISPID_DAAntiAliased = 6,
        DISPID_DATransparency = 7,
        DISPID_DARasterOperation = 8,
        DISPID_DAPenTip = 9,
        DISPID_DAClone = 10,
        DISPID_DAExtendedProperties = 11,
    };
    enum class DISPID_InkEdit : int32_t
    {
        DISPID_Text = 0,
        DISPID_TextRTF = 1,
        DISPID_Hwnd = 2,
        DISPID_DisableNoScroll = 3,
        DISPID_Locked = 4,
        DISPID_Enabled = 5,
        DISPID_MaxLength = 6,
        DISPID_MultiLine = 7,
        DISPID_ScrollBars = 8,
        DISPID_RTSelStart = 9,
        DISPID_RTSelLength = 10,
        DISPID_RTSelText = 11,
        DISPID_SelAlignment = 12,
        DISPID_SelBold = 13,
        DISPID_SelCharOffset = 14,
        DISPID_SelColor = 15,
        DISPID_SelFontName = 16,
        DISPID_SelFontSize = 17,
        DISPID_SelItalic = 18,
        DISPID_SelRTF = 19,
        DISPID_SelUnderline = 20,
        DISPID_DragIcon = 21,
        DISPID_Status = 22,
        DISPID_UseMouseForInput = 23,
        DISPID_InkMode = 24,
        DISPID_InkInsertMode = 25,
        DISPID_RecoTimeout = 26,
        DISPID_DrawAttr = 27,
        DISPID_Recognizer = 28,
        DISPID_Factoid = 29,
        DISPID_SelInk = 30,
        DISPID_SelInksDisplayMode = 31,
        DISPID_Recognize = 32,
        DISPID_GetGestStatus = 33,
        DISPID_SetGestStatus = 34,
        DISPID_Refresh = 35,
    };
    enum class DISPID_InkEditEvents : int32_t
    {
        DISPID_IeeChange = 1,
        DISPID_IeeSelChange = 2,
        DISPID_IeeKeyDown = 3,
        DISPID_IeeKeyUp = 4,
        DISPID_IeeMouseUp = 5,
        DISPID_IeeMouseDown = 6,
        DISPID_IeeKeyPress = 7,
        DISPID_IeeDblClick = 8,
        DISPID_IeeClick = 9,
        DISPID_IeeMouseMove = 10,
        DISPID_IeeCursorDown = 21,
        DISPID_IeeStroke = 22,
        DISPID_IeeGesture = 23,
        DISPID_IeeRecognitionResult = 24,
    };
    enum class DISPID_InkEvent : int32_t
    {
        DISPID_IEInkAdded = 1,
        DISPID_IEInkDeleted = 2,
    };
    enum class DISPID_InkExtendedProperties : int32_t
    {
        DISPID_IEPs_NewEnum = -4,
        DISPID_IEPsItem = 0,
        DISPID_IEPsCount = 1,
        DISPID_IEPsAdd = 2,
        DISPID_IEPsRemove = 3,
        DISPID_IEPsClear = 4,
        DISPID_IEPsDoesPropertyExist = 5,
    };
    enum class DISPID_InkExtendedProperty : int32_t
    {
        DISPID_IEPGuid = 1,
        DISPID_IEPData = 2,
    };
    enum class DISPID_InkGesture : int32_t
    {
        DISPID_IGId = 0,
        DISPID_IGGetHotPoint = 1,
        DISPID_IGConfidence = 2,
    };
    enum class DISPID_InkRecoAlternate : int32_t
    {
        DISPID_InkRecoAlternate_String = 1,
        DISPID_InkRecoAlternate_LineNumber = 2,
        DISPID_InkRecoAlternate_Baseline = 3,
        DISPID_InkRecoAlternate_Midline = 4,
        DISPID_InkRecoAlternate_Ascender = 5,
        DISPID_InkRecoAlternate_Descender = 6,
        DISPID_InkRecoAlternate_Confidence = 7,
        DISPID_InkRecoAlternate_Strokes = 8,
        DISPID_InkRecoAlternate_GetStrokesFromStrokeRanges = 9,
        DISPID_InkRecoAlternate_GetStrokesFromTextRange = 10,
        DISPID_InkRecoAlternate_GetTextRangeFromStrokes = 11,
        DISPID_InkRecoAlternate_GetPropertyValue = 12,
        DISPID_InkRecoAlternate_LineAlternates = 13,
        DISPID_InkRecoAlternate_ConfidenceAlternates = 14,
        DISPID_InkRecoAlternate_AlternatesWithConstantPropertyValues = 15,
    };
    enum class DISPID_InkRecoContext : int32_t
    {
        DISPID_IRecoCtx_Strokes = 1,
        DISPID_IRecoCtx_CharacterAutoCompletionMode = 2,
        DISPID_IRecoCtx_Factoid = 3,
        DISPID_IRecoCtx_WordList = 4,
        DISPID_IRecoCtx_Recognizer = 5,
        DISPID_IRecoCtx_Guide = 6,
        DISPID_IRecoCtx_Flags = 7,
        DISPID_IRecoCtx_PrefixText = 8,
        DISPID_IRecoCtx_SuffixText = 9,
        DISPID_IRecoCtx_StopRecognition = 10,
        DISPID_IRecoCtx_Clone = 11,
        DISPID_IRecoCtx_Recognize = 12,
        DISPID_IRecoCtx_StopBackgroundRecognition = 13,
        DISPID_IRecoCtx_EndInkInput = 14,
        DISPID_IRecoCtx_BackgroundRecognize = 15,
        DISPID_IRecoCtx_BackgroundRecognizeWithAlternates = 16,
        DISPID_IRecoCtx_IsStringSupported = 17,
    };
    enum class DISPID_InkRecoContext2 : int32_t
    {
        DISPID_IRecoCtx2_EnabledUnicodeRanges = 0,
    };
    enum class DISPID_InkRecognitionAlternates : int32_t
    {
        DISPID_InkRecognitionAlternates_NewEnum = -4,
        DISPID_InkRecognitionAlternates_Item = 0,
        DISPID_InkRecognitionAlternates_Count = 1,
        DISPID_InkRecognitionAlternates_Strokes = 2,
    };
    enum class DISPID_InkRecognitionEvent : int32_t
    {
        DISPID_IRERecognitionWithAlternates = 1,
        DISPID_IRERecognition = 2,
    };
    enum class DISPID_InkRecognitionResult : int32_t
    {
        DISPID_InkRecognitionResult_TopString = 1,
        DISPID_InkRecognitionResult_TopAlternate = 2,
        DISPID_InkRecognitionResult_Strokes = 3,
        DISPID_InkRecognitionResult_TopConfidence = 4,
        DISPID_InkRecognitionResult_AlternatesFromSelection = 5,
        DISPID_InkRecognitionResult_ModifyTopAlternate = 6,
        DISPID_InkRecognitionResult_SetResultOnStrokes = 7,
    };
    enum class DISPID_InkRecognizer : int32_t
    {
        DISPID_RecoClsid = 1,
        DISPID_RecoName = 2,
        DISPID_RecoVendor = 3,
        DISPID_RecoCapabilities = 4,
        DISPID_RecoLanguageID = 5,
        DISPID_RecoPreferredPacketDescription = 6,
        DISPID_RecoCreateRecognizerContext = 7,
        DISPID_RecoSupportedProperties = 8,
    };
    enum class DISPID_InkRecognizer2 : int32_t
    {
        DISPID_RecoId = 0,
        DISPID_RecoUnicodeRanges = 1,
    };
    enum class DISPID_InkRecognizerGuide : int32_t
    {
        DISPID_IRGWritingBox = 1,
        DISPID_IRGDrawnBox = 2,
        DISPID_IRGRows = 3,
        DISPID_IRGColumns = 4,
        DISPID_IRGMidline = 5,
        DISPID_IRGGuideData = 6,
    };
    enum class DISPID_InkRecognizers : int32_t
    {
        DISPID_IRecos_NewEnum = -4,
        DISPID_IRecosItem = 0,
        DISPID_IRecosCount = 1,
        DISPID_IRecosGetDefaultRecognizer = 2,
    };
    enum class DISPID_InkRectangle : int32_t
    {
        DISPID_IRTop = 1,
        DISPID_IRLeft = 2,
        DISPID_IRBottom = 3,
        DISPID_IRRight = 4,
        DISPID_IRGetRectangle = 5,
        DISPID_IRSetRectangle = 6,
        DISPID_IRData = 7,
    };
    enum class DISPID_InkRenderer : int32_t
    {
        DISPID_IRGetViewTransform = 1,
        DISPID_IRSetViewTransform = 2,
        DISPID_IRGetObjectTransform = 3,
        DISPID_IRSetObjectTransform = 4,
        DISPID_IRDraw = 5,
        DISPID_IRDrawStroke = 6,
        DISPID_IRPixelToInkSpace = 7,
        DISPID_IRInkSpaceToPixel = 8,
        DISPID_IRPixelToInkSpaceFromPoints = 9,
        DISPID_IRInkSpaceToPixelFromPoints = 10,
        DISPID_IRMeasure = 11,
        DISPID_IRMeasureStroke = 12,
        DISPID_IRMove = 13,
        DISPID_IRRotate = 14,
        DISPID_IRScale = 15,
    };
    enum class DISPID_InkStrokeDisp : int32_t
    {
        DISPID_ISDInkIndex = 1,
        DISPID_ISDID = 2,
        DISPID_ISDGetBoundingBox = 3,
        DISPID_ISDDrawingAttributes = 4,
        DISPID_ISDFindIntersections = 5,
        DISPID_ISDGetRectangleIntersections = 6,
        DISPID_ISDClip = 7,
        DISPID_ISDHitTestCircle = 8,
        DISPID_ISDNearestPoint = 9,
        DISPID_ISDSplit = 10,
        DISPID_ISDExtendedProperties = 11,
        DISPID_ISDInk = 12,
        DISPID_ISDBezierPoints = 13,
        DISPID_ISDPolylineCusps = 14,
        DISPID_ISDBezierCusps = 15,
        DISPID_ISDSelfIntersections = 16,
        DISPID_ISDPacketCount = 17,
        DISPID_ISDPacketSize = 18,
        DISPID_ISDPacketDescription = 19,
        DISPID_ISDDeleted = 20,
        DISPID_ISDGetPacketDescriptionPropertyMetrics = 21,
        DISPID_ISDGetPoints = 22,
        DISPID_ISDSetPoints = 23,
        DISPID_ISDGetPacketData = 24,
        DISPID_ISDGetPacketValuesByProperty = 25,
        DISPID_ISDSetPacketValuesByProperty = 26,
        DISPID_ISDGetFlattenedBezierPoints = 27,
        DISPID_ISDScaleToRectangle = 28,
        DISPID_ISDTransform = 29,
        DISPID_ISDMove = 30,
        DISPID_ISDRotate = 31,
        DISPID_ISDShear = 32,
        DISPID_ISDScale = 33,
    };
    enum class DISPID_InkStrokes : int32_t
    {
        DISPID_ISs_NewEnum = -4,
        DISPID_ISsItem = 0,
        DISPID_ISsCount = 1,
        DISPID_ISsValid = 2,
        DISPID_ISsInk = 3,
        DISPID_ISsAdd = 4,
        DISPID_ISsAddStrokes = 5,
        DISPID_ISsRemove = 6,
        DISPID_ISsRemoveStrokes = 7,
        DISPID_ISsToString = 8,
        DISPID_ISsModifyDrawingAttributes = 9,
        DISPID_ISsGetBoundingBox = 10,
        DISPID_ISsScaleToRectangle = 11,
        DISPID_ISsTransform = 12,
        DISPID_ISsMove = 13,
        DISPID_ISsRotate = 14,
        DISPID_ISsShear = 15,
        DISPID_ISsScale = 16,
        DISPID_ISsClip = 17,
        DISPID_ISsRecognitionResult = 18,
        DISPID_ISsRemoveRecognitionResult = 19,
    };
    enum class DISPID_InkTablet : int32_t
    {
        DISPID_ITName = 0,
        DISPID_ITPlugAndPlayId = 1,
        DISPID_ITPropertyMetrics = 2,
        DISPID_ITIsPacketPropertySupported = 3,
        DISPID_ITMaximumInputRectangle = 4,
        DISPID_ITHardwareCapabilities = 5,
    };
    enum class DISPID_InkTablet2 : int32_t
    {
        DISPID_IT2DeviceKind = 0,
    };
    enum class DISPID_InkTablet3 : int32_t
    {
        DISPID_IT3IsMultiTouch = 0,
        DISPID_IT3MaximumCursors = 1,
    };
    enum class DISPID_InkTablets : int32_t
    {
        DISPID_ITs_NewEnum = -4,
        DISPID_ITsItem = 0,
        DISPID_ITsDefaultTablet = 1,
        DISPID_ITsCount = 2,
        DISPID_ITsIsPacketPropertySupported = 3,
    };
    enum class DISPID_InkTransform : int32_t
    {
        DISPID_ITReset = 1,
        DISPID_ITTranslate = 2,
        DISPID_ITRotate = 3,
        DISPID_ITReflect = 4,
        DISPID_ITShear = 5,
        DISPID_ITScale = 6,
        DISPID_ITeM11 = 7,
        DISPID_ITeM12 = 8,
        DISPID_ITeM21 = 9,
        DISPID_ITeM22 = 10,
        DISPID_ITeDx = 11,
        DISPID_ITeDy = 12,
        DISPID_ITGetTransform = 13,
        DISPID_ITSetTransform = 14,
        DISPID_ITData = 15,
    };
    enum class DISPID_InkWordList : int32_t
    {
        DISPID_InkWordList_AddWord = 0,
        DISPID_InkWordList_RemoveWord = 1,
        DISPID_InkWordList_Merge = 2,
    };
    enum class DISPID_InkWordList2 : int32_t
    {
        DISPID_InkWordList2_AddWords = 3,
    };
    enum class DISPID_MathInputControlEvents : int32_t
    {
        DISPID_MICInsert = 0,
        DISPID_MICClose = 1,
        DISPID_MICPaint = 2,
        DISPID_MICClear = 3,
    };
    enum class DISPID_PenInputPanel : int32_t
    {
        DISPID_PIPAttachedEditWindow = 0,
        DISPID_PIPFactoid = 1,
        DISPID_PIPCurrentPanel = 2,
        DISPID_PIPDefaultPanel = 3,
        DISPID_PIPVisible = 4,
        DISPID_PIPTop = 5,
        DISPID_PIPLeft = 6,
        DISPID_PIPWidth = 7,
        DISPID_PIPHeight = 8,
        DISPID_PIPMoveTo = 9,
        DISPID_PIPCommitPendingInput = 10,
        DISPID_PIPRefresh = 11,
        DISPID_PIPBusy = 12,
        DISPID_PIPVerticalOffset = 13,
        DISPID_PIPHorizontalOffset = 14,
        DISPID_PIPEnableTsf = 15,
        DISPID_PIPAutoShow = 16,
    };
    enum class DISPID_PenInputPanelEvents : int32_t
    {
        DISPID_PIPEVisibleChanged = 0,
        DISPID_PIPEPanelChanged = 1,
        DISPID_PIPEInputFailed = 2,
        DISPID_PIPEPanelMoving = 3,
    };
    enum class DISPID_StrokeEvent : int32_t
    {
        DISPID_SEStrokesAdded = 1,
        DISPID_SEStrokesRemoved = 2,
    };
    enum class EventMask : int32_t
    {
        EventMask_InPlaceStateChanging = 1,
        EventMask_InPlaceStateChanged = 2,
        EventMask_InPlaceSizeChanging = 4,
        EventMask_InPlaceSizeChanged = 8,
        EventMask_InputAreaChanging = 16,
        EventMask_InputAreaChanged = 32,
        EventMask_CorrectionModeChanging = 64,
        EventMask_CorrectionModeChanged = 128,
        EventMask_InPlaceVisibilityChanging = 256,
        EventMask_InPlaceVisibilityChanged = 512,
        EventMask_TextInserting = 1024,
        EventMask_TextInserted = 2048,
        EventMask_All = 4095,
    };
    enum class FLICKACTION_COMMANDCODE : int32_t
    {
        FLICKACTION_COMMANDCODE_NULL = 0,
        FLICKACTION_COMMANDCODE_SCROLL = 1,
        FLICKACTION_COMMANDCODE_APPCOMMAND = 2,
        FLICKACTION_COMMANDCODE_CUSTOMKEY = 3,
        FLICKACTION_COMMANDCODE_KEYMODIFIER = 4,
    };
    enum class FLICKDIRECTION : int32_t
    {
        FLICKDIRECTION_MIN = 0,
        FLICKDIRECTION_RIGHT = 0,
        FLICKDIRECTION_UPRIGHT = 1,
        FLICKDIRECTION_UP = 2,
        FLICKDIRECTION_UPLEFT = 3,
        FLICKDIRECTION_LEFT = 4,
        FLICKDIRECTION_DOWNLEFT = 5,
        FLICKDIRECTION_DOWN = 6,
        FLICKDIRECTION_DOWNRIGHT = 7,
        FLICKDIRECTION_INVALID = 8,
    };
    enum class FLICKMODE : int32_t
    {
        FLICKMODE_MIN = 0,
        FLICKMODE_OFF = 0,
        FLICKMODE_ON = 1,
        FLICKMODE_LEARNING = 2,
        FLICKMODE_MAX = 2,
        FLICKMODE_DEFAULT = 1,
    };
    enum class InPlaceDirection : int32_t
    {
        InPlaceDirection_Auto = 0,
        InPlaceDirection_Bottom = 1,
        InPlaceDirection_Top = 2,
    };
    enum class InPlaceState : int32_t
    {
        InPlaceState_Auto = 0,
        InPlaceState_HoverTarget = 1,
        InPlaceState_Expanded = 2,
    };
    enum class InkApplicationGesture : int32_t
    {
        IAG_AllGestures = 0,
        IAG_NoGesture = 61440,
        IAG_Scratchout = 61441,
        IAG_Triangle = 61442,
        IAG_Square = 61443,
        IAG_Star = 61444,
        IAG_Check = 61445,
        IAG_Curlicue = 61456,
        IAG_DoubleCurlicue = 61457,
        IAG_Circle = 61472,
        IAG_DoubleCircle = 61473,
        IAG_SemiCircleLeft = 61480,
        IAG_SemiCircleRight = 61481,
        IAG_ChevronUp = 61488,
        IAG_ChevronDown = 61489,
        IAG_ChevronLeft = 61490,
        IAG_ChevronRight = 61491,
        IAG_ArrowUp = 61496,
        IAG_ArrowDown = 61497,
        IAG_ArrowLeft = 61498,
        IAG_ArrowRight = 61499,
        IAG_Up = 61528,
        IAG_Down = 61529,
        IAG_Left = 61530,
        IAG_Right = 61531,
        IAG_UpDown = 61536,
        IAG_DownUp = 61537,
        IAG_LeftRight = 61538,
        IAG_RightLeft = 61539,
        IAG_UpLeftLong = 61540,
        IAG_UpRightLong = 61541,
        IAG_DownLeftLong = 61542,
        IAG_DownRightLong = 61543,
        IAG_UpLeft = 61544,
        IAG_UpRight = 61545,
        IAG_DownLeft = 61546,
        IAG_DownRight = 61547,
        IAG_LeftUp = 61548,
        IAG_LeftDown = 61549,
        IAG_RightUp = 61550,
        IAG_RightDown = 61551,
        IAG_Exclamation = 61604,
        IAG_Tap = 61680,
        IAG_DoubleTap = 61681,
    };
    enum class InkBoundingBoxMode : int32_t
    {
        IBBM_Default = 0,
        IBBM_NoCurveFit = 1,
        IBBM_CurveFit = 2,
        IBBM_PointsOnly = 3,
        IBBM_Union = 4,
    };
    enum class InkClipboardFormats : int32_t
    {
        ICF_None = 0,
        ICF_InkSerializedFormat = 1,
        ICF_SketchInk = 2,
        ICF_TextInk = 6,
        ICF_EnhancedMetafile = 8,
        ICF_Metafile = 32,
        ICF_Bitmap = 64,
        ICF_PasteMask = 7,
        ICF_CopyMask = 127,
        ICF_Default = 127,
    };
    enum class InkClipboardModes : int32_t
    {
        ICB_Copy = 0,
        ICB_Cut = 1,
        ICB_ExtractOnly = 48,
        ICB_DelayedCopy = 32,
        ICB_Default = 0,
    };
    enum class InkCollectionMode : int32_t
    {
        ICM_InkOnly = 0,
        ICM_GestureOnly = 1,
        ICM_InkAndGesture = 2,
    };
    enum class InkCollectorEventInterest : int32_t
    {
        ICEI_DefaultEvents = -1,
        ICEI_CursorDown = 0,
        ICEI_Stroke = 1,
        ICEI_NewPackets = 2,
        ICEI_NewInAirPackets = 3,
        ICEI_CursorButtonDown = 4,
        ICEI_CursorButtonUp = 5,
        ICEI_CursorInRange = 6,
        ICEI_CursorOutOfRange = 7,
        ICEI_SystemGesture = 8,
        ICEI_TabletAdded = 9,
        ICEI_TabletRemoved = 10,
        ICEI_MouseDown = 11,
        ICEI_MouseMove = 12,
        ICEI_MouseUp = 13,
        ICEI_MouseWheel = 14,
        ICEI_DblClick = 15,
        ICEI_AllEvents = 16,
    };
    enum class InkCursorButtonState : int32_t
    {
        ICBS_Unavailable = 0,
        ICBS_Up = 1,
        ICBS_Down = 2,
    };
    enum class InkDisplayMode : int32_t
    {
        IDM_Ink = 0,
        IDM_Text = 1,
    };
    enum class InkDivisionType : int32_t
    {
        IDT_Segment = 0,
        IDT_Line = 1,
        IDT_Paragraph = 2,
        IDT_Drawing = 3,
    };
    enum class InkEditStatus : int32_t
    {
        IES_Idle = 0,
        IES_Collecting = 1,
        IES_Recognizing = 2,
    };
    enum class InkExtractFlags : int32_t
    {
        IEF_CopyFromOriginal = 0,
        IEF_RemoveFromOriginal = 1,
        IEF_Default = 1,
    };
    enum class InkInsertMode : int32_t
    {
        IEM_InsertText = 0,
        IEM_InsertInk = 1,
    };
    enum class InkMode : int32_t
    {
        IEM_Disabled = 0,
        IEM_Ink = 1,
        IEM_InkAndGesture = 2,
    };
    enum class InkMouseButton : int32_t
    {
        IMF_Left = 1,
        IMF_Right = 2,
        IMF_Middle = 4,
    };
    enum class InkMousePointer : int32_t
    {
        IMP_Default = 0,
        IMP_Arrow = 1,
        IMP_Crosshair = 2,
        IMP_Ibeam = 3,
        IMP_SizeNESW = 4,
        IMP_SizeNS = 5,
        IMP_SizeNWSE = 6,
        IMP_SizeWE = 7,
        IMP_UpArrow = 8,
        IMP_Hourglass = 9,
        IMP_NoDrop = 10,
        IMP_ArrowHourglass = 11,
        IMP_ArrowQuestion = 12,
        IMP_SizeAll = 13,
        IMP_Hand = 14,
        IMP_Custom = 99,
    };
    enum class InkOverlayAttachMode : int32_t
    {
        IOAM_Behind = 0,
        IOAM_InFront = 1,
    };
    enum class InkOverlayEditingMode : int32_t
    {
        IOEM_Ink = 0,
        IOEM_Delete = 1,
        IOEM_Select = 2,
    };
    enum class InkOverlayEraserMode : int32_t
    {
        IOERM_StrokeErase = 0,
        IOERM_PointErase = 1,
    };
    enum class InkPenTip : int32_t
    {
        IPT_Ball = 0,
        IPT_Rectangle = 1,
    };
    enum class InkPersistenceCompressionMode : int32_t
    {
        IPCM_Default = 0,
        IPCM_MaximumCompression = 1,
        IPCM_NoCompression = 2,
    };
    enum class InkPersistenceFormat : int32_t
    {
        IPF_InkSerializedFormat = 0,
        IPF_Base64InkSerializedFormat = 1,
        IPF_GIF = 2,
        IPF_Base64GIF = 3,
    };
    enum class InkPictureSizeMode : int32_t
    {
        IPSM_AutoSize = 0,
        IPSM_CenterImage = 1,
        IPSM_Normal = 2,
        IPSM_StretchImage = 3,
    };
    enum class InkRasterOperation : int32_t
    {
        IRO_Black = 1,
        IRO_NotMergePen = 2,
        IRO_MaskNotPen = 3,
        IRO_NotCopyPen = 4,
        IRO_MaskPenNot = 5,
        IRO_Not = 6,
        IRO_XOrPen = 7,
        IRO_NotMaskPen = 8,
        IRO_MaskPen = 9,
        IRO_NotXOrPen = 10,
        IRO_NoOperation = 11,
        IRO_MergeNotPen = 12,
        IRO_CopyPen = 13,
        IRO_MergePenNot = 14,
        IRO_MergePen = 15,
        IRO_White = 16,
    };
    enum class InkRecognitionAlternatesSelection : int32_t
    {
        IRAS_Start = 0,
        IRAS_DefaultCount = 10,
        IRAS_All = -1,
    };
    enum class InkRecognitionConfidence : int32_t
    {
        IRC_Strong = 0,
        IRC_Intermediate = 1,
        IRC_Poor = 2,
    };
    enum class InkRecognitionModes : int32_t
    {
        IRM_None = 0,
        IRM_WordModeOnly = 1,
        IRM_Coerce = 2,
        IRM_TopInkBreaksOnly = 4,
        IRM_PrefixOk = 8,
        IRM_LineMode = 16,
        IRM_DisablePersonalization = 32,
        IRM_AutoSpace = 64,
        IRM_Max = 128,
    };
    enum class InkRecognitionStatus : int32_t
    {
        IRS_NoError = 0,
        IRS_Interrupted = 1,
        IRS_ProcessFailed = 2,
        IRS_InkAddedFailed = 4,
        IRS_SetAutoCompletionModeFailed = 8,
        IRS_SetStrokesFailed = 16,
        IRS_SetGuideFailed = 32,
        IRS_SetFlagsFailed = 64,
        IRS_SetFactoidFailed = 128,
        IRS_SetPrefixSuffixFailed = 256,
        IRS_SetWordListFailed = 512,
    };
    enum class InkRecognizerCapabilities : int32_t
    {
        IRC_DontCare = 1,
        IRC_Object = 2,
        IRC_FreeInput = 4,
        IRC_LinedInput = 8,
        IRC_BoxedInput = 16,
        IRC_CharacterAutoCompletionInput = 32,
        IRC_RightAndDown = 64,
        IRC_LeftAndDown = 128,
        IRC_DownAndLeft = 256,
        IRC_DownAndRight = 512,
        IRC_ArbitraryAngle = 1024,
        IRC_Lattice = 2048,
        IRC_AdviseInkChange = 4096,
        IRC_StrokeReorder = 8192,
        IRC_Personalizable = 16384,
        IRC_PrefersArbitraryAngle = 32768,
        IRC_PrefersParagraphBreaking = 65536,
        IRC_PrefersSegmentation = 131072,
        IRC_Cursive = 262144,
        IRC_TextPrediction = 524288,
        IRC_Alpha = 1048576,
        IRC_Beta = 2097152,
    };
    enum class InkRecognizerCharacterAutoCompletionMode : int32_t
    {
        IRCACM_Full = 0,
        IRCACM_Prefix = 1,
        IRCACM_Random = 2,
    };
    enum class InkSelectionConstants : int32_t
    {
        ISC_FirstElement = 0,
        ISC_AllElements = -1,
    };
    enum class InkShiftKeyModifierFlags : int32_t
    {
        IKM_Shift = 1,
        IKM_Control = 2,
        IKM_Alt = 4,
    };
    enum class InkSystemGesture : int32_t
    {
        ISG_Tap = 16,
        ISG_DoubleTap = 17,
        ISG_RightTap = 18,
        ISG_Drag = 19,
        ISG_RightDrag = 20,
        ISG_HoldEnter = 21,
        ISG_HoldLeave = 22,
        ISG_HoverEnter = 23,
        ISG_HoverLeave = 24,
        ISG_Flick = 31,
    };
    enum class InteractionMode : int32_t
    {
        InteractionMode_InPlace = 0,
        InteractionMode_Floating = 1,
        InteractionMode_DockedTop = 2,
        InteractionMode_DockedBottom = 3,
    };
    enum class KEYMODIFIER : int32_t
    {
        KEYMODIFIER_CONTROL = 1,
        KEYMODIFIER_MENU = 2,
        KEYMODIFIER_SHIFT = 4,
        KEYMODIFIER_WIN = 8,
        KEYMODIFIER_ALTGR = 16,
        KEYMODIFIER_EXT = 32,
    };
    enum class LINE_METRICS : int32_t
    {
        LM_BASELINE = 0,
        LM_MIDLINE = 1,
        LM_ASCENDER = 2,
        LM_DESCENDER = 3,
    };
    enum class MICUIELEMENT : int32_t
    {
        MICUIELEMENT_BUTTON_WRITE = 1,
        MICUIELEMENT_BUTTON_ERASE = 2,
        MICUIELEMENT_BUTTON_CORRECT = 4,
        MICUIELEMENT_BUTTON_CLEAR = 8,
        MICUIELEMENT_BUTTON_UNDO = 16,
        MICUIELEMENT_BUTTON_REDO = 32,
        MICUIELEMENT_BUTTON_INSERT = 64,
        MICUIELEMENT_BUTTON_CANCEL = 128,
        MICUIELEMENT_INKPANEL_BACKGROUND = 256,
        MICUIELEMENT_RESULTPANEL_BACKGROUND = 512,
    };
    enum class MICUIELEMENTSTATE : int32_t
    {
        MICUIELEMENTSTATE_NORMAL = 1,
        MICUIELEMENTSTATE_HOT = 2,
        MICUIELEMENTSTATE_PRESSED = 3,
        MICUIELEMENTSTATE_DISABLED = 4,
    };
    enum class MouseButton : int32_t
    {
        NO_BUTTON = 0,
        LEFT_BUTTON = 1,
        RIGHT_BUTTON = 2,
        MIDDLE_BUTTON = 4,
    };
    enum class PROPERTY_UNITS : int32_t
    {
        PROPERTY_UNITS_DEFAULT = 0,
        PROPERTY_UNITS_INCHES = 1,
        PROPERTY_UNITS_CENTIMETERS = 2,
        PROPERTY_UNITS_DEGREES = 3,
        PROPERTY_UNITS_RADIANS = 4,
        PROPERTY_UNITS_SECONDS = 5,
        PROPERTY_UNITS_POUNDS = 6,
        PROPERTY_UNITS_GRAMS = 7,
        PROPERTY_UNITS_SILINEAR = 8,
        PROPERTY_UNITS_SIROTATION = 9,
        PROPERTY_UNITS_ENGLINEAR = 10,
        PROPERTY_UNITS_ENGROTATION = 11,
        PROPERTY_UNITS_SLUGS = 12,
        PROPERTY_UNITS_KELVIN = 13,
        PROPERTY_UNITS_FAHRENHEIT = 14,
        PROPERTY_UNITS_AMPERE = 15,
        PROPERTY_UNITS_CANDELA = 16,
    };
    enum class PanelInputArea : int32_t
    {
        PanelInputArea_Auto = 0,
        PanelInputArea_Keyboard = 1,
        PanelInputArea_WritingPad = 2,
        PanelInputArea_CharacterPad = 3,
    };
    enum class PanelType : int32_t
    {
        PT_Default = 0,
        PT_Inactive = 1,
        PT_Handwriting = 2,
        PT_Keyboard = 3,
    };
    enum class RealTimeStylusDataInterest : int32_t
    {
        RTSDI_AllData = -1,
        RTSDI_None = 0,
        RTSDI_Error = 1,
        RTSDI_RealTimeStylusEnabled = 2,
        RTSDI_RealTimeStylusDisabled = 4,
        RTSDI_StylusNew = 8,
        RTSDI_StylusInRange = 16,
        RTSDI_InAirPackets = 32,
        RTSDI_StylusOutOfRange = 64,
        RTSDI_StylusDown = 128,
        RTSDI_Packets = 256,
        RTSDI_StylusUp = 512,
        RTSDI_StylusButtonUp = 1024,
        RTSDI_StylusButtonDown = 2048,
        RTSDI_SystemEvents = 4096,
        RTSDI_TabletAdded = 8192,
        RTSDI_TabletRemoved = 16384,
        RTSDI_CustomStylusDataAdded = 32768,
        RTSDI_UpdateMapping = 65536,
        RTSDI_DefaultEvents = 37766,
    };
    enum class RealTimeStylusLockType : int32_t
    {
        RTSLT_ObjLock = 1,
        RTSLT_SyncEventLock = 2,
        RTSLT_AsyncEventLock = 4,
        RTSLT_ExcludeCallback = 8,
        RTSLT_SyncObjLock = 11,
        RTSLT_AsyncObjLock = 13,
    };
    enum class SCROLLDIRECTION : int32_t
    {
        SCROLLDIRECTION_UP = 0,
        SCROLLDIRECTION_DOWN = 1,
    };
    enum class ScrollBarsConstants : int32_t
    {
        rtfNone = 0,
        rtfHorizontal = 1,
        rtfVertical = 2,
        rtfBoth = 3,
    };
    enum class SelAlignmentConstants : int32_t
    {
        rtfLeft = 0,
        rtfRight = 1,
        rtfCenter = 2,
    };
    enum class SelectionHitResult : int32_t
    {
        SHR_None = 0,
        SHR_NW = 1,
        SHR_SE = 2,
        SHR_NE = 3,
        SHR_SW = 4,
        SHR_E = 5,
        SHR_W = 6,
        SHR_N = 7,
        SHR_S = 8,
        SHR_Selection = 9,
    };
    enum class StylusQueue : int32_t
    {
        SyncStylusQueue = 1,
        AsyncStylusQueueImmediate = 2,
        AsyncStylusQueue = 3,
    };
    enum class TabletDeviceKind : int32_t
    {
        TDK_Mouse = 0,
        TDK_Pen = 1,
        TDK_Touch = 2,
    };
    enum class TabletHardwareCapabilities : int32_t
    {
        THWC_Integrated = 1,
        THWC_CursorMustTouch = 2,
        THWC_HardProximity = 4,
        THWC_CursorsHavePhysicalIds = 8,
    };
    enum class TabletPropertyMetricUnit : int32_t
    {
        TPMU_Default = 0,
        TPMU_Inches = 1,
        TPMU_Centimeters = 2,
        TPMU_Degrees = 3,
        TPMU_Radians = 4,
        TPMU_Seconds = 5,
        TPMU_Pounds = 6,
        TPMU_Grams = 7,
    };
    enum class VisualState : int32_t
    {
        InPlace = 0,
        Floating = 1,
        DockedTop = 2,
        DockedBottom = 3,
        Closed = 4,
    };
    enum class enumGetCandidateFlags : int32_t
    {
        TCF_ALLOW_RECOGNITION = 1,
        TCF_FORCE_RECOGNITION = 2,
    };
    enum class enumINKMETRIC_FLAGS : int32_t
    {
        IMF_FONT_SELECTED_IN_HDC = 1,
        IMF_ITALIC = 2,
        IMF_BOLD = 4,
    };
    enum class enumRECO_TYPE : int32_t
    {
        RECO_TYPE_WSTRING = 0,
        RECO_TYPE_WCHAR = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CHARACTER_RANGE;
    struct DYNAMIC_RENDERER_CACHED_DATA;
    struct DynamicRenderer;
    struct FLICK_DATA;
    struct FLICK_POINT;
    struct GESTURE_DATA;
    struct GestureRecognizer;
    struct HRECOALT;
    struct HRECOCONTEXT;
    struct HRECOGNIZER;
    struct HRECOLATTICE;
    struct HRECOWORDLIST;
    struct HandwrittenTextInsertion;
    struct IEC_GESTUREINFO;
    struct IEC_RECOGNITIONRESULTINFO;
    struct IEC_STROKEINFO;
    struct INKMETRIC;
    struct Ink;
    struct InkCollector;
    struct InkDisp;
    struct InkDivider;
    struct InkDrawingAttributes;
    struct InkEdit;
    struct InkOverlay;
    struct InkPicture;
    struct InkRecoGuide;
    struct InkRecognizerContext;
    struct InkRecognizerGuide;
    struct InkRecognizers;
    struct InkRectangle;
    struct InkRenderer;
    struct InkStrokes;
    struct InkTablets;
    struct InkTransform;
    struct InkWordList;
    struct LATTICE_METRICS;
    struct LINE_SEGMENT;
    struct MathInputControl;
    struct PACKET_DESCRIPTION;
    struct PACKET_PROPERTY;
    struct PROPERTY_METRICS;
    struct PenInputPanel;
    struct PenInputPanel_Internal;
    struct RECO_ATTRS;
    struct RECO_GUIDE;
    struct RECO_LATTICE;
    struct RECO_LATTICE_COLUMN;
    struct RECO_LATTICE_ELEMENT;
    struct RECO_LATTICE_PROPERTIES;
    struct RECO_LATTICE_PROPERTY;
    struct RECO_RANGE;
    struct RealTimeStylus;
    struct STROKE_RANGE;
    struct SYSTEM_EVENT_DATA;
    struct SketchInk;
    struct StrokeBuilder;
    struct StylusInfo;
    struct TextInputPanel;
    struct TipAutoCompleteClient;
    struct IDynamicRenderer;
    struct IGestureRecognizer;
    struct IHandwrittenTextInsertion;
    struct IInk;
    struct IInkCollector;
    struct IInkCursor;
    struct IInkCursorButton;
    struct IInkCursorButtons;
    struct IInkCursors;
    struct IInkCustomStrokes;
    struct IInkDisp;
    struct IInkDivider;
    struct IInkDivisionResult;
    struct IInkDivisionUnit;
    struct IInkDivisionUnits;
    struct IInkDrawingAttributes;
    struct IInkEdit;
    struct IInkExtendedProperties;
    struct IInkExtendedProperty;
    struct IInkGesture;
    struct IInkLineInfo;
    struct IInkOverlay;
    struct IInkPicture;
    struct IInkRecognitionAlternate;
    struct IInkRecognitionAlternates;
    struct IInkRecognitionResult;
    struct IInkRecognizer;
    struct IInkRecognizer2;
    struct IInkRecognizerContext;
    struct IInkRecognizerContext2;
    struct IInkRecognizerGuide;
    struct IInkRecognizers;
    struct IInkRectangle;
    struct IInkRenderer;
    struct IInkStrokeDisp;
    struct IInkStrokes;
    struct IInkTablet;
    struct IInkTablet2;
    struct IInkTablet3;
    struct IInkTablets;
    struct IInkTransform;
    struct IInkWordList;
    struct IInkWordList2;
    struct IInputPanelWindowHandle;
    struct IMathInputControl;
    struct IPenInputPanel;
    struct IRealTimeStylus;
    struct IRealTimeStylus2;
    struct IRealTimeStylus3;
    struct IRealTimeStylusSynchronization;
    struct ISketchInk;
    struct IStrokeBuilder;
    struct IStylusAsyncPlugin;
    struct IStylusPlugin;
    struct IStylusSyncPlugin;
    struct ITextInputPanel;
    struct ITextInputPanelEventSink;
    struct ITextInputPanelRunInfo;
    struct ITipAutoCompleteClient;
    struct ITipAutoCompleteProvider;
    struct _IInkCollectorEvents;
    struct _IInkEditEvents;
    struct _IInkEvents;
    struct _IInkOverlayEvents;
    struct _IInkPictureEvents;
    struct _IInkRecognitionEvents;
    struct _IInkStrokesEvents;
    struct _IMathInputControlEvents;
    struct _IPenInputPanelEvents;
#pragma endregion forward_declarations

#pragma region delegates
    using PfnRecoCallback = Windows::Win32::Foundation::HRESULT __stdcall(uint32_t, uint8_t*, Windows::Win32::UI::TabletPC::HRECOCONTEXT);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
