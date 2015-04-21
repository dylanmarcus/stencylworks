#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_utils_ColorDeficiencyTypes
#include <com/stencyl/utils/ColorDeficiencyTypes.h>
#endif
namespace com{
namespace stencyl{
namespace utils{

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Achromatomaly;

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Achromatopsia;

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Deuteranomaly;

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Deuteranopia;

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Protanomaly;

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Protanopia;

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Tritanomaly;

::com::stencyl::utils::ColorDeficiencyTypes ColorDeficiencyTypes_obj::Tritanopia;

HX_DEFINE_CREATE_ENUM(ColorDeficiencyTypes_obj)

int ColorDeficiencyTypes_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Achromatomaly")) return 7;
	if (inName==HX_CSTRING("Achromatopsia")) return 6;
	if (inName==HX_CSTRING("Deuteranomaly")) return 3;
	if (inName==HX_CSTRING("Deuteranopia")) return 2;
	if (inName==HX_CSTRING("Protanomaly")) return 1;
	if (inName==HX_CSTRING("Protanopia")) return 0;
	if (inName==HX_CSTRING("Tritanomaly")) return 5;
	if (inName==HX_CSTRING("Tritanopia")) return 4;
	return super::__FindIndex(inName);
}

int ColorDeficiencyTypes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Achromatomaly")) return 0;
	if (inName==HX_CSTRING("Achromatopsia")) return 0;
	if (inName==HX_CSTRING("Deuteranomaly")) return 0;
	if (inName==HX_CSTRING("Deuteranopia")) return 0;
	if (inName==HX_CSTRING("Protanomaly")) return 0;
	if (inName==HX_CSTRING("Protanopia")) return 0;
	if (inName==HX_CSTRING("Tritanomaly")) return 0;
	if (inName==HX_CSTRING("Tritanopia")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ColorDeficiencyTypes_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Achromatomaly")) return Achromatomaly;
	if (inName==HX_CSTRING("Achromatopsia")) return Achromatopsia;
	if (inName==HX_CSTRING("Deuteranomaly")) return Deuteranomaly;
	if (inName==HX_CSTRING("Deuteranopia")) return Deuteranopia;
	if (inName==HX_CSTRING("Protanomaly")) return Protanomaly;
	if (inName==HX_CSTRING("Protanopia")) return Protanopia;
	if (inName==HX_CSTRING("Tritanomaly")) return Tritanomaly;
	if (inName==HX_CSTRING("Tritanopia")) return Tritanopia;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Protanopia"),
	HX_CSTRING("Protanomaly"),
	HX_CSTRING("Deuteranopia"),
	HX_CSTRING("Deuteranomaly"),
	HX_CSTRING("Tritanopia"),
	HX_CSTRING("Tritanomaly"),
	HX_CSTRING("Achromatopsia"),
	HX_CSTRING("Achromatomaly"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Achromatomaly,"Achromatomaly");
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Achromatopsia,"Achromatopsia");
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Deuteranomaly,"Deuteranomaly");
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Deuteranopia,"Deuteranopia");
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Protanomaly,"Protanomaly");
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Protanopia,"Protanopia");
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Tritanomaly,"Tritanomaly");
	HX_MARK_MEMBER_NAME(ColorDeficiencyTypes_obj::Tritanopia,"Tritanopia");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Achromatomaly,"Achromatomaly");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Achromatopsia,"Achromatopsia");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Deuteranomaly,"Deuteranomaly");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Deuteranopia,"Deuteranopia");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Protanomaly,"Protanomaly");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Protanopia,"Protanopia");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Tritanomaly,"Tritanomaly");
	HX_VISIT_MEMBER_NAME(ColorDeficiencyTypes_obj::Tritanopia,"Tritanopia");
};

static ::String sMemberFields[] = { ::String(null()) };
Class ColorDeficiencyTypes_obj::__mClass;

Dynamic __Create_ColorDeficiencyTypes_obj() { return new ColorDeficiencyTypes_obj; }

void ColorDeficiencyTypes_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.utils.ColorDeficiencyTypes"), hx::TCanCast< ColorDeficiencyTypes_obj >,sStaticFields,sMemberFields,
	&__Create_ColorDeficiencyTypes_obj, &__Create,
	&super::__SGetClass(), &CreateColorDeficiencyTypes_obj, sMarkStatics, sVisitStatic);
}

void ColorDeficiencyTypes_obj::__boot()
{
hx::Static(Achromatomaly) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Achromatomaly"),7);
hx::Static(Achromatopsia) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Achromatopsia"),6);
hx::Static(Deuteranomaly) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Deuteranomaly"),3);
hx::Static(Deuteranopia) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Deuteranopia"),2);
hx::Static(Protanomaly) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Protanomaly"),1);
hx::Static(Protanopia) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Protanopia"),0);
hx::Static(Tritanomaly) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Tritanomaly"),5);
hx::Static(Tritanopia) = hx::CreateEnum< ColorDeficiencyTypes_obj >(HX_CSTRING("Tritanopia"),4);
}


} // end namespace com
} // end namespace stencyl
} // end namespace utils
