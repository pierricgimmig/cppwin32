// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Storage_Xps_Printing_0_H
#define WIN32_Windows_Win32_Storage_Xps_Printing_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Storage::Xps::Printing
{
#pragma region enums
    enum class PrintDocumentPackageCompletion : int32_t
    {
        PrintDocumentPackageCompletion_InProgress = 0,
        PrintDocumentPackageCompletion_Completed = 1,
        PrintDocumentPackageCompletion_Canceled = 2,
        PrintDocumentPackageCompletion_Failed = 3,
    };
    enum class XPS_JOB_COMPLETION : int32_t
    {
        XPS_JOB_IN_PROGRESS = 0,
        XPS_JOB_COMPLETED = 1,
        XPS_JOB_CANCELLED = 2,
        XPS_JOB_FAILED = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct PrintDocumentPackageStatus;
    struct PrintDocumentPackageTarget;
    struct PrintDocumentPackageTargetFactory;
    struct XPS_JOB_STATUS;
    struct IPrintDocumentPackageStatusEvent;
    struct IPrintDocumentPackageTarget;
    struct IPrintDocumentPackageTargetFactory;
    struct IXpsPrintJob;
    struct IXpsPrintJobStream;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif