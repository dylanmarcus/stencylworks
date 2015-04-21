#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseInOut
#include <motion/easing/ElasticEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseInOut_obj::__construct(Float a,Float p)
{
HX_STACK_PUSH("ElasticEaseInOut::new","motion/easing/Elastic.hx",101);
{
	HX_STACK_LINE(103)
	this->a = a;
	HX_STACK_LINE(104)
	this->p = p;
}
;
	return null();
}

ElasticEaseInOut_obj::~ElasticEaseInOut_obj() { }

Dynamic ElasticEaseInOut_obj::__CreateEmpty() { return  new ElasticEaseInOut_obj; }
hx::ObjectPtr< ElasticEaseInOut_obj > ElasticEaseInOut_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseInOut_obj > result = new ElasticEaseInOut_obj();
	result->__construct(a,p);
	return result;}

Dynamic ElasticEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseInOut_obj > result = new ElasticEaseInOut_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *ElasticEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float ElasticEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("ElasticEaseInOut::ease","motion/easing/Elastic.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(131)
	if (((t == (int)0))){
		HX_STACK_LINE(131)
		return b;
	}
	HX_STACK_LINE(134)
	if ((((hx::DivEq(t,(Float(d) / Float((int)2)))) == (int)2))){
		HX_STACK_LINE(134)
		return (b + c);
	}
	HX_STACK_LINE(137)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(138)
	if (((this->a < ::Math_obj::abs(c)))){
		HX_STACK_LINE(139)
		this->a = c;
		HX_STACK_LINE(140)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(142)
		s = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * ::Math_obj::asin((Float(c) / Float(this->a))));
	}
	HX_STACK_LINE(145)
	if (((t < (int)1))){
		HX_STACK_LINE(145)
		return ((-0.5 * (((this->a * ::Math_obj::pow((int)2,((int)10 * (hx::SubEq(t,(int)1))))) * ::Math_obj::sin((Float(((((t * d) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)))))) + b);
	}
	HX_STACK_LINE(148)
	return (((((this->a * ::Math_obj::pow((int)2,((int)-10 * (hx::SubEq(t,(int)1))))) * ::Math_obj::sin((Float(((((t * d) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)))) * 0.5) + c) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseInOut_obj,ease,return )

Float ElasticEaseInOut_obj::calculate( Float k){
	HX_STACK_PUSH("ElasticEaseInOut::calculate","motion/easing/Elastic.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(110)
	if (((k == (int)0))){
		HX_STACK_LINE(110)
		return (int)0;
	}
	HX_STACK_LINE(113)
	if ((((hx::DivEq(k,0.5)) == (int)2))){
		HX_STACK_LINE(113)
		return (int)1;
	}
	HX_STACK_LINE(117)
	Float p = (0.3 * 1.5);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(118)
	Float a = (int)1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(119)
	Float s = (Float(p) / Float((int)4));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(121)
	if (((k < (int)1))){
		HX_STACK_LINE(121)
		return (-0.5 * ((::Math_obj::pow((int)2,((int)10 * (hx::SubEq(k,(int)1)))) * ::Math_obj::sin((Float((((k - s)) * (((int)2 * ::Math_obj::PI)))) / Float(p))))));
	}
	HX_STACK_LINE(124)
	return (((::Math_obj::pow((int)2,((int)-10 * (hx::SubEq(k,(int)1)))) * ::Math_obj::sin((Float((((k - s)) * (((int)2 * ::Math_obj::PI)))) / Float(p)))) * 0.5) + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseInOut_obj,calculate,return )


ElasticEaseInOut_obj::ElasticEaseInOut_obj()
{
}

void ElasticEaseInOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ElasticEaseInOut);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void ElasticEaseInOut_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic ElasticEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ElasticEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseInOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ElasticEaseInOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseInOut_obj::__mClass,"__mClass");
};

Class ElasticEaseInOut_obj::__mClass;

void ElasticEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.ElasticEaseInOut"), hx::TCanCast< ElasticEaseInOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ElasticEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
