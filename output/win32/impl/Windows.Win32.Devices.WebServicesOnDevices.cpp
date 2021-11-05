// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Devices_WebServicesOnDevices_2_H
#define WIN32_Windows_Win32_Devices_WebServicesOnDevices_2_H
#include "win32/Windows.Win32.Devices.WebServicesOnDevices.h"
#include "win32/impl/Windows.Win32.Devices.WebServicesOnDevices.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Devices::WebServicesOnDevices
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateUdpMessageParameters(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDUdpMessageParameters** ppTxParams) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppTxParams);

        auto win32_impl_result = g_api_table.WSDCreateUdpMessageParameters(ppTxParams);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateUdpAddress(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDUdpAddress** ppAddress) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppAddress);

        auto win32_impl_result = g_api_table.WSDCreateUdpAddress(ppAddress);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateHttpMessageParameters(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDHttpMessageParameters** ppTxParams) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppTxParams);

        auto win32_impl_result = g_api_table.WSDCreateHttpMessageParameters(ppTxParams);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateHttpAddress(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDHttpAddress** ppAddress) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppAddress);

        auto win32_impl_result = g_api_table.WSDCreateHttpAddress(ppAddress);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateOutboundAttachment(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDOutboundAttachment** ppAttachment) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppAttachment);

        auto win32_impl_result = g_api_table.WSDCreateOutboundAttachment(ppAttachment);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDXMLGetNameFromBuiltinNamespace(win32::Windows::Win32::Foundation::PWSTR pszNamespace, win32::Windows::Win32::Foundation::PWSTR pszName, win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_NAME** ppName) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszNamespace);
        ORBIT_TRACK_PARAM(pszName);
        ORBIT_TRACK_PARAM(ppName);

        auto win32_impl_result = g_api_table.WSDXMLGetNameFromBuiltinNamespace(pszNamespace, pszName, ppName);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDXMLCreateContext(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext** ppContext) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ppContext);

        auto win32_impl_result = g_api_table.WSDXMLCreateContext(ppContext);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDiscoveryProvider(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDiscoveryProvider** ppProvider) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(ppProvider);

        auto win32_impl_result = g_api_table.WSDCreateDiscoveryProvider(pContext, ppProvider);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDiscoveryProvider2(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::WSD_CONFIG_PARAM* pConfigParams, uint32_t dwConfigParamCount, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDiscoveryProvider** ppProvider) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(pConfigParams);
        ORBIT_TRACK_PARAM(dwConfigParamCount);
        ORBIT_TRACK_PARAM(ppProvider);

        auto win32_impl_result = g_api_table.WSDCreateDiscoveryProvider2(pContext, pConfigParams, dwConfigParamCount, ppProvider);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDiscoveryPublisher(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDiscoveryPublisher** ppPublisher) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(ppPublisher);

        auto win32_impl_result = g_api_table.WSDCreateDiscoveryPublisher(pContext, ppPublisher);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDiscoveryPublisher2(win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::WSD_CONFIG_PARAM* pConfigParams, uint32_t dwConfigParamCount, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDiscoveryPublisher** ppPublisher) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(pConfigParams);
        ORBIT_TRACK_PARAM(dwConfigParamCount);
        ORBIT_TRACK_PARAM(ppPublisher);

        auto win32_impl_result = g_api_table.WSDCreateDiscoveryPublisher2(pContext, pConfigParams, dwConfigParamCount, ppPublisher);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDeviceProxy(win32::Windows::Win32::Foundation::PWSTR pszDeviceId, win32::Windows::Win32::Foundation::PWSTR pszLocalId, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDDeviceProxy** ppDeviceProxy) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszDeviceId);
        ORBIT_TRACK_PARAM(pszLocalId);
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(ppDeviceProxy);

        auto win32_impl_result = g_api_table.WSDCreateDeviceProxy(pszDeviceId, pszLocalId, pContext, ppDeviceProxy);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDeviceProxyAdvanced(win32::Windows::Win32::Foundation::PWSTR pszDeviceId, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDAddress* pDeviceAddress, win32::Windows::Win32::Foundation::PWSTR pszLocalId, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDDeviceProxy** ppDeviceProxy) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszDeviceId);
        ORBIT_TRACK_PARAM(pDeviceAddress);
        ORBIT_TRACK_PARAM(pszLocalId);
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(ppDeviceProxy);

        auto win32_impl_result = g_api_table.WSDCreateDeviceProxyAdvanced(pszDeviceId, pDeviceAddress, pszLocalId, pContext, ppDeviceProxy);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDeviceProxy2(win32::Windows::Win32::Foundation::PWSTR pszDeviceId, win32::Windows::Win32::Foundation::PWSTR pszLocalId, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::WSD_CONFIG_PARAM* pConfigParams, uint32_t dwConfigParamCount, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDDeviceProxy** ppDeviceProxy) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszDeviceId);
        ORBIT_TRACK_PARAM(pszLocalId);
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(pConfigParams);
        ORBIT_TRACK_PARAM(dwConfigParamCount);
        ORBIT_TRACK_PARAM(ppDeviceProxy);

        auto win32_impl_result = g_api_table.WSDCreateDeviceProxy2(pszDeviceId, pszLocalId, pContext, pConfigParams, dwConfigParamCount, ppDeviceProxy);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDeviceHost(win32::Windows::Win32::Foundation::PWSTR pszLocalId, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDDeviceHost** ppDeviceHost) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszLocalId);
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(ppDeviceHost);

        auto win32_impl_result = g_api_table.WSDCreateDeviceHost(pszLocalId, pContext, ppDeviceHost);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDeviceHostAdvanced(win32::Windows::Win32::Foundation::PWSTR pszLocalId, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDAddress** ppHostAddresses, uint32_t dwHostAddressCount, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDDeviceHost** ppDeviceHost) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszLocalId);
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(ppHostAddresses);
        ORBIT_TRACK_PARAM(dwHostAddressCount);
        ORBIT_TRACK_PARAM(ppDeviceHost);

        auto win32_impl_result = g_api_table.WSDCreateDeviceHostAdvanced(pszLocalId, pContext, ppHostAddresses, dwHostAddressCount, ppDeviceHost);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDCreateDeviceHost2(win32::Windows::Win32::Foundation::PWSTR pszLocalId, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::WSD_CONFIG_PARAM* pConfigParams, uint32_t dwConfigParamCount, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDDeviceHost** ppDeviceHost) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszLocalId);
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(pConfigParams);
        ORBIT_TRACK_PARAM(dwConfigParamCount);
        ORBIT_TRACK_PARAM(ppDeviceHost);

        auto win32_impl_result = g_api_table.WSDCreateDeviceHost2(pszLocalId, pContext, pConfigParams, dwConfigParamCount, ppDeviceHost);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDSetConfigurationOption(uint32_t dwOption, void* pVoid, uint32_t cbInBuffer) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(dwOption);
        ORBIT_TRACK_PARAM(pVoid);
        ORBIT_TRACK_PARAM(cbInBuffer);

        auto win32_impl_result = g_api_table.WSDSetConfigurationOption(dwOption, pVoid, cbInBuffer);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDGetConfigurationOption(uint32_t dwOption, void* pVoid, uint32_t cbOutBuffer) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(dwOption);
        ORBIT_TRACK_PARAM(pVoid);
        ORBIT_TRACK_PARAM(cbOutBuffer);

        auto win32_impl_result = g_api_table.WSDGetConfigurationOption(dwOption, pVoid, cbOutBuffer);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void* __stdcall ORBIT_IMPL_WSDAllocateLinkedMemory(void* pParent, size_t cbSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pParent);
        ORBIT_TRACK_PARAM(cbSize);

        auto win32_impl_result = g_api_table.WSDAllocateLinkedMemory(pParent, cbSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_WSDFreeLinkedMemory(void* pVoid) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pVoid);

        g_api_table.WSDFreeLinkedMemory(pVoid);
        
    }

    void __stdcall ORBIT_IMPL_WSDAttachLinkedMemory(void* pParent, void* pChild) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pParent);
        ORBIT_TRACK_PARAM(pChild);

        g_api_table.WSDAttachLinkedMemory(pParent, pChild);
        
    }

    void __stdcall ORBIT_IMPL_WSDDetachLinkedMemory(void* pVoid) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pVoid);

        g_api_table.WSDDetachLinkedMemory(pVoid);
        
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDXMLBuildAnyForSingleElement(win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_NAME* pElementName, win32::Windows::Win32::Foundation::PWSTR pszText, win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_ELEMENT** ppAny) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pElementName);
        ORBIT_TRACK_PARAM(pszText);
        ORBIT_TRACK_PARAM(ppAny);

        auto win32_impl_result = g_api_table.WSDXMLBuildAnyForSingleElement(pElementName, pszText, ppAny);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDXMLGetValueFromAny(win32::Windows::Win32::Foundation::PWSTR pszNamespace, win32::Windows::Win32::Foundation::PWSTR pszName, win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_ELEMENT* pAny, win32::Windows::Win32::Foundation::PWSTR* ppszValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszNamespace);
        ORBIT_TRACK_PARAM(pszName);
        ORBIT_TRACK_PARAM(pAny);
        ORBIT_TRACK_PARAM(ppszValue);

        auto win32_impl_result = g_api_table.WSDXMLGetValueFromAny(pszNamespace, pszName, pAny, ppszValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDXMLAddSibling(win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_ELEMENT* pFirst, win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_ELEMENT* pSecond) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pFirst);
        ORBIT_TRACK_PARAM(pSecond);

        auto win32_impl_result = g_api_table.WSDXMLAddSibling(pFirst, pSecond);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDXMLAddChild(win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_ELEMENT* pParent, win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_ELEMENT* pChild) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pParent);
        ORBIT_TRACK_PARAM(pChild);

        auto win32_impl_result = g_api_table.WSDXMLAddChild(pParent, pChild);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDXMLCleanupElement(win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_ELEMENT* pAny) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAny);

        auto win32_impl_result = g_api_table.WSDXMLCleanupElement(pAny);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDGenerateFault(win32::Windows::Win32::Foundation::PWSTR pszCode, win32::Windows::Win32::Foundation::PWSTR pszSubCode, win32::Windows::Win32::Foundation::PWSTR pszReason, win32::Windows::Win32::Foundation::PWSTR pszDetail, win32::Windows::Win32::Devices::WebServicesOnDevices::IWSDXMLContext* pContext, win32::Windows::Win32::Devices::WebServicesOnDevices::WSD_SOAP_FAULT** ppFault) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pszCode);
        ORBIT_TRACK_PARAM(pszSubCode);
        ORBIT_TRACK_PARAM(pszReason);
        ORBIT_TRACK_PARAM(pszDetail);
        ORBIT_TRACK_PARAM(pContext);
        ORBIT_TRACK_PARAM(ppFault);

        auto win32_impl_result = g_api_table.WSDGenerateFault(pszCode, pszSubCode, pszReason, pszDetail, pContext, ppFault);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDGenerateFaultEx(win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_NAME* pCode, win32::Windows::Win32::Devices::WebServicesOnDevices::WSDXML_NAME* pSubCode, win32::Windows::Win32::Devices::WebServicesOnDevices::WSD_LOCALIZED_STRING_LIST* pReasons, win32::Windows::Win32::Foundation::PWSTR pszDetail, win32::Windows::Win32::Devices::WebServicesOnDevices::WSD_SOAP_FAULT** ppFault) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pCode);
        ORBIT_TRACK_PARAM(pSubCode);
        ORBIT_TRACK_PARAM(pReasons);
        ORBIT_TRACK_PARAM(pszDetail);
        ORBIT_TRACK_PARAM(ppFault);

        auto win32_impl_result = g_api_table.WSDGenerateFaultEx(pCode, pSubCode, pReasons, pszDetail, ppFault);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDUriEncode(win32::Windows::Win32::Foundation::PWSTR source, uint32_t cchSource, win32::Windows::Win32::Foundation::PWSTR* destOut, uint32_t* cchDestOut) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(source);
        ORBIT_TRACK_PARAM(cchSource);
        ORBIT_TRACK_PARAM(destOut);
        ORBIT_TRACK_PARAM(cchDestOut);

        auto win32_impl_result = g_api_table.WSDUriEncode(source, cchSource, destOut, cchDestOut);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WSDUriDecode(win32::Windows::Win32::Foundation::PWSTR source, uint32_t cchSource, win32::Windows::Win32::Foundation::PWSTR* destOut, uint32_t* cchDestOut) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(source);
        ORBIT_TRACK_PARAM(cchSource);
        ORBIT_TRACK_PARAM(destOut);
        ORBIT_TRACK_PARAM(cchDestOut);

        auto win32_impl_result = g_api_table.WSDUriDecode(source, cchSource, destOut, cchDestOut);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif