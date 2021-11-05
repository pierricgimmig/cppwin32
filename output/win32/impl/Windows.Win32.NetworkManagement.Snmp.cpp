// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkManagement_Snmp_2_H
#define WIN32_Windows_Win32_NetworkManagement_Snmp_2_H
#include "win32/Windows.Win32.NetworkManagement.Snmp.h"
#include "win32/impl/Windows.Win32.NetworkManagement.Snmp.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::NetworkManagement::Snmp
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    int32_t __stdcall ORBIT_IMPL_SnmpUtilOidCpy(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOidDst, win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOidSrc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOidDst);
        ORBIT_TRACK_PARAM(pOidSrc);

        auto win32_impl_result = g_api_table.SnmpUtilOidCpy(pOidDst, pOidSrc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilOidAppend(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOidDst, win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOidSrc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOidDst);
        ORBIT_TRACK_PARAM(pOidSrc);

        auto win32_impl_result = g_api_table.SnmpUtilOidAppend(pOidDst, pOidSrc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilOidNCmp(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOid1, win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOid2, uint32_t nSubIds) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOid1);
        ORBIT_TRACK_PARAM(pOid2);
        ORBIT_TRACK_PARAM(nSubIds);

        auto win32_impl_result = g_api_table.SnmpUtilOidNCmp(pOid1, pOid2, nSubIds);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilOidCmp(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOid1, win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOid2) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOid1);
        ORBIT_TRACK_PARAM(pOid2);

        auto win32_impl_result = g_api_table.SnmpUtilOidCmp(pOid1, pOid2);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_SnmpUtilOidFree(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* pOid) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOid);

        g_api_table.SnmpUtilOidFree(pOid);
        
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilOctetsCmp(win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* pOctets1, win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* pOctets2) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOctets1);
        ORBIT_TRACK_PARAM(pOctets2);

        auto win32_impl_result = g_api_table.SnmpUtilOctetsCmp(pOctets1, pOctets2);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilOctetsNCmp(win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* pOctets1, win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* pOctets2, uint32_t nChars) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOctets1);
        ORBIT_TRACK_PARAM(pOctets2);
        ORBIT_TRACK_PARAM(nChars);

        auto win32_impl_result = g_api_table.SnmpUtilOctetsNCmp(pOctets1, pOctets2, nChars);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilOctetsCpy(win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* pOctetsDst, win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* pOctetsSrc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOctetsDst);
        ORBIT_TRACK_PARAM(pOctetsSrc);

        auto win32_impl_result = g_api_table.SnmpUtilOctetsCpy(pOctetsDst, pOctetsSrc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_SnmpUtilOctetsFree(win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* pOctets) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pOctets);

        g_api_table.SnmpUtilOctetsFree(pOctets);
        
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilAsnAnyCpy(win32::Windows::Win32::NetworkManagement::Snmp::AsnAny* pAnyDst, win32::Windows::Win32::NetworkManagement::Snmp::AsnAny* pAnySrc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAnyDst);
        ORBIT_TRACK_PARAM(pAnySrc);

        auto win32_impl_result = g_api_table.SnmpUtilAsnAnyCpy(pAnyDst, pAnySrc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_SnmpUtilAsnAnyFree(win32::Windows::Win32::NetworkManagement::Snmp::AsnAny* pAny) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAny);

        g_api_table.SnmpUtilAsnAnyFree(pAny);
        
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilVarBindCpy(win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBind* pVbDst, win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBind* pVbSrc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pVbDst);
        ORBIT_TRACK_PARAM(pVbSrc);

        auto win32_impl_result = g_api_table.SnmpUtilVarBindCpy(pVbDst, pVbSrc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_SnmpUtilVarBindFree(win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBind* pVb) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pVb);

        g_api_table.SnmpUtilVarBindFree(pVb);
        
    }

    int32_t __stdcall ORBIT_IMPL_SnmpUtilVarBindListCpy(win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBindList* pVblDst, win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBindList* pVblSrc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pVblDst);
        ORBIT_TRACK_PARAM(pVblSrc);

        auto win32_impl_result = g_api_table.SnmpUtilVarBindListCpy(pVblDst, pVblSrc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_SnmpUtilVarBindListFree(win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBindList* pVbl) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pVbl);

        g_api_table.SnmpUtilVarBindListFree(pVbl);
        
    }

    void __stdcall ORBIT_IMPL_SnmpUtilMemFree(void* pMem) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMem);

        g_api_table.SnmpUtilMemFree(pMem);
        
    }

    void* __stdcall ORBIT_IMPL_SnmpUtilMemAlloc(uint32_t nBytes) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nBytes);

        auto win32_impl_result = g_api_table.SnmpUtilMemAlloc(nBytes);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void* __stdcall ORBIT_IMPL_SnmpUtilMemReAlloc(void* pMem, uint32_t nBytes) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pMem);
        ORBIT_TRACK_PARAM(nBytes);

        auto win32_impl_result = g_api_table.SnmpUtilMemReAlloc(pMem, nBytes);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PSTR __stdcall ORBIT_IMPL_SnmpUtilOidToA(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* Oid) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Oid);

        auto win32_impl_result = g_api_table.SnmpUtilOidToA(Oid);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::PSTR __stdcall ORBIT_IMPL_SnmpUtilIdsToA(uint32_t* Ids, uint32_t IdLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Ids);
        ORBIT_TRACK_PARAM(IdLength);

        auto win32_impl_result = g_api_table.SnmpUtilIdsToA(Ids, IdLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_SnmpUtilPrintOid(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* Oid) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(Oid);

        g_api_table.SnmpUtilPrintOid(Oid);
        
    }

    void __stdcall ORBIT_IMPL_SnmpUtilPrintAsnAny(win32::Windows::Win32::NetworkManagement::Snmp::AsnAny* pAny) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(pAny);

        g_api_table.SnmpUtilPrintAsnAny(pAny);
        
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSvcGetUptime() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.SnmpSvcGetUptime();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    void __stdcall ORBIT_IMPL_SnmpSvcSetLogLevel(win32::Windows::Win32::NetworkManagement::Snmp::SNMP_LOG nLogLevel) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nLogLevel);

        g_api_table.SnmpSvcSetLogLevel(nLogLevel);
        
    }

    void __stdcall ORBIT_IMPL_SnmpSvcSetLogType(win32::Windows::Win32::NetworkManagement::Snmp::SNMP_OUTPUT_LOG_TYPE nLogType) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nLogType);

        g_api_table.SnmpSvcSetLogType(nLogType);
        
    }

    void __stdcall ORBIT_IMPL_SnmpUtilDbgPrint(win32::Windows::Win32::NetworkManagement::Snmp::SNMP_LOG nLogLevel, win32::Windows::Win32::Foundation::PSTR szFormat) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nLogLevel);
        ORBIT_TRACK_PARAM(szFormat);

        g_api_table.SnmpUtilDbgPrint(nLogLevel, szFormat);
        
    }

    void* __stdcall ORBIT_IMPL_SnmpMgrOpen(win32::Windows::Win32::Foundation::PSTR lpAgentAddress, win32::Windows::Win32::Foundation::PSTR lpAgentCommunity, int32_t nTimeOut, int32_t nRetries) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(lpAgentAddress);
        ORBIT_TRACK_PARAM(lpAgentCommunity);
        ORBIT_TRACK_PARAM(nTimeOut);
        ORBIT_TRACK_PARAM(nRetries);

        auto win32_impl_result = g_api_table.SnmpMgrOpen(lpAgentAddress, lpAgentCommunity, nTimeOut, nRetries);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SnmpMgrCtl(void* session, uint32_t dwCtlCode, void* lpvInBuffer, uint32_t cbInBuffer, void* lpvOUTBuffer, uint32_t cbOUTBuffer, uint32_t* lpcbBytesReturned) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(dwCtlCode);
        ORBIT_TRACK_PARAM(lpvInBuffer);
        ORBIT_TRACK_PARAM(cbInBuffer);
        ORBIT_TRACK_PARAM(lpvOUTBuffer);
        ORBIT_TRACK_PARAM(cbOUTBuffer);
        ORBIT_TRACK_PARAM(lpcbBytesReturned);

        auto win32_impl_result = g_api_table.SnmpMgrCtl(session, dwCtlCode, lpvInBuffer, cbInBuffer, lpvOUTBuffer, cbOUTBuffer, lpcbBytesReturned);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SnmpMgrClose(void* session) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);

        auto win32_impl_result = g_api_table.SnmpMgrClose(session);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    int32_t __stdcall ORBIT_IMPL_SnmpMgrRequest(void* session, uint8_t requestType, win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBindList* variableBindings, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_ERROR_STATUS* errorStatus, int32_t* errorIndex) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(requestType);
        ORBIT_TRACK_PARAM(variableBindings);
        ORBIT_TRACK_PARAM(errorStatus);
        ORBIT_TRACK_PARAM(errorIndex);

        auto win32_impl_result = g_api_table.SnmpMgrRequest(session, requestType, variableBindings, errorStatus, errorIndex);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SnmpMgrStrToOid(win32::Windows::Win32::Foundation::PSTR string, win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* oid) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(string);
        ORBIT_TRACK_PARAM(oid);

        auto win32_impl_result = g_api_table.SnmpMgrStrToOid(string, oid);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SnmpMgrOidToStr(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* oid, win32::Windows::Win32::Foundation::PSTR* string) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(oid);
        ORBIT_TRACK_PARAM(string);

        auto win32_impl_result = g_api_table.SnmpMgrOidToStr(oid, string);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SnmpMgrTrapListen(win32::Windows::Win32::Foundation::HANDLE* phTrapAvailable) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(phTrapAvailable);

        auto win32_impl_result = g_api_table.SnmpMgrTrapListen(phTrapAvailable);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SnmpMgrGetTrap(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* enterprise, win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* IPAddress, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_GENERICTRAP* genericTrap, int32_t* specificTrap, uint32_t* timeStamp, win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBindList* variableBindings) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(enterprise);
        ORBIT_TRACK_PARAM(IPAddress);
        ORBIT_TRACK_PARAM(genericTrap);
        ORBIT_TRACK_PARAM(specificTrap);
        ORBIT_TRACK_PARAM(timeStamp);
        ORBIT_TRACK_PARAM(variableBindings);

        auto win32_impl_result = g_api_table.SnmpMgrGetTrap(enterprise, IPAddress, genericTrap, specificTrap, timeStamp, variableBindings);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_SnmpMgrGetTrapEx(win32::Windows::Win32::NetworkManagement::Snmp::AsnObjectIdentifier* enterprise, win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* agentAddress, win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* sourceAddress, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_GENERICTRAP* genericTrap, int32_t* specificTrap, win32::Windows::Win32::NetworkManagement::Snmp::AsnOctetString* community, uint32_t* timeStamp, win32::Windows::Win32::NetworkManagement::Snmp::SnmpVarBindList* variableBindings) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(enterprise);
        ORBIT_TRACK_PARAM(agentAddress);
        ORBIT_TRACK_PARAM(sourceAddress);
        ORBIT_TRACK_PARAM(genericTrap);
        ORBIT_TRACK_PARAM(specificTrap);
        ORBIT_TRACK_PARAM(community);
        ORBIT_TRACK_PARAM(timeStamp);
        ORBIT_TRACK_PARAM(variableBindings);

        auto win32_impl_result = g_api_table.SnmpMgrGetTrapEx(enterprise, agentAddress, sourceAddress, genericTrap, specificTrap, community, timeStamp, variableBindings);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetTranslateMode(win32::Windows::Win32::NetworkManagement::Snmp::SNMP_API_TRANSLATE_MODE* nTranslateMode) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nTranslateMode);

        auto win32_impl_result = g_api_table.SnmpGetTranslateMode(nTranslateMode);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSetTranslateMode(win32::Windows::Win32::NetworkManagement::Snmp::SNMP_API_TRANSLATE_MODE nTranslateMode) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nTranslateMode);

        auto win32_impl_result = g_api_table.SnmpSetTranslateMode(nTranslateMode);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetRetransmitMode(win32::Windows::Win32::NetworkManagement::Snmp::SNMP_STATUS* nRetransmitMode) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nRetransmitMode);

        auto win32_impl_result = g_api_table.SnmpGetRetransmitMode(nRetransmitMode);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSetRetransmitMode(win32::Windows::Win32::NetworkManagement::Snmp::SNMP_STATUS nRetransmitMode) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nRetransmitMode);

        auto win32_impl_result = g_api_table.SnmpSetRetransmitMode(nRetransmitMode);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetTimeout(intptr_t hEntity, uint32_t* nPolicyTimeout, uint32_t* nActualTimeout) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hEntity);
        ORBIT_TRACK_PARAM(nPolicyTimeout);
        ORBIT_TRACK_PARAM(nActualTimeout);

        auto win32_impl_result = g_api_table.SnmpGetTimeout(hEntity, nPolicyTimeout, nActualTimeout);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSetTimeout(intptr_t hEntity, uint32_t nPolicyTimeout) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hEntity);
        ORBIT_TRACK_PARAM(nPolicyTimeout);

        auto win32_impl_result = g_api_table.SnmpSetTimeout(hEntity, nPolicyTimeout);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetRetry(intptr_t hEntity, uint32_t* nPolicyRetry, uint32_t* nActualRetry) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hEntity);
        ORBIT_TRACK_PARAM(nPolicyRetry);
        ORBIT_TRACK_PARAM(nActualRetry);

        auto win32_impl_result = g_api_table.SnmpGetRetry(hEntity, nPolicyRetry, nActualRetry);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSetRetry(intptr_t hEntity, uint32_t nPolicyRetry) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hEntity);
        ORBIT_TRACK_PARAM(nPolicyRetry);

        auto win32_impl_result = g_api_table.SnmpSetRetry(hEntity, nPolicyRetry);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetVendorInfo(win32::Windows::Win32::NetworkManagement::Snmp::smiVENDORINFO* vendorInfo) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(vendorInfo);

        auto win32_impl_result = g_api_table.SnmpGetVendorInfo(vendorInfo);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpStartup(uint32_t* nMajorVersion, uint32_t* nMinorVersion, uint32_t* nLevel, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_API_TRANSLATE_MODE* nTranslateMode, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_STATUS* nRetransmitMode) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nMajorVersion);
        ORBIT_TRACK_PARAM(nMinorVersion);
        ORBIT_TRACK_PARAM(nLevel);
        ORBIT_TRACK_PARAM(nTranslateMode);
        ORBIT_TRACK_PARAM(nRetransmitMode);

        auto win32_impl_result = g_api_table.SnmpStartup(nMajorVersion, nMinorVersion, nLevel, nTranslateMode, nRetransmitMode);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpCleanup() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.SnmpCleanup();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpOpen(win32::Windows::Win32::Foundation::HWND hWnd, uint32_t wMsg) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWnd);
        ORBIT_TRACK_PARAM(wMsg);

        auto win32_impl_result = g_api_table.SnmpOpen(hWnd, wMsg);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpClose(intptr_t session) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);

        auto win32_impl_result = g_api_table.SnmpClose(session);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSendMsg(intptr_t session, intptr_t srcEntity, intptr_t dstEntity, intptr_t context, intptr_t PDU) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(srcEntity);
        ORBIT_TRACK_PARAM(dstEntity);
        ORBIT_TRACK_PARAM(context);
        ORBIT_TRACK_PARAM(PDU);

        auto win32_impl_result = g_api_table.SnmpSendMsg(session, srcEntity, dstEntity, context, PDU);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpRecvMsg(intptr_t session, intptr_t* srcEntity, intptr_t* dstEntity, intptr_t* context, intptr_t* PDU) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(srcEntity);
        ORBIT_TRACK_PARAM(dstEntity);
        ORBIT_TRACK_PARAM(context);
        ORBIT_TRACK_PARAM(PDU);

        auto win32_impl_result = g_api_table.SnmpRecvMsg(session, srcEntity, dstEntity, context, PDU);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpRegister(intptr_t session, intptr_t srcEntity, intptr_t dstEntity, intptr_t context, win32::Windows::Win32::NetworkManagement::Snmp::smiOID* notification, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_STATUS state) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(srcEntity);
        ORBIT_TRACK_PARAM(dstEntity);
        ORBIT_TRACK_PARAM(context);
        ORBIT_TRACK_PARAM(notification);
        ORBIT_TRACK_PARAM(state);

        auto win32_impl_result = g_api_table.SnmpRegister(session, srcEntity, dstEntity, context, notification, state);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpCreateSession(win32::Windows::Win32::Foundation::HWND hWnd, uint32_t wMsg, win32::Windows::Win32::NetworkManagement::Snmp::SNMPAPI_CALLBACK* fCallBack, void* lpClientData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hWnd);
        ORBIT_TRACK_PARAM(wMsg);
        ORBIT_TRACK_PARAM(fCallBack);
        ORBIT_TRACK_PARAM(lpClientData);

        auto win32_impl_result = g_api_table.SnmpCreateSession(hWnd, wMsg, fCallBack, lpClientData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpListen(intptr_t hEntity, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_STATUS lStatus) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hEntity);
        ORBIT_TRACK_PARAM(lStatus);

        auto win32_impl_result = g_api_table.SnmpListen(hEntity, lStatus);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpListenEx(intptr_t hEntity, uint32_t lStatus, uint32_t nUseEntityAddr) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hEntity);
        ORBIT_TRACK_PARAM(lStatus);
        ORBIT_TRACK_PARAM(nUseEntityAddr);

        auto win32_impl_result = g_api_table.SnmpListenEx(hEntity, lStatus, nUseEntityAddr);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpCancelMsg(intptr_t session, int32_t reqId) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(reqId);

        auto win32_impl_result = g_api_table.SnmpCancelMsg(session, reqId);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpStartupEx(uint32_t* nMajorVersion, uint32_t* nMinorVersion, uint32_t* nLevel, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_API_TRANSLATE_MODE* nTranslateMode, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_STATUS* nRetransmitMode) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nMajorVersion);
        ORBIT_TRACK_PARAM(nMinorVersion);
        ORBIT_TRACK_PARAM(nLevel);
        ORBIT_TRACK_PARAM(nTranslateMode);
        ORBIT_TRACK_PARAM(nRetransmitMode);

        auto win32_impl_result = g_api_table.SnmpStartupEx(nMajorVersion, nMinorVersion, nLevel, nTranslateMode, nRetransmitMode);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpCleanupEx() noexcept
    {
        ORBIT_SCOPE_FUNCTION();

        auto win32_impl_result = g_api_table.SnmpCleanupEx();
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpStrToEntity(intptr_t session, win32::Windows::Win32::Foundation::PSTR string) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(string);

        auto win32_impl_result = g_api_table.SnmpStrToEntity(session, string);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpEntityToStr(intptr_t entity, uint32_t size, win32::Windows::Win32::Foundation::PSTR string) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(entity);
        ORBIT_TRACK_PARAM(size);
        ORBIT_TRACK_PARAM(string);

        auto win32_impl_result = g_api_table.SnmpEntityToStr(entity, size, string);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpFreeEntity(intptr_t entity) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(entity);

        auto win32_impl_result = g_api_table.SnmpFreeEntity(entity);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpStrToContext(intptr_t session, win32::Windows::Win32::NetworkManagement::Snmp::smiOCTETS* string) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(string);

        auto win32_impl_result = g_api_table.SnmpStrToContext(session, string);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpContextToStr(intptr_t context, win32::Windows::Win32::NetworkManagement::Snmp::smiOCTETS* string) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(context);
        ORBIT_TRACK_PARAM(string);

        auto win32_impl_result = g_api_table.SnmpContextToStr(context, string);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpFreeContext(intptr_t context) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(context);

        auto win32_impl_result = g_api_table.SnmpFreeContext(context);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSetPort(intptr_t hEntity, uint32_t nPort) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hEntity);
        ORBIT_TRACK_PARAM(nPort);

        auto win32_impl_result = g_api_table.SnmpSetPort(hEntity, nPort);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpCreatePdu(intptr_t session, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_PDU_TYPE PDU_type, int32_t request_id, int32_t error_status, int32_t error_index, intptr_t varbindlist) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(PDU_type);
        ORBIT_TRACK_PARAM(request_id);
        ORBIT_TRACK_PARAM(error_status);
        ORBIT_TRACK_PARAM(error_index);
        ORBIT_TRACK_PARAM(varbindlist);

        auto win32_impl_result = g_api_table.SnmpCreatePdu(session, PDU_type, request_id, error_status, error_index, varbindlist);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetPduData(intptr_t PDU, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_PDU_TYPE* PDU_type, int32_t* request_id, win32::Windows::Win32::NetworkManagement::Snmp::SNMP_ERROR* error_status, int32_t* error_index, intptr_t* varbindlist) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(PDU);
        ORBIT_TRACK_PARAM(PDU_type);
        ORBIT_TRACK_PARAM(request_id);
        ORBIT_TRACK_PARAM(error_status);
        ORBIT_TRACK_PARAM(error_index);
        ORBIT_TRACK_PARAM(varbindlist);

        auto win32_impl_result = g_api_table.SnmpGetPduData(PDU, PDU_type, request_id, error_status, error_index, varbindlist);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSetPduData(intptr_t PDU, int32_t* PDU_type, int32_t* request_id, int32_t* non_repeaters, int32_t* max_repetitions, intptr_t* varbindlist) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(PDU);
        ORBIT_TRACK_PARAM(PDU_type);
        ORBIT_TRACK_PARAM(request_id);
        ORBIT_TRACK_PARAM(non_repeaters);
        ORBIT_TRACK_PARAM(max_repetitions);
        ORBIT_TRACK_PARAM(varbindlist);

        auto win32_impl_result = g_api_table.SnmpSetPduData(PDU, PDU_type, request_id, non_repeaters, max_repetitions, varbindlist);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpDuplicatePdu(intptr_t session, intptr_t PDU) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(PDU);

        auto win32_impl_result = g_api_table.SnmpDuplicatePdu(session, PDU);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpFreePdu(intptr_t PDU) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(PDU);

        auto win32_impl_result = g_api_table.SnmpFreePdu(PDU);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpCreateVbl(intptr_t session, win32::Windows::Win32::NetworkManagement::Snmp::smiOID* name, win32::Windows::Win32::NetworkManagement::Snmp::smiVALUE* value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(name);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.SnmpCreateVbl(session, name, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    intptr_t __stdcall ORBIT_IMPL_SnmpDuplicateVbl(intptr_t session, intptr_t vbl) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(vbl);

        auto win32_impl_result = g_api_table.SnmpDuplicateVbl(session, vbl);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpFreeVbl(intptr_t vbl) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(vbl);

        auto win32_impl_result = g_api_table.SnmpFreeVbl(vbl);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpCountVbl(intptr_t vbl) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(vbl);

        auto win32_impl_result = g_api_table.SnmpCountVbl(vbl);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetVb(intptr_t vbl, uint32_t index, win32::Windows::Win32::NetworkManagement::Snmp::smiOID* name, win32::Windows::Win32::NetworkManagement::Snmp::smiVALUE* value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(vbl);
        ORBIT_TRACK_PARAM(index);
        ORBIT_TRACK_PARAM(name);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.SnmpGetVb(vbl, index, name, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpSetVb(intptr_t vbl, uint32_t index, win32::Windows::Win32::NetworkManagement::Snmp::smiOID* name, win32::Windows::Win32::NetworkManagement::Snmp::smiVALUE* value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(vbl);
        ORBIT_TRACK_PARAM(index);
        ORBIT_TRACK_PARAM(name);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.SnmpSetVb(vbl, index, name, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpDeleteVb(intptr_t vbl, uint32_t index) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(vbl);
        ORBIT_TRACK_PARAM(index);

        auto win32_impl_result = g_api_table.SnmpDeleteVb(vbl, index);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpGetLastError(intptr_t session) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);

        auto win32_impl_result = g_api_table.SnmpGetLastError(session);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpStrToOid(win32::Windows::Win32::Foundation::PSTR string, win32::Windows::Win32::NetworkManagement::Snmp::smiOID* dstOID) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(string);
        ORBIT_TRACK_PARAM(dstOID);

        auto win32_impl_result = g_api_table.SnmpStrToOid(string, dstOID);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpOidToStr(win32::Windows::Win32::NetworkManagement::Snmp::smiOID* srcOID, uint32_t size, win32::Windows::Win32::Foundation::PSTR string) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(srcOID);
        ORBIT_TRACK_PARAM(size);
        ORBIT_TRACK_PARAM(string);

        auto win32_impl_result = g_api_table.SnmpOidToStr(srcOID, size, string);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpOidCopy(win32::Windows::Win32::NetworkManagement::Snmp::smiOID* srcOID, win32::Windows::Win32::NetworkManagement::Snmp::smiOID* dstOID) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(srcOID);
        ORBIT_TRACK_PARAM(dstOID);

        auto win32_impl_result = g_api_table.SnmpOidCopy(srcOID, dstOID);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpOidCompare(win32::Windows::Win32::NetworkManagement::Snmp::smiOID* xOID, win32::Windows::Win32::NetworkManagement::Snmp::smiOID* yOID, uint32_t maxlen, int32_t* result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(xOID);
        ORBIT_TRACK_PARAM(yOID);
        ORBIT_TRACK_PARAM(maxlen);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.SnmpOidCompare(xOID, yOID, maxlen, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpEncodeMsg(intptr_t session, intptr_t srcEntity, intptr_t dstEntity, intptr_t context, intptr_t pdu, win32::Windows::Win32::NetworkManagement::Snmp::smiOCTETS* msgBufDesc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(srcEntity);
        ORBIT_TRACK_PARAM(dstEntity);
        ORBIT_TRACK_PARAM(context);
        ORBIT_TRACK_PARAM(pdu);
        ORBIT_TRACK_PARAM(msgBufDesc);

        auto win32_impl_result = g_api_table.SnmpEncodeMsg(session, srcEntity, dstEntity, context, pdu, msgBufDesc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpDecodeMsg(intptr_t session, intptr_t* srcEntity, intptr_t* dstEntity, intptr_t* context, intptr_t* pdu, win32::Windows::Win32::NetworkManagement::Snmp::smiOCTETS* msgBufDesc) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(session);
        ORBIT_TRACK_PARAM(srcEntity);
        ORBIT_TRACK_PARAM(dstEntity);
        ORBIT_TRACK_PARAM(context);
        ORBIT_TRACK_PARAM(pdu);
        ORBIT_TRACK_PARAM(msgBufDesc);

        auto win32_impl_result = g_api_table.SnmpDecodeMsg(session, srcEntity, dstEntity, context, pdu, msgBufDesc);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    uint32_t __stdcall ORBIT_IMPL_SnmpFreeDescriptor(uint32_t syntax, win32::Windows::Win32::NetworkManagement::Snmp::smiOCTETS* descriptor) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(syntax);
        ORBIT_TRACK_PARAM(descriptor);

        auto win32_impl_result = g_api_table.SnmpFreeDescriptor(syntax, descriptor);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif