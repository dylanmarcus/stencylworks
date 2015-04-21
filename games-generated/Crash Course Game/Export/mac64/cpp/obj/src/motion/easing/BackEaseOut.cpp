#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseOut
#include <motion/easing/BackEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseOut_obj::__construct(Float s)
{
HX_STACK_PUSH("BackEaseOut::new","motion/easing/Back.hx",111);
{
	HX_STACK_LINE(111)
	this->s = s;
}
;
	return null();
}

BackEaseOut_obj::~BackEaseOut_obj() { }

Dynamic BackEaseOut_obj::__CreateEmpty() { return  new BackEaseOut_obj; }
hx::ObjectPtr< BackEaseOut_obj > BackEaseOut_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseOut_obj > result = new BackEaseOut_obj();
	result->__construct(s);
	return result;}

Dynamic BackEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseOut_obj > result = new BackEaseOut_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BackEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BackEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("BackEaseOut::ease","motion/easing/Back.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(125)
	return ((c * (((((t = ((Float(t) / Float(d)) - (int)1)) * t) * (((((this->s + (int)1)) * t) + this->s))) + (int)1))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseOut_obj,ease,return )

Float BackEaseOut_obj::calculate( Float k){
	HX_STACK_PUSH("BackEaseOut::calculate","motion/easing/Back.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(118)
	return ((((k = (k - (int)1)) * k) * (((((this->s + (int)1)) * k) + this->s))) + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseOut_obj,calculate,return )


BackEaseOut_obj::BackEaseOut_obj()
{
}

void BackEaseOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackEaseOut);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void BackEaseOut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic BackEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BackEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BackEaseOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseOut_obj::__mClass,"__mClass");
};

Class BackEaseOut_obj::__mClass;

void BackEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BackEaseOut"), hx::TCanCast< BackEaseOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
