// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_Direct3D12_H
#define WIN32_Windows_Win32_Graphics_Direct3D12_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Graphics.Direct3D12.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::Direct3D12
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12SerializeRootSignature(win32::Windows::Win32::Graphics::Direct3D12::D3D12_ROOT_SIGNATURE_DESC* pRootSignature, win32::Windows::Win32::Graphics::Direct3D12::D3D_ROOT_SIGNATURE_VERSION Version, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppBlob, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorBlob) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12CreateRootSignatureDeserializer(void* pSrcData, size_t SrcDataSizeInBytes, ::win32::guid* pRootSignatureDeserializerInterface, void** ppRootSignatureDeserializer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12SerializeVersionedRootSignature(win32::Windows::Win32::Graphics::Direct3D12::D3D12_VERSIONED_ROOT_SIGNATURE_DESC* pRootSignature, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppBlob, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorBlob) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12CreateVersionedRootSignatureDeserializer(void* pSrcData, size_t SrcDataSizeInBytes, ::win32::guid* pRootSignatureDeserializerInterface, void** ppRootSignatureDeserializer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12CreateDevice(win32::Windows::Win32::System::Com::IUnknown* pAdapter, win32::Windows::Win32::Graphics::Direct3D11::D3D_FEATURE_LEVEL MinimumFeatureLevel, ::win32::guid* riid, void** ppDevice) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12GetDebugInterface(::win32::guid* riid, void** ppvDebug) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12EnableExperimentalFeatures(uint32_t NumFeatures, ::win32::guid* pIIDs, void* pConfigurationStructs, uint32_t* pConfigurationStructSizes) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D12GetInterface(::win32::guid* rclsid, ::win32::guid* riid, void** ppvDebug) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D11On12CreateDevice(win32::Windows::Win32::System::Com::IUnknown* pDevice, uint32_t Flags, win32::Windows::Win32::Graphics::Direct3D11::D3D_FEATURE_LEVEL* pFeatureLevels, uint32_t FeatureLevels, win32::Windows::Win32::System::Com::IUnknown** ppCommandQueues, uint32_t NumQueues, uint32_t NodeMask, win32::Windows::Win32::Graphics::Direct3D11::ID3D11Device** ppDevice, win32::Windows::Win32::Graphics::Direct3D11::ID3D11DeviceContext** ppImmediateContext, win32::Windows::Win32::Graphics::Direct3D11::D3D_FEATURE_LEVEL* pChosenFeatureLevel) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_Direct3DCreate9On12Ex(uint32_t SDKVersion, win32::Windows::Win32::Graphics::Direct3D12::D3D9ON12_ARGS* pOverrideList, uint32_t NumOverrideEntries, win32::Windows::Win32::Graphics::Direct3D9::IDirect3D9Ex** ppOutputInterface) noexcept;
    win32::Windows::Win32::Graphics::Direct3D9::IDirect3D9* __stdcall ORBIT_IMPL_Direct3DCreate9On12(uint32_t SDKVersion, win32::Windows::Win32::Graphics::Direct3D12::D3D9ON12_ARGS* pOverrideList, uint32_t NumOverrideEntries) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_MFCreateD3D12SynchronizationObject(win32::Windows::Win32::Graphics::Direct3D12::ID3D12Device* pDevice, ::win32::guid* riid, void** ppvSyncObject) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12SerializeRootSignature)(win32::Windows::Win32::Graphics::Direct3D12::D3D12_ROOT_SIGNATURE_DESC* pRootSignature, win32::Windows::Win32::Graphics::Direct3D12::D3D_ROOT_SIGNATURE_VERSION Version, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppBlob, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorBlob) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12CreateRootSignatureDeserializer)(void* pSrcData, size_t SrcDataSizeInBytes, ::win32::guid* pRootSignatureDeserializerInterface, void** ppRootSignatureDeserializer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12SerializeVersionedRootSignature)(win32::Windows::Win32::Graphics::Direct3D12::D3D12_VERSIONED_ROOT_SIGNATURE_DESC* pRootSignature, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppBlob, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorBlob) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12CreateVersionedRootSignatureDeserializer)(void* pSrcData, size_t SrcDataSizeInBytes, ::win32::guid* pRootSignatureDeserializerInterface, void** ppRootSignatureDeserializer) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12CreateDevice)(win32::Windows::Win32::System::Com::IUnknown* pAdapter, win32::Windows::Win32::Graphics::Direct3D11::D3D_FEATURE_LEVEL MinimumFeatureLevel, ::win32::guid* riid, void** ppDevice) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12GetDebugInterface)(::win32::guid* riid, void** ppvDebug) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12EnableExperimentalFeatures)(uint32_t NumFeatures, ::win32::guid* pIIDs, void* pConfigurationStructs, uint32_t* pConfigurationStructSizes) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D12GetInterface)(::win32::guid* rclsid, ::win32::guid* riid, void** ppvDebug) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D3D11On12CreateDevice)(win32::Windows::Win32::System::Com::IUnknown* pDevice, uint32_t Flags, win32::Windows::Win32::Graphics::Direct3D11::D3D_FEATURE_LEVEL* pFeatureLevels, uint32_t FeatureLevels, win32::Windows::Win32::System::Com::IUnknown** ppCommandQueues, uint32_t NumQueues, uint32_t NodeMask, win32::Windows::Win32::Graphics::Direct3D11::ID3D11Device** ppDevice, win32::Windows::Win32::Graphics::Direct3D11::ID3D11DeviceContext** ppImmediateContext, win32::Windows::Win32::Graphics::Direct3D11::D3D_FEATURE_LEVEL* pChosenFeatureLevel) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *Direct3DCreate9On12Ex)(uint32_t SDKVersion, win32::Windows::Win32::Graphics::Direct3D12::D3D9ON12_ARGS* pOverrideList, uint32_t NumOverrideEntries, win32::Windows::Win32::Graphics::Direct3D9::IDirect3D9Ex** ppOutputInterface) noexcept;
    win32::Windows::Win32::Graphics::Direct3D9::IDirect3D9* (__stdcall *Direct3DCreate9On12)(uint32_t SDKVersion, win32::Windows::Win32::Graphics::Direct3D12::D3D9ON12_ARGS* pOverrideList, uint32_t NumOverrideEntries) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *MFCreateD3D12SynchronizationObject)(win32::Windows::Win32::Graphics::Direct3D12::ID3D12Device* pDevice, ::win32::guid* riid, void** ppvSyncObject) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
