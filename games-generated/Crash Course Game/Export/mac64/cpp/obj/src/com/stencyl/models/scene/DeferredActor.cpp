#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_DeferredActor
#include <com/stencyl/models/scene/DeferredActor.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void DeferredActor_obj::__construct(::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer)
{
HX_STACK_PUSH("DeferredActor::new","com/stencyl/models/scene/DeferredActor.hx",16);
{
	HX_STACK_LINE(17)
	this->type = type;
	HX_STACK_LINE(18)
	this->x = x;
	HX_STACK_LINE(19)
	this->y = y;
	HX_STACK_LINE(20)
	this->layer = layer;
}
;
	return null();
}

DeferredActor_obj::~DeferredActor_obj() { }

Dynamic DeferredActor_obj::__CreateEmpty() { return  new DeferredActor_obj; }
hx::ObjectPtr< DeferredActor_obj > DeferredActor_obj::__new(::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer)
{  hx::ObjectPtr< DeferredActor_obj > result = new DeferredActor_obj();
	result->__construct(type,x,y,layer);
	return result;}

Dynamic DeferredActor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DeferredActor_obj > result = new DeferredActor_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


DeferredActor_obj::DeferredActor_obj()
{
}

void DeferredActor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DeferredActor);
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DeferredActor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic DeferredActor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DeferredActor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DeferredActor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("layer"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DeferredActor_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DeferredActor_obj::__mClass,"__mClass");
};

Class DeferredActor_obj::__mClass;

void DeferredActor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.DeferredActor"), hx::TCanCast< DeferredActor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DeferredActor_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
