// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_Direct3D10_2_H
#define WIN32_Windows_Win32_Graphics_Direct3D10_2_H
#include "win32/Windows.Win32.Graphics.Direct3D10.h"
#include "win32/impl/Windows.Win32.Graphics.Direct3D10.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::Direct3D10
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateDevice(win32::Windows::Win32::Graphics::Dxgi::IDXGIAdapter* pAdapter, win32::Windows::Win32::Graphics::Direct3D10::D3D10_DRIVER_TYPE DriverType, win32::Windows::Win32::Foundation::HINSTANCE Software, uint32_t Flags, uint32_t SDKVersion, win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device** ppDevice) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAdapter);
        ORBIT_TRACK_PARAM(DriverType);
        ORBIT_TRACK_PARAM(Software);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(SDKVersion);
        ORBIT_TRACK_PARAM(ppDevice);

        auto win32_impl_result = g_api_table.D3D10CreateDevice(pAdapter, DriverType, Software, Flags, SDKVersion, ppDevice);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateDeviceAndSwapChain(win32::Windows::Win32::Graphics::Dxgi::IDXGIAdapter* pAdapter, win32::Windows::Win32::Graphics::Direct3D10::D3D10_DRIVER_TYPE DriverType, win32::Windows::Win32::Foundation::HINSTANCE Software, uint32_t Flags, uint32_t SDKVersion, win32::Windows::Win32::Graphics::Dxgi::DXGI_SWAP_CHAIN_DESC* pSwapChainDesc, win32::Windows::Win32::Graphics::Dxgi::IDXGISwapChain** ppSwapChain, win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device** ppDevice) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAdapter);
        ORBIT_TRACK_PARAM(DriverType);
        ORBIT_TRACK_PARAM(Software);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(SDKVersion);
        ORBIT_TRACK_PARAM(pSwapChainDesc);
        ORBIT_TRACK_PARAM(ppSwapChain);
        ORBIT_TRACK_PARAM(ppDevice);

        auto win32_impl_result = g_api_table.D3D10CreateDeviceAndSwapChain(pAdapter, DriverType, Software, Flags, SDKVersion, pSwapChainDesc, ppSwapChain, ppDevice);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateBlob(size_t NumBytes, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppBuffer) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(NumBytes);
        ORBIT_TRACK_PARAM(ppBuffer);

        auto win32_impl_result = g_api_table.D3D10CreateBlob(NumBytes, ppBuffer);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CompileShader(win32::Windows::Win32::Foundation::PSTR pSrcData, size_t SrcDataSize, win32::Windows::Win32::Foundation::PSTR pFileName, win32::Windows::Win32::Graphics::Direct3D11::D3D_SHADER_MACRO* pDefines, win32::Windows::Win32::Graphics::Direct3D11::ID3DInclude* pInclude, win32::Windows::Win32::Foundation::PSTR pFunctionName, win32::Windows::Win32::Foundation::PSTR pProfile, uint32_t Flags, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppShader, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorMsgs) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(pFileName);
        ORBIT_TRACK_PARAM(pDefines);
        ORBIT_TRACK_PARAM(pInclude);
        ORBIT_TRACK_PARAM(pFunctionName);
        ORBIT_TRACK_PARAM(pProfile);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(ppShader);
        ORBIT_TRACK_PARAM(ppErrorMsgs);

        auto win32_impl_result = g_api_table.D3D10CompileShader(pSrcData, SrcDataSize, pFileName, pDefines, pInclude, pFunctionName, pProfile, Flags, ppShader, ppErrorMsgs);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10DisassembleShader(void* pShader, size_t BytecodeLength, win32::Windows::Win32::Foundation::BOOL EnableColorCode, win32::Windows::Win32::Foundation::PSTR pComments, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppDisassembly) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pShader);
        ORBIT_TRACK_PARAM(BytecodeLength);
        ORBIT_TRACK_PARAM(EnableColorCode);
        ORBIT_TRACK_PARAM(pComments);
        ORBIT_TRACK_PARAM(ppDisassembly);

        auto win32_impl_result = g_api_table.D3D10DisassembleShader(pShader, BytecodeLength, EnableColorCode, pComments, ppDisassembly);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PSTR __stdcall ORBIT_IMPL_D3D10GetPixelShaderProfile(win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device* pDevice) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pDevice);

        auto win32_impl_result = g_api_table.D3D10GetPixelShaderProfile(pDevice);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PSTR __stdcall ORBIT_IMPL_D3D10GetVertexShaderProfile(win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device* pDevice) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pDevice);

        auto win32_impl_result = g_api_table.D3D10GetVertexShaderProfile(pDevice);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PSTR __stdcall ORBIT_IMPL_D3D10GetGeometryShaderProfile(win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device* pDevice) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pDevice);

        auto win32_impl_result = g_api_table.D3D10GetGeometryShaderProfile(pDevice);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10ReflectShader(void* pShaderBytecode, size_t BytecodeLength, win32::Windows::Win32::Graphics::Direct3D10::ID3D10ShaderReflection** ppReflector) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pShaderBytecode);
        ORBIT_TRACK_PARAM(BytecodeLength);
        ORBIT_TRACK_PARAM(ppReflector);

        auto win32_impl_result = g_api_table.D3D10ReflectShader(pShaderBytecode, BytecodeLength, ppReflector);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10PreprocessShader(win32::Windows::Win32::Foundation::PSTR pSrcData, size_t SrcDataSize, win32::Windows::Win32::Foundation::PSTR pFileName, win32::Windows::Win32::Graphics::Direct3D11::D3D_SHADER_MACRO* pDefines, win32::Windows::Win32::Graphics::Direct3D11::ID3DInclude* pInclude, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppShaderText, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorMsgs) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(pFileName);
        ORBIT_TRACK_PARAM(pDefines);
        ORBIT_TRACK_PARAM(pInclude);
        ORBIT_TRACK_PARAM(ppShaderText);
        ORBIT_TRACK_PARAM(ppErrorMsgs);

        auto win32_impl_result = g_api_table.D3D10PreprocessShader(pSrcData, SrcDataSize, pFileName, pDefines, pInclude, ppShaderText, ppErrorMsgs);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10GetInputSignatureBlob(void* pShaderBytecode, size_t BytecodeLength, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppSignatureBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pShaderBytecode);
        ORBIT_TRACK_PARAM(BytecodeLength);
        ORBIT_TRACK_PARAM(ppSignatureBlob);

        auto win32_impl_result = g_api_table.D3D10GetInputSignatureBlob(pShaderBytecode, BytecodeLength, ppSignatureBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10GetOutputSignatureBlob(void* pShaderBytecode, size_t BytecodeLength, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppSignatureBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pShaderBytecode);
        ORBIT_TRACK_PARAM(BytecodeLength);
        ORBIT_TRACK_PARAM(ppSignatureBlob);

        auto win32_impl_result = g_api_table.D3D10GetOutputSignatureBlob(pShaderBytecode, BytecodeLength, ppSignatureBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10GetInputAndOutputSignatureBlob(void* pShaderBytecode, size_t BytecodeLength, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppSignatureBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pShaderBytecode);
        ORBIT_TRACK_PARAM(BytecodeLength);
        ORBIT_TRACK_PARAM(ppSignatureBlob);

        auto win32_impl_result = g_api_table.D3D10GetInputAndOutputSignatureBlob(pShaderBytecode, BytecodeLength, ppSignatureBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10GetShaderDebugInfo(void* pShaderBytecode, size_t BytecodeLength, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppDebugInfo) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pShaderBytecode);
        ORBIT_TRACK_PARAM(BytecodeLength);
        ORBIT_TRACK_PARAM(ppDebugInfo);

        auto win32_impl_result = g_api_table.D3D10GetShaderDebugInfo(pShaderBytecode, BytecodeLength, ppDebugInfo);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10StateBlockMaskUnion(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pA, win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pB, win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pResult) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pA);
        ORBIT_TRACK_PARAM(pB);
        ORBIT_TRACK_PARAM(pResult);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskUnion(pA, pB, pResult);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10StateBlockMaskIntersect(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pA, win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pB, win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pResult) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pA);
        ORBIT_TRACK_PARAM(pB);
        ORBIT_TRACK_PARAM(pResult);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskIntersect(pA, pB, pResult);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10StateBlockMaskDifference(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pA, win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pB, win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pResult) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pA);
        ORBIT_TRACK_PARAM(pB);
        ORBIT_TRACK_PARAM(pResult);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskDifference(pA, pB, pResult);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10StateBlockMaskEnableCapture(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pMask, win32::Windows::Win32::Graphics::Direct3D10::D3D10_DEVICE_STATE_TYPES StateType, uint32_t RangeStart, uint32_t RangeLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMask);
        ORBIT_TRACK_PARAM(StateType);
        ORBIT_TRACK_PARAM(RangeStart);
        ORBIT_TRACK_PARAM(RangeLength);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskEnableCapture(pMask, StateType, RangeStart, RangeLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10StateBlockMaskDisableCapture(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pMask, win32::Windows::Win32::Graphics::Direct3D10::D3D10_DEVICE_STATE_TYPES StateType, uint32_t RangeStart, uint32_t RangeLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMask);
        ORBIT_TRACK_PARAM(StateType);
        ORBIT_TRACK_PARAM(RangeStart);
        ORBIT_TRACK_PARAM(RangeLength);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskDisableCapture(pMask, StateType, RangeStart, RangeLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10StateBlockMaskEnableAll(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pMask) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMask);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskEnableAll(pMask);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10StateBlockMaskDisableAll(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pMask) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMask);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskDisableAll(pMask);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_D3D10StateBlockMaskGetSetting(win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pMask, win32::Windows::Win32::Graphics::Direct3D10::D3D10_DEVICE_STATE_TYPES StateType, uint32_t Entry) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMask);
        ORBIT_TRACK_PARAM(StateType);
        ORBIT_TRACK_PARAM(Entry);

        auto win32_impl_result = g_api_table.D3D10StateBlockMaskGetSetting(pMask, StateType, Entry);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateStateBlock(win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device* pDevice, win32::Windows::Win32::Graphics::Direct3D10::D3D10_STATE_BLOCK_MASK* pStateBlockMask, win32::Windows::Win32::Graphics::Direct3D10::ID3D10StateBlock** ppStateBlock) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pDevice);
        ORBIT_TRACK_PARAM(pStateBlockMask);
        ORBIT_TRACK_PARAM(ppStateBlock);

        auto win32_impl_result = g_api_table.D3D10CreateStateBlock(pDevice, pStateBlockMask, ppStateBlock);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CompileEffectFromMemory(void* pData, size_t DataLength, win32::Windows::Win32::Foundation::PSTR pSrcFileName, win32::Windows::Win32::Graphics::Direct3D11::D3D_SHADER_MACRO* pDefines, win32::Windows::Win32::Graphics::Direct3D11::ID3DInclude* pInclude, uint32_t HLSLFlags, uint32_t FXFlags, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppCompiledEffect, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrors) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pData);
        ORBIT_TRACK_PARAM(DataLength);
        ORBIT_TRACK_PARAM(pSrcFileName);
        ORBIT_TRACK_PARAM(pDefines);
        ORBIT_TRACK_PARAM(pInclude);
        ORBIT_TRACK_PARAM(HLSLFlags);
        ORBIT_TRACK_PARAM(FXFlags);
        ORBIT_TRACK_PARAM(ppCompiledEffect);
        ORBIT_TRACK_PARAM(ppErrors);

        auto win32_impl_result = g_api_table.D3D10CompileEffectFromMemory(pData, DataLength, pSrcFileName, pDefines, pInclude, HLSLFlags, FXFlags, ppCompiledEffect, ppErrors);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateEffectFromMemory(void* pData, size_t DataLength, uint32_t FXFlags, win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device* pDevice, win32::Windows::Win32::Graphics::Direct3D10::ID3D10EffectPool* pEffectPool, win32::Windows::Win32::Graphics::Direct3D10::ID3D10Effect** ppEffect) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pData);
        ORBIT_TRACK_PARAM(DataLength);
        ORBIT_TRACK_PARAM(FXFlags);
        ORBIT_TRACK_PARAM(pDevice);
        ORBIT_TRACK_PARAM(pEffectPool);
        ORBIT_TRACK_PARAM(ppEffect);

        auto win32_impl_result = g_api_table.D3D10CreateEffectFromMemory(pData, DataLength, FXFlags, pDevice, pEffectPool, ppEffect);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateEffectPoolFromMemory(void* pData, size_t DataLength, uint32_t FXFlags, win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device* pDevice, win32::Windows::Win32::Graphics::Direct3D10::ID3D10EffectPool** ppEffectPool) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pData);
        ORBIT_TRACK_PARAM(DataLength);
        ORBIT_TRACK_PARAM(FXFlags);
        ORBIT_TRACK_PARAM(pDevice);
        ORBIT_TRACK_PARAM(ppEffectPool);

        auto win32_impl_result = g_api_table.D3D10CreateEffectPoolFromMemory(pData, DataLength, FXFlags, pDevice, ppEffectPool);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10DisassembleEffect(win32::Windows::Win32::Graphics::Direct3D10::ID3D10Effect* pEffect, win32::Windows::Win32::Foundation::BOOL EnableColorCode, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppDisassembly) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pEffect);
        ORBIT_TRACK_PARAM(EnableColorCode);
        ORBIT_TRACK_PARAM(ppDisassembly);

        auto win32_impl_result = g_api_table.D3D10DisassembleEffect(pEffect, EnableColorCode, ppDisassembly);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateDevice1(win32::Windows::Win32::Graphics::Dxgi::IDXGIAdapter* pAdapter, win32::Windows::Win32::Graphics::Direct3D10::D3D10_DRIVER_TYPE DriverType, win32::Windows::Win32::Foundation::HINSTANCE Software, uint32_t Flags, win32::Windows::Win32::Graphics::Direct3D10::D3D10_FEATURE_LEVEL1 HardwareLevel, uint32_t SDKVersion, win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device1** ppDevice) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAdapter);
        ORBIT_TRACK_PARAM(DriverType);
        ORBIT_TRACK_PARAM(Software);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(HardwareLevel);
        ORBIT_TRACK_PARAM(SDKVersion);
        ORBIT_TRACK_PARAM(ppDevice);

        auto win32_impl_result = g_api_table.D3D10CreateDevice1(pAdapter, DriverType, Software, Flags, HardwareLevel, SDKVersion, ppDevice);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3D10CreateDeviceAndSwapChain1(win32::Windows::Win32::Graphics::Dxgi::IDXGIAdapter* pAdapter, win32::Windows::Win32::Graphics::Direct3D10::D3D10_DRIVER_TYPE DriverType, win32::Windows::Win32::Foundation::HINSTANCE Software, uint32_t Flags, win32::Windows::Win32::Graphics::Direct3D10::D3D10_FEATURE_LEVEL1 HardwareLevel, uint32_t SDKVersion, win32::Windows::Win32::Graphics::Dxgi::DXGI_SWAP_CHAIN_DESC* pSwapChainDesc, win32::Windows::Win32::Graphics::Dxgi::IDXGISwapChain** ppSwapChain, win32::Windows::Win32::Graphics::Direct3D10::ID3D10Device1** ppDevice) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAdapter);
        ORBIT_TRACK_PARAM(DriverType);
        ORBIT_TRACK_PARAM(Software);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(HardwareLevel);
        ORBIT_TRACK_PARAM(SDKVersion);
        ORBIT_TRACK_PARAM(pSwapChainDesc);
        ORBIT_TRACK_PARAM(ppSwapChain);
        ORBIT_TRACK_PARAM(ppDevice);

        auto win32_impl_result = g_api_table.D3D10CreateDeviceAndSwapChain1(pAdapter, DriverType, Software, Flags, HardwareLevel, SDKVersion, pSwapChainDesc, ppSwapChain, ppDevice);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
