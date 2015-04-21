#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
namespace com{
namespace stencyl{
namespace behavior{

Void SceneScript_obj::__construct(::com::stencyl::Engine engine)
{
HX_STACK_PUSH("SceneScript::new","com/stencyl/behavior/SceneScript.hx",6);
{
	HX_STACK_LINE(6)
	super::__construct(engine);
}
;
	return null();
}

SceneScript_obj::~SceneScript_obj() { }

Dynamic SceneScript_obj::__CreateEmpty() { return  new SceneScript_obj; }
hx::ObjectPtr< SceneScript_obj > SceneScript_obj::__new(::com::stencyl::Engine engine)
{  hx::ObjectPtr< SceneScript_obj > result = new SceneScript_obj();
	result->__construct(engine);
	return result;}

Dynamic SceneScript_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneScript_obj > result = new SceneScript_obj();
	result->__construct(inArgs[0]);
	return result;}


SceneScript_obj::SceneScript_obj()
{
}

void SceneScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SceneScript);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SceneScript_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SceneScript_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SceneScript_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneScript_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneScript_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneScript_obj::__mClass,"__mClass");
};

Class SceneScript_obj::__mClass;

void SceneScript_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.SceneScript"), hx::TCanCast< SceneScript_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SceneScript_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
