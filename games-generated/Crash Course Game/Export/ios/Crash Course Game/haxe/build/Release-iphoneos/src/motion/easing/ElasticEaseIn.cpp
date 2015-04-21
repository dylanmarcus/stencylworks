#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseIn
#include <motion/easing/ElasticEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseIn_obj::__construct(Float a,Float p)
{
HX_STACK_PUSH("ElasticEaseIn::new","motion/easing/Elastic.hx",51);
{
	HX_STACK_LINE(53)
	this->a = a;
	HX_STACK_LINE(54)
	this->p = p;
}
;
	return null();
}

ElasticEaseIn_obj::~ElasticEaseIn_obj() { }

Dynamic ElasticEaseIn_obj::__CreateEmpty() { return  new ElasticEaseIn_obj; }
hx::ObjectPtr< ElasticEaseIn_obj > ElasticEaseIn_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseIn_obj > result = new ElasticEaseIn_obj();
	result->__construct(a,p);
	return result;}

Dynamic ElasticEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseIn_obj > result = new ElasticEaseIn_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *ElasticEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float ElasticEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("ElasticEaseIn::ease","motion/easing/Elastic.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(72)
	if (((t == (int)0))){
		HX_STACK_LINE(72)
		return b;
	}
	HX_STACK_LINE(75)
	if ((((hx::DivEq(t,d)) == (int)1))){
		HX_STACK_LINE(75)
		return (b + c);
	}
	HX_STACK_LINE(78)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(79)
	if (((this->a < ::Math_obj::abs(c)))){
		HX_STACK_LINE(80)
		this->a = c;
		HX_STACK_LINE(81)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(83)
		s = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * ::Math_obj::asin((Float(c) / Float(this->a))));
	}
	HX_STACK_LINE(86)
	return (-((((this->a * ::Math_obj::pow((int)2,((int)10 * (hx::SubEq(t,(int)1))))) * ::Math_obj::sin((Float(((((t * d) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)))))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseIn_obj,ease,return )

Float ElasticEaseIn_obj::calculate( Float k){
	HX_STACK_PUSH("ElasticEaseIn::calculate","motion/easing/Elastic.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(61)
	if (((k == (int)0))){
		HX_STACK_LINE(61)
		return (int)0;
	}
	HX_STACK_LINE(61)
	if (((k == (int)1))){
		HX_STACK_LINE(61)
		return (int)1;
	}
	HX_STACK_LINE(62)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(63)
	if (((this->a < (int)1))){
		HX_STACK_LINE(63)
		this->a = (int)1;
		HX_STACK_LINE(63)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(64)
		s = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * ::Math_obj::asin((Float((int)1) / Float(this->a))));
	}
	HX_STACK_LINE(65)
	return -((((this->a * ::Math_obj::pow((int)2,((int)10 * (hx::SubEq(k,(int)1))))) * ::Math_obj::sin((Float((((k - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p))))));
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseIn_obj,calculate,return )


ElasticEaseIn_obj::ElasticEaseIn_obj()
{
}

void ElasticEaseIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ElasticEaseIn);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void ElasticEaseIn_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic ElasticEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ElasticEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("p"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ease"),
	HX_CSTRING("calculate"),
	HX_CSTRING("p"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

Class ElasticEaseIn_obj::__mClass;

void ElasticEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.ElasticEaseIn"), hx::TCanCast< ElasticEaseIn_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ElasticEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
