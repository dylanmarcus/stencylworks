#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_actor_CollisionPoint
#include <com/stencyl/models/actor/CollisionPoint.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace actor{

Void CollisionPoint_obj::__construct(Float x,Float y,Float normalX,Float normalY)
{
HX_STACK_PUSH("CollisionPoint::new","com/stencyl/models/actor/CollisionPoint.hx",16);
{
	HX_STACK_LINE(17)
	this->x = x;
	HX_STACK_LINE(18)
	this->y = y;
	HX_STACK_LINE(19)
	this->normalX = normalX;
	HX_STACK_LINE(20)
	this->normalY = normalY;
}
;
	return null();
}

CollisionPoint_obj::~CollisionPoint_obj() { }

Dynamic CollisionPoint_obj::__CreateEmpty() { return  new CollisionPoint_obj; }
hx::ObjectPtr< CollisionPoint_obj > CollisionPoint_obj::__new(Float x,Float y,Float normalX,Float normalY)
{  hx::ObjectPtr< CollisionPoint_obj > result = new CollisionPoint_obj();
	result->__construct(x,y,normalX,normalY);
	return result;}

Dynamic CollisionPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionPoint_obj > result = new CollisionPoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


CollisionPoint_obj::CollisionPoint_obj()
{
}

void CollisionPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionPoint);
	HX_MARK_MEMBER_NAME(normalY,"normalY");
	HX_MARK_MEMBER_NAME(normalX,"normalX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void CollisionPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(normalY,"normalY");
	HX_VISIT_MEMBER_NAME(normalX,"normalX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic CollisionPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normalY") ) { return normalY; }
		if (HX_FIELD_EQ(inName,"normalX") ) { return normalX; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normalY") ) { normalY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalX") ) { normalX=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("normalY"));
	outFields->push(HX_CSTRING("normalX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("normalY"),
	HX_CSTRING("normalX"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionPoint_obj::__mClass,"__mClass");
};

Class CollisionPoint_obj::__mClass;

void CollisionPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.actor.CollisionPoint"), hx::TCanCast< CollisionPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CollisionPoint_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
