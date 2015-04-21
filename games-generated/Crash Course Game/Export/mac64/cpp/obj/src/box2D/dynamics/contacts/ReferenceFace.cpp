#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_ReferenceFace
#include <box2D/dynamics/contacts/ReferenceFace.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void ReferenceFace_obj::__construct()
{
HX_STACK_PUSH("ReferenceFace::new","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",901);
{
	HX_STACK_LINE(902)
	this->v1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(903)
	this->v2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(904)
	this->normal = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(905)
	this->sideNormal1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(906)
	this->sideNormal2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
}
;
	return null();
}

ReferenceFace_obj::~ReferenceFace_obj() { }

Dynamic ReferenceFace_obj::__CreateEmpty() { return  new ReferenceFace_obj; }
hx::ObjectPtr< ReferenceFace_obj > ReferenceFace_obj::__new()
{  hx::ObjectPtr< ReferenceFace_obj > result = new ReferenceFace_obj();
	result->__construct();
	return result;}

Dynamic ReferenceFace_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ReferenceFace_obj > result = new ReferenceFace_obj();
	result->__construct();
	return result;}


ReferenceFace_obj::ReferenceFace_obj()
{
}

void ReferenceFace_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReferenceFace);
	HX_MARK_MEMBER_NAME(sideOffset2,"sideOffset2");
	HX_MARK_MEMBER_NAME(sideOffset1,"sideOffset1");
	HX_MARK_MEMBER_NAME(sideNormal2,"sideNormal2");
	HX_MARK_MEMBER_NAME(sideNormal1,"sideNormal1");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(v2,"v2");
	HX_MARK_MEMBER_NAME(v1,"v1");
	HX_MARK_MEMBER_NAME(i2,"i2");
	HX_MARK_MEMBER_NAME(i1,"i1");
	HX_MARK_END_CLASS();
}

void ReferenceFace_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sideOffset2,"sideOffset2");
	HX_VISIT_MEMBER_NAME(sideOffset1,"sideOffset1");
	HX_VISIT_MEMBER_NAME(sideNormal2,"sideNormal2");
	HX_VISIT_MEMBER_NAME(sideNormal1,"sideNormal1");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(v2,"v2");
	HX_VISIT_MEMBER_NAME(v1,"v1");
	HX_VISIT_MEMBER_NAME(i2,"i2");
	HX_VISIT_MEMBER_NAME(i1,"i1");
}

Dynamic ReferenceFace_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"v2") ) { return v2; }
		if (HX_FIELD_EQ(inName,"v1") ) { return v1; }
		if (HX_FIELD_EQ(inName,"i2") ) { return i2; }
		if (HX_FIELD_EQ(inName,"i1") ) { return i1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sideOffset2") ) { return sideOffset2; }
		if (HX_FIELD_EQ(inName,"sideOffset1") ) { return sideOffset1; }
		if (HX_FIELD_EQ(inName,"sideNormal2") ) { return sideNormal2; }
		if (HX_FIELD_EQ(inName,"sideNormal1") ) { return sideNormal1; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ReferenceFace_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"v2") ) { v2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v1") ) { v1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i2") ) { i2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i1") ) { i1=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sideOffset2") ) { sideOffset2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sideOffset1") ) { sideOffset1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sideNormal2") ) { sideNormal2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sideNormal1") ) { sideNormal1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ReferenceFace_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sideOffset2"));
	outFields->push(HX_CSTRING("sideOffset1"));
	outFields->push(HX_CSTRING("sideNormal2"));
	outFields->push(HX_CSTRING("sideNormal1"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("v2"));
	outFields->push(HX_CSTRING("v1"));
	outFields->push(HX_CSTRING("i2"));
	outFields->push(HX_CSTRING("i1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sideOffset2"),
	HX_CSTRING("sideOffset1"),
	HX_CSTRING("sideNormal2"),
	HX_CSTRING("sideNormal1"),
	HX_CSTRING("normal"),
	HX_CSTRING("v2"),
	HX_CSTRING("v1"),
	HX_CSTRING("i2"),
	HX_CSTRING("i1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReferenceFace_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ReferenceFace_obj::__mClass,"__mClass");
};

Class ReferenceFace_obj::__mClass;

void ReferenceFace_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.ReferenceFace"), hx::TCanCast< ReferenceFace_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ReferenceFace_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
