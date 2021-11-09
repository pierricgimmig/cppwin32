// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Js_2_H
#define WIN32_Windows_Win32_System_Js_2_H
#include "win32/Windows.Win32.System.Js.h"
#include "win32/impl/Windows.Win32.System.Js.1.h"
WIN32_EXPORT namespace win32::Windows::Win32::System::Js
{
ApiTable g_api_table;

#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateRuntime(win32::Windows::Win32::System::Js::JsRuntimeAttributes attributes, win32::Windows::Win32::System::Js::JsRuntimeVersion runtimeVersion, win32::Windows::Win32::System::Js::JsThreadServiceCallback* threadService, void** runtime) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(attributes);
        ORBIT_TRACK_PARAM(runtimeVersion);
        ORBIT_TRACK_PARAM(threadService);
        ORBIT_TRACK_PARAM(runtime);

        auto win32_impl_result = g_api_table.JsCreateRuntime(attributes, runtimeVersion, threadService, runtime);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCollectGarbage(void* runtime) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);

        auto win32_impl_result = g_api_table.JsCollectGarbage(runtime);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsDisposeRuntime(void* runtime) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);

        auto win32_impl_result = g_api_table.JsDisposeRuntime(runtime);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetRuntimeMemoryUsage(void* runtime, size_t* memoryUsage) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);
        ORBIT_TRACK_PARAM(memoryUsage);

        auto win32_impl_result = g_api_table.JsGetRuntimeMemoryUsage(runtime, memoryUsage);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetRuntimeMemoryLimit(void* runtime, size_t* memoryLimit) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);
        ORBIT_TRACK_PARAM(memoryLimit);

        auto win32_impl_result = g_api_table.JsGetRuntimeMemoryLimit(runtime, memoryLimit);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetRuntimeMemoryLimit(void* runtime, size_t memoryLimit) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);
        ORBIT_TRACK_PARAM(memoryLimit);

        auto win32_impl_result = g_api_table.JsSetRuntimeMemoryLimit(runtime, memoryLimit);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetRuntimeMemoryAllocationCallback(void* runtime, void* callbackState, win32::Windows::Win32::System::Js::JsMemoryAllocationCallback* allocationCallback) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);
        ORBIT_TRACK_PARAM(callbackState);
        ORBIT_TRACK_PARAM(allocationCallback);

        auto win32_impl_result = g_api_table.JsSetRuntimeMemoryAllocationCallback(runtime, callbackState, allocationCallback);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetRuntimeBeforeCollectCallback(void* runtime, void* callbackState, win32::Windows::Win32::System::Js::JsBeforeCollectCallback* beforeCollectCallback) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);
        ORBIT_TRACK_PARAM(callbackState);
        ORBIT_TRACK_PARAM(beforeCollectCallback);

        auto win32_impl_result = g_api_table.JsSetRuntimeBeforeCollectCallback(runtime, callbackState, beforeCollectCallback);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsAddRef(void* ref, uint32_t* count) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ref);
        ORBIT_TRACK_PARAM(count);

        auto win32_impl_result = g_api_table.JsAddRef(ref, count);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsRelease(void* ref, uint32_t* count) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(ref);
        ORBIT_TRACK_PARAM(count);

        auto win32_impl_result = g_api_table.JsRelease(ref, count);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateContext(void* runtime, win32::Windows::Win32::System::Diagnostics::Debug::IDebugApplication64* debugApplication, void** newContext) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);
        ORBIT_TRACK_PARAM(debugApplication);
        ORBIT_TRACK_PARAM(newContext);

        auto win32_impl_result = g_api_table.JsCreateContext(runtime, debugApplication, newContext);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetCurrentContext(void** currentContext) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(currentContext);

        auto win32_impl_result = g_api_table.JsGetCurrentContext(currentContext);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetCurrentContext(void* context) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(context);

        auto win32_impl_result = g_api_table.JsSetCurrentContext(context);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetRuntime(void* context, void** runtime) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(context);
        ORBIT_TRACK_PARAM(runtime);

        auto win32_impl_result = g_api_table.JsGetRuntime(context, runtime);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsStartDebugging(win32::Windows::Win32::System::Diagnostics::Debug::IDebugApplication64* debugApplication) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(debugApplication);

        auto win32_impl_result = g_api_table.JsStartDebugging(debugApplication);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsIdle(uint32_t* nextIdleTick) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nextIdleTick);

        auto win32_impl_result = g_api_table.JsIdle(nextIdleTick);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsParseScript(win32::Windows::Win32::Foundation::PWSTR script, size_t sourceContext, win32::Windows::Win32::Foundation::PWSTR sourceUrl, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(script);
        ORBIT_TRACK_PARAM(sourceContext);
        ORBIT_TRACK_PARAM(sourceUrl);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsParseScript(script, sourceContext, sourceUrl, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsRunScript(win32::Windows::Win32::Foundation::PWSTR script, size_t sourceContext, win32::Windows::Win32::Foundation::PWSTR sourceUrl, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(script);
        ORBIT_TRACK_PARAM(sourceContext);
        ORBIT_TRACK_PARAM(sourceUrl);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsRunScript(script, sourceContext, sourceUrl, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSerializeScript(win32::Windows::Win32::Foundation::PWSTR script, uint8_t* buffer, uint32_t* bufferSize) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(script);
        ORBIT_TRACK_PARAM(buffer);
        ORBIT_TRACK_PARAM(bufferSize);

        auto win32_impl_result = g_api_table.JsSerializeScript(script, buffer, bufferSize);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsParseSerializedScript(win32::Windows::Win32::Foundation::PWSTR script, uint8_t* buffer, size_t sourceContext, win32::Windows::Win32::Foundation::PWSTR sourceUrl, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(script);
        ORBIT_TRACK_PARAM(buffer);
        ORBIT_TRACK_PARAM(sourceContext);
        ORBIT_TRACK_PARAM(sourceUrl);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsParseSerializedScript(script, buffer, sourceContext, sourceUrl, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsRunSerializedScript(win32::Windows::Win32::Foundation::PWSTR script, uint8_t* buffer, size_t sourceContext, win32::Windows::Win32::Foundation::PWSTR sourceUrl, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(script);
        ORBIT_TRACK_PARAM(buffer);
        ORBIT_TRACK_PARAM(sourceContext);
        ORBIT_TRACK_PARAM(sourceUrl);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsRunSerializedScript(script, buffer, sourceContext, sourceUrl, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetPropertyIdFromName(win32::Windows::Win32::Foundation::PWSTR name, void** propertyId) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(name);
        ORBIT_TRACK_PARAM(propertyId);

        auto win32_impl_result = g_api_table.JsGetPropertyIdFromName(name, propertyId);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetPropertyNameFromId(void* propertyId, uint16_t** name) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(propertyId);
        ORBIT_TRACK_PARAM(name);

        auto win32_impl_result = g_api_table.JsGetPropertyNameFromId(propertyId, name);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetUndefinedValue(void** undefinedValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(undefinedValue);

        auto win32_impl_result = g_api_table.JsGetUndefinedValue(undefinedValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetNullValue(void** nullValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nullValue);

        auto win32_impl_result = g_api_table.JsGetNullValue(nullValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetTrueValue(void** trueValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(trueValue);

        auto win32_impl_result = g_api_table.JsGetTrueValue(trueValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetFalseValue(void** falseValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(falseValue);

        auto win32_impl_result = g_api_table.JsGetFalseValue(falseValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsBoolToBoolean(uint8_t value, void** booleanValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(booleanValue);

        auto win32_impl_result = g_api_table.JsBoolToBoolean(value, booleanValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsBooleanToBool(void* value, bool* boolValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(boolValue);

        auto win32_impl_result = g_api_table.JsBooleanToBool(value, boolValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsConvertValueToBoolean(void* value, void** booleanValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(booleanValue);

        auto win32_impl_result = g_api_table.JsConvertValueToBoolean(value, booleanValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetValueType(void* value, win32::Windows::Win32::System::Js::JsValueType* type) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(type);

        auto win32_impl_result = g_api_table.JsGetValueType(value, type);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsDoubleToNumber(double doubleValue, void** value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(doubleValue);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsDoubleToNumber(doubleValue, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsIntToNumber(int32_t intValue, void** value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(intValue);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsIntToNumber(intValue, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsNumberToDouble(void* value, double* doubleValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(doubleValue);

        auto win32_impl_result = g_api_table.JsNumberToDouble(value, doubleValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsConvertValueToNumber(void* value, void** numberValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(numberValue);

        auto win32_impl_result = g_api_table.JsConvertValueToNumber(value, numberValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetStringLength(void* stringValue, int32_t* length) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(stringValue);
        ORBIT_TRACK_PARAM(length);

        auto win32_impl_result = g_api_table.JsGetStringLength(stringValue, length);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsPointerToString(win32::Windows::Win32::Foundation::PWSTR stringValue, size_t stringLength, void** value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(stringValue);
        ORBIT_TRACK_PARAM(stringLength);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsPointerToString(stringValue, stringLength, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsStringToPointer(void* value, uint16_t** stringValue, size_t* stringLength) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(stringValue);
        ORBIT_TRACK_PARAM(stringLength);

        auto win32_impl_result = g_api_table.JsStringToPointer(value, stringValue, stringLength);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsConvertValueToString(void* value, void** stringValue) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(stringValue);

        auto win32_impl_result = g_api_table.JsConvertValueToString(value, stringValue);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsVariantToValue(win32::Windows::Win32::System::Com::VARIANT* variant, void** value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(variant);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsVariantToValue(variant, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsValueToVariant(void* object, win32::Windows::Win32::System::Com::VARIANT* variant) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(variant);

        auto win32_impl_result = g_api_table.JsValueToVariant(object, variant);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetGlobalObject(void** globalObject) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(globalObject);

        auto win32_impl_result = g_api_table.JsGetGlobalObject(globalObject);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateObject(void** object) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);

        auto win32_impl_result = g_api_table.JsCreateObject(object);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateExternalObject(void* data, win32::Windows::Win32::System::Js::JsFinalizeCallback* finalizeCallback, void** object) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(data);
        ORBIT_TRACK_PARAM(finalizeCallback);
        ORBIT_TRACK_PARAM(object);

        auto win32_impl_result = g_api_table.JsCreateExternalObject(data, finalizeCallback, object);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsConvertValueToObject(void* value, void** object) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(object);

        auto win32_impl_result = g_api_table.JsConvertValueToObject(value, object);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetPrototype(void* object, void** prototypeObject) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(prototypeObject);

        auto win32_impl_result = g_api_table.JsGetPrototype(object, prototypeObject);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetPrototype(void* object, void* prototypeObject) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(prototypeObject);

        auto win32_impl_result = g_api_table.JsSetPrototype(object, prototypeObject);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetExtensionAllowed(void* object, bool* value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsGetExtensionAllowed(object, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsPreventExtension(void* object) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);

        auto win32_impl_result = g_api_table.JsPreventExtension(object);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetProperty(void* object, void* propertyId, void** value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(propertyId);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsGetProperty(object, propertyId, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetOwnPropertyDescriptor(void* object, void* propertyId, void** propertyDescriptor) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(propertyId);
        ORBIT_TRACK_PARAM(propertyDescriptor);

        auto win32_impl_result = g_api_table.JsGetOwnPropertyDescriptor(object, propertyId, propertyDescriptor);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetOwnPropertyNames(void* object, void** propertyNames) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(propertyNames);

        auto win32_impl_result = g_api_table.JsGetOwnPropertyNames(object, propertyNames);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetProperty(void* object, void* propertyId, void* value, uint8_t useStrictRules) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(propertyId);
        ORBIT_TRACK_PARAM(value);
        ORBIT_TRACK_PARAM(useStrictRules);

        auto win32_impl_result = g_api_table.JsSetProperty(object, propertyId, value, useStrictRules);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsHasProperty(void* object, void* propertyId, bool* hasProperty) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(propertyId);
        ORBIT_TRACK_PARAM(hasProperty);

        auto win32_impl_result = g_api_table.JsHasProperty(object, propertyId, hasProperty);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsDeleteProperty(void* object, void* propertyId, uint8_t useStrictRules, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(propertyId);
        ORBIT_TRACK_PARAM(useStrictRules);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsDeleteProperty(object, propertyId, useStrictRules, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsDefineProperty(void* object, void* propertyId, void* propertyDescriptor, bool* result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(propertyId);
        ORBIT_TRACK_PARAM(propertyDescriptor);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsDefineProperty(object, propertyId, propertyDescriptor, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsHasIndexedProperty(void* object, void* index, bool* result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(index);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsHasIndexedProperty(object, index, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetIndexedProperty(void* object, void* index, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(index);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsGetIndexedProperty(object, index, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetIndexedProperty(void* object, void* index, void* value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(index);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsSetIndexedProperty(object, index, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsDeleteIndexedProperty(void* object, void* index) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(index);

        auto win32_impl_result = g_api_table.JsDeleteIndexedProperty(object, index);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsEquals(void* object1, void* object2, bool* result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object1);
        ORBIT_TRACK_PARAM(object2);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsEquals(object1, object2, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsStrictEquals(void* object1, void* object2, bool* result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object1);
        ORBIT_TRACK_PARAM(object2);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsStrictEquals(object1, object2, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsHasExternalData(void* object, bool* value) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(value);

        auto win32_impl_result = g_api_table.JsHasExternalData(object, value);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetExternalData(void* object, void** externalData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(externalData);

        auto win32_impl_result = g_api_table.JsGetExternalData(object, externalData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetExternalData(void* object, void* externalData) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(object);
        ORBIT_TRACK_PARAM(externalData);

        auto win32_impl_result = g_api_table.JsSetExternalData(object, externalData);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateArray(uint32_t length, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(length);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsCreateArray(length, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCallFunction(void* function, void** arguments, uint16_t argumentCount, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(function);
        ORBIT_TRACK_PARAM(arguments);
        ORBIT_TRACK_PARAM(argumentCount);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsCallFunction(function, arguments, argumentCount, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsConstructObject(void* function, void** arguments, uint16_t argumentCount, void** result) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(function);
        ORBIT_TRACK_PARAM(arguments);
        ORBIT_TRACK_PARAM(argumentCount);
        ORBIT_TRACK_PARAM(result);

        auto win32_impl_result = g_api_table.JsConstructObject(function, arguments, argumentCount, result);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateFunction(win32::Windows::Win32::System::Js::JsNativeFunction* nativeFunction, void* callbackState, void** function) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(nativeFunction);
        ORBIT_TRACK_PARAM(callbackState);
        ORBIT_TRACK_PARAM(function);

        auto win32_impl_result = g_api_table.JsCreateFunction(nativeFunction, callbackState, function);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateError(void* message, void** error) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(message);
        ORBIT_TRACK_PARAM(error);

        auto win32_impl_result = g_api_table.JsCreateError(message, error);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateRangeError(void* message, void** error) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(message);
        ORBIT_TRACK_PARAM(error);

        auto win32_impl_result = g_api_table.JsCreateRangeError(message, error);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateReferenceError(void* message, void** error) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(message);
        ORBIT_TRACK_PARAM(error);

        auto win32_impl_result = g_api_table.JsCreateReferenceError(message, error);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateSyntaxError(void* message, void** error) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(message);
        ORBIT_TRACK_PARAM(error);

        auto win32_impl_result = g_api_table.JsCreateSyntaxError(message, error);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateTypeError(void* message, void** error) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(message);
        ORBIT_TRACK_PARAM(error);

        auto win32_impl_result = g_api_table.JsCreateTypeError(message, error);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsCreateURIError(void* message, void** error) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(message);
        ORBIT_TRACK_PARAM(error);

        auto win32_impl_result = g_api_table.JsCreateURIError(message, error);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsHasException(bool* hasException) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(hasException);

        auto win32_impl_result = g_api_table.JsHasException(hasException);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsGetAndClearException(void** exception) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(exception);

        auto win32_impl_result = g_api_table.JsGetAndClearException(exception);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsSetException(void* exception) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(exception);

        auto win32_impl_result = g_api_table.JsSetException(exception);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsDisableRuntimeExecution(void* runtime) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);

        auto win32_impl_result = g_api_table.JsDisableRuntimeExecution(runtime);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsEnableRuntimeExecution(void* runtime) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);

        auto win32_impl_result = g_api_table.JsEnableRuntimeExecution(runtime);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsIsRuntimeExecutionDisabled(void* runtime, bool* isDisabled) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(runtime);
        ORBIT_TRACK_PARAM(isDisabled);

        auto win32_impl_result = g_api_table.JsIsRuntimeExecutionDisabled(runtime, isDisabled);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsStartProfiling(win32::Windows::Win32::System::Diagnostics::Debug::IActiveScriptProfilerCallback* callback, win32::Windows::Win32::System::Diagnostics::Debug::PROFILER_EVENT_MASK eventMask, uint32_t context) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(callback);
        ORBIT_TRACK_PARAM(eventMask);
        ORBIT_TRACK_PARAM(context);

        auto win32_impl_result = g_api_table.JsStartProfiling(callback, eventMask, context);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsStopProfiling(win32::Windows::Win32::Foundation::HRESULT reason) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(reason);

        auto win32_impl_result = g_api_table.JsStopProfiling(reason);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsEnumerateHeap(win32::Windows::Win32::System::Diagnostics::Debug::IActiveScriptProfilerHeapEnum** enumerator) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(enumerator);

        auto win32_impl_result = g_api_table.JsEnumerateHeap(enumerator);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

    win32::Windows::Win32::System::Js::JsErrorCode __stdcall ORBIT_IMPL_JsIsEnumeratingHeap(bool* isEnumeratingHeap) noexcept
    {
        ORBIT_SCOPE_FUNCTION();
        ORBIT_TRACK_PARAM(isEnumeratingHeap);

        auto win32_impl_result = g_api_table.JsIsEnumeratingHeap(isEnumeratingHeap);
        ORBIT_TRACK_RET(win32_impl_result);
        return win32_impl_result;
    }

}

#pragma endregion abi_methods

}
#endif
