// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_Hlsl_2_H
#define WIN32_Windows_Win32_Graphics_Hlsl_2_H
#include "win32/Windows.Win32.Graphics.Hlsl.h"
#include "win32/impl/Windows.Win32.Graphics.Hlsl.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::Hlsl
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DReadFileToBlob(win32::Windows::Win32::Foundation::PWSTR pFileName, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppContents) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pFileName);
        ORBIT_TRACK_PARAM(ppContents);

        auto win32_impl_result = g_api_table.D3DReadFileToBlob(pFileName, ppContents);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DWriteBlobToFile(win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob* pBlob, win32::Windows::Win32::Foundation::PWSTR pFileName, win32::Windows::Win32::Foundation::BOOL bOverwrite) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pBlob);
        ORBIT_TRACK_PARAM(pFileName);
        ORBIT_TRACK_PARAM(bOverwrite);

        auto win32_impl_result = g_api_table.D3DWriteBlobToFile(pBlob, pFileName, bOverwrite);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DCompile(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Foundation::PSTR pSourceName, win32::Windows::Win32::Graphics::Direct3D11::D3D_SHADER_MACRO* pDefines, win32::Windows::Win32::Graphics::Direct3D11::ID3DInclude* pInclude, win32::Windows::Win32::Foundation::PSTR pEntrypoint, win32::Windows::Win32::Foundation::PSTR pTarget, uint32_t Flags1, uint32_t Flags2, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppCode, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorMsgs) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(pSourceName);
        ORBIT_TRACK_PARAM(pDefines);
        ORBIT_TRACK_PARAM(pInclude);
        ORBIT_TRACK_PARAM(pEntrypoint);
        ORBIT_TRACK_PARAM(pTarget);
        ORBIT_TRACK_PARAM(Flags1);
        ORBIT_TRACK_PARAM(Flags2);
        ORBIT_TRACK_PARAM(ppCode);
        ORBIT_TRACK_PARAM(ppErrorMsgs);

        auto win32_impl_result = g_api_table.D3DCompile(pSrcData, SrcDataSize, pSourceName, pDefines, pInclude, pEntrypoint, pTarget, Flags1, Flags2, ppCode, ppErrorMsgs);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DCompile2(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Foundation::PSTR pSourceName, win32::Windows::Win32::Graphics::Direct3D11::D3D_SHADER_MACRO* pDefines, win32::Windows::Win32::Graphics::Direct3D11::ID3DInclude* pInclude, win32::Windows::Win32::Foundation::PSTR pEntrypoint, win32::Windows::Win32::Foundation::PSTR pTarget, uint32_t Flags1, uint32_t Flags2, uint32_t SecondaryDataFlags, void* pSecondaryData, size_t SecondaryDataSize, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppCode, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorMsgs) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(pSourceName);
        ORBIT_TRACK_PARAM(pDefines);
        ORBIT_TRACK_PARAM(pInclude);
        ORBIT_TRACK_PARAM(pEntrypoint);
        ORBIT_TRACK_PARAM(pTarget);
        ORBIT_TRACK_PARAM(Flags1);
        ORBIT_TRACK_PARAM(Flags2);
        ORBIT_TRACK_PARAM(SecondaryDataFlags);
        ORBIT_TRACK_PARAM(pSecondaryData);
        ORBIT_TRACK_PARAM(SecondaryDataSize);
        ORBIT_TRACK_PARAM(ppCode);
        ORBIT_TRACK_PARAM(ppErrorMsgs);

        auto win32_impl_result = g_api_table.D3DCompile2(pSrcData, SrcDataSize, pSourceName, pDefines, pInclude, pEntrypoint, pTarget, Flags1, Flags2, SecondaryDataFlags, pSecondaryData, SecondaryDataSize, ppCode, ppErrorMsgs);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DCompileFromFile(win32::Windows::Win32::Foundation::PWSTR pFileName, win32::Windows::Win32::Graphics::Direct3D11::D3D_SHADER_MACRO* pDefines, win32::Windows::Win32::Graphics::Direct3D11::ID3DInclude* pInclude, win32::Windows::Win32::Foundation::PSTR pEntrypoint, win32::Windows::Win32::Foundation::PSTR pTarget, uint32_t Flags1, uint32_t Flags2, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppCode, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorMsgs) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pFileName);
        ORBIT_TRACK_PARAM(pDefines);
        ORBIT_TRACK_PARAM(pInclude);
        ORBIT_TRACK_PARAM(pEntrypoint);
        ORBIT_TRACK_PARAM(pTarget);
        ORBIT_TRACK_PARAM(Flags1);
        ORBIT_TRACK_PARAM(Flags2);
        ORBIT_TRACK_PARAM(ppCode);
        ORBIT_TRACK_PARAM(ppErrorMsgs);

        auto win32_impl_result = g_api_table.D3DCompileFromFile(pFileName, pDefines, pInclude, pEntrypoint, pTarget, Flags1, Flags2, ppCode, ppErrorMsgs);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DPreprocess(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Foundation::PSTR pSourceName, win32::Windows::Win32::Graphics::Direct3D11::D3D_SHADER_MACRO* pDefines, win32::Windows::Win32::Graphics::Direct3D11::ID3DInclude* pInclude, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppCodeText, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppErrorMsgs) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(pSourceName);
        ORBIT_TRACK_PARAM(pDefines);
        ORBIT_TRACK_PARAM(pInclude);
        ORBIT_TRACK_PARAM(ppCodeText);
        ORBIT_TRACK_PARAM(ppErrorMsgs);

        auto win32_impl_result = g_api_table.D3DPreprocess(pSrcData, SrcDataSize, pSourceName, pDefines, pInclude, ppCodeText, ppErrorMsgs);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DGetDebugInfo(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppDebugInfo) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(ppDebugInfo);

        auto win32_impl_result = g_api_table.D3DGetDebugInfo(pSrcData, SrcDataSize, ppDebugInfo);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DReflect(void* pSrcData, size_t SrcDataSize, ::win32::guid* pInterface, void** ppReflector) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(pInterface);
        ORBIT_TRACK_PARAM(ppReflector);

        auto win32_impl_result = g_api_table.D3DReflect(pSrcData, SrcDataSize, pInterface, ppReflector);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DReflectLibrary(void* pSrcData, size_t SrcDataSize, ::win32::guid* riid, void** ppReflector) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(riid);
        ORBIT_TRACK_PARAM(ppReflector);

        auto win32_impl_result = g_api_table.D3DReflectLibrary(pSrcData, SrcDataSize, riid, ppReflector);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DDisassemble(void* pSrcData, size_t SrcDataSize, uint32_t Flags, win32::Windows::Win32::Foundation::PSTR szComments, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppDisassembly) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(szComments);
        ORBIT_TRACK_PARAM(ppDisassembly);

        auto win32_impl_result = g_api_table.D3DDisassemble(pSrcData, SrcDataSize, Flags, szComments, ppDisassembly);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DDisassembleRegion(void* pSrcData, size_t SrcDataSize, uint32_t Flags, win32::Windows::Win32::Foundation::PSTR szComments, size_t StartByteOffset, size_t NumInsts, size_t* pFinishByteOffset, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppDisassembly) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(szComments);
        ORBIT_TRACK_PARAM(StartByteOffset);
        ORBIT_TRACK_PARAM(NumInsts);
        ORBIT_TRACK_PARAM(pFinishByteOffset);
        ORBIT_TRACK_PARAM(ppDisassembly);

        auto win32_impl_result = g_api_table.D3DDisassembleRegion(pSrcData, SrcDataSize, Flags, szComments, StartByteOffset, NumInsts, pFinishByteOffset, ppDisassembly);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DCreateLinker(win32::Windows::Win32::Graphics::Direct3D11::ID3D11Linker** ppLinker) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppLinker);

        auto win32_impl_result = g_api_table.D3DCreateLinker(ppLinker);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DLoadModule(void* pSrcData, size_t cbSrcDataSize, win32::Windows::Win32::Graphics::Direct3D11::ID3D11Module** ppModule) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(cbSrcDataSize);
        ORBIT_TRACK_PARAM(ppModule);

        auto win32_impl_result = g_api_table.D3DLoadModule(pSrcData, cbSrcDataSize, ppModule);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DCreateFunctionLinkingGraph(uint32_t uFlags, win32::Windows::Win32::Graphics::Direct3D11::ID3D11FunctionLinkingGraph** ppFunctionLinkingGraph) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(uFlags);
        ORBIT_TRACK_PARAM(ppFunctionLinkingGraph);

        auto win32_impl_result = g_api_table.D3DCreateFunctionLinkingGraph(uFlags, ppFunctionLinkingGraph);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DGetTraceInstructionOffsets(void* pSrcData, size_t SrcDataSize, uint32_t Flags, size_t StartInstIndex, size_t NumInsts, size_t* pOffsets, size_t* pTotalInsts) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(StartInstIndex);
        ORBIT_TRACK_PARAM(NumInsts);
        ORBIT_TRACK_PARAM(pOffsets);
        ORBIT_TRACK_PARAM(pTotalInsts);

        auto win32_impl_result = g_api_table.D3DGetTraceInstructionOffsets(pSrcData, SrcDataSize, Flags, StartInstIndex, NumInsts, pOffsets, pTotalInsts);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DGetInputSignatureBlob(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppSignatureBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(ppSignatureBlob);

        auto win32_impl_result = g_api_table.D3DGetInputSignatureBlob(pSrcData, SrcDataSize, ppSignatureBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DGetOutputSignatureBlob(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppSignatureBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(ppSignatureBlob);

        auto win32_impl_result = g_api_table.D3DGetOutputSignatureBlob(pSrcData, SrcDataSize, ppSignatureBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DGetInputAndOutputSignatureBlob(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppSignatureBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(ppSignatureBlob);

        auto win32_impl_result = g_api_table.D3DGetInputAndOutputSignatureBlob(pSrcData, SrcDataSize, ppSignatureBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DStripShader(void* pShaderBytecode, size_t BytecodeLength, uint32_t uStripFlags, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppStrippedBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pShaderBytecode);
        ORBIT_TRACK_PARAM(BytecodeLength);
        ORBIT_TRACK_PARAM(uStripFlags);
        ORBIT_TRACK_PARAM(ppStrippedBlob);

        auto win32_impl_result = g_api_table.D3DStripShader(pShaderBytecode, BytecodeLength, uStripFlags, ppStrippedBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DGetBlobPart(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Graphics::Hlsl::D3D_BLOB_PART Part, uint32_t Flags, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppPart) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(Part);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(ppPart);

        auto win32_impl_result = g_api_table.D3DGetBlobPart(pSrcData, SrcDataSize, Part, Flags, ppPart);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DSetBlobPart(void* pSrcData, size_t SrcDataSize, win32::Windows::Win32::Graphics::Hlsl::D3D_BLOB_PART Part, uint32_t Flags, void* pPart, size_t PartSize, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppNewShader) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(Part);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(pPart);
        ORBIT_TRACK_PARAM(PartSize);
        ORBIT_TRACK_PARAM(ppNewShader);

        auto win32_impl_result = g_api_table.D3DSetBlobPart(pSrcData, SrcDataSize, Part, Flags, pPart, PartSize, ppNewShader);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DCreateBlob(size_t Size, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppBlob) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Size);
        ORBIT_TRACK_PARAM(ppBlob);

        auto win32_impl_result = g_api_table.D3DCreateBlob(Size, ppBlob);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DCompressShaders(uint32_t uNumShaders, win32::Windows::Win32::Graphics::Hlsl::D3D_SHADER_DATA* pShaderData, uint32_t uFlags, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppCompressedData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(uNumShaders);
        ORBIT_TRACK_PARAM(pShaderData);
        ORBIT_TRACK_PARAM(uFlags);
        ORBIT_TRACK_PARAM(ppCompressedData);

        auto win32_impl_result = g_api_table.D3DCompressShaders(uNumShaders, pShaderData, uFlags, ppCompressedData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DDecompressShaders(void* pSrcData, size_t SrcDataSize, uint32_t uNumShaders, uint32_t uStartIndex, uint32_t* pIndices, uint32_t uFlags, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppShaders, uint32_t* pTotalShaders) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pSrcData);
        ORBIT_TRACK_PARAM(SrcDataSize);
        ORBIT_TRACK_PARAM(uNumShaders);
        ORBIT_TRACK_PARAM(uStartIndex);
        ORBIT_TRACK_PARAM(pIndices);
        ORBIT_TRACK_PARAM(uFlags);
        ORBIT_TRACK_PARAM(ppShaders);
        ORBIT_TRACK_PARAM(pTotalShaders);

        auto win32_impl_result = g_api_table.D3DDecompressShaders(pSrcData, SrcDataSize, uNumShaders, uStartIndex, pIndices, uFlags, ppShaders, pTotalShaders);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D3DDisassemble10Effect(win32::Windows::Win32::Graphics::Direct3D10::ID3D10Effect* pEffect, uint32_t Flags, win32::Windows::Win32::Graphics::Direct3D11::ID3DBlob** ppDisassembly) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pEffect);
        ORBIT_TRACK_PARAM(Flags);
        ORBIT_TRACK_PARAM(ppDisassembly);

        auto win32_impl_result = g_api_table.D3DDisassemble10Effect(pEffect, Flags, ppDisassembly);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DxcCreateInstance(::win32::guid* rclsid, ::win32::guid* riid, void** ppv) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(rclsid);
        ORBIT_TRACK_PARAM(riid);
        ORBIT_TRACK_PARAM(ppv);

        auto win32_impl_result = g_api_table.DxcCreateInstance(rclsid, riid, ppv);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DxcCreateInstance2(win32::Windows::Win32::System::Com::IMalloc* pMalloc, ::win32::guid* rclsid, ::win32::guid* riid, void** ppv) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMalloc);
        ORBIT_TRACK_PARAM(rclsid);
        ORBIT_TRACK_PARAM(riid);
        ORBIT_TRACK_PARAM(ppv);

        auto win32_impl_result = g_api_table.DxcCreateInstance2(pMalloc, rclsid, riid, ppv);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif