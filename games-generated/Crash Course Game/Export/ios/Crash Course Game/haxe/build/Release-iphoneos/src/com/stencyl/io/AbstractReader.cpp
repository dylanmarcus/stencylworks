#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
namespace com{
namespace stencyl{
namespace io{

HX_DEFINE_DYNAMIC_FUNC5(AbstractReader_obj,read,return )

HX_DEFINE_DYNAMIC_FUNC1(AbstractReader_obj,accepts,return )


static ::String sMemberFields[] = {
	HX_CSTRING("read"),
	HX_CSTRING("accepts"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractReader_obj::__mClass,"__mClass");
};

Class AbstractReader_obj::__mClass;

void AbstractReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.AbstractReader"), hx::TCanCast< AbstractReader_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AbstractReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
