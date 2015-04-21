#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_contacts_EPAxis
#include <box2D/dynamics/contacts/EPAxis.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_Type
#include <box2D/dynamics/contacts/Type.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void EPAxis_obj::__construct()
{
HX_STACK_PUSH("EPAxis::new","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",864);
{
}
;
	return null();
}

EPAxis_obj::~EPAxis_obj() { }

Dynamic EPAxis_obj::__CreateEmpty() { return  new EPAxis_obj; }
hx::ObjectPtr< EPAxis_obj > EPAxis_obj::__new()
{  hx::ObjectPtr< EPAxis_obj > result = new EPAxis_obj();
	result->__construct();
	return result;}

Dynamic EPAxis_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EPAxis_obj > result = new EPAxis_obj();
	result->__construct();
	return result;}


EPAxis_obj::EPAxis_obj()
{
}

void EPAxis_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EPAxis);
	HX_MARK_MEMBER_NAME(separation,"separation");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void EPAxis_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(separation,"separation");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic EPAxis_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { return separation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EPAxis_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::box2D::dynamics::contacts::Type >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { separation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EPAxis_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("separation"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("separation"),
	HX_CSTRING("index"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EPAxis_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EPAxis_obj::__mClass,"__mClass");
};

Class EPAxis_obj::__mClass;

void EPAxis_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.EPAxis"), hx::TCanCast< EPAxis_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EPAxis_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
