// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_HostComputeNetwork_2_H
#define WIN32_Windows_Win32_System_HostComputeNetwork_2_H
#include "win32/Windows.Win32.System.HostComputeNetwork.h"
#include "win32/impl/Windows.Win32.System.HostComputeNetwork.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::HostComputeNetwork
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnEnumerateNetworks(win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* Networks, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(Networks);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnEnumerateNetworks(Query, Networks, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCreateNetwork(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR Settings, void** Network, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(Network);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnCreateNetwork(Id, Settings, Network, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnOpenNetwork(::win32::guid* Id, void** Network, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Network);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnOpenNetwork(Id, Network, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnModifyNetwork(void* Network, win32::Windows::Win32::Foundation::PWSTR Settings, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Network);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnModifyNetwork(Network, Settings, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnQueryNetworkProperties(void* Network, win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* Properties, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Network);
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(Properties);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnQueryNetworkProperties(Network, Query, Properties, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnDeleteNetwork(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnDeleteNetwork(Id, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCloseNetwork(void* Network) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Network);

        auto win32_impl_result = g_api_table.HcnCloseNetwork(Network);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnEnumerateNamespaces(win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* Namespaces, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(Namespaces);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnEnumerateNamespaces(Query, Namespaces, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCreateNamespace(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR Settings, void** Namespace, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(Namespace);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnCreateNamespace(Id, Settings, Namespace, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnOpenNamespace(::win32::guid* Id, void** Namespace, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Namespace);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnOpenNamespace(Id, Namespace, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnModifyNamespace(void* Namespace, win32::Windows::Win32::Foundation::PWSTR Settings, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Namespace);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnModifyNamespace(Namespace, Settings, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnQueryNamespaceProperties(void* Namespace, win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* Properties, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Namespace);
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(Properties);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnQueryNamespaceProperties(Namespace, Query, Properties, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnDeleteNamespace(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnDeleteNamespace(Id, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCloseNamespace(void* Namespace) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Namespace);

        auto win32_impl_result = g_api_table.HcnCloseNamespace(Namespace);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnEnumerateEndpoints(win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* Endpoints, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(Endpoints);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnEnumerateEndpoints(Query, Endpoints, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCreateEndpoint(void* Network, ::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR Settings, void** Endpoint, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Network);
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(Endpoint);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnCreateEndpoint(Network, Id, Settings, Endpoint, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnOpenEndpoint(::win32::guid* Id, void** Endpoint, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Endpoint);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnOpenEndpoint(Id, Endpoint, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnModifyEndpoint(void* Endpoint, win32::Windows::Win32::Foundation::PWSTR Settings, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Endpoint);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnModifyEndpoint(Endpoint, Settings, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnQueryEndpointProperties(void* Endpoint, win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* Properties, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Endpoint);
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(Properties);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnQueryEndpointProperties(Endpoint, Query, Properties, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnDeleteEndpoint(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnDeleteEndpoint(Id, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCloseEndpoint(void* Endpoint) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Endpoint);

        auto win32_impl_result = g_api_table.HcnCloseEndpoint(Endpoint);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnEnumerateLoadBalancers(win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* LoadBalancer, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(LoadBalancer);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnEnumerateLoadBalancers(Query, LoadBalancer, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCreateLoadBalancer(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR Settings, void** LoadBalancer, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(LoadBalancer);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnCreateLoadBalancer(Id, Settings, LoadBalancer, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnOpenLoadBalancer(::win32::guid* Id, void** LoadBalancer, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(LoadBalancer);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnOpenLoadBalancer(Id, LoadBalancer, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnModifyLoadBalancer(void* LoadBalancer, win32::Windows::Win32::Foundation::PWSTR Settings, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(LoadBalancer);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnModifyLoadBalancer(LoadBalancer, Settings, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnQueryLoadBalancerProperties(void* LoadBalancer, win32::Windows::Win32::Foundation::PWSTR Query, win32::Windows::Win32::Foundation::PWSTR* Properties, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(LoadBalancer);
        ORBIT_TRACK_PARAM(Query);
        ORBIT_TRACK_PARAM(Properties);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnQueryLoadBalancerProperties(LoadBalancer, Query, Properties, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnDeleteLoadBalancer(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnDeleteLoadBalancer(Id, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCloseLoadBalancer(void* LoadBalancer) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(LoadBalancer);

        auto win32_impl_result = g_api_table.HcnCloseLoadBalancer(LoadBalancer);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnRegisterServiceCallback(win32::Windows::Win32::System::HostComputeNetwork::HCN_NOTIFICATION_CALLBACK* Callback, void* Context, void** CallbackHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Callback);
        ORBIT_TRACK_PARAM(Context);
        ORBIT_TRACK_PARAM(CallbackHandle);

        auto win32_impl_result = g_api_table.HcnRegisterServiceCallback(Callback, Context, CallbackHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnUnregisterServiceCallback(void* CallbackHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(CallbackHandle);

        auto win32_impl_result = g_api_table.HcnUnregisterServiceCallback(CallbackHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnRegisterGuestNetworkServiceCallback(void* GuestNetworkService, win32::Windows::Win32::System::HostComputeNetwork::HCN_NOTIFICATION_CALLBACK* Callback, void* Context, void** CallbackHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(GuestNetworkService);
        ORBIT_TRACK_PARAM(Callback);
        ORBIT_TRACK_PARAM(Context);
        ORBIT_TRACK_PARAM(CallbackHandle);

        auto win32_impl_result = g_api_table.HcnRegisterGuestNetworkServiceCallback(GuestNetworkService, Callback, Context, CallbackHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnUnregisterGuestNetworkServiceCallback(void* CallbackHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(CallbackHandle);

        auto win32_impl_result = g_api_table.HcnUnregisterGuestNetworkServiceCallback(CallbackHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCreateGuestNetworkService(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR Settings, void** GuestNetworkService, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(GuestNetworkService);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnCreateGuestNetworkService(Id, Settings, GuestNetworkService, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnCloseGuestNetworkService(void* GuestNetworkService) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(GuestNetworkService);

        auto win32_impl_result = g_api_table.HcnCloseGuestNetworkService(GuestNetworkService);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnModifyGuestNetworkService(void* GuestNetworkService, win32::Windows::Win32::Foundation::PWSTR Settings, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(GuestNetworkService);
        ORBIT_TRACK_PARAM(Settings);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnModifyGuestNetworkService(GuestNetworkService, Settings, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnDeleteGuestNetworkService(::win32::guid* Id, win32::Windows::Win32::Foundation::PWSTR* ErrorRecord) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Id);
        ORBIT_TRACK_PARAM(ErrorRecord);

        auto win32_impl_result = g_api_table.HcnDeleteGuestNetworkService(Id, ErrorRecord);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnReserveGuestNetworkServicePort(void* GuestNetworkService, win32::Windows::Win32::System::HostComputeNetwork::HCN_PORT_PROTOCOL Protocol, win32::Windows::Win32::System::HostComputeNetwork::HCN_PORT_ACCESS Access, uint16_t Port, win32::Windows::Win32::Foundation::HANDLE* PortReservationHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(GuestNetworkService);
        ORBIT_TRACK_PARAM(Protocol);
        ORBIT_TRACK_PARAM(Access);
        ORBIT_TRACK_PARAM(Port);
        ORBIT_TRACK_PARAM(PortReservationHandle);

        auto win32_impl_result = g_api_table.HcnReserveGuestNetworkServicePort(GuestNetworkService, Protocol, Access, Port, PortReservationHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnReserveGuestNetworkServicePortRange(void* GuestNetworkService, uint16_t PortCount, win32::Windows::Win32::System::HostComputeNetwork::HCN_PORT_RANGE_RESERVATION* PortRangeReservation, win32::Windows::Win32::Foundation::HANDLE* PortReservationHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(GuestNetworkService);
        ORBIT_TRACK_PARAM(PortCount);
        ORBIT_TRACK_PARAM(PortRangeReservation);
        ORBIT_TRACK_PARAM(PortReservationHandle);

        auto win32_impl_result = g_api_table.HcnReserveGuestNetworkServicePortRange(GuestNetworkService, PortCount, PortRangeReservation, PortReservationHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnReleaseGuestNetworkServicePortReservationHandle(win32::Windows::Win32::Foundation::HANDLE PortReservationHandle) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(PortReservationHandle);

        auto win32_impl_result = g_api_table.HcnReleaseGuestNetworkServicePortReservationHandle(PortReservationHandle);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_HcnEnumerateGuestNetworkPortReservations(uint32_t* ReturnCount, win32::Windows::Win32::System::HostComputeNetwork::HCN_PORT_RANGE_ENTRY** PortEntries) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ReturnCount);
        ORBIT_TRACK_PARAM(PortEntries);

        auto win32_impl_result = g_api_table.HcnEnumerateGuestNetworkPortReservations(ReturnCount, PortEntries);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_HcnFreeGuestNetworkPortReservations(win32::Windows::Win32::System::HostComputeNetwork::HCN_PORT_RANGE_ENTRY* PortEntries) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(PortEntries);

        g_api_table.HcnFreeGuestNetworkPortReservations(PortEntries);
        
    }

}

#pragma endregion abi_methods

}
#endif