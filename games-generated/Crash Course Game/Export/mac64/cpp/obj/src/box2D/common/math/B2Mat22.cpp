#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace common{
namespace math{

Void B2Mat22_obj::__construct()
{
HX_STACK_PUSH("B2Mat22::new","box2D/common/math/B2Mat22.hx",28);
{
	HX_STACK_LINE(29)
	this->col1 = ::box2D::common::math::B2Vec2_obj::__new((int)0,1.0);
	HX_STACK_LINE(30)
	this->col2 = ::box2D::common::math::B2Vec2_obj::__new((int)0,1.0);
}
;
	return null();
}

B2Mat22_obj::~B2Mat22_obj() { }

Dynamic B2Mat22_obj::__CreateEmpty() { return  new B2Mat22_obj; }
hx::ObjectPtr< B2Mat22_obj > B2Mat22_obj::__new()
{  hx::ObjectPtr< B2Mat22_obj > result = new B2Mat22_obj();
	result->__construct();
	return result;}

Dynamic B2Mat22_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Mat22_obj > result = new B2Mat22_obj();
	result->__construct();
	return result;}

Void B2Mat22_obj::abs( ){
{
		HX_STACK_PUSH("B2Mat22::abs","box2D/common/math/B2Mat22.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_LINE(157)
		this->col1->abs();
		HX_STACK_LINE(158)
		this->col2->abs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Mat22_obj,abs,(void))

::box2D::common::math::B2Vec2 B2Mat22_obj::solve( ::box2D::common::math::B2Vec2 out,Float bX,Float bY){
	HX_STACK_PUSH("B2Mat22::solve","box2D/common/math/B2Mat22.hx",137);
	HX_STACK_THIS(this);
	HX_STACK_ARG(out,"out");
	HX_STACK_ARG(bX,"bX");
	HX_STACK_ARG(bY,"bY");
	HX_STACK_LINE(139)
	Float a11 = this->col1->x;		HX_STACK_VAR(a11,"a11");
	HX_STACK_LINE(140)
	Float a12 = this->col2->x;		HX_STACK_VAR(a12,"a12");
	HX_STACK_LINE(141)
	Float a21 = this->col1->y;		HX_STACK_VAR(a21,"a21");
	HX_STACK_LINE(142)
	Float a22 = this->col2->y;		HX_STACK_VAR(a22,"a22");
	HX_STACK_LINE(144)
	Float det = ((a11 * a22) - (a12 * a21));		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(145)
	if (((det != 0.0))){
		HX_STACK_LINE(146)
		det = (Float(1.0) / Float(det));
	}
	HX_STACK_LINE(149)
	out->x = (det * (((a22 * bX) - (a12 * bY))));
	HX_STACK_LINE(150)
	out->y = (det * (((a11 * bY) - (a21 * bX))));
	HX_STACK_LINE(152)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC3(B2Mat22_obj,solve,return )

::box2D::common::math::B2Mat22 B2Mat22_obj::getInverse( ::box2D::common::math::B2Mat22 out){
	HX_STACK_PUSH("B2Mat22::getInverse","box2D/common/math/B2Mat22.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(out,"out");
	HX_STACK_LINE(120)
	Float a = this->col1->x;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(121)
	Float b = this->col2->x;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(122)
	Float c = this->col1->y;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(123)
	Float d = this->col2->y;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(125)
	Float det = ((a * d) - (b * c));		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(126)
	if (((det != 0.0))){
		HX_STACK_LINE(127)
		det = (Float(1.0) / Float(det));
	}
	HX_STACK_LINE(130)
	out->col1->x = (det * d);
	HX_STACK_LINE(130)
	out->col2->x = (-(det) * b);
	HX_STACK_LINE(131)
	out->col1->y = (-(det) * c);
	HX_STACK_LINE(131)
	out->col2->y = (det * a);
	HX_STACK_LINE(132)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Mat22_obj,getInverse,return )

Float B2Mat22_obj::getAngle( ){
	HX_STACK_PUSH("B2Mat22::getAngle","box2D/common/math/B2Mat22.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_LINE(111)
	return ::Math_obj::atan2(this->col1->y,this->col1->x);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Mat22_obj,getAngle,return )

Void B2Mat22_obj::setAngle( Float n){
{
		HX_STACK_PUSH("B2Mat22::setAngle","box2D/common/math/B2Mat22.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(104)
		this->col1->x = ::Math_obj::cos(n);
		HX_STACK_LINE(105)
		this->col1->y = ::Math_obj::sin(n);
		HX_STACK_LINE(106)
		this->col2->x = -(this->col1->y);
		HX_STACK_LINE(107)
		this->col2->y = this->col1->x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Mat22_obj,setAngle,(void))

Void B2Mat22_obj::setZero( ){
{
		HX_STACK_PUSH("B2Mat22::setZero","box2D/common/math/B2Mat22.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		this->col1->x = 0.0;
		HX_STACK_LINE(98)
		this->col2->x = 0.0;
		HX_STACK_LINE(99)
		this->col1->y = 0.0;
		HX_STACK_LINE(99)
		this->col2->y = 0.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Mat22_obj,setZero,(void))

Void B2Mat22_obj::setIdentity( ){
{
		HX_STACK_PUSH("B2Mat22::setIdentity","box2D/common/math/B2Mat22.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->col1->x = 1.0;
		HX_STACK_LINE(92)
		this->col2->x = 0.0;
		HX_STACK_LINE(93)
		this->col1->y = 0.0;
		HX_STACK_LINE(93)
		this->col2->y = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Mat22_obj,setIdentity,(void))

::box2D::common::math::B2Vec2 B2Mat22_obj::multiplyV( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("B2Mat22::multiplyV","box2D/common/math/B2Mat22.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(82)
	return ::box2D::common::math::B2Vec2_obj::__new(((this->col1->x * v->x) + (this->col2->x * v->y)),((this->col1->y * v->x) + (this->col2->y * v->y)));
}


HX_DEFINE_DYNAMIC_FUNC1(B2Mat22_obj,multiplyV,return )

Void B2Mat22_obj::addM( ::box2D::common::math::B2Mat22 m){
{
		HX_STACK_PUSH("B2Mat22::addM","box2D/common/math/B2Mat22.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(75)
		hx::AddEq(this->col1->x,m->col1->x);
		HX_STACK_LINE(76)
		hx::AddEq(this->col1->y,m->col1->y);
		HX_STACK_LINE(77)
		hx::AddEq(this->col2->x,m->col2->x);
		HX_STACK_LINE(78)
		hx::AddEq(this->col2->y,m->col2->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Mat22_obj,addM,(void))

Void B2Mat22_obj::setM( ::box2D::common::math::B2Mat22 m){
{
		HX_STACK_PUSH("B2Mat22::setM","box2D/common/math/B2Mat22.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::box2D::common::math::B2Vec2 _this = this->col1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = m->col1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(69)
			_this->x = v->x;
			HX_STACK_LINE(69)
			_this->y = v->y;
		}
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::box2D::common::math::B2Vec2 _this = this->col2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = m->col2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(70)
			_this->x = v->x;
			HX_STACK_LINE(70)
			_this->y = v->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Mat22_obj,setM,(void))

::box2D::common::math::B2Mat22 B2Mat22_obj::copy( ){
	HX_STACK_PUSH("B2Mat22::copy","box2D/common/math/B2Mat22.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	::box2D::common::math::B2Mat22 mat = ::box2D::common::math::B2Mat22_obj::__new();		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(63)
	mat->setM(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(64)
	return mat;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Mat22_obj,copy,return )

Void B2Mat22_obj::setVV( ::box2D::common::math::B2Vec2 c1,::box2D::common::math::B2Vec2 c2){
{
		HX_STACK_PUSH("B2Mat22::setVV","box2D/common/math/B2Mat22.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(c1,"c1");
		HX_STACK_ARG(c2,"c2");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::box2D::common::math::B2Vec2 _this = this->col1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			_this->x = c1->x;
			HX_STACK_LINE(57)
			_this->y = c1->y;
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::box2D::common::math::B2Vec2 _this = this->col2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(58)
			_this->x = c2->x;
			HX_STACK_LINE(58)
			_this->y = c2->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Mat22_obj,setVV,(void))

Void B2Mat22_obj::set( Float angle){
{
		HX_STACK_PUSH("B2Mat22::set","box2D/common/math/B2Mat22.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(49)
		Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(50)
		Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(51)
		this->col1->x = c;
		HX_STACK_LINE(51)
		this->col2->x = -(s);
		HX_STACK_LINE(52)
		this->col1->y = s;
		HX_STACK_LINE(52)
		this->col2->y = c;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Mat22_obj,set,(void))

::box2D::common::math::B2Mat22 B2Mat22_obj::fromAngle( Float angle){
	HX_STACK_PUSH("B2Mat22::fromAngle","box2D/common/math/B2Mat22.hx",34);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(35)
	::box2D::common::math::B2Mat22 mat = ::box2D::common::math::B2Mat22_obj::__new();		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(36)
	mat->set(angle);
	HX_STACK_LINE(37)
	return mat;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Mat22_obj,fromAngle,return )

::box2D::common::math::B2Mat22 B2Mat22_obj::fromVV( ::box2D::common::math::B2Vec2 c1,::box2D::common::math::B2Vec2 c2){
	HX_STACK_PUSH("B2Mat22::fromVV","box2D/common/math/B2Mat22.hx",41);
	HX_STACK_ARG(c1,"c1");
	HX_STACK_ARG(c2,"c2");
	HX_STACK_LINE(42)
	::box2D::common::math::B2Mat22 mat = ::box2D::common::math::B2Mat22_obj::__new();		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(43)
	mat->setVV(c1,c2);
	HX_STACK_LINE(44)
	return mat;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Mat22_obj,fromVV,return )


B2Mat22_obj::B2Mat22_obj()
{
}

void B2Mat22_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Mat22);
	HX_MARK_MEMBER_NAME(col2,"col2");
	HX_MARK_MEMBER_NAME(col1,"col1");
	HX_MARK_END_CLASS();
}

void B2Mat22_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(col2,"col2");
	HX_VISIT_MEMBER_NAME(col1,"col1");
}

Dynamic B2Mat22_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"abs") ) { return abs_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"col2") ) { return col2; }
		if (HX_FIELD_EQ(inName,"col1") ) { return col1; }
		if (HX_FIELD_EQ(inName,"addM") ) { return addM_dyn(); }
		if (HX_FIELD_EQ(inName,"setM") ) { return setM_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solve") ) { return solve_dyn(); }
		if (HX_FIELD_EQ(inName,"setVV") ) { return setVV_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fromVV") ) { return fromVV_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setZero") ) { return setZero_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromAngle") ) { return fromAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyV") ) { return multiplyV_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getInverse") ) { return getInverse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setIdentity") ) { return setIdentity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Mat22_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"col2") ) { col2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"col1") ) { col1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Mat22_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("col2"));
	outFields->push(HX_CSTRING("col1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromAngle"),
	HX_CSTRING("fromVV"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("col2"),
	HX_CSTRING("col1"),
	HX_CSTRING("abs"),
	HX_CSTRING("solve"),
	HX_CSTRING("getInverse"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("setZero"),
	HX_CSTRING("setIdentity"),
	HX_CSTRING("multiplyV"),
	HX_CSTRING("addM"),
	HX_CSTRING("setM"),
	HX_CSTRING("copy"),
	HX_CSTRING("setVV"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Mat22_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Mat22_obj::__mClass,"__mClass");
};

Class B2Mat22_obj::__mClass;

void B2Mat22_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.common.math.B2Mat22"), hx::TCanCast< B2Mat22_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Mat22_obj::__boot()
{
}

} // end namespace box2D
} // end namespace common
} // end namespace math
