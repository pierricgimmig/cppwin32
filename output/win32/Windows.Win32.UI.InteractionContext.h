// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UI_InteractionContext_H
#define WIN32_Windows_Win32_UI_InteractionContext_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.UI.InteractionContext.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::UI::InteractionContext
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_CreateInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT* interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_DestroyInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterOutputCallbackInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_OUTPUT_CALLBACK* outputCallback, void* clientData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RegisterOutputCallbackInteractionContext2(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_OUTPUT_CALLBACK2* outputCallback, void* clientData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetInteractionConfigurationInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t configurationCount, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_CONFIGURATION* configuration) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetInteractionConfigurationInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t configurationCount, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_CONFIGURATION* configuration) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetPropertyInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_PROPERTY contextProperty, uint32_t value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetPropertyInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_PROPERTY contextProperty, uint32_t* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetInertiaParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INERTIA_PARAMETER inertiaParameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetInertiaParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INERTIA_PARAMETER inertiaParameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetCrossSlideParametersInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t parameterCount, win32::Windows::Win32::UI::InteractionContext::CROSS_SLIDE_PARAMETER* crossSlideParameters) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetCrossSlideParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::CROSS_SLIDE_THRESHOLD threshold, float* distance) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetTapParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TAP_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetTapParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TAP_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetHoldParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::HOLD_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetHoldParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::HOLD_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetTranslationParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TRANSLATION_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetTranslationParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TRANSLATION_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetMouseWheelParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::MOUSE_WHEEL_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetMouseWheelParameterInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::MOUSE_WHEEL_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ResetInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_GetStateInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::Input::Pointer::POINTER_INFO* pointerInfo, win32::Windows::Win32::UI::InteractionContext::INTERACTION_STATE* state) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_AddPointerInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t pointerId) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_RemovePointerInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t pointerId) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ProcessPointerFramesInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t entriesCount, uint32_t pointerCount, win32::Windows::Win32::UI::Input::Pointer::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_BufferPointerPacketsInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t entriesCount, win32::Windows::Win32::UI::Input::Pointer::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ProcessBufferedPacketsInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_ProcessInertiaInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_StopInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_SetPivotInteractionContext(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, float x, float y, float radius) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *CreateInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT* interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *DestroyInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RegisterOutputCallbackInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_OUTPUT_CALLBACK* outputCallback, void* clientData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RegisterOutputCallbackInteractionContext2)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_OUTPUT_CALLBACK2* outputCallback, void* clientData) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetInteractionConfigurationInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t configurationCount, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_CONFIGURATION* configuration) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetInteractionConfigurationInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t configurationCount, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_CONFIGURATION* configuration) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetPropertyInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_PROPERTY contextProperty, uint32_t value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetPropertyInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INTERACTION_CONTEXT_PROPERTY contextProperty, uint32_t* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetInertiaParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INERTIA_PARAMETER inertiaParameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetInertiaParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::INERTIA_PARAMETER inertiaParameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetCrossSlideParametersInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t parameterCount, win32::Windows::Win32::UI::InteractionContext::CROSS_SLIDE_PARAMETER* crossSlideParameters) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetCrossSlideParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::CROSS_SLIDE_THRESHOLD threshold, float* distance) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetTapParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TAP_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetTapParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TAP_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetHoldParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::HOLD_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetHoldParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::HOLD_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetTranslationParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TRANSLATION_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetTranslationParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::TRANSLATION_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetMouseWheelParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::MOUSE_WHEEL_PARAMETER parameter, float value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetMouseWheelParameterInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::InteractionContext::MOUSE_WHEEL_PARAMETER parameter, float* value) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ResetInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *GetStateInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, win32::Windows::Win32::UI::Input::Pointer::POINTER_INFO* pointerInfo, win32::Windows::Win32::UI::InteractionContext::INTERACTION_STATE* state) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *AddPointerInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t pointerId) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *RemovePointerInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t pointerId) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ProcessPointerFramesInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t entriesCount, uint32_t pointerCount, win32::Windows::Win32::UI::Input::Pointer::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *BufferPointerPacketsInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, uint32_t entriesCount, win32::Windows::Win32::UI::Input::Pointer::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ProcessBufferedPacketsInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *ProcessInertiaInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *StopInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *SetPivotInteractionContext)(win32::Windows::Win32::UI::InteractionContext::HINTERACTIONCONTEXT interactionContext, float x, float y, float radius) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
