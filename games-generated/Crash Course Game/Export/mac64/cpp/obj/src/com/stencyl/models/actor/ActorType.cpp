#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace actor{

Void ActorType_obj::__construct(int ID,int atlasID,::String name,int groupID,int spriteID,::haxe::ds::StringMap behaviorValues,::box2D::dynamics::B2BodyDef bodyDef,bool isLightweight,bool autoScale,bool pausable,bool ignoreGravity)
{
HX_STACK_PUSH("ActorType::new","com/stencyl/models/actor/ActorType.hx",32);
{
	HX_STACK_LINE(33)
	super::__construct(ID,name,atlasID);
	HX_STACK_LINE(35)
	this->groupID = groupID;
	HX_STACK_LINE(36)
	this->spriteID = spriteID;
	HX_STACK_LINE(37)
	this->behaviorValues = behaviorValues;
	HX_STACK_LINE(38)
	this->bodyDef = bodyDef;
	HX_STACK_LINE(39)
	this->isLightweight = isLightweight;
	HX_STACK_LINE(40)
	this->autoScale = autoScale;
	HX_STACK_LINE(41)
	this->pausable = pausable;
	HX_STACK_LINE(42)
	this->ignoreGravity = ignoreGravity;
}
;
	return null();
}

ActorType_obj::~ActorType_obj() { }

Dynamic ActorType_obj::__CreateEmpty() { return  new ActorType_obj; }
hx::ObjectPtr< ActorType_obj > ActorType_obj::__new(int ID,int atlasID,::String name,int groupID,int spriteID,::haxe::ds::StringMap behaviorValues,::box2D::dynamics::B2BodyDef bodyDef,bool isLightweight,bool autoScale,bool pausable,bool ignoreGravity)
{  hx::ObjectPtr< ActorType_obj > result = new ActorType_obj();
	result->__construct(ID,atlasID,name,groupID,spriteID,behaviorValues,bodyDef,isLightweight,autoScale,pausable,ignoreGravity);
	return result;}

Dynamic ActorType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorType_obj > result = new ActorType_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

Void ActorType_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("ActorType::unloadGraphics","com/stencyl/models/actor/ActorType.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		::com::stencyl::Data_obj::get()->resources->get(this->spriteID)->__Field(HX_CSTRING("unloadGraphics"),true)();
	}
return null();
}


Void ActorType_obj::loadGraphics( ){
{
		HX_STACK_PUSH("ActorType::loadGraphics","com/stencyl/models/actor/ActorType.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		::com::stencyl::Data_obj::get()->resources->get(this->spriteID)->__Field(HX_CSTRING("loadGraphics"),true)();
	}
return null();
}


::String ActorType_obj::toString( ){
	HX_STACK_PUSH("ActorType::toString","com/stencyl/models/actor/ActorType.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_LINE(46)
	return this->name;
}



ActorType_obj::ActorType_obj()
{
}

void ActorType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorType);
	HX_MARK_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_MARK_MEMBER_NAME(pausable,"pausable");
	HX_MARK_MEMBER_NAME(autoScale,"autoScale");
	HX_MARK_MEMBER_NAME(isLightweight,"isLightweight");
	HX_MARK_MEMBER_NAME(bodyDef,"bodyDef");
	HX_MARK_MEMBER_NAME(behaviorValues,"behaviorValues");
	HX_MARK_MEMBER_NAME(spriteID,"spriteID");
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActorType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_VISIT_MEMBER_NAME(pausable,"pausable");
	HX_VISIT_MEMBER_NAME(autoScale,"autoScale");
	HX_VISIT_MEMBER_NAME(isLightweight,"isLightweight");
	HX_VISIT_MEMBER_NAME(bodyDef,"bodyDef");
	HX_VISIT_MEMBER_NAME(behaviorValues,"behaviorValues");
	HX_VISIT_MEMBER_NAME(spriteID,"spriteID");
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ActorType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bodyDef") ) { return bodyDef; }
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"pausable") ) { return pausable; }
		if (HX_FIELD_EQ(inName,"spriteID") ) { return spriteID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoScale") ) { return autoScale; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { return ignoreGravity; }
		if (HX_FIELD_EQ(inName,"isLightweight") ) { return isLightweight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"behaviorValues") ) { return behaviorValues; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActorType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bodyDef") ) { bodyDef=inValue.Cast< ::box2D::dynamics::B2BodyDef >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pausable") ) { pausable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteID") ) { spriteID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoScale") ) { autoScale=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { ignoreGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isLightweight") ) { isLightweight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"behaviorValues") ) { behaviorValues=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ignoreGravity"));
	outFields->push(HX_CSTRING("pausable"));
	outFields->push(HX_CSTRING("autoScale"));
	outFields->push(HX_CSTRING("isLightweight"));
	outFields->push(HX_CSTRING("bodyDef"));
	outFields->push(HX_CSTRING("behaviorValues"));
	outFields->push(HX_CSTRING("spriteID"));
	outFields->push(HX_CSTRING("groupID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("toString"),
	HX_CSTRING("ignoreGravity"),
	HX_CSTRING("pausable"),
	HX_CSTRING("autoScale"),
	HX_CSTRING("isLightweight"),
	HX_CSTRING("bodyDef"),
	HX_CSTRING("behaviorValues"),
	HX_CSTRING("spriteID"),
	HX_CSTRING("groupID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorType_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorType_obj::__mClass,"__mClass");
};

Class ActorType_obj::__mClass;

void ActorType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.actor.ActorType"), hx::TCanCast< ActorType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorType_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
