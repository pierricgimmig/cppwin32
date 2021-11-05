// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_Input_0_H
#define WIN32_Windows_Win32_UI_Input_0_H
WIN32_EXPORT namespace win32::Windows::Win32::UI::Input
{
#pragma region enums
    enum class INPUT_MESSAGE_DEVICE_TYPE : int32_t
    {
        IMDT_UNAVAILABLE = 0,
        IMDT_KEYBOARD = 1,
        IMDT_MOUSE = 2,
        IMDT_TOUCH = 4,
        IMDT_PEN = 8,
        IMDT_TOUCHPAD = 16,
    };
    enum class INPUT_MESSAGE_ORIGIN_ID : int32_t
    {
        IMO_UNAVAILABLE = 0,
        IMO_HARDWARE = 1,
        IMO_INJECTED = 2,
        IMO_SYSTEM = 4,
    };
    enum class RAWINPUTDEVICE_FLAGS : uint32_t
    {
        RIDEV_REMOVE = 0x1,
        RIDEV_EXCLUDE = 0x10,
        RIDEV_PAGEONLY = 0x20,
        RIDEV_NOLEGACY = 0x30,
        RIDEV_INPUTSINK = 0x100,
        RIDEV_CAPTUREMOUSE = 0x200,
        RIDEV_NOHOTKEYS = 0x200,
        RIDEV_APPKEYS = 0x400,
        RIDEV_EXINPUTSINK = 0x1000,
        RIDEV_DEVNOTIFY = 0x2000,
    };
    enum class RAW_INPUT_DATA_COMMAND_FLAGS : uint32_t
    {
        RID_HEADER = 0x10000005,
        RID_INPUT = 0x10000003,
    };
    enum class RAW_INPUT_DEVICE_INFO_COMMAND : uint32_t
    {
        RIDI_PREPARSEDDATA = 0x20000005,
        RIDI_DEVICENAME = 0x20000007,
        RIDI_DEVICEINFO = 0x2000000b,
    };
    enum class RID_DEVICE_INFO_TYPE : uint32_t
    {
        RIM_TYPEMOUSE = 0x0,
        RIM_TYPEKEYBOARD = 0x1,
        RIM_TYPEHID = 0x2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct HRAWINPUT;
    struct INPUT_MESSAGE_SOURCE;
    struct RAWHID;
    struct RAWINPUT;
    struct RAWINPUTDEVICE;
    struct RAWINPUTDEVICELIST;
    struct RAWINPUTHEADER;
    struct RAWKEYBOARD;
    struct RAWMOUSE;
    struct RID_DEVICE_INFO;
    struct RID_DEVICE_INFO_HID;
    struct RID_DEVICE_INFO_KEYBOARD;
    struct RID_DEVICE_INFO_MOUSE;
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