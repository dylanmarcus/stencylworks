#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Mathematics
#include <com/stencyl/utils/Mathematics.h>
#endif
namespace com{
namespace stencyl{
namespace utils{

Void Mathematics_obj::__construct()
{
	return null();
}

Mathematics_obj::~Mathematics_obj() { }

Dynamic Mathematics_obj::__CreateEmpty() { return  new Mathematics_obj; }
hx::ObjectPtr< Mathematics_obj > Mathematics_obj::__new()
{  hx::ObjectPtr< Mathematics_obj > result = new Mathematics_obj();
	result->__construct();
	return result;}

Dynamic Mathematics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mathematics_obj > result = new Mathematics_obj();
	result->__construct();
	return result;}

int Mathematics_obj::round( Float x){
	HX_STACK_PUSH("Mathematics::round","com/stencyl/utils/Mathematics.hx",39);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(39)
	return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mathematics_obj,round,return )

int Mathematics_obj::clamp( int x,int min,int max){
	HX_STACK_PUSH("Mathematics::clamp","com/stencyl/utils/Mathematics.hx",45);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(45)
	return (  (((x < min))) ? int(min) : int((  (((x > max))) ? int(max) : int(x) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathematics_obj,clamp,return )

Float Mathematics_obj::fclamp( Float x,Float min,Float max){
	HX_STACK_PUSH("Mathematics::fclamp","com/stencyl/utils/Mathematics.hx",51);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(51)
	return (  (((x < min))) ? Float(min) : Float((  (((x > max))) ? Float(max) : Float(x) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mathematics_obj,fclamp,return )


Mathematics_obj::Mathematics_obj()
{
}

void Mathematics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mathematics);
	HX_MARK_END_CLASS();
}

void Mathematics_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Mathematics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fclamp") ) { return fclamp_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mathematics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Mathematics_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("round"),
	HX_CSTRING("clamp"),
	HX_CSTRING("fclamp"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mathematics_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mathematics_obj::__mClass,"__mClass");
};

Class Mathematics_obj::__mClass;

void Mathematics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.utils.Mathematics"), hx::TCanCast< Mathematics_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mathematics_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
