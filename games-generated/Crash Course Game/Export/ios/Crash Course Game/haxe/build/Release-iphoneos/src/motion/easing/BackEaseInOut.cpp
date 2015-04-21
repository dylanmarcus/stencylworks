#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseInOut
#include <motion/easing/BackEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseInOut_obj::__construct(Float s)
{
HX_STACK_PUSH("BackEaseInOut::new","motion/easing/Back.hx",79);
{
	HX_STACK_LINE(79)
	this->s = s;
}
;
	return null();
}

BackEaseInOut_obj::~BackEaseInOut_obj() { }

Dynamic BackEaseInOut_obj::__CreateEmpty() { return  new BackEaseInOut_obj; }
hx::ObjectPtr< BackEaseInOut_obj > BackEaseInOut_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseInOut_obj > result = new BackEaseInOut_obj();
	result->__construct(s);
	return result;}

Dynamic BackEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseInOut_obj > result = new BackEaseInOut_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BackEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BackEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("BackEaseInOut::ease","motion/easing/Back.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(96)
	if ((((hx::DivEq(t,(Float(d) / Float((int)2)))) < (int)1))){
		HX_STACK_LINE(96)
		return (((Float(c) / Float((int)2)) * (((t * t) * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * t) - this->s))))) + b);
	}
	HX_STACK_LINE(97)
	return (((Float(c) / Float((int)2)) * (((((hx::SubEq(t,(int)2)) * t) * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * t) + this->s))) + (int)2))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseInOut_obj,ease,return )

Float BackEaseInOut_obj::calculate( Float k){
	HX_STACK_PUSH("BackEaseInOut::calculate","motion/easing/Back.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(88)
	if ((((hx::DivEq(k,0.5)) < (int)1))){
		HX_STACK_LINE(88)
		return (0.5 * (((k * k) * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * k) - this->s)))));
	}
	HX_STACK_LINE(89)
	return (0.5 * (((((hx::SubEq(k,(int)2)) * k) * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * k) + this->s))) + (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseInOut_obj,calculate,return )


BackEaseInOut_obj::BackEaseInOut_obj()
{
}

void BackEaseInOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackEaseInOut);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void BackEaseInOut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic BackEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BackEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseInOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BackEaseInOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseInOut_obj::__mClass,"__mClass");
};

Class BackEaseInOut_obj::__mClass;

void BackEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BackEaseInOut"), hx::TCanCast< BackEaseInOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
