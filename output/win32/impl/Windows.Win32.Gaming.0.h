// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Gaming_0_H
#define WIN32_Windows_Win32_Gaming_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Foundation
{
    struct HRESULT;
}
WIN32_EXPORT namespace win32::Windows::Win32::System::WinRT
{
    struct HSTRING;
}
WIN32_EXPORT namespace win32::Windows::Win32::Gaming
{
#pragma region enums
    enum class GAMESTATS_OPEN_RESULT : int32_t
    {
        GAMESTATS_OPEN_CREATED = 0,
        GAMESTATS_OPEN_OPENED = 1,
    };
    enum class GAMESTATS_OPEN_TYPE : int32_t
    {
        GAMESTATS_OPEN_OPENORCREATE = 0,
        GAMESTATS_OPEN_OPENONLY = 1,
    };
    enum class GAME_INSTALL_SCOPE : int32_t
    {
        GIS_NOT_INSTALLED = 1,
        GIS_CURRENT_USER = 2,
        GIS_ALL_USERS = 3,
    };
    enum class GAMING_DEVICE_DEVICE_ID : int32_t
    {
        GAMING_DEVICE_DEVICE_ID_NONE = 0,
        GAMING_DEVICE_DEVICE_ID_XBOX_ONE = 1988865574,
        GAMING_DEVICE_DEVICE_ID_XBOX_ONE_S = 712204761,
        GAMING_DEVICE_DEVICE_ID_XBOX_ONE_X = 1523980231,
        GAMING_DEVICE_DEVICE_ID_XBOX_ONE_X_DEVKIT = 284675555,
    };
    enum class GAMING_DEVICE_VENDOR_ID : int32_t
    {
        GAMING_DEVICE_VENDOR_ID_NONE = 0,
        GAMING_DEVICE_VENDOR_ID_MICROSOFT = -1024700366,
    };
    enum class KnownGamingPrivileges : int32_t
    {
        XPRIVILEGE_BROADCAST = 190,
        XPRIVILEGE_VIEW_FRIENDS_LIST = 197,
        XPRIVILEGE_GAME_DVR = 198,
        XPRIVILEGE_SHARE_KINECT_CONTENT = 199,
        XPRIVILEGE_MULTIPLAYER_PARTIES = 203,
        XPRIVILEGE_COMMUNICATION_VOICE_INGAME = 205,
        XPRIVILEGE_COMMUNICATION_VOICE_SKYPE = 206,
        XPRIVILEGE_CLOUD_GAMING_MANAGE_SESSION = 207,
        XPRIVILEGE_CLOUD_GAMING_JOIN_SESSION = 208,
        XPRIVILEGE_CLOUD_SAVED_GAMES = 209,
        XPRIVILEGE_SHARE_CONTENT = 211,
        XPRIVILEGE_PREMIUM_CONTENT = 214,
        XPRIVILEGE_SUBSCRIPTION_CONTENT = 219,
        XPRIVILEGE_SOCIAL_NETWORK_SHARING = 220,
        XPRIVILEGE_PREMIUM_VIDEO = 224,
        XPRIVILEGE_VIDEO_COMMUNICATIONS = 235,
        XPRIVILEGE_PURCHASE_CONTENT = 245,
        XPRIVILEGE_USER_CREATED_CONTENT = 247,
        XPRIVILEGE_PROFILE_VIEWING = 249,
        XPRIVILEGE_COMMUNICATIONS = 252,
        XPRIVILEGE_MULTIPLAYER_SESSIONS = 254,
        XPRIVILEGE_ADD_FRIEND = 255,
    };
    enum class XBL_IDP_AUTH_TOKEN_STATUS : int32_t
    {
        XBL_IDP_AUTH_TOKEN_STATUS_SUCCESS = 0,
        XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_SUCCESS = 1,
        XBL_IDP_AUTH_TOKEN_STATUS_NO_ACCOUNT_SET = 2,
        XBL_IDP_AUTH_TOKEN_STATUS_LOAD_MSA_ACCOUNT_FAILED = 3,
        XBL_IDP_AUTH_TOKEN_STATUS_XBOX_VETO = 4,
        XBL_IDP_AUTH_TOKEN_STATUS_MSA_INTERRUPT = 5,
        XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_NO_CONSENT = 6,
        XBL_IDP_AUTH_TOKEN_STATUS_VIEW_NOT_SET = 7,
        XBL_IDP_AUTH_TOKEN_STATUS_UNKNOWN = -1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct GAMING_DEVICE_MODEL_INFORMATION;
    struct GameExplorer;
    struct GameStatistics;
    struct XblIdpAuthManager;
    struct XblIdpAuthTokenResult;
    struct IGameExplorer;
    struct IGameExplorer2;
    struct IGameStatistics;
    struct IGameStatisticsMgr;
    struct IXblIdpAuthManager;
    struct IXblIdpAuthTokenResult;
    struct IXblIdpAuthTokenResult2;
#pragma endregion forward_declarations

#pragma region delegates
    using GameUICompletionRoutine = void __stdcall(Windows::Win32::Foundation::HRESULT, void*);
    using PlayerPickerUICompletionRoutine = void __stdcall(Windows::Win32::Foundation::HRESULT, void*, Windows::Win32::System::WinRT::HSTRING*, size_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
