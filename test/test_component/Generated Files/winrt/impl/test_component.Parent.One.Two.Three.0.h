// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_test_component_Parent_One_Two_Three_0_H
#define WINRT_test_component_Parent_One_Two_Three_0_H
WINRT_EXPORT namespace winrt::test_component::Parent::One::Two::Three
{
    struct ThreeStruct;
}
namespace winrt::impl
{
    template <> struct category<test_component::Parent::One::Two::Three::ThreeStruct>{ using type = struct_category<int32_t>; };
    template <> inline constexpr auto& name_v<test_component::Parent::One::Two::Three::ThreeStruct>{ L"test_component.Parent.One.Two.Three.ThreeStruct" };
#ifndef WINRT_LEAN_AND_MEAN
#endif
    struct struct_test_component_Parent_One_Two_Three_ThreeStruct
    {
        int32_t Value;
    };
    template <> struct abi<test_component::Parent::One::Two::Three::ThreeStruct>
    {
        using type = struct_test_component_Parent_One_Two_Three_ThreeStruct;
    };
}
#endif