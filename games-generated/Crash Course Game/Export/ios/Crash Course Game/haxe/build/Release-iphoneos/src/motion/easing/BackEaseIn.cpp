#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseIn
#include <motion/easing/BackEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseIn_obj::__construct(Float s)
{
HX_STACK_PUSH("BackEaseIn::new","motion/easing/Back.hx",49);
{
	HX_STACK_LINE(49)
	this->s = s;
}
;
	return null();
}

BackEaseIn_obj::~BackEaseIn_obj() { }

Dynamic BackEaseIn_obj::__CreateEmpty() { return  new BackEaseIn_obj; }
hx::ObjectPtr< BackEaseIn_obj > BackEaseIn_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseIn_obj > result = new BackEaseIn_obj();
	result->__construct(s);
	return result;}

Dynamic BackEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseIn_obj > result = new BackEaseIn_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BackEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BackEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("BackEaseIn::ease","motion/easing/Back.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(63)
	return ((((c * (hx::DivEq(t,d))) * t) * (((((this->s + (int)1)) * t) - this->s))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseIn_obj,ease,return )

Float BackEaseIn_obj::calculate( Float k){
	HX_STACK_PUSH("BackEaseIn::calculate","motion/easing/Back.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(56)
	return ((k * k) * (((((this->s + (int)1)) * k) - this->s)));
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseIn_obj,calculate,return )


BackEaseIn_obj::BackEaseIn_obj()
{
}

void BackEaseIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackEaseIn);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void BackEaseIn_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic BackEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ease"),
	HX_CSTRING("calculate"),
	HX_CSTRING("s"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackEaseIn_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseIn_obj::__mClass,"__mClass");
};

Class BackEaseIn_obj::__mClass;

void BackEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BackEaseIn"), hx::TCanCast< BackEaseIn_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
