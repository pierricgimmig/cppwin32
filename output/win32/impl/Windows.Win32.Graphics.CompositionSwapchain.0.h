// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_CompositionSwapchain_0_H
#define WIN32_Windows_Win32_Graphics_CompositionSwapchain_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::CompositionSwapchain
{
#pragma region enums
    enum class CompositionFrameInstanceKind : int32_t
    {
        CompositionFrameInstanceKind_ComposedOnScreen = 0,
        CompositionFrameInstanceKind_ScanoutOnScreen = 1,
        CompositionFrameInstanceKind_ComposedToIntermediate = 2,
    };
    enum class PresentStatisticsKind : int32_t
    {
        PresentStatisticsKind_PresentStatus = 1,
        PresentStatisticsKind_CompositionFrame = 2,
        PresentStatisticsKind_IndependentFlipFrame = 3,
    };
    enum class PresentStatus : int32_t
    {
        PresentStatus_Queued = 0,
        PresentStatus_Skipped = 1,
        PresentStatus_Canceled = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CompositionFrameDisplayInstance;
    struct PresentationTransform;
    struct SystemInterruptTime;
    struct ICompositionFramePresentStatistics;
    struct IIndependentFlipFramePresentStatistics;
    struct IPresentStatistics;
    struct IPresentStatusPresentStatistics;
    struct IPresentationBuffer;
    struct IPresentationContent;
    struct IPresentationFactory;
    struct IPresentationManager;
    struct IPresentationSurface;
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