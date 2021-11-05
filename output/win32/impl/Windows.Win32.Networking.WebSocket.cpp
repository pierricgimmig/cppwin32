// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Networking_WebSocket_2_H
#define WIN32_Windows_Win32_Networking_WebSocket_2_H
#include "win32/Windows.Win32.Networking.WebSocket.h"
#include "win32/impl/Windows.Win32.Networking.WebSocket.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::Networking::WebSocket
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketCreateClientHandle(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_PROPERTY* pProperties, uint32_t ulPropertyCount, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE* phWebSocket) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pProperties);
        ORBIT_TRACK_PARAM(ulPropertyCount);
        ORBIT_TRACK_PARAM(phWebSocket);

        auto win32_impl_result = g_api_table.WebSocketCreateClientHandle(pProperties, ulPropertyCount, phWebSocket);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketBeginClientHandshake(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket, win32::Windows::Win32::Foundation::PSTR* pszSubprotocols, uint32_t ulSubprotocolCount, win32::Windows::Win32::Foundation::PSTR* pszExtensions, uint32_t ulExtensionCount, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HTTP_HEADER* pInitialHeaders, uint32_t ulInitialHeaderCount, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HTTP_HEADER** pAdditionalHeaders, uint32_t* pulAdditionalHeaderCount) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);
        ORBIT_TRACK_PARAM(pszSubprotocols);
        ORBIT_TRACK_PARAM(ulSubprotocolCount);
        ORBIT_TRACK_PARAM(pszExtensions);
        ORBIT_TRACK_PARAM(ulExtensionCount);
        ORBIT_TRACK_PARAM(pInitialHeaders);
        ORBIT_TRACK_PARAM(ulInitialHeaderCount);
        ORBIT_TRACK_PARAM(pAdditionalHeaders);
        ORBIT_TRACK_PARAM(pulAdditionalHeaderCount);

        auto win32_impl_result = g_api_table.WebSocketBeginClientHandshake(hWebSocket, pszSubprotocols, ulSubprotocolCount, pszExtensions, ulExtensionCount, pInitialHeaders, ulInitialHeaderCount, pAdditionalHeaders, pulAdditionalHeaderCount);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketEndClientHandshake(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HTTP_HEADER* pResponseHeaders, uint32_t ulReponseHeaderCount, uint32_t* pulSelectedExtensions, uint32_t* pulSelectedExtensionCount, uint32_t* pulSelectedSubprotocol) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);
        ORBIT_TRACK_PARAM(pResponseHeaders);
        ORBIT_TRACK_PARAM(ulReponseHeaderCount);
        ORBIT_TRACK_PARAM(pulSelectedExtensions);
        ORBIT_TRACK_PARAM(pulSelectedExtensionCount);
        ORBIT_TRACK_PARAM(pulSelectedSubprotocol);

        auto win32_impl_result = g_api_table.WebSocketEndClientHandshake(hWebSocket, pResponseHeaders, ulReponseHeaderCount, pulSelectedExtensions, pulSelectedExtensionCount, pulSelectedSubprotocol);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketCreateServerHandle(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_PROPERTY* pProperties, uint32_t ulPropertyCount, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE* phWebSocket) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pProperties);
        ORBIT_TRACK_PARAM(ulPropertyCount);
        ORBIT_TRACK_PARAM(phWebSocket);

        auto win32_impl_result = g_api_table.WebSocketCreateServerHandle(pProperties, ulPropertyCount, phWebSocket);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketBeginServerHandshake(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket, win32::Windows::Win32::Foundation::PSTR pszSubprotocolSelected, win32::Windows::Win32::Foundation::PSTR* pszExtensionSelected, uint32_t ulExtensionSelectedCount, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HTTP_HEADER* pRequestHeaders, uint32_t ulRequestHeaderCount, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HTTP_HEADER** pResponseHeaders, uint32_t* pulResponseHeaderCount) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);
        ORBIT_TRACK_PARAM(pszSubprotocolSelected);
        ORBIT_TRACK_PARAM(pszExtensionSelected);
        ORBIT_TRACK_PARAM(ulExtensionSelectedCount);
        ORBIT_TRACK_PARAM(pRequestHeaders);
        ORBIT_TRACK_PARAM(ulRequestHeaderCount);
        ORBIT_TRACK_PARAM(pResponseHeaders);
        ORBIT_TRACK_PARAM(pulResponseHeaderCount);

        auto win32_impl_result = g_api_table.WebSocketBeginServerHandshake(hWebSocket, pszSubprotocolSelected, pszExtensionSelected, ulExtensionSelectedCount, pRequestHeaders, ulRequestHeaderCount, pResponseHeaders, pulResponseHeaderCount);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketEndServerHandshake(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);

        auto win32_impl_result = g_api_table.WebSocketEndServerHandshake(hWebSocket);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketSend(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_BUFFER_TYPE BufferType, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_BUFFER* pBuffer, void* Context) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);
        ORBIT_TRACK_PARAM(BufferType);
        ORBIT_TRACK_PARAM(pBuffer);
        ORBIT_TRACK_PARAM(Context);

        auto win32_impl_result = g_api_table.WebSocketSend(hWebSocket, BufferType, pBuffer, Context);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketReceive(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_BUFFER* pBuffer, void* pvContext) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);
        ORBIT_TRACK_PARAM(pBuffer);
        ORBIT_TRACK_PARAM(pvContext);

        auto win32_impl_result = g_api_table.WebSocketReceive(hWebSocket, pBuffer, pvContext);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketGetAction(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_ACTION_QUEUE eActionQueue, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_BUFFER* pDataBuffers, uint32_t* pulDataBufferCount, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_ACTION* pAction, win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_BUFFER_TYPE* pBufferType, void** pvApplicationContext, void** pvActionContext) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);
        ORBIT_TRACK_PARAM(eActionQueue);
        ORBIT_TRACK_PARAM(pDataBuffers);
        ORBIT_TRACK_PARAM(pulDataBufferCount);
        ORBIT_TRACK_PARAM(pAction);
        ORBIT_TRACK_PARAM(pBufferType);
        ORBIT_TRACK_PARAM(pvApplicationContext);
        ORBIT_TRACK_PARAM(pvActionContext);

        auto win32_impl_result = g_api_table.WebSocketGetAction(hWebSocket, eActionQueue, pDataBuffers, pulDataBufferCount, pAction, pBufferType, pvApplicationContext, pvActionContext);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_WebSocketCompleteAction(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket, void* pvActionContext, uint32_t ulBytesTransferred) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);
        ORBIT_TRACK_PARAM(pvActionContext);
        ORBIT_TRACK_PARAM(ulBytesTransferred);

        g_api_table.WebSocketCompleteAction(hWebSocket, pvActionContext, ulBytesTransferred);
        
    }

    void __stdcall ORBIT_IMPL_WebSocketAbortHandle(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);

        g_api_table.WebSocketAbortHandle(hWebSocket);
        
    }

    void __stdcall ORBIT_IMPL_WebSocketDeleteHandle(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_HANDLE hWebSocket) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWebSocket);

        g_api_table.WebSocketDeleteHandle(hWebSocket);
        
    }

    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_WebSocketGetGlobalProperty(win32::Windows::Win32::Networking::WebSocket::WEB_SOCKET_PROPERTY_TYPE eType, void* pvValue, uint32_t* ulSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(eType);
        ORBIT_TRACK_PARAM(pvValue);
        ORBIT_TRACK_PARAM(ulSize);

        auto win32_impl_result = g_api_table.WebSocketGetGlobalProperty(eType, pvValue, ulSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
