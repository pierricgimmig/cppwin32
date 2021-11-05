// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Diagnostics_ProcessSnapshotting_H
#define WIN32_Windows_Win32_System_Diagnostics_ProcessSnapshotting_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.System.Diagnostics.ProcessSnapshotting.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting
{
#pragma region methods
extern "C"
{
    uint32_t __stdcall ORBIT_IMPL_PssCaptureSnapshot(win32::Windows::Win32::Foundation::HANDLE ProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_CAPTURE_FLAGS CaptureFlags, uint32_t ThreadContextFlags, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS* SnapshotHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssFreeSnapshot(win32::Windows::Win32::Foundation::HANDLE ProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssQuerySnapshot(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_QUERY_INFORMATION_CLASS InformationClass, void* Buffer, uint32_t BufferLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssWalkSnapshot(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_WALK_INFORMATION_CLASS InformationClass, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle, void* Buffer, uint32_t BufferLength) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssDuplicateSnapshot(win32::Windows::Win32::Foundation::HANDLE SourceProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle, win32::Windows::Win32::Foundation::HANDLE TargetProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS* TargetSnapshotHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_DUPLICATE_FLAGS Flags) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssWalkMarkerCreate(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_ALLOCATOR* Allocator, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK* WalkMarkerHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssWalkMarkerFree(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssWalkMarkerGetPosition(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle, size_t* Position) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssWalkMarkerSetPosition(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle, size_t Position) noexcept;
    uint32_t __stdcall ORBIT_IMPL_PssWalkMarkerSeekToBeginning(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle) noexcept;
}

struct ApiTable {
    uint32_t (__stdcall *PssCaptureSnapshot)(win32::Windows::Win32::Foundation::HANDLE ProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_CAPTURE_FLAGS CaptureFlags, uint32_t ThreadContextFlags, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS* SnapshotHandle) noexcept;
    uint32_t (__stdcall *PssFreeSnapshot)(win32::Windows::Win32::Foundation::HANDLE ProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle) noexcept;
    uint32_t (__stdcall *PssQuerySnapshot)(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_QUERY_INFORMATION_CLASS InformationClass, void* Buffer, uint32_t BufferLength) noexcept;
    uint32_t (__stdcall *PssWalkSnapshot)(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_WALK_INFORMATION_CLASS InformationClass, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle, void* Buffer, uint32_t BufferLength) noexcept;
    uint32_t (__stdcall *PssDuplicateSnapshot)(win32::Windows::Win32::Foundation::HANDLE SourceProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS SnapshotHandle, win32::Windows::Win32::Foundation::HANDLE TargetProcessHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSS* TargetSnapshotHandle, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_DUPLICATE_FLAGS Flags) noexcept;
    uint32_t (__stdcall *PssWalkMarkerCreate)(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::PSS_ALLOCATOR* Allocator, win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK* WalkMarkerHandle) noexcept;
    uint32_t (__stdcall *PssWalkMarkerFree)(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle) noexcept;
    uint32_t (__stdcall *PssWalkMarkerGetPosition)(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle, size_t* Position) noexcept;
    uint32_t (__stdcall *PssWalkMarkerSetPosition)(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle, size_t Position) noexcept;
    uint32_t (__stdcall *PssWalkMarkerSeekToBeginning)(win32::Windows::Win32::System::Diagnostics::ProcessSnapshotting::HPSSWALK WalkMarkerHandle) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif