#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2DynamicTreeNode
#include <box2D/collision/B2DynamicTreeNode.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DynamicTreePair
#include <box2D/collision/B2DynamicTreePair.h>
#endif
namespace box2D{
namespace collision{

Void B2DynamicTreePair_obj::__construct()
{
HX_STACK_PUSH("B2DynamicTreePair::new","box2D/collision/B2DynamicTreePair.hx",8);
{
}
;
	return null();
}

B2DynamicTreePair_obj::~B2DynamicTreePair_obj() { }

Dynamic B2DynamicTreePair_obj::__CreateEmpty() { return  new B2DynamicTreePair_obj; }
hx::ObjectPtr< B2DynamicTreePair_obj > B2DynamicTreePair_obj::__new()
{  hx::ObjectPtr< B2DynamicTreePair_obj > result = new B2DynamicTreePair_obj();
	result->__construct();
	return result;}

Dynamic B2DynamicTreePair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2DynamicTreePair_obj > result = new B2DynamicTreePair_obj();
	result->__construct();
	return result;}


B2DynamicTreePair_obj::B2DynamicTreePair_obj()
{
}

void B2DynamicTreePair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2DynamicTreePair);
	HX_MARK_MEMBER_NAME(proxyB,"proxyB");
	HX_MARK_MEMBER_NAME(proxyA,"proxyA");
	HX_MARK_END_CLASS();
}

void B2DynamicTreePair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(proxyB,"proxyB");
	HX_VISIT_MEMBER_NAME(proxyA,"proxyA");
}

Dynamic B2DynamicTreePair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"proxyB") ) { return proxyB; }
		if (HX_FIELD_EQ(inName,"proxyA") ) { return proxyA; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2DynamicTreePair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"proxyB") ) { proxyB=inValue.Cast< ::box2D::collision::B2DynamicTreeNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"proxyA") ) { proxyA=inValue.Cast< ::box2D::collision::B2DynamicTreeNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2DynamicTreePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("proxyB"));
	outFields->push(HX_CSTRING("proxyA"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("proxyB"),
	HX_CSTRING("proxyA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2DynamicTreePair_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2DynamicTreePair_obj::__mClass,"__mClass");
};

Class B2DynamicTreePair_obj::__mClass;

void B2DynamicTreePair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2DynamicTreePair"), hx::TCanCast< B2DynamicTreePair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2DynamicTreePair_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
