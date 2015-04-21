#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_TempPolygon
#include <box2D/dynamics/contacts/TempPolygon.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void TempPolygon_obj::__construct()
{
HX_STACK_PUSH("TempPolygon::new","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",838);
{
	HX_STACK_LINE(839)
	this->vertices = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(840)
	this->normals = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(842)
	{
		HX_STACK_LINE(842)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(842)
		while(((_g < (int)32))){
			HX_STACK_LINE(842)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(844)
			this->vertices->push(::box2D::common::math::B2Vec2_obj::__new(null(),null()));
			HX_STACK_LINE(845)
			this->normals->push(::box2D::common::math::B2Vec2_obj::__new(null(),null()));
		}
	}
}
;
	return null();
}

TempPolygon_obj::~TempPolygon_obj() { }

Dynamic TempPolygon_obj::__CreateEmpty() { return  new TempPolygon_obj; }
hx::ObjectPtr< TempPolygon_obj > TempPolygon_obj::__new()
{  hx::ObjectPtr< TempPolygon_obj > result = new TempPolygon_obj();
	result->__construct();
	return result;}

Dynamic TempPolygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TempPolygon_obj > result = new TempPolygon_obj();
	result->__construct();
	return result;}


TempPolygon_obj::TempPolygon_obj()
{
}

void TempPolygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TempPolygon);
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(normals,"normals");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_END_CLASS();
}

void TempPolygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(normals,"normals");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
}

Dynamic TempPolygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { return normals; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TempPolygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { normals=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TempPolygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("normals"));
	outFields->push(HX_CSTRING("vertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("count"),
	HX_CSTRING("normals"),
	HX_CSTRING("vertices"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TempPolygon_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TempPolygon_obj::__mClass,"__mClass");
};

Class TempPolygon_obj::__mClass;

void TempPolygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.TempPolygon"), hx::TCanCast< TempPolygon_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TempPolygon_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
