#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_common_B2Color
#include <box2D/common/B2Color.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
namespace box2D{
namespace common{

Void B2Color_obj::__construct(Float rr,Float gg,Float bb)
{
HX_STACK_PUSH("B2Color::new","box2D/common/B2Color.hx",32);
{
	HX_STACK_LINE(33)
	this->_r = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(rr,0.0,1.0)));
	HX_STACK_LINE(34)
	this->_g = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(gg,0.0,1.0)));
	HX_STACK_LINE(35)
	this->_b = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(bb,0.0,1.0)));
}
;
	return null();
}

B2Color_obj::~B2Color_obj() { }

Dynamic B2Color_obj::__CreateEmpty() { return  new B2Color_obj; }
hx::ObjectPtr< B2Color_obj > B2Color_obj::__new(Float rr,Float gg,Float bb)
{  hx::ObjectPtr< B2Color_obj > result = new B2Color_obj();
	result->__construct(rr,gg,bb);
	return result;}

Dynamic B2Color_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Color_obj > result = new B2Color_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int B2Color_obj::get_color( ){
	HX_STACK_PUSH("B2Color::get_color","box2D/common/B2Color.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(63)
	return (int((int((int(this->_r) << int((int)16))) | int((int(this->_g) << int((int)8))))) | int(this->_b));
}


HX_DEFINE_DYNAMIC_FUNC0(B2Color_obj,get_color,return )

Float B2Color_obj::set_b( Float bb){
	HX_STACK_PUSH("B2Color::set_b","box2D/common/B2Color.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bb,"bb");
	HX_STACK_LINE(58)
	return this->_b = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(bb,0.0,1.0)));
}


HX_DEFINE_DYNAMIC_FUNC1(B2Color_obj,set_b,return )

Float B2Color_obj::set_g( Float gg){
	HX_STACK_PUSH("B2Color::set_g","box2D/common/B2Color.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gg,"gg");
	HX_STACK_LINE(54)
	return this->_g = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(gg,0.0,1.0)));
}


HX_DEFINE_DYNAMIC_FUNC1(B2Color_obj,set_g,return )

Float B2Color_obj::set_r( Float rr){
	HX_STACK_PUSH("B2Color::set_r","box2D/common/B2Color.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rr,"rr");
	HX_STACK_LINE(50)
	return this->_r = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(rr,0.0,1.0)));
}


HX_DEFINE_DYNAMIC_FUNC1(B2Color_obj,set_r,return )

Void B2Color_obj::set( Float rr,Float gg,Float bb){
{
		HX_STACK_PUSH("B2Color::set","box2D/common/B2Color.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rr,"rr");
		HX_STACK_ARG(gg,"gg");
		HX_STACK_ARG(bb,"bb");
		HX_STACK_LINE(39)
		this->_r = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(rr,0.0,1.0)));
		HX_STACK_LINE(40)
		this->_g = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(gg,0.0,1.0)));
		HX_STACK_LINE(41)
		this->_b = ::Std_obj::_int(((int)255 * ::box2D::common::math::B2Math_obj::clamp(bb,0.0,1.0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2Color_obj,set,(void))


B2Color_obj::B2Color_obj()
{
}

void B2Color_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Color);
	HX_MARK_MEMBER_NAME(_b,"_b");
	HX_MARK_MEMBER_NAME(_g,"_g");
	HX_MARK_MEMBER_NAME(_r,"_r");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void B2Color_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_b,"_b");
	HX_VISIT_MEMBER_NAME(_g,"_g");
	HX_VISIT_MEMBER_NAME(_r,"_r");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(r,"r");
}

Dynamic B2Color_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_b") ) { return _b; }
		if (HX_FIELD_EQ(inName,"_g") ) { return _g; }
		if (HX_FIELD_EQ(inName,"_r") ) { return _r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_b") ) { return set_b_dyn(); }
		if (HX_FIELD_EQ(inName,"set_g") ) { return set_g_dyn(); }
		if (HX_FIELD_EQ(inName,"set_r") ) { return set_r_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return inCallProp ? get_color() : color; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Color_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp) return set_b(inValue);b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp) return set_g(inValue);g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp) return set_r(inValue);r=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_b") ) { _b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_g") ) { _g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_r") ) { _r=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_b"));
	outFields->push(HX_CSTRING("_g"));
	outFields->push(HX_CSTRING("_r"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("r"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_b"),
	HX_CSTRING("_g"),
	HX_CSTRING("_r"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_b"),
	HX_CSTRING("set_g"),
	HX_CSTRING("set_r"),
	HX_CSTRING("color"),
	HX_CSTRING("b"),
	HX_CSTRING("g"),
	HX_CSTRING("r"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Color_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Color_obj::__mClass,"__mClass");
};

Class B2Color_obj::__mClass;

void B2Color_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.common.B2Color"), hx::TCanCast< B2Color_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Color_obj::__boot()
{
}

} // end namespace box2D
} // end namespace common
