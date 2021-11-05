// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Media_PictureAcquisition_0_H
#define WIN32_Windows_Win32_Media_PictureAcquisition_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Media::PictureAcquisition
{
#pragma region enums
    enum class DEVICE_SELECTION_DEVICE_TYPE : int32_t
    {
        DST_UNKNOWN_DEVICE = 0,
        DST_WPD_DEVICE = 1,
        DST_WIA_DEVICE = 2,
        DST_STI_DEVICE = 3,
        DSF_TWAIN_DEVICE = 4,
        DST_FS_DEVICE = 5,
        DST_DV_DEVICE = 6,
    };
    enum class ERROR_ADVISE_MESSAGE_TYPE : int32_t
    {
        PHOTOACQUIRE_ERROR_SKIPRETRYCANCEL = 0,
        PHOTOACQUIRE_ERROR_RETRYCANCEL = 1,
        PHOTOACQUIRE_ERROR_YESNO = 2,
        PHOTOACQUIRE_ERROR_OK = 3,
    };
    enum class ERROR_ADVISE_RESULT : int32_t
    {
        PHOTOACQUIRE_RESULT_YES = 0,
        PHOTOACQUIRE_RESULT_NO = 1,
        PHOTOACQUIRE_RESULT_OK = 2,
        PHOTOACQUIRE_RESULT_SKIP = 3,
        PHOTOACQUIRE_RESULT_SKIP_ALL = 4,
        PHOTOACQUIRE_RESULT_RETRY = 5,
        PHOTOACQUIRE_RESULT_ABORT = 6,
    };
    enum class PROGRESS_DIALOG_CHECKBOX_ID : int32_t
    {
        PROGRESS_DIALOG_CHECKBOX_ID_DEFAULT = 0,
    };
    enum class PROGRESS_DIALOG_IMAGE_TYPE : int32_t
    {
        PROGRESS_DIALOG_ICON_SMALL = 0,
        PROGRESS_DIALOG_ICON_LARGE = 1,
        PROGRESS_DIALOG_ICON_THUMBNAIL = 2,
        PROGRESS_DIALOG_BITMAP_THUMBNAIL = 3,
    };
    enum class USER_INPUT_STRING_TYPE : int32_t
    {
        USER_INPUT_DEFAULT = 0,
        USER_INPUT_PATH_ELEMENT = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct PhotoAcquire;
    struct PhotoAcquireAutoPlayDropTarget;
    struct PhotoAcquireAutoPlayHWEventHandler;
    struct PhotoAcquireDeviceSelectionDialog;
    struct PhotoAcquireOptionsDialog;
    struct PhotoProgressDialog;
    struct IPhotoAcquire;
    struct IPhotoAcquireDeviceSelectionDialog;
    struct IPhotoAcquireItem;
    struct IPhotoAcquireOptionsDialog;
    struct IPhotoAcquirePlugin;
    struct IPhotoAcquireProgressCB;
    struct IPhotoAcquireSettings;
    struct IPhotoAcquireSource;
    struct IPhotoProgressActionCB;
    struct IPhotoProgressDialog;
    struct IUserInputString;
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
