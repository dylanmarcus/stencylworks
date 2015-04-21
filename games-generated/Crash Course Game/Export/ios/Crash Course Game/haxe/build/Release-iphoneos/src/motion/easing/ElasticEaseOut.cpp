#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseOut
#include <motion/easing/ElasticEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseOut_obj::__construct(Float a,Float p)
{
HX_STACK_PUSH("ElasticEaseOut::new","motion/easing/Elastic.hx",163);
{
	HX_STACK_LINE(165)
	this->a = a;
	HX_STACK_LINE(166)
	this->p = p;
}
;
	return null();
}

ElasticEaseOut_obj::~ElasticEaseOut_obj() { }

Dynamic ElasticEaseOut_obj::__CreateEmpty() { return  new ElasticEaseOut_obj; }
hx::ObjectPtr< ElasticEaseOut_obj > ElasticEaseOut_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseOut_obj > result = new ElasticEaseOut_obj();
	result->__construct(a,p);
	return result;}

Dynamic ElasticEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseOut_obj > result = new ElasticEaseOut_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *ElasticEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float ElasticEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("ElasticEaseOut::ease","motion/easing/Elastic.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(184)
	if (((t == (int)0))){
		HX_STACK_LINE(184)
		return b;
	}
	HX_STACK_LINE(187)
	if ((((hx::DivEq(t,d)) == (int)1))){
		HX_STACK_LINE(187)
		return (b + c);
	}
	HX_STACK_LINE(190)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(191)
	if (((this->a < ::Math_obj::abs(c)))){
		HX_STACK_LINE(192)
		this->a = c;
		HX_STACK_LINE(193)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(195)
		s = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * ::Math_obj::asin((Float(c) / Float(this->a))));
	}
	HX_STACK_LINE(198)
	return ((((this->a * ::Math_obj::pow((int)2,((int)-10 * t))) * ::Math_obj::sin((Float(((((t * d) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)))) + c) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseOut_obj,ease,return )

Float ElasticEaseOut_obj::calculate( Float k){
	HX_STACK_PUSH("ElasticEaseOut::calculate","motion/easing/Elastic.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(173)
	if (((k == (int)0))){
		HX_STACK_LINE(173)
		return (int)0;
	}
	HX_STACK_LINE(173)
	if (((k == (int)1))){
		HX_STACK_LINE(173)
		return (int)1;
	}
	HX_STACK_LINE(174)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(175)
	if (((this->a < (int)1))){
		HX_STACK_LINE(175)
		this->a = (int)1;
		HX_STACK_LINE(175)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(176)
		s = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * ::Math_obj::asin((Float((int)1) / Float(this->a))));
	}
	HX_STACK_LINE(177)
	return (((this->a * ::Math_obj::pow((int)2,((int)-10 * k))) * ::Math_obj::sin((Float((((k - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)))) + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseOut_obj,calculate,return )


ElasticEaseOut_obj::ElasticEaseOut_obj()
{
}

void ElasticEaseOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ElasticEaseOut);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void ElasticEaseOut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic ElasticEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ElasticEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ElasticEaseOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseOut_obj::__mClass,"__mClass");
};

Class ElasticEaseOut_obj::__mClass;

void ElasticEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.ElasticEaseOut"), hx::TCanCast< ElasticEaseOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ElasticEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
