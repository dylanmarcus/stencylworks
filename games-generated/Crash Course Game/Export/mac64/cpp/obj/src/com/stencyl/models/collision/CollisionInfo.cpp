#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_collision_CollisionInfo
#include <com/stencyl/models/collision/CollisionInfo.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace collision{

Void CollisionInfo_obj::__construct()
{
HX_STACK_PUSH("CollisionInfo::new","com/stencyl/models/collision/CollisionInfo.hx",15);
{
	HX_STACK_LINE(15)
	this->reset();
}
;
	return null();
}

CollisionInfo_obj::~CollisionInfo_obj() { }

Dynamic CollisionInfo_obj::__CreateEmpty() { return  new CollisionInfo_obj; }
hx::ObjectPtr< CollisionInfo_obj > CollisionInfo_obj::__new()
{  hx::ObjectPtr< CollisionInfo_obj > result = new CollisionInfo_obj();
	result->__construct();
	return result;}

Dynamic CollisionInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionInfo_obj > result = new CollisionInfo_obj();
	result->__construct();
	return result;}

Void CollisionInfo_obj::reset( ){
{
		HX_STACK_PUSH("CollisionInfo::reset","com/stencyl/models/collision/CollisionInfo.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->max = this->min = (int)0;
		HX_STACK_LINE(22)
		this->maskA = this->maskB = null();
		HX_STACK_LINE(23)
		this->solidCollision = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionInfo_obj,reset,(void))

Array< ::Dynamic > CollisionInfo_obj::infoArray;

::com::stencyl::models::collision::CollisionInfo CollisionInfo_obj::getCollisionInfo( ){
	HX_STACK_PUSH("CollisionInfo::getCollisionInfo","com/stencyl/models/collision/CollisionInfo.hx",27);
	HX_STACK_LINE(28)
	if (((::com::stencyl::models::collision::CollisionInfo_obj::infoArray->length > (int)0))){
		HX_STACK_LINE(29)
		return ::com::stencyl::models::collision::CollisionInfo_obj::infoArray->pop().StaticCast< ::com::stencyl::models::collision::CollisionInfo >();
	}
	HX_STACK_LINE(33)
	return ::com::stencyl::models::collision::CollisionInfo_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CollisionInfo_obj,getCollisionInfo,return )

Void CollisionInfo_obj::recycle( ::com::stencyl::models::collision::CollisionInfo info){
{
		HX_STACK_PUSH("CollisionInfo::recycle","com/stencyl/models/collision/CollisionInfo.hx",37);
		HX_STACK_ARG(info,"info");
		HX_STACK_LINE(37)
		::com::stencyl::models::collision::CollisionInfo_obj::infoArray->push(info);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollisionInfo_obj,recycle,(void))


CollisionInfo_obj::CollisionInfo_obj()
{
}

void CollisionInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionInfo);
	HX_MARK_MEMBER_NAME(solidCollision,"solidCollision");
	HX_MARK_MEMBER_NAME(maskB,"maskB");
	HX_MARK_MEMBER_NAME(maskA,"maskA");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_END_CLASS();
}

void CollisionInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(solidCollision,"solidCollision");
	HX_VISIT_MEMBER_NAME(maskB,"maskB");
	HX_VISIT_MEMBER_NAME(maskA,"maskA");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
}

Dynamic CollisionInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"maskB") ) { return maskB; }
		if (HX_FIELD_EQ(inName,"maskA") ) { return maskA; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"infoArray") ) { return infoArray; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"solidCollision") ) { return solidCollision; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCollisionInfo") ) { return getCollisionInfo_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"maskB") ) { maskB=inValue.Cast< ::com::stencyl::models::collision::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskA") ) { maskA=inValue.Cast< ::com::stencyl::models::collision::Mask >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"infoArray") ) { infoArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"solidCollision") ) { solidCollision=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("solidCollision"));
	outFields->push(HX_CSTRING("maskB"));
	outFields->push(HX_CSTRING("maskA"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("infoArray"),
	HX_CSTRING("getCollisionInfo"),
	HX_CSTRING("recycle"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("solidCollision"),
	HX_CSTRING("maskB"),
	HX_CSTRING("maskA"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CollisionInfo_obj::infoArray,"infoArray");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CollisionInfo_obj::infoArray,"infoArray");
};

Class CollisionInfo_obj::__mClass;

void CollisionInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.collision.CollisionInfo"), hx::TCanCast< CollisionInfo_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CollisionInfo_obj::__boot()
{
	infoArray= Array_obj< ::Dynamic >::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision
