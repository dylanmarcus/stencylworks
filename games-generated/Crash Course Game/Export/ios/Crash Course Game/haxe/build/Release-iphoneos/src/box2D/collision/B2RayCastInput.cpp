#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2RayCastInput
#include <box2D/collision/B2RayCastInput.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
namespace box2D{
namespace collision{

Void B2RayCastInput_obj::__construct(::box2D::common::math::B2Vec2 p1,::box2D::common::math::B2Vec2 p2,hx::Null< Float >  __o_maxFraction)
{
HX_STACK_PUSH("B2RayCastInput::new","box2D/collision/B2RayCastInput.hx",29);
Float maxFraction = __o_maxFraction.Default(1);
{
	HX_STACK_LINE(31)
	this->p1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(32)
	this->p2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(34)
	if (((p1 != null()))){
		HX_STACK_LINE(35)
		::box2D::common::math::B2Vec2 _this = this->p1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(35)
		_this->x = p1->x;
		HX_STACK_LINE(35)
		_this->y = p1->y;
	}
	HX_STACK_LINE(36)
	if (((p2 != null()))){
		HX_STACK_LINE(37)
		::box2D::common::math::B2Vec2 _this = this->p2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(37)
		_this->x = p2->x;
		HX_STACK_LINE(37)
		_this->y = p2->y;
	}
	HX_STACK_LINE(38)
	this->maxFraction = maxFraction;
}
;
	return null();
}

B2RayCastInput_obj::~B2RayCastInput_obj() { }

Dynamic B2RayCastInput_obj::__CreateEmpty() { return  new B2RayCastInput_obj; }
hx::ObjectPtr< B2RayCastInput_obj > B2RayCastInput_obj::__new(::box2D::common::math::B2Vec2 p1,::box2D::common::math::B2Vec2 p2,hx::Null< Float >  __o_maxFraction)
{  hx::ObjectPtr< B2RayCastInput_obj > result = new B2RayCastInput_obj();
	result->__construct(p1,p2,__o_maxFraction);
	return result;}

Dynamic B2RayCastInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2RayCastInput_obj > result = new B2RayCastInput_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


B2RayCastInput_obj::B2RayCastInput_obj()
{
}

void B2RayCastInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2RayCastInput);
	HX_MARK_MEMBER_NAME(maxFraction,"maxFraction");
	HX_MARK_MEMBER_NAME(p2,"p2");
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_END_CLASS();
}

void B2RayCastInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maxFraction,"maxFraction");
	HX_VISIT_MEMBER_NAME(p2,"p2");
	HX_VISIT_MEMBER_NAME(p1,"p1");
}

Dynamic B2RayCastInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p2") ) { return p2; }
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxFraction") ) { return maxFraction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2RayCastInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p2") ) { p2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxFraction") ) { maxFraction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2RayCastInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("maxFraction"));
	outFields->push(HX_CSTRING("p2"));
	outFields->push(HX_CSTRING("p1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("maxFraction"),
	HX_CSTRING("p2"),
	HX_CSTRING("p1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2RayCastInput_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2RayCastInput_obj::__mClass,"__mClass");
};

Class B2RayCastInput_obj::__mClass;

void B2RayCastInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2RayCastInput"), hx::TCanCast< B2RayCastInput_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2RayCastInput_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
