// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_AI_MachineLearning_DirectML_H
#define WIN32_Windows_Win32_AI_MachineLearning_DirectML_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.AI.MachineLearning.DirectML.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::AI::MachineLearning::DirectML
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DMLCreateDevice(win32::Windows::Win32::Graphics::Direct3D12::ID3D12Device* d3d12Device, win32::Windows::Win32::AI::MachineLearning::DirectML::DML_CREATE_DEVICE_FLAGS flags, ::win32::guid* riid, void** ppv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DMLCreateDevice1(win32::Windows::Win32::Graphics::Direct3D12::ID3D12Device* d3d12Device, win32::Windows::Win32::AI::MachineLearning::DirectML::DML_CREATE_DEVICE_FLAGS flags, win32::Windows::Win32::AI::MachineLearning::DirectML::DML_FEATURE_LEVEL minimumFeatureLevel, ::win32::guid* riid, void** ppv) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *DMLCreateDevice)(win32::Windows::Win32::Graphics::Direct3D12::ID3D12Device* d3d12Device, win32::Windows::Win32::AI::MachineLearning::DirectML::DML_CREATE_DEVICE_FLAGS flags, ::win32::guid* riid, void** ppv) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *DMLCreateDevice1)(win32::Windows::Win32::Graphics::Direct3D12::ID3D12Device* d3d12Device, win32::Windows::Win32::AI::MachineLearning::DirectML::DML_CREATE_DEVICE_FLAGS flags, win32::Windows::Win32::AI::MachineLearning::DirectML::DML_FEATURE_LEVEL minimumFeatureLevel, ::win32::guid* riid, void** ppv) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif