// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.201217.4

void* winrt_make_Unicord_Universal_Native_Shlwapi()
{
    return winrt::detach_abi(winrt::make<winrt::Unicord::Universal::Native::factory_implementation::Shlwapi>());
}
WINRT_EXPORT namespace winrt::Unicord::Universal::Native
{
    hstring Shlwapi::AssocQueryString(Unicord::Universal::Native::ASSOCF const& flags, Unicord::Universal::Native::ASSOCSTR const& str, param::hstring const& pszAssoc, param::hstring const& pszExtra)
    {
        return Unicord::Universal::Native::implementation::Shlwapi::AssocQueryString(flags, str, pszAssoc, pszExtra);
    }
    hstring Shlwapi::StrFormatByteSizeEx(uint64_t size, Unicord::Universal::Native::SFBSFlags const& flags)
    {
        return Unicord::Universal::Native::implementation::Shlwapi::StrFormatByteSizeEx(size, flags);
    }
}
