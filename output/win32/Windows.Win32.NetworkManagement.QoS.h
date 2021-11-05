// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkManagement_QoS_H
#define WIN32_Windows_Win32_NetworkManagement_QoS_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.NetworkManagement.QoS.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::QoS
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSCreateHandle(win32::Windows::Win32::NetworkManagement::QoS::QOS_VERSION* Version, win32::Windows::Win32::Foundation::HANDLE* QOSHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSCloseHandle(win32::Windows::Win32::Foundation::HANDLE QOSHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSStartTrackingClient(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKADDR* DestAddr, uint32_t Flags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSStopTrackingClient(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKADDR* DestAddr, uint32_t Flags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSEnumerateFlows(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t* Size, void* Buffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSAddSocketToFlow(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKET Socket, win32::Windows::Win32::Networking::WinSock::SOCKADDR* DestAddr, win32::Windows::Win32::NetworkManagement::QoS::QOS_TRAFFIC_TYPE TrafficType, uint32_t Flags, uint32_t* FlowId) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSRemoveSocketFromFlow(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKET Socket, uint32_t FlowId, uint32_t Flags) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSSetFlow(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t FlowId, win32::Windows::Win32::NetworkManagement::QoS::QOS_SET_FLOW Operation, uint32_t Size, void* Buffer, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSQueryFlow(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t FlowId, win32::Windows::Win32::NetworkManagement::QoS::QOS_QUERY_FLOW Operation, uint32_t* Size, void* Buffer, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSNotifyFlow(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t FlowId, win32::Windows::Win32::NetworkManagement::QoS::QOS_NOTIFY_FLOW Operation, uint32_t* Size, void* Buffer, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_QOSCancel(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcRegisterClient(uint32_t TciVersion, win32::Windows::Win32::Foundation::HANDLE ClRegCtx, win32::Windows::Win32::NetworkManagement::QoS::TCI_CLIENT_FUNC_LIST* ClientHandlerList, win32::Windows::Win32::Foundation::HANDLE* pClientHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcEnumerateInterfaces(win32::Windows::Win32::Foundation::HANDLE ClientHandle, uint32_t* pBufferSize, win32::Windows::Win32::NetworkManagement::QoS::TC_IFC_DESCRIPTOR* InterfaceBuffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcOpenInterfaceA(win32::Windows::Win32::Foundation::PSTR pInterfaceName, win32::Windows::Win32::Foundation::HANDLE ClientHandle, win32::Windows::Win32::Foundation::HANDLE ClIfcCtx, win32::Windows::Win32::Foundation::HANDLE* pIfcHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcOpenInterfaceW(win32::Windows::Win32::Foundation::PWSTR pInterfaceName, win32::Windows::Win32::Foundation::HANDLE ClientHandle, win32::Windows::Win32::Foundation::HANDLE ClIfcCtx, win32::Windows::Win32::Foundation::HANDLE* pIfcHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcCloseInterface(win32::Windows::Win32::Foundation::HANDLE IfcHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcQueryInterface(win32::Windows::Win32::Foundation::HANDLE IfcHandle, ::win32::guid* pGuidParam, win32::Windows::Win32::Foundation::BOOLEAN NotifyChange, uint32_t* pBufferSize, void* Buffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcSetInterface(win32::Windows::Win32::Foundation::HANDLE IfcHandle, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcQueryFlowA(win32::Windows::Win32::Foundation::PSTR pFlowName, ::win32::guid* pGuidParam, uint32_t* pBufferSize, void* Buffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcQueryFlowW(win32::Windows::Win32::Foundation::PWSTR pFlowName, ::win32::guid* pGuidParam, uint32_t* pBufferSize, void* Buffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcSetFlowA(win32::Windows::Win32::Foundation::PSTR pFlowName, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcSetFlowW(win32::Windows::Win32::Foundation::PWSTR pFlowName, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcAddFlow(win32::Windows::Win32::Foundation::HANDLE IfcHandle, win32::Windows::Win32::Foundation::HANDLE ClFlowCtx, uint32_t Flags, win32::Windows::Win32::NetworkManagement::QoS::TC_GEN_FLOW* pGenericFlow, win32::Windows::Win32::Foundation::HANDLE* pFlowHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcGetFlowNameA(win32::Windows::Win32::Foundation::HANDLE FlowHandle, uint32_t StrSize, win32::Windows::Win32::Foundation::PSTR pFlowName) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcGetFlowNameW(win32::Windows::Win32::Foundation::HANDLE FlowHandle, uint32_t StrSize, win32::Windows::Win32::Foundation::PWSTR pFlowName) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcModifyFlow(win32::Windows::Win32::Foundation::HANDLE FlowHandle, win32::Windows::Win32::NetworkManagement::QoS::TC_GEN_FLOW* pGenericFlow) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcAddFilter(win32::Windows::Win32::Foundation::HANDLE FlowHandle, win32::Windows::Win32::NetworkManagement::QoS::TC_GEN_FILTER* pGenericFilter, win32::Windows::Win32::Foundation::HANDLE* pFilterHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcDeregisterClient(win32::Windows::Win32::Foundation::HANDLE ClientHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcDeleteFlow(win32::Windows::Win32::Foundation::HANDLE FlowHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcDeleteFilter(win32::Windows::Win32::Foundation::HANDLE FilterHandle) noexcept;
    uint32_t __stdcall ORBIT_IMPL_TcEnumerateFlows(win32::Windows::Win32::Foundation::HANDLE IfcHandle, win32::Windows::Win32::Foundation::HANDLE* pEnumHandle, uint32_t* pFlowCount, uint32_t* pBufSize, win32::Windows::Win32::NetworkManagement::QoS::ENUMERATION_BUFFER* Buffer) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSCreateHandle)(win32::Windows::Win32::NetworkManagement::QoS::QOS_VERSION* Version, win32::Windows::Win32::Foundation::HANDLE* QOSHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSCloseHandle)(win32::Windows::Win32::Foundation::HANDLE QOSHandle) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSStartTrackingClient)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKADDR* DestAddr, uint32_t Flags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSStopTrackingClient)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKADDR* DestAddr, uint32_t Flags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSEnumerateFlows)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t* Size, void* Buffer) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSAddSocketToFlow)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKET Socket, win32::Windows::Win32::Networking::WinSock::SOCKADDR* DestAddr, win32::Windows::Win32::NetworkManagement::QoS::QOS_TRAFFIC_TYPE TrafficType, uint32_t Flags, uint32_t* FlowId) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSRemoveSocketFromFlow)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::Networking::WinSock::SOCKET Socket, uint32_t FlowId, uint32_t Flags) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSSetFlow)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t FlowId, win32::Windows::Win32::NetworkManagement::QoS::QOS_SET_FLOW Operation, uint32_t Size, void* Buffer, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSQueryFlow)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t FlowId, win32::Windows::Win32::NetworkManagement::QoS::QOS_QUERY_FLOW Operation, uint32_t* Size, void* Buffer, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSNotifyFlow)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, uint32_t FlowId, win32::Windows::Win32::NetworkManagement::QoS::QOS_NOTIFY_FLOW Operation, uint32_t* Size, void* Buffer, uint32_t Flags, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *QOSCancel)(win32::Windows::Win32::Foundation::HANDLE QOSHandle, win32::Windows::Win32::System::IO::OVERLAPPED* Overlapped) noexcept;
    uint32_t (__stdcall *TcRegisterClient)(uint32_t TciVersion, win32::Windows::Win32::Foundation::HANDLE ClRegCtx, win32::Windows::Win32::NetworkManagement::QoS::TCI_CLIENT_FUNC_LIST* ClientHandlerList, win32::Windows::Win32::Foundation::HANDLE* pClientHandle) noexcept;
    uint32_t (__stdcall *TcEnumerateInterfaces)(win32::Windows::Win32::Foundation::HANDLE ClientHandle, uint32_t* pBufferSize, win32::Windows::Win32::NetworkManagement::QoS::TC_IFC_DESCRIPTOR* InterfaceBuffer) noexcept;
    uint32_t (__stdcall *TcOpenInterfaceA)(win32::Windows::Win32::Foundation::PSTR pInterfaceName, win32::Windows::Win32::Foundation::HANDLE ClientHandle, win32::Windows::Win32::Foundation::HANDLE ClIfcCtx, win32::Windows::Win32::Foundation::HANDLE* pIfcHandle) noexcept;
    uint32_t (__stdcall *TcOpenInterfaceW)(win32::Windows::Win32::Foundation::PWSTR pInterfaceName, win32::Windows::Win32::Foundation::HANDLE ClientHandle, win32::Windows::Win32::Foundation::HANDLE ClIfcCtx, win32::Windows::Win32::Foundation::HANDLE* pIfcHandle) noexcept;
    uint32_t (__stdcall *TcCloseInterface)(win32::Windows::Win32::Foundation::HANDLE IfcHandle) noexcept;
    uint32_t (__stdcall *TcQueryInterface)(win32::Windows::Win32::Foundation::HANDLE IfcHandle, ::win32::guid* pGuidParam, win32::Windows::Win32::Foundation::BOOLEAN NotifyChange, uint32_t* pBufferSize, void* Buffer) noexcept;
    uint32_t (__stdcall *TcSetInterface)(win32::Windows::Win32::Foundation::HANDLE IfcHandle, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer) noexcept;
    uint32_t (__stdcall *TcQueryFlowA)(win32::Windows::Win32::Foundation::PSTR pFlowName, ::win32::guid* pGuidParam, uint32_t* pBufferSize, void* Buffer) noexcept;
    uint32_t (__stdcall *TcQueryFlowW)(win32::Windows::Win32::Foundation::PWSTR pFlowName, ::win32::guid* pGuidParam, uint32_t* pBufferSize, void* Buffer) noexcept;
    uint32_t (__stdcall *TcSetFlowA)(win32::Windows::Win32::Foundation::PSTR pFlowName, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer) noexcept;
    uint32_t (__stdcall *TcSetFlowW)(win32::Windows::Win32::Foundation::PWSTR pFlowName, ::win32::guid* pGuidParam, uint32_t BufferSize, void* Buffer) noexcept;
    uint32_t (__stdcall *TcAddFlow)(win32::Windows::Win32::Foundation::HANDLE IfcHandle, win32::Windows::Win32::Foundation::HANDLE ClFlowCtx, uint32_t Flags, win32::Windows::Win32::NetworkManagement::QoS::TC_GEN_FLOW* pGenericFlow, win32::Windows::Win32::Foundation::HANDLE* pFlowHandle) noexcept;
    uint32_t (__stdcall *TcGetFlowNameA)(win32::Windows::Win32::Foundation::HANDLE FlowHandle, uint32_t StrSize, win32::Windows::Win32::Foundation::PSTR pFlowName) noexcept;
    uint32_t (__stdcall *TcGetFlowNameW)(win32::Windows::Win32::Foundation::HANDLE FlowHandle, uint32_t StrSize, win32::Windows::Win32::Foundation::PWSTR pFlowName) noexcept;
    uint32_t (__stdcall *TcModifyFlow)(win32::Windows::Win32::Foundation::HANDLE FlowHandle, win32::Windows::Win32::NetworkManagement::QoS::TC_GEN_FLOW* pGenericFlow) noexcept;
    uint32_t (__stdcall *TcAddFilter)(win32::Windows::Win32::Foundation::HANDLE FlowHandle, win32::Windows::Win32::NetworkManagement::QoS::TC_GEN_FILTER* pGenericFilter, win32::Windows::Win32::Foundation::HANDLE* pFilterHandle) noexcept;
    uint32_t (__stdcall *TcDeregisterClient)(win32::Windows::Win32::Foundation::HANDLE ClientHandle) noexcept;
    uint32_t (__stdcall *TcDeleteFlow)(win32::Windows::Win32::Foundation::HANDLE FlowHandle) noexcept;
    uint32_t (__stdcall *TcDeleteFilter)(win32::Windows::Win32::Foundation::HANDLE FilterHandle) noexcept;
    uint32_t (__stdcall *TcEnumerateFlows)(win32::Windows::Win32::Foundation::HANDLE IfcHandle, win32::Windows::Win32::Foundation::HANDLE* pEnumHandle, uint32_t* pFlowCount, uint32_t* pBufSize, win32::Windows::Win32::NetworkManagement::QoS::ENUMERATION_BUFFER* Buffer) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif