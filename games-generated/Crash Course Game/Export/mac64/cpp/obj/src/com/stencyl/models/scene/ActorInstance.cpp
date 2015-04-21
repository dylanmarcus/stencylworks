#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ActorInstance
#include <com/stencyl/models/scene/ActorInstance.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void ActorInstance_obj::__construct(int elementID,int x,int y,Float scaleX,Float scaleY,int layerID,int angle,int groupID,int actorID,::haxe::ds::StringMap behaviors,bool isCustomized)
{
HX_STACK_PUSH("ActorInstance::new","com/stencyl/models/scene/ActorInstance.hx",37);
{
	HX_STACK_LINE(38)
	this->elementID = elementID;
	HX_STACK_LINE(39)
	this->x = x;
	HX_STACK_LINE(40)
	this->y = y;
	HX_STACK_LINE(41)
	this->scaleX = scaleX;
	HX_STACK_LINE(42)
	this->scaleY = scaleY;
	HX_STACK_LINE(43)
	this->layerID = layerID;
	HX_STACK_LINE(44)
	this->angle = angle;
	HX_STACK_LINE(45)
	this->groupID = groupID;
	HX_STACK_LINE(47)
	this->actorID = actorID;
	HX_STACK_LINE(48)
	this->behaviorValues = behaviors;
	HX_STACK_LINE(49)
	this->isCustomized = isCustomized;
	HX_STACK_LINE(51)
	this->actorType = hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(actorID));
}
;
	return null();
}

ActorInstance_obj::~ActorInstance_obj() { }

Dynamic ActorInstance_obj::__CreateEmpty() { return  new ActorInstance_obj; }
hx::ObjectPtr< ActorInstance_obj > ActorInstance_obj::__new(int elementID,int x,int y,Float scaleX,Float scaleY,int layerID,int angle,int groupID,int actorID,::haxe::ds::StringMap behaviors,bool isCustomized)
{  hx::ObjectPtr< ActorInstance_obj > result = new ActorInstance_obj();
	result->__construct(elementID,x,y,scaleX,scaleY,layerID,angle,groupID,actorID,behaviors,isCustomized);
	return result;}

Dynamic ActorInstance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorInstance_obj > result = new ActorInstance_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}


ActorInstance_obj::ActorInstance_obj()
{
}

void ActorInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorInstance);
	HX_MARK_MEMBER_NAME(actorType,"actorType");
	HX_MARK_MEMBER_NAME(behaviorValues,"behaviorValues");
	HX_MARK_MEMBER_NAME(isCustomized,"isCustomized");
	HX_MARK_MEMBER_NAME(actorID,"actorID");
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(layerID,"layerID");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(elementID,"elementID");
	HX_MARK_END_CLASS();
}

void ActorInstance_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actorType,"actorType");
	HX_VISIT_MEMBER_NAME(behaviorValues,"behaviorValues");
	HX_VISIT_MEMBER_NAME(isCustomized,"isCustomized");
	HX_VISIT_MEMBER_NAME(actorID,"actorID");
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(layerID,"layerID");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(elementID,"elementID");
}

Dynamic ActorInstance_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"actorID") ) { return actorID; }
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		if (HX_FIELD_EQ(inName,"layerID") ) { return layerID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actorType") ) { return actorType; }
		if (HX_FIELD_EQ(inName,"elementID") ) { return elementID; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCustomized") ) { return isCustomized; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"behaviorValues") ) { return behaviorValues; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActorInstance_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"actorID") ) { actorID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerID") ) { layerID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actorType") ) { actorType=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elementID") ) { elementID=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCustomized") ) { isCustomized=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"behaviorValues") ) { behaviorValues=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("actorType"));
	outFields->push(HX_CSTRING("behaviorValues"));
	outFields->push(HX_CSTRING("isCustomized"));
	outFields->push(HX_CSTRING("actorID"));
	outFields->push(HX_CSTRING("groupID"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("layerID"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("elementID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("actorType"),
	HX_CSTRING("behaviorValues"),
	HX_CSTRING("isCustomized"),
	HX_CSTRING("actorID"),
	HX_CSTRING("groupID"),
	HX_CSTRING("angle"),
	HX_CSTRING("layerID"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("elementID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorInstance_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorInstance_obj::__mClass,"__mClass");
};

Class ActorInstance_obj::__mClass;

void ActorInstance_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.ActorInstance"), hx::TCanCast< ActorInstance_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorInstance_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
