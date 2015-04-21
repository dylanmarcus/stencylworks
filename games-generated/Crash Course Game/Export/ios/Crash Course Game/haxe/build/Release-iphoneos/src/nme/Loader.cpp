#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
namespace nme{

Void Loader_obj::__construct()
{
	return null();
}

Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::load( ::String func,int args){
	HX_STACK_PUSH("Loader::load","nme/Loader.hx",19);
	HX_STACK_ARG(func,"func");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(19)
	return ::flash::Lib_obj::load(HX_CSTRING("nme"),func,args);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,return )

Void Loader_obj::loaderTrace( ::String inStr){
{
		HX_STACK_PUSH("Loader::loaderTrace","nme/Loader.hx",26);
		HX_STACK_ARG(inStr,"inStr");
		HX_STACK_LINE(30)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(31)
		bool debug = (get_env(HX_CSTRING("NME_LOAD_DEBUG")) != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(36)
		if ((debug)){
			HX_STACK_LINE(36)
			::Sys_obj::println(inStr);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loaderTrace,(void))

Dynamic Loader_obj::tryLoad( ::String inName,::String func,int args){
	HX_STACK_PUSH("Loader::tryLoad","nme/Loader.hx",45);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_ARG(func,"func");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(45)
	return ::flash::Lib_obj::load(inName,func,args);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,tryLoad,return )


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Loader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("load"),
	HX_CSTRING("loaderTrace"),
	HX_CSTRING("tryLoad"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Loader_obj::__boot()
{
}

} // end namespace nme
