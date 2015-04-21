#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_scripts_MyScripts
#include <scripts/MyScripts.h>
#endif
namespace scripts{

Void MyScripts_obj::__construct()
{
	return null();
}

MyScripts_obj::~MyScripts_obj() { }

Dynamic MyScripts_obj::__CreateEmpty() { return  new MyScripts_obj; }
hx::ObjectPtr< MyScripts_obj > MyScripts_obj::__new()
{  hx::ObjectPtr< MyScripts_obj > result = new MyScripts_obj();
	result->__construct();
	return result;}

Dynamic MyScripts_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MyScripts_obj > result = new MyScripts_obj();
	result->__construct();
	return result;}


MyScripts_obj::MyScripts_obj()
{
}

void MyScripts_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MyScripts);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void MyScripts_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic MyScripts_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MyScripts_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::com::stencyl::behavior::Script >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MyScripts_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m"));
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m"),
	HX_CSTRING("s"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MyScripts_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MyScripts_obj::__mClass,"__mClass");
};

Class MyScripts_obj::__mClass;

void MyScripts_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.MyScripts"), hx::TCanCast< MyScripts_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MyScripts_obj::__boot()
{
}

} // end namespace scripts
