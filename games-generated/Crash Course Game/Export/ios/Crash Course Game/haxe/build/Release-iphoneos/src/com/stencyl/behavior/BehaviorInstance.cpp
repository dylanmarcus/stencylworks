#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#include <com/stencyl/behavior/BehaviorInstance.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace behavior{

Void BehaviorInstance_obj::__construct(int behaviorID,::haxe::ds::StringMap values)
{
HX_STACK_PUSH("BehaviorInstance::new","com/stencyl/behavior/BehaviorInstance.hx",10);
{
	HX_STACK_LINE(11)
	this->behaviorID = behaviorID;
	HX_STACK_LINE(12)
	this->values = values;
	HX_STACK_LINE(13)
	this->enabled = true;
}
;
	return null();
}

BehaviorInstance_obj::~BehaviorInstance_obj() { }

Dynamic BehaviorInstance_obj::__CreateEmpty() { return  new BehaviorInstance_obj; }
hx::ObjectPtr< BehaviorInstance_obj > BehaviorInstance_obj::__new(int behaviorID,::haxe::ds::StringMap values)
{  hx::ObjectPtr< BehaviorInstance_obj > result = new BehaviorInstance_obj();
	result->__construct(behaviorID,values);
	return result;}

Dynamic BehaviorInstance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BehaviorInstance_obj > result = new BehaviorInstance_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


BehaviorInstance_obj::BehaviorInstance_obj()
{
}

void BehaviorInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BehaviorInstance);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(behaviorID,"behaviorID");
	HX_MARK_END_CLASS();
}

void BehaviorInstance_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(behaviorID,"behaviorID");
}

Dynamic BehaviorInstance_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"behaviorID") ) { return behaviorID; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BehaviorInstance_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"behaviorID") ) { behaviorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BehaviorInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("values"));
	outFields->push(HX_CSTRING("behaviorID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("enabled"),
	HX_CSTRING("values"),
	HX_CSTRING("behaviorID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BehaviorInstance_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BehaviorInstance_obj::__mClass,"__mClass");
};

Class BehaviorInstance_obj::__mClass;

void BehaviorInstance_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.BehaviorInstance"), hx::TCanCast< BehaviorInstance_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BehaviorInstance_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
