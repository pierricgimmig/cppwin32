// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_DisplayDevices_H
#define WIN32_Windows_Win32_UI_DisplayDevices_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.UI.DisplayDevices.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::UI::DisplayDevices
{
#pragma region methods
extern "C"
{
    void* __stdcall ORBIT_IMPL_BRUSHOBJ_pvAllocRbrush(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, uint32_t cj) noexcept;
    void* __stdcall ORBIT_IMPL_BRUSHOBJ_pvGetRbrush(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo) noexcept;
    uint32_t __stdcall ORBIT_IMPL_BRUSHOBJ_ulGetBrushColor(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_BRUSHOBJ_hGetColorTransform(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo) noexcept;
    uint32_t __stdcall ORBIT_IMPL_CLIPOBJ_cEnumStart(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::Foundation::BOOL bAll, uint32_t iType, uint32_t iDirection, uint32_t cLimit) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_CLIPOBJ_bEnum(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, uint32_t cj, uint32_t* pul) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* __stdcall ORBIT_IMPL_CLIPOBJ_ppoGetPath(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco) noexcept;
    uint32_t __stdcall ORBIT_IMPL_FONTOBJ_cGetAllGlyphHandles(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t* phg) noexcept;
    void __stdcall ORBIT_IMPL_FONTOBJ_vGetInfo(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t cjSize, win32::Windows::Win32::UI::DisplayDevices::FONTINFO* pfi) noexcept;
    uint32_t __stdcall ORBIT_IMPL_FONTOBJ_cGetGlyphs(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t iMode, uint32_t cGlyph, uint32_t* phg, void** ppvGlyph) noexcept;
    win32::Windows::Win32::System::SystemServices::XFORMOBJ* __stdcall ORBIT_IMPL_FONTOBJ_pxoGetXform(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::IFIMETRICS* __stdcall ORBIT_IMPL_FONTOBJ_pifi(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::FD_GLYPHSET* __stdcall ORBIT_IMPL_FONTOBJ_pfdg(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo) noexcept;
    void* __stdcall ORBIT_IMPL_FONTOBJ_pvTrueTypeFontFile(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t* pcjFile) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::FD_GLYPHATTR* __stdcall ORBIT_IMPL_FONTOBJ_pQueryGlyphAttrs(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t iMode) noexcept;
    void __stdcall ORBIT_IMPL_PATHOBJ_vEnumStart(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_PATHOBJ_bEnum(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::PATHDATA* ppd) noexcept;
    void __stdcall ORBIT_IMPL_PATHOBJ_vEnumStartClipLines(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::LINEATTRS* pla) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_PATHOBJ_bEnumClipLines(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, uint32_t cb, win32::Windows::Win32::UI::DisplayDevices::CLIPLINE* pcl) noexcept;
    void __stdcall ORBIT_IMPL_PATHOBJ_vGetBounds(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::System::SystemServices::RECTFX* prectfx) noexcept;
    void __stdcall ORBIT_IMPL_STROBJ_vEnumStart(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_STROBJ_bEnum(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro, uint32_t* pc, win32::Windows::Win32::UI::DisplayDevices::GLYPHPOS** ppgpos) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_STROBJ_bEnumPositionsOnly(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro, uint32_t* pc, win32::Windows::Win32::UI::DisplayDevices::GLYPHPOS** ppgpos) noexcept;
    uint32_t __stdcall ORBIT_IMPL_STROBJ_dwGetCodePage(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_STROBJ_bGetAdvanceWidths(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pso, uint32_t iFirst, uint32_t c, win32::Windows::Win32::System::SystemServices::POINTQF* pptqD) noexcept;
    uint32_t __stdcall ORBIT_IMPL_XFORMOBJ_iGetXform(win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, win32::Windows::Win32::UI::DisplayDevices::XFORML* pxform) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_XFORMOBJ_bApplyXform(win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, uint32_t iMode, uint32_t cPoints, void* pvIn, void* pvOut) noexcept;
    uint32_t __stdcall ORBIT_IMPL_XLATEOBJ_iXlate(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, uint32_t iColor) noexcept;
    uint32_t* __stdcall ORBIT_IMPL_XLATEOBJ_piVector(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo) noexcept;
    uint32_t __stdcall ORBIT_IMPL_XLATEOBJ_cGetPalette(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, uint32_t iPal, uint32_t cPal, uint32_t* pPal) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_XLATEOBJ_hGetColorTransform(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo) noexcept;
    win32::Windows::Win32::Graphics::Gdi::HBITMAP __stdcall ORBIT_IMPL_EngCreateBitmap(win32::Windows::Win32::Foundation::SIZE sizl, int32_t lWidth, uint32_t iFormat, uint32_t fl, void* pvBits) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::HSURF __stdcall ORBIT_IMPL_EngCreateDeviceSurface(win32::Windows::Win32::System::SystemServices::DHSURF dhsurf, win32::Windows::Win32::Foundation::SIZE sizl, uint32_t iFormatCompat) noexcept;
    win32::Windows::Win32::Graphics::Gdi::HBITMAP __stdcall ORBIT_IMPL_EngCreateDeviceBitmap(win32::Windows::Win32::System::SystemServices::DHSURF dhsurf, win32::Windows::Win32::Foundation::SIZE sizl, uint32_t iFormatCompat) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngDeleteSurface(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* __stdcall ORBIT_IMPL_EngLockSurface(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf) noexcept;
    void __stdcall ORBIT_IMPL_EngUnlockSurface(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngEraseSurface(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::Foundation::RECTL* prcl, uint32_t iColor) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngAssociateSurface(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf, win32::Windows::Win32::System::SystemServices::HDEV hdev, uint32_t flHooks) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngMarkBandingSurface(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngCheckAbort(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso) noexcept;
    void __stdcall ORBIT_IMPL_EngDeletePath(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo) noexcept;
    win32::Windows::Win32::Graphics::Gdi::HPALETTE __stdcall ORBIT_IMPL_EngCreatePalette(uint32_t iMode, uint32_t cColors, uint32_t* pulColors, uint32_t flRed, uint32_t flGreen, uint32_t flBlue) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngDeletePalette(win32::Windows::Win32::Graphics::Gdi::HPALETTE hpal) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* __stdcall ORBIT_IMPL_EngCreateClip() noexcept;
    void __stdcall ORBIT_IMPL_EngDeleteClip(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngBitBlt(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoTrg, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMask, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclTrg, win32::Windows::Win32::Foundation::POINTL* pptlSrc, win32::Windows::Win32::Foundation::POINTL* pptlMask, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrush, uint32_t rop4) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngLineTo(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, int32_t x1, int32_t y1, int32_t x2, int32_t y2, win32::Windows::Win32::Foundation::RECTL* prclBounds, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngStretchBlt(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMask, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::COLORADJUSTMENT* pca, win32::Windows::Win32::Foundation::POINTL* pptlHTOrg, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::RECTL* prclSrc, win32::Windows::Win32::Foundation::POINTL* pptlMask, uint32_t iMode) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngStretchBltROP(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMask, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::COLORADJUSTMENT* pca, win32::Windows::Win32::Foundation::POINTL* pptlHTOrg, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::RECTL* prclSrc, win32::Windows::Win32::Foundation::POINTL* pptlMask, uint32_t iMode, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, uint32_t rop4) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngAlphaBlend(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::RECTL* prclSrc, win32::Windows::Win32::UI::DisplayDevices::BLENDOBJ* pBlendObj) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngGradientFill(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::TRIVERTEX* pVertex, uint32_t nVertex, void* pMesh, uint32_t nMesh, win32::Windows::Win32::Foundation::RECTL* prclExtents, win32::Windows::Win32::Foundation::POINTL* pptlDitherOrg, uint32_t ulMode) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngTransparentBlt(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDst, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclDst, win32::Windows::Win32::Foundation::RECTL* prclSrc, uint32_t TransColor, uint32_t bCalledFromBitBlt) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngTextOut(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro, win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::Foundation::RECTL* prclExtra, win32::Windows::Win32::Foundation::RECTL* prclOpaque, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboFore, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboOpaque, win32::Windows::Win32::Foundation::POINTL* pptlOrg, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngStrokePath(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, win32::Windows::Win32::UI::DisplayDevices::LINEATTRS* plineattrs, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngFillPath(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, uint32_t mix, uint32_t flOptions) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngStrokeAndFillPath(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboStroke, win32::Windows::Win32::UI::DisplayDevices::LINEATTRS* plineattrs, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboFill, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, uint32_t mixFill, uint32_t flOptions) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngPaint(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngCopyBits(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::POINTL* pptlSrc) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_EngPlgBlt(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoTrg, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMsk, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::COLORADJUSTMENT* pca, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, win32::Windows::Win32::System::SystemServices::POINTFIX* pptfx, win32::Windows::Win32::Foundation::RECTL* prcl, win32::Windows::Win32::Foundation::POINTL* pptl, uint32_t iMode) noexcept;
    int32_t __stdcall ORBIT_IMPL_HT_Get8BPPFormatPalette(win32::Windows::Win32::Graphics::Gdi::PALETTEENTRY* pPaletteEntry, uint16_t RedGamma, uint16_t GreenGamma, uint16_t BlueGamma) noexcept;
    int32_t __stdcall ORBIT_IMPL_HT_Get8BPPMaskPalette(win32::Windows::Win32::Graphics::Gdi::PALETTEENTRY* pPaletteEntry, win32::Windows::Win32::Foundation::BOOL Use8BPPMaskPal, uint8_t CMYMask, uint16_t RedGamma, uint16_t GreenGamma, uint16_t BlueGamma) noexcept;
    win32::Windows::Win32::Foundation::PWSTR __stdcall ORBIT_IMPL_EngGetPrinterDataFileName(win32::Windows::Win32::System::SystemServices::HDEV hdev) noexcept;
    win32::Windows::Win32::Foundation::PWSTR __stdcall ORBIT_IMPL_EngGetDriverName(win32::Windows::Win32::System::SystemServices::HDEV hdev) noexcept;
    win32::Windows::Win32::Foundation::HANDLE __stdcall ORBIT_IMPL_EngLoadModule(win32::Windows::Win32::Foundation::PWSTR pwsz) noexcept;
    void* __stdcall ORBIT_IMPL_EngFindResource(win32::Windows::Win32::Foundation::HANDLE h, int32_t iName, int32_t iType, uint32_t* pulSize) noexcept;
    void __stdcall ORBIT_IMPL_EngFreeModule(win32::Windows::Win32::Foundation::HANDLE h) noexcept;
    win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* __stdcall ORBIT_IMPL_EngCreateSemaphore() noexcept;
    void __stdcall ORBIT_IMPL_EngAcquireSemaphore(win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* hsem) noexcept;
    void __stdcall ORBIT_IMPL_EngReleaseSemaphore(win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* hsem) noexcept;
    void __stdcall ORBIT_IMPL_EngDeleteSemaphore(win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* hsem) noexcept;
    void __stdcall ORBIT_IMPL_EngMultiByteToUnicodeN(win32::Windows::Win32::Foundation::PWSTR UnicodeString, uint32_t MaxBytesInUnicodeString, uint32_t* BytesInUnicodeString, win32::Windows::Win32::Foundation::PSTR MultiByteString, uint32_t BytesInMultiByteString) noexcept;
    void __stdcall ORBIT_IMPL_EngUnicodeToMultiByteN(win32::Windows::Win32::Foundation::PSTR MultiByteString, uint32_t MaxBytesInMultiByteString, uint32_t* BytesInMultiByteString, win32::Windows::Win32::Foundation::PWSTR UnicodeString, uint32_t BytesInUnicodeString) noexcept;
    void __stdcall ORBIT_IMPL_EngQueryLocalTime(win32::Windows::Win32::UI::DisplayDevices::ENG_TIME_FIELDS* param0) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::FD_GLYPHSET* __stdcall ORBIT_IMPL_EngComputeGlyphSet(int32_t nCodePage, int32_t nFirstChar, int32_t cChars) noexcept;
    int32_t __stdcall ORBIT_IMPL_EngMultiByteToWideChar(uint32_t CodePage, win32::Windows::Win32::Foundation::PWSTR WideCharString, int32_t BytesInWideCharString, win32::Windows::Win32::Foundation::PSTR MultiByteString, int32_t BytesInMultiByteString) noexcept;
    int32_t __stdcall ORBIT_IMPL_EngWideCharToMultiByte(uint32_t CodePage, win32::Windows::Win32::Foundation::PWSTR WideCharString, int32_t BytesInWideCharString, win32::Windows::Win32::Foundation::PSTR MultiByteString, int32_t BytesInMultiByteString) noexcept;
    void __stdcall ORBIT_IMPL_EngGetCurrentCodePage(uint16_t* OemCodePage, uint16_t* AnsiCodePage) noexcept;
    int32_t __stdcall ORBIT_IMPL_GetDisplayConfigBufferSizes(uint32_t flags, uint32_t* numPathArrayElements, uint32_t* numModeInfoArrayElements) noexcept;
    int32_t __stdcall ORBIT_IMPL_SetDisplayConfig(uint32_t numPathArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_PATH_INFO* pathArray, uint32_t numModeInfoArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_MODE_INFO* modeInfoArray, uint32_t flags) noexcept;
    int32_t __stdcall ORBIT_IMPL_QueryDisplayConfig(uint32_t flags, uint32_t* numPathArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_PATH_INFO* pathArray, uint32_t* numModeInfoArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_MODE_INFO* modeInfoArray, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_TOPOLOGY_ID* currentTopologyId) noexcept;
    int32_t __stdcall ORBIT_IMPL_DisplayConfigGetDeviceInfo(win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_DEVICE_INFO_HEADER* requestPacket) noexcept;
    int32_t __stdcall ORBIT_IMPL_DisplayConfigSetDeviceInfo(win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_DEVICE_INFO_HEADER* setPacket) noexcept;
}

struct ApiTable {
    void* (__stdcall *BRUSHOBJ_pvAllocRbrush)(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, uint32_t cj) noexcept;
    void* (__stdcall *BRUSHOBJ_pvGetRbrush)(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo) noexcept;
    uint32_t (__stdcall *BRUSHOBJ_ulGetBrushColor)(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *BRUSHOBJ_hGetColorTransform)(win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo) noexcept;
    uint32_t (__stdcall *CLIPOBJ_cEnumStart)(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::Foundation::BOOL bAll, uint32_t iType, uint32_t iDirection, uint32_t cLimit) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *CLIPOBJ_bEnum)(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, uint32_t cj, uint32_t* pul) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* (__stdcall *CLIPOBJ_ppoGetPath)(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco) noexcept;
    uint32_t (__stdcall *FONTOBJ_cGetAllGlyphHandles)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t* phg) noexcept;
    void (__stdcall *FONTOBJ_vGetInfo)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t cjSize, win32::Windows::Win32::UI::DisplayDevices::FONTINFO* pfi) noexcept;
    uint32_t (__stdcall *FONTOBJ_cGetGlyphs)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t iMode, uint32_t cGlyph, uint32_t* phg, void** ppvGlyph) noexcept;
    win32::Windows::Win32::System::SystemServices::XFORMOBJ* (__stdcall *FONTOBJ_pxoGetXform)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::IFIMETRICS* (__stdcall *FONTOBJ_pifi)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::FD_GLYPHSET* (__stdcall *FONTOBJ_pfdg)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo) noexcept;
    void* (__stdcall *FONTOBJ_pvTrueTypeFontFile)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t* pcjFile) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::FD_GLYPHATTR* (__stdcall *FONTOBJ_pQueryGlyphAttrs)(win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, uint32_t iMode) noexcept;
    void (__stdcall *PATHOBJ_vEnumStart)(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *PATHOBJ_bEnum)(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::PATHDATA* ppd) noexcept;
    void (__stdcall *PATHOBJ_vEnumStartClipLines)(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::LINEATTRS* pla) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *PATHOBJ_bEnumClipLines)(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, uint32_t cb, win32::Windows::Win32::UI::DisplayDevices::CLIPLINE* pcl) noexcept;
    void (__stdcall *PATHOBJ_vGetBounds)(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::System::SystemServices::RECTFX* prectfx) noexcept;
    void (__stdcall *STROBJ_vEnumStart)(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *STROBJ_bEnum)(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro, uint32_t* pc, win32::Windows::Win32::UI::DisplayDevices::GLYPHPOS** ppgpos) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *STROBJ_bEnumPositionsOnly)(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro, uint32_t* pc, win32::Windows::Win32::UI::DisplayDevices::GLYPHPOS** ppgpos) noexcept;
    uint32_t (__stdcall *STROBJ_dwGetCodePage)(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *STROBJ_bGetAdvanceWidths)(win32::Windows::Win32::UI::DisplayDevices::STROBJ* pso, uint32_t iFirst, uint32_t c, win32::Windows::Win32::System::SystemServices::POINTQF* pptqD) noexcept;
    uint32_t (__stdcall *XFORMOBJ_iGetXform)(win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, win32::Windows::Win32::UI::DisplayDevices::XFORML* pxform) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *XFORMOBJ_bApplyXform)(win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, uint32_t iMode, uint32_t cPoints, void* pvIn, void* pvOut) noexcept;
    uint32_t (__stdcall *XLATEOBJ_iXlate)(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, uint32_t iColor) noexcept;
    uint32_t* (__stdcall *XLATEOBJ_piVector)(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo) noexcept;
    uint32_t (__stdcall *XLATEOBJ_cGetPalette)(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, uint32_t iPal, uint32_t cPal, uint32_t* pPal) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *XLATEOBJ_hGetColorTransform)(win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo) noexcept;
    win32::Windows::Win32::Graphics::Gdi::HBITMAP (__stdcall *EngCreateBitmap)(win32::Windows::Win32::Foundation::SIZE sizl, int32_t lWidth, uint32_t iFormat, uint32_t fl, void* pvBits) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::HSURF (__stdcall *EngCreateDeviceSurface)(win32::Windows::Win32::System::SystemServices::DHSURF dhsurf, win32::Windows::Win32::Foundation::SIZE sizl, uint32_t iFormatCompat) noexcept;
    win32::Windows::Win32::Graphics::Gdi::HBITMAP (__stdcall *EngCreateDeviceBitmap)(win32::Windows::Win32::System::SystemServices::DHSURF dhsurf, win32::Windows::Win32::Foundation::SIZE sizl, uint32_t iFormatCompat) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngDeleteSurface)(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* (__stdcall *EngLockSurface)(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf) noexcept;
    void (__stdcall *EngUnlockSurface)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngEraseSurface)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::Foundation::RECTL* prcl, uint32_t iColor) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngAssociateSurface)(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf, win32::Windows::Win32::System::SystemServices::HDEV hdev, uint32_t flHooks) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngMarkBandingSurface)(win32::Windows::Win32::UI::DisplayDevices::HSURF hsurf) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngCheckAbort)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso) noexcept;
    void (__stdcall *EngDeletePath)(win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo) noexcept;
    win32::Windows::Win32::Graphics::Gdi::HPALETTE (__stdcall *EngCreatePalette)(uint32_t iMode, uint32_t cColors, uint32_t* pulColors, uint32_t flRed, uint32_t flGreen, uint32_t flBlue) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngDeletePalette)(win32::Windows::Win32::Graphics::Gdi::HPALETTE hpal) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* (__stdcall *EngCreateClip)() noexcept;
    void (__stdcall *EngDeleteClip)(win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngBitBlt)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoTrg, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMask, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclTrg, win32::Windows::Win32::Foundation::POINTL* pptlSrc, win32::Windows::Win32::Foundation::POINTL* pptlMask, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrush, uint32_t rop4) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngLineTo)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, int32_t x1, int32_t y1, int32_t x2, int32_t y2, win32::Windows::Win32::Foundation::RECTL* prclBounds, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngStretchBlt)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMask, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::COLORADJUSTMENT* pca, win32::Windows::Win32::Foundation::POINTL* pptlHTOrg, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::RECTL* prclSrc, win32::Windows::Win32::Foundation::POINTL* pptlMask, uint32_t iMode) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngStretchBltROP)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMask, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::COLORADJUSTMENT* pca, win32::Windows::Win32::Foundation::POINTL* pptlHTOrg, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::RECTL* prclSrc, win32::Windows::Win32::Foundation::POINTL* pptlMask, uint32_t iMode, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, uint32_t rop4) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngAlphaBlend)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::RECTL* prclSrc, win32::Windows::Win32::UI::DisplayDevices::BLENDOBJ* pBlendObj) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngGradientFill)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::TRIVERTEX* pVertex, uint32_t nVertex, void* pMesh, uint32_t nMesh, win32::Windows::Win32::Foundation::RECTL* prclExtents, win32::Windows::Win32::Foundation::POINTL* pptlDitherOrg, uint32_t ulMode) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngTransparentBlt)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDst, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclDst, win32::Windows::Win32::Foundation::RECTL* prclSrc, uint32_t TransColor, uint32_t bCalledFromBitBlt) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngTextOut)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::STROBJ* pstro, win32::Windows::Win32::UI::DisplayDevices::FONTOBJ* pfo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::Foundation::RECTL* prclExtra, win32::Windows::Win32::Foundation::RECTL* prclOpaque, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboFore, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboOpaque, win32::Windows::Win32::Foundation::POINTL* pptlOrg, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngStrokePath)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, win32::Windows::Win32::UI::DisplayDevices::LINEATTRS* plineattrs, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngFillPath)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, uint32_t mix, uint32_t flOptions) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngStrokeAndFillPath)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::PATHOBJ* ppo, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::System::SystemServices::XFORMOBJ* pxo, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboStroke, win32::Windows::Win32::UI::DisplayDevices::LINEATTRS* plineattrs, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pboFill, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, uint32_t mixFill, uint32_t flOptions) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngPaint)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* pso, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::BRUSHOBJ* pbo, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, uint32_t mix) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngCopyBits)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoDest, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Foundation::RECTL* prclDest, win32::Windows::Win32::Foundation::POINTL* pptlSrc) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *EngPlgBlt)(win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoTrg, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoSrc, win32::Windows::Win32::UI::DisplayDevices::SURFOBJ* psoMsk, win32::Windows::Win32::UI::DisplayDevices::CLIPOBJ* pco, win32::Windows::Win32::UI::DisplayDevices::XLATEOBJ* pxlo, win32::Windows::Win32::Graphics::Gdi::COLORADJUSTMENT* pca, win32::Windows::Win32::Foundation::POINTL* pptlBrushOrg, win32::Windows::Win32::System::SystemServices::POINTFIX* pptfx, win32::Windows::Win32::Foundation::RECTL* prcl, win32::Windows::Win32::Foundation::POINTL* pptl, uint32_t iMode) noexcept;
    int32_t (__stdcall *HT_Get8BPPFormatPalette)(win32::Windows::Win32::Graphics::Gdi::PALETTEENTRY* pPaletteEntry, uint16_t RedGamma, uint16_t GreenGamma, uint16_t BlueGamma) noexcept;
    int32_t (__stdcall *HT_Get8BPPMaskPalette)(win32::Windows::Win32::Graphics::Gdi::PALETTEENTRY* pPaletteEntry, win32::Windows::Win32::Foundation::BOOL Use8BPPMaskPal, uint8_t CMYMask, uint16_t RedGamma, uint16_t GreenGamma, uint16_t BlueGamma) noexcept;
    win32::Windows::Win32::Foundation::PWSTR (__stdcall *EngGetPrinterDataFileName)(win32::Windows::Win32::System::SystemServices::HDEV hdev) noexcept;
    win32::Windows::Win32::Foundation::PWSTR (__stdcall *EngGetDriverName)(win32::Windows::Win32::System::SystemServices::HDEV hdev) noexcept;
    win32::Windows::Win32::Foundation::HANDLE (__stdcall *EngLoadModule)(win32::Windows::Win32::Foundation::PWSTR pwsz) noexcept;
    void* (__stdcall *EngFindResource)(win32::Windows::Win32::Foundation::HANDLE h, int32_t iName, int32_t iType, uint32_t* pulSize) noexcept;
    void (__stdcall *EngFreeModule)(win32::Windows::Win32::Foundation::HANDLE h) noexcept;
    win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* (__stdcall *EngCreateSemaphore)() noexcept;
    void (__stdcall *EngAcquireSemaphore)(win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* hsem) noexcept;
    void (__stdcall *EngReleaseSemaphore)(win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* hsem) noexcept;
    void (__stdcall *EngDeleteSemaphore)(win32::Windows::Win32::System::SystemServices::HSEMAPHORE__* hsem) noexcept;
    void (__stdcall *EngMultiByteToUnicodeN)(win32::Windows::Win32::Foundation::PWSTR UnicodeString, uint32_t MaxBytesInUnicodeString, uint32_t* BytesInUnicodeString, win32::Windows::Win32::Foundation::PSTR MultiByteString, uint32_t BytesInMultiByteString) noexcept;
    void (__stdcall *EngUnicodeToMultiByteN)(win32::Windows::Win32::Foundation::PSTR MultiByteString, uint32_t MaxBytesInMultiByteString, uint32_t* BytesInMultiByteString, win32::Windows::Win32::Foundation::PWSTR UnicodeString, uint32_t BytesInUnicodeString) noexcept;
    void (__stdcall *EngQueryLocalTime)(win32::Windows::Win32::UI::DisplayDevices::ENG_TIME_FIELDS* param0) noexcept;
    win32::Windows::Win32::UI::DisplayDevices::FD_GLYPHSET* (__stdcall *EngComputeGlyphSet)(int32_t nCodePage, int32_t nFirstChar, int32_t cChars) noexcept;
    int32_t (__stdcall *EngMultiByteToWideChar)(uint32_t CodePage, win32::Windows::Win32::Foundation::PWSTR WideCharString, int32_t BytesInWideCharString, win32::Windows::Win32::Foundation::PSTR MultiByteString, int32_t BytesInMultiByteString) noexcept;
    int32_t (__stdcall *EngWideCharToMultiByte)(uint32_t CodePage, win32::Windows::Win32::Foundation::PWSTR WideCharString, int32_t BytesInWideCharString, win32::Windows::Win32::Foundation::PSTR MultiByteString, int32_t BytesInMultiByteString) noexcept;
    void (__stdcall *EngGetCurrentCodePage)(uint16_t* OemCodePage, uint16_t* AnsiCodePage) noexcept;
    int32_t (__stdcall *GetDisplayConfigBufferSizes)(uint32_t flags, uint32_t* numPathArrayElements, uint32_t* numModeInfoArrayElements) noexcept;
    int32_t (__stdcall *SetDisplayConfig)(uint32_t numPathArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_PATH_INFO* pathArray, uint32_t numModeInfoArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_MODE_INFO* modeInfoArray, uint32_t flags) noexcept;
    int32_t (__stdcall *QueryDisplayConfig)(uint32_t flags, uint32_t* numPathArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_PATH_INFO* pathArray, uint32_t* numModeInfoArrayElements, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_MODE_INFO* modeInfoArray, win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_TOPOLOGY_ID* currentTopologyId) noexcept;
    int32_t (__stdcall *DisplayConfigGetDeviceInfo)(win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_DEVICE_INFO_HEADER* requestPacket) noexcept;
    int32_t (__stdcall *DisplayConfigSetDeviceInfo)(win32::Windows::Win32::UI::DisplayDevices::DISPLAYCONFIG_DEVICE_INFO_HEADER* setPacket) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
