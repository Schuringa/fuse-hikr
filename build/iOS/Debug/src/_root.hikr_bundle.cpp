// This file was generated based on /Users/jordans/code/research/fuse/hikr/hikr.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.hikr_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class hikr_bundle :0
// {
// static hikr_bundle() :0
static void hikr_bundle__cctor__fn(uType* __type)
{
    hikr_bundle::backgroundf460710e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[1/*"background-...*/]);
    hikr_bundle::EditHikePagee9331fff_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[2/*"edithikepag...*/]);
    hikr_bundle::HomePageb9b2d30f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[3/*"homepage-79...*/]);
    hikr_bundle::natureec5a5c89_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[4/*"nature-15b9...*/]);
    hikr_bundle::SplashPage48369af7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"hikr"*/]))->GetFile(::STRINGS[5/*"splashpage-...*/]);
}

static void hikr_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("hikr");
    ::STRINGS[1] = uString::Const("background-01212485.jpg");
    ::STRINGS[2] = uString::Const("edithikepage-e27a5966.js");
    ::STRINGS[3] = uString::Const("homepage-797337e6.js");
    ::STRINGS[4] = uString::Const("nature-15b9e892.mp4");
    ::STRINGS[5] = uString::Const("splashpage-83463c2a.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::backgroundf460710e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::EditHikePagee9331fff_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::HomePageb9b2d30f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::natureec5a5c89_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::hikr_bundle::SplashPage48369af7_, uFieldFlagsStatic);
}

uClassType* hikr_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("hikr_bundle", options);
    type->fp_build_ = hikr_bundle_build;
    type->fp_cctor_ = hikr_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::backgroundf460710e_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::EditHikePagee9331fff_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::HomePageb9b2d30f_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::natureec5a5c89_;
uSStrong< ::g::Uno::IO::BundleFile*> hikr_bundle::SplashPage48369af7_;
// }

} // ::g
