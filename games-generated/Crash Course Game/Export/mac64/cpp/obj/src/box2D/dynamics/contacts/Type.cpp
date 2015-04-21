#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_contacts_Type
#include <box2D/dynamics/contacts/Type.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

::box2D::dynamics::contacts::Type Type_obj::EDGE_A;

::box2D::dynamics::contacts::Type Type_obj::EDGE_B;

::box2D::dynamics::contacts::Type Type_obj::UNKNOWN;

HX_DEFINE_CREATE_ENUM(Type_obj)

int Type_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("EDGE_A")) return 1;
	if (inName==HX_CSTRING("EDGE_B")) return 2;
	if (inName==HX_CSTRING("UNKNOWN")) return 0;
	return super::__FindIndex(inName);
}

int Type_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("EDGE_A")) return 0;
	if (inName==HX_CSTRING("EDGE_B")) return 0;
	if (inName==HX_CSTRING("UNKNOWN")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Type_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("EDGE_A")) return EDGE_A;
	if (inName==HX_CSTRING("EDGE_B")) return EDGE_B;
	if (inName==HX_CSTRING("UNKNOWN")) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("UNKNOWN"),
	HX_CSTRING("EDGE_A"),
	HX_CSTRING("EDGE_B"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::EDGE_A,"EDGE_A");
	HX_MARK_MEMBER_NAME(Type_obj::EDGE_B,"EDGE_B");
	HX_MARK_MEMBER_NAME(Type_obj::UNKNOWN,"UNKNOWN");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Type_obj::EDGE_A,"EDGE_A");
	HX_VISIT_MEMBER_NAME(Type_obj::EDGE_B,"EDGE_B");
	HX_VISIT_MEMBER_NAME(Type_obj::UNKNOWN,"UNKNOWN");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Type_obj::__mClass;

Dynamic __Create_Type_obj() { return new Type_obj; }

void Type_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.Type"), hx::TCanCast< Type_obj >,sStaticFields,sMemberFields,
	&__Create_Type_obj, &__Create,
	&super::__SGetClass(), &CreateType_obj, sMarkStatics, sVisitStatic);
}

void Type_obj::__boot()
{
hx::Static(EDGE_A) = hx::CreateEnum< Type_obj >(HX_CSTRING("EDGE_A"),1);
hx::Static(EDGE_B) = hx::CreateEnum< Type_obj >(HX_CSTRING("EDGE_B"),2);
hx::Static(UNKNOWN) = hx::CreateEnum< Type_obj >(HX_CSTRING("UNKNOWN"),0);
}


} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
