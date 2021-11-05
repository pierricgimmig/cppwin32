// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Media_Streaming_0_H
#define WIN32_Windows_Win32_Media_Streaming_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Media::Streaming
{
#pragma region enums
    enum class MF_MEDIASOURCE_STATUS_INFO : int32_t
    {
        MF_MEDIASOURCE_STATUS_INFO_FULLYSUPPORTED = 0,
        MF_MEDIASOURCE_STATUS_INFO_UNKNOWN = 1,
    };
    enum class MF_TRANSFER_VIDEO_FRAME_FLAGS : int32_t
    {
        MF_TRANSFER_VIDEO_FRAME_DEFAULT = 0,
        MF_TRANSFER_VIDEO_FRAME_STRETCH = 1,
        MF_TRANSFER_VIDEO_FRAME_IGNORE_PAR = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CapturedMetadataExposureCompensation;
    struct CapturedMetadataISOGains;
    struct CapturedMetadataWhiteBalanceGains;
    struct FaceCharacterization;
    struct FaceCharacterizationBlobHeader;
    struct FaceRectInfo;
    struct FaceRectInfoBlobHeader;
    struct HistogramBlobHeader;
    struct HistogramDataHeader;
    struct HistogramGrid;
    struct HistogramHeader;
    struct MetadataTimeStamps;
    struct IMFDeviceTransform;
    struct IMFDeviceTransformCallback;
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