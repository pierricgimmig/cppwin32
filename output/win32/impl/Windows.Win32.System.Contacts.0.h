// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_System_Contacts_0_H
#define WIN32_Windows_Win32_System_Contacts_0_H
WIN32_EXPORT namespace win32::Windows::Win32::System::Contacts
{
#pragma region enums
    enum class CONTACT_AGGREGATION_COLLECTION_OPTIONS : int32_t
    {
        CACO_DEFAULT = 0,
        CACO_INCLUDE_EXTERNAL = 1,
        CACO_EXTERNAL_ONLY = 2,
    };
    enum class CONTACT_AGGREGATION_CREATE_OR_OPEN_OPTIONS : int32_t
    {
        CA_CREATE_LOCAL = 0,
        CA_CREATE_EXTERNAL = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CONTACT_AGGREGATION_BLOB;
    struct Contact;
    struct ContactManager;
    struct IContact;
    struct IContactAggregationAggregate;
    struct IContactAggregationAggregateCollection;
    struct IContactAggregationContact;
    struct IContactAggregationContactCollection;
    struct IContactAggregationGroup;
    struct IContactAggregationGroupCollection;
    struct IContactAggregationLink;
    struct IContactAggregationLinkCollection;
    struct IContactAggregationManager;
    struct IContactAggregationServerPerson;
    struct IContactAggregationServerPersonCollection;
    struct IContactCollection;
    struct IContactManager;
    struct IContactProperties;
    struct IContactPropertyCollection;
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