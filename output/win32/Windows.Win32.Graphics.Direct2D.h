// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Graphics_Direct2D_H
#define WIN32_Windows_Win32_Graphics_Direct2D_H
#include "win32/base.h"
#include "win32/impl/complex_structs.h"
#include "win32/impl/complex_interfaces.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Graphics.Direct2D.0.h"
WIN32_EXPORT namespace win32::Windows::Win32::Graphics::Direct2D
{
#pragma region methods
extern "C"
{
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D2D1CreateFactory(win32::Windows::Win32::Graphics::Direct2D::D2D1_FACTORY_TYPE factoryType, ::win32::guid* riid, win32::Windows::Win32::Graphics::Direct2D::D2D1_FACTORY_OPTIONS* pFactoryOptions, void** ppIFactory) noexcept;
    void __stdcall ORBIT_IMPL_D2D1MakeRotateMatrix(float angle, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F center, win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    void __stdcall ORBIT_IMPL_D2D1MakeSkewMatrix(float angleX, float angleY, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F center, win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_D2D1IsMatrixInvertible(win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::Foundation::BOOL __stdcall ORBIT_IMPL_D2D1InvertMatrix(win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D2D1CreateDevice(win32::Windows::Win32::Graphics::Dxgi::IDXGIDevice* dxgiDevice, win32::Windows::Win32::Graphics::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, win32::Windows::Win32::Graphics::Direct2D::ID2D1Device** d2dDevice) noexcept;
    win32::Windows::Win32::Foundation::HRESULT __stdcall ORBIT_IMPL_D2D1CreateDeviceContext(win32::Windows::Win32::Graphics::Dxgi::IDXGISurface* dxgiSurface, win32::Windows::Win32::Graphics::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, win32::Windows::Win32::Graphics::Direct2D::ID2D1DeviceContext** d2dDeviceContext) noexcept;
    win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_F __stdcall ORBIT_IMPL_D2D1ConvertColorSpace(win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_SPACE sourceColorSpace, win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_SPACE destinationColorSpace, win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_F* color) noexcept;
    void __stdcall ORBIT_IMPL_D2D1SinCos(float angle, float* s, float* c) noexcept;
    float __stdcall ORBIT_IMPL_D2D1Tan(float angle) noexcept;
    float __stdcall ORBIT_IMPL_D2D1Vec3Length(float x, float y, float z) noexcept;
    float __stdcall ORBIT_IMPL_D2D1ComputeMaximumScaleFactor(win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    void __stdcall ORBIT_IMPL_D2D1GetGradientMeshInteriorPointsFromCoonsPatch(win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint0, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint1, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint2, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint3, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint4, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint5, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint6, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint7, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint8, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint9, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint10, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint11, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint11, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint12, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint21, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint22) noexcept;
}

struct ApiTable {
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D2D1CreateFactory)(win32::Windows::Win32::Graphics::Direct2D::D2D1_FACTORY_TYPE factoryType, ::win32::guid* riid, win32::Windows::Win32::Graphics::Direct2D::D2D1_FACTORY_OPTIONS* pFactoryOptions, void** ppIFactory) noexcept;
    void (__stdcall *D2D1MakeRotateMatrix)(float angle, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F center, win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    void (__stdcall *D2D1MakeSkewMatrix)(float angleX, float angleY, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F center, win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *D2D1IsMatrixInvertible)(win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::Foundation::BOOL (__stdcall *D2D1InvertMatrix)(win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D2D1CreateDevice)(win32::Windows::Win32::Graphics::Dxgi::IDXGIDevice* dxgiDevice, win32::Windows::Win32::Graphics::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, win32::Windows::Win32::Graphics::Direct2D::ID2D1Device** d2dDevice) noexcept;
    win32::Windows::Win32::Foundation::HRESULT (__stdcall *D2D1CreateDeviceContext)(win32::Windows::Win32::Graphics::Dxgi::IDXGISurface* dxgiSurface, win32::Windows::Win32::Graphics::Direct2D::D2D1_CREATION_PROPERTIES* creationProperties, win32::Windows::Win32::Graphics::Direct2D::ID2D1DeviceContext** d2dDeviceContext) noexcept;
    win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_F (__stdcall *D2D1ConvertColorSpace)(win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_SPACE sourceColorSpace, win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_SPACE destinationColorSpace, win32::Windows::Win32::Graphics::Direct2D::D2D1_COLOR_F* color) noexcept;
    void (__stdcall *D2D1SinCos)(float angle, float* s, float* c) noexcept;
    float (__stdcall *D2D1Tan)(float angle) noexcept;
    float (__stdcall *D2D1Vec3Length)(float x, float y, float z) noexcept;
    float (__stdcall *D2D1ComputeMaximumScaleFactor)(win32::Windows::Win32::Graphics::Direct2D::D2D_MATRIX_3X2_F* matrix) noexcept;
    void (__stdcall *D2D1GetGradientMeshInteriorPointsFromCoonsPatch)(win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint0, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint1, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint2, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint3, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint4, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint5, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint6, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint7, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint8, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint9, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint10, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pPoint11, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint11, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint12, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint21, win32::Windows::Win32::Graphics::Direct2D::D2D_POINT_2F* pTensorPoint22) noexcept;
};
extern ApiTable g_api_table;

#pragma endregion methods

}
#endif
