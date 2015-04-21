#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ContactPoint
#include <box2D/collision/B2ContactPoint.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
namespace box2D{
namespace collision{

Void B2ContactPoint_obj::__construct()
{
HX_STACK_PUSH("B2ContactPoint::new","box2D/collision/B2ContactPoint.hx",32);
{
	HX_STACK_LINE(34)
	this->position = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(35)
	this->velocity = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(36)
	this->normal = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(37)
	this->id = ::box2D::collision::B2ContactID_obj::__new();
}
;
	return null();
}

B2ContactPoint_obj::~B2ContactPoint_obj() { }

Dynamic B2ContactPoint_obj::__CreateEmpty() { return  new B2ContactPoint_obj; }
hx::ObjectPtr< B2ContactPoint_obj > B2ContactPoint_obj::__new()
{  hx::ObjectPtr< B2ContactPoint_obj > result = new B2ContactPoint_obj();
	result->__construct();
	return result;}

Dynamic B2ContactPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2ContactPoint_obj > result = new B2ContactPoint_obj();
	result->__construct();
	return result;}


B2ContactPoint_obj::B2ContactPoint_obj()
{
}

void B2ContactPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactPoint);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(restitution,"restitution");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(separation,"separation");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(shape2,"shape2");
	HX_MARK_MEMBER_NAME(shape1,"shape1");
	HX_MARK_END_CLASS();
}

void B2ContactPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(restitution,"restitution");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(separation,"separation");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(shape2,"shape2");
	HX_VISIT_MEMBER_NAME(shape1,"shape1");
}

Dynamic B2ContactPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
		if (HX_FIELD_EQ(inName,"shape2") ) { return shape2; }
		if (HX_FIELD_EQ(inName,"shape1") ) { return shape1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { return separation; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { return restitution; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2ContactPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::box2D::collision::B2ContactID >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape2") ) { shape2=inValue.Cast< ::box2D::collision::shapes::B2Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape1") ) { shape1=inValue.Cast< ::box2D::collision::shapes::B2Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"separation") ) { separation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { restitution=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("restitution"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("separation"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("shape2"));
	outFields->push(HX_CSTRING("shape1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("restitution"),
	HX_CSTRING("friction"),
	HX_CSTRING("separation"),
	HX_CSTRING("normal"),
	HX_CSTRING("velocity"),
	HX_CSTRING("position"),
	HX_CSTRING("shape2"),
	HX_CSTRING("shape1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactPoint_obj::__mClass,"__mClass");
};

Class B2ContactPoint_obj::__mClass;

void B2ContactPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2ContactPoint"), hx::TCanCast< B2ContactPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2ContactPoint_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
