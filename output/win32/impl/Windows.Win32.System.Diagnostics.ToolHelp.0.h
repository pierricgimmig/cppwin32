// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Diagnostics_ToolHelp_0_H
#define WIN32_Windows_Win32_System_Diagnostics_ToolHelp_0_H
WIN32_EXPORT namespace win32::Windows::Win32::System::Diagnostics::ToolHelp
{
#pragma region enums
    enum class CREATE_TOOLHELP_SNAPSHOT_FLAGS : uint32_t
    {
        TH32CS_INHERIT = 0x80000000,
        TH32CS_SNAPALL = 0xf,
        TH32CS_SNAPHEAPLIST = 0x1,
        TH32CS_SNAPMODULE = 0x8,
        TH32CS_SNAPMODULE32 = 0x10,
        TH32CS_SNAPPROCESS = 0x2,
        TH32CS_SNAPTHREAD = 0x4,
    };
    enum class HEAPENTRY32_FLAGS : uint32_t
    {
        LF32_FIXED = 0x1,
        LF32_FREE = 0x2,
        LF32_MOVEABLE = 0x4,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct HEAPENTRY32;
    struct HEAPLIST32;
    struct MODULEENTRY32;
    struct MODULEENTRY32W;
    struct PROCESSENTRY32;
    struct PROCESSENTRY32W;
    struct THREADENTRY32;
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
