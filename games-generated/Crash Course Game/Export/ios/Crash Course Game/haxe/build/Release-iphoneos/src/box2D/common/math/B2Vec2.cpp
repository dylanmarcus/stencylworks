#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
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

Void B2Vec2_obj::__construct(hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_)
{
HX_STACK_PUSH("B2Vec2::new","box2D/common/math/B2Vec2.hx",28);
Float x_ = __o_x_.Default(0);
Float y_ = __o_y_.Default(0);
{
	HX_STACK_LINE(28)
	this->x = x_;
	HX_STACK_LINE(28)
	this->y = y_;
}
;
	return null();
}

B2Vec2_obj::~B2Vec2_obj() { }

Dynamic B2Vec2_obj::__CreateEmpty() { return  new B2Vec2_obj; }
hx::ObjectPtr< B2Vec2_obj > B2Vec2_obj::__new(hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_)
{  hx::ObjectPtr< B2Vec2_obj > result = new B2Vec2_obj();
	result->__construct(__o_x_,__o_y_);
	return result;}

Dynamic B2Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Vec2_obj > result = new B2Vec2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void B2Vec2_obj::reset( ){
{
		HX_STACK_PUSH("B2Vec2::reset","box2D/common/math/B2Vec2.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_LINE(187)
		this->x = (int)0;
		HX_STACK_LINE(188)
		this->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,reset,(void))

bool B2Vec2_obj::isValid( ){
	HX_STACK_PUSH("B2Vec2::isValid","box2D/common/math/B2Vec2.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(177)
	return (bool(::box2D::common::math::B2Math_obj::isValid(this->x)) && bool(::box2D::common::math::B2Math_obj::isValid(this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,isValid,return )

Float B2Vec2_obj::winding( ::box2D::common::math::B2Vec2 b,::box2D::common::math::B2Vec2 c){
	HX_STACK_PUSH("B2Vec2::winding","box2D/common/math/B2Vec2.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(167)
	::box2D::common::math::B2Vec2 clone = b->copy(null());		HX_STACK_VAR(clone,"clone");
	HX_STACK_LINE(168)
	clone->subtract(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(170)
	::box2D::common::math::B2Vec2 clone2 = c->copy(null());		HX_STACK_VAR(clone2,"clone2");
	HX_STACK_LINE(171)
	clone2->subtract(b);
	HX_STACK_LINE(173)
	return clone->perpDot(clone2);
}


HX_DEFINE_DYNAMIC_FUNC2(B2Vec2_obj,winding,return )

Float B2Vec2_obj::perpDot( ::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Vec2::perpDot","box2D/common/math/B2Vec2.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(161)
	return ((-(this->y) * b->x) + (this->x * b->y));
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,perpDot,return )

Float B2Vec2_obj::normalize( ){
	HX_STACK_PUSH("B2Vec2::normalize","box2D/common/math/B2Vec2.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(148)
	Float length = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(149)
	if (((length < 2.2250738585072014e-308))){
		HX_STACK_LINE(150)
		return 0.0;
	}
	HX_STACK_LINE(153)
	Float invLength = (Float(1.0) / Float(length));		HX_STACK_VAR(invLength,"invLength");
	HX_STACK_LINE(154)
	hx::MultEq(this->x,invLength);
	HX_STACK_LINE(155)
	hx::MultEq(this->y,invLength);
	HX_STACK_LINE(157)
	return length;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,normalize,return )

Float B2Vec2_obj::lengthSquared( ){
	HX_STACK_PUSH("B2Vec2::lengthSquared","box2D/common/math/B2Vec2.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_LINE(142)
	return ((this->x * this->x) + (this->y * this->y));
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,lengthSquared,return )

Float B2Vec2_obj::length( ){
	HX_STACK_PUSH("B2Vec2::length","box2D/common/math/B2Vec2.hx",137);
	HX_STACK_THIS(this);
	HX_STACK_LINE(137)
	return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,length,return )

Void B2Vec2_obj::abs( ){
{
		HX_STACK_PUSH("B2Vec2::abs","box2D/common/math/B2Vec2.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_LINE(132)
		if (((this->x < (int)0))){
			HX_STACK_LINE(132)
			this->x = -(this->x);
		}
		HX_STACK_LINE(133)
		if (((this->y < (int)0))){
			HX_STACK_LINE(133)
			this->y = -(this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,abs,(void))

Void B2Vec2_obj::maxV( ::box2D::common::math::B2Vec2 b){
{
		HX_STACK_PUSH("B2Vec2::maxV","box2D/common/math/B2Vec2.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(126)
		this->x = (  (((this->x > b->x))) ? Float(this->x) : Float(b->x) );
		HX_STACK_LINE(127)
		this->y = (  (((this->y > b->y))) ? Float(this->y) : Float(b->y) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,maxV,(void))

Void B2Vec2_obj::minV( ::box2D::common::math::B2Vec2 b){
{
		HX_STACK_PUSH("B2Vec2::minV","box2D/common/math/B2Vec2.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(120)
		this->x = (  (((this->x < b->x))) ? Float(this->x) : Float(b->x) );
		HX_STACK_LINE(121)
		this->y = (  (((this->y < b->y))) ? Float(this->y) : Float(b->y) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,minV,(void))

Void B2Vec2_obj::crossFV( Float s){
{
		HX_STACK_PUSH("B2Vec2::crossFV","box2D/common/math/B2Vec2.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(113)
		Float tX = this->x;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(114)
		this->x = (-(s) * this->y);
		HX_STACK_LINE(115)
		this->y = (s * tX);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,crossFV,(void))

Void B2Vec2_obj::crossVF( Float s){
{
		HX_STACK_PUSH("B2Vec2::crossVF","box2D/common/math/B2Vec2.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(106)
		Float tX = this->x;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(107)
		this->x = (s * this->y);
		HX_STACK_LINE(108)
		this->y = (-(s) * tX);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,crossVF,(void))

Void B2Vec2_obj::mulTM( ::box2D::common::math::B2Mat22 A){
{
		HX_STACK_PUSH("B2Vec2::mulTM","box2D/common/math/B2Vec2.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_LINE(99)
		Float tX = ::box2D::common::math::B2Math_obj::dot(hx::ObjectPtr<OBJ_>(this),A->col1);		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(100)
		this->y = ::box2D::common::math::B2Math_obj::dot(hx::ObjectPtr<OBJ_>(this),A->col2);
		HX_STACK_LINE(101)
		this->x = tX;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,mulTM,(void))

Void B2Vec2_obj::mulM( ::box2D::common::math::B2Mat22 A){
{
		HX_STACK_PUSH("B2Vec2::mulM","box2D/common/math/B2Vec2.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_LINE(92)
		Float tX = this->x;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(93)
		this->x = ((A->col1->x * tX) + (A->col2->x * this->y));
		HX_STACK_LINE(94)
		this->y = ((A->col1->y * tX) + (A->col2->y * this->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,mulM,(void))

Void B2Vec2_obj::multiply( Float a){
{
		HX_STACK_PUSH("B2Vec2::multiply","box2D/common/math/B2Vec2.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(87)
		hx::MultEq(this->x,a);
		HX_STACK_LINE(87)
		hx::MultEq(this->y,a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,multiply,(void))

Void B2Vec2_obj::subtract( ::box2D::common::math::B2Vec2 v){
{
		HX_STACK_PUSH("B2Vec2::subtract","box2D/common/math/B2Vec2.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(82)
		hx::SubEq(this->x,v->x);
		HX_STACK_LINE(82)
		hx::SubEq(this->y,v->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,subtract,(void))

Void B2Vec2_obj::add( ::box2D::common::math::B2Vec2 v){
{
		HX_STACK_PUSH("B2Vec2::add","box2D/common/math/B2Vec2.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(77)
		hx::AddEq(this->x,v->x);
		HX_STACK_LINE(77)
		hx::AddEq(this->y,v->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,add,(void))

::box2D::common::math::B2Vec2 B2Vec2_obj::copy( hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
	HX_STACK_PUSH("B2Vec2::copy","box2D/common/math/B2Vec2.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fromPool,"fromPool");
{
		HX_STACK_LINE(59)
		::box2D::common::math::B2Vec2 vec;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(61)
		if ((fromPool)){
			HX_STACK_LINE(63)
			vec = ::box2D::common::math::B2Vec2_obj::getFromPool();
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				vec->x = this->x;
				HX_STACK_LINE(64)
				vec->y = this->y;
			}
		}
		else{
			HX_STACK_LINE(68)
			vec = ::box2D::common::math::B2Vec2_obj::__new(this->x,this->y);
		}
		HX_STACK_LINE(72)
		return vec;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,copy,return )

Void B2Vec2_obj::negativeSelf( ){
{
		HX_STACK_PUSH("B2Vec2::negativeSelf","box2D/common/math/B2Vec2.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(49)
		this->x = -(this->x);
		HX_STACK_LINE(49)
		this->y = -(this->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,negativeSelf,(void))

::box2D::common::math::B2Vec2 B2Vec2_obj::getNegativePooled( ){
	HX_STACK_PUSH("B2Vec2::getNegativePooled","box2D/common/math/B2Vec2.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Vec2_obj::getFromPool();		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(42)
	v->x = -(this->x);
	HX_STACK_LINE(43)
	v->y = -(this->y);
	HX_STACK_LINE(44)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,getNegativePooled,return )

::box2D::common::math::B2Vec2 B2Vec2_obj::getNegative( ){
	HX_STACK_PUSH("B2Vec2::getNegative","box2D/common/math/B2Vec2.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	return ::box2D::common::math::B2Vec2_obj::__new(-(this->x),-(this->y));
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,getNegative,return )

Void B2Vec2_obj::setV( ::box2D::common::math::B2Vec2 v){
{
		HX_STACK_PUSH("B2Vec2::setV","box2D/common/math/B2Vec2.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(32)
		this->x = v->x;
		HX_STACK_LINE(32)
		this->y = v->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Vec2_obj,setV,(void))

Void B2Vec2_obj::set( hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_){
Float x_ = __o_x_.Default(0);
Float y_ = __o_y_.Default(0);
	HX_STACK_PUSH("B2Vec2::set","box2D/common/math/B2Vec2.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x_,"x_");
	HX_STACK_ARG(y_,"y_");
{
		HX_STACK_LINE(31)
		this->x = x_;
		HX_STACK_LINE(31)
		this->y = y_;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Vec2_obj,set,(void))

Void B2Vec2_obj::setZero( ){
{
		HX_STACK_PUSH("B2Vec2::setZero","box2D/common/math/B2Vec2.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->x = 0.0;
		HX_STACK_LINE(30)
		this->y = 0.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,setZero,(void))

::box2D::common::math::B2Vec2 B2Vec2_obj::make( Float x_,Float y_){
	HX_STACK_PUSH("B2Vec2::make","box2D/common/math/B2Vec2.hx",53);
	HX_STACK_ARG(x_,"x_");
	HX_STACK_ARG(y_,"y_");
	HX_STACK_LINE(53)
	return ::box2D::common::math::B2Vec2_obj::__new(x_,y_);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Vec2_obj,make,return )

Array< ::Dynamic > B2Vec2_obj::pool;

int B2Vec2_obj::pooli;

Void B2Vec2_obj::freePool( ){
{
		HX_STACK_PUSH("B2Vec2::freePool","box2D/common/math/B2Vec2.hx",195);
		HX_STACK_LINE(195)
		::box2D::common::math::B2Vec2_obj::pooli = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,freePool,(void))

::box2D::common::math::B2Vec2 B2Vec2_obj::getFromPool( ){
	HX_STACK_PUSH("B2Vec2::getFromPool","box2D/common/math/B2Vec2.hx",200);
	HX_STACK_LINE(202)
	if (((::box2D::common::math::B2Vec2_obj::pooli > (int)500))){
		HX_STACK_LINE(203)
		::box2D::common::math::B2Vec2_obj::pooli = (int)0;
	}
	HX_STACK_LINE(207)
	if (((::box2D::common::math::B2Vec2_obj::pooli < ::box2D::common::math::B2Vec2_obj::pool->length))){
		HX_STACK_LINE(209)
		::box2D::common::math::B2Vec2 contact = ::box2D::common::math::B2Vec2_obj::pool->__get(::box2D::common::math::B2Vec2_obj::pooli).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(contact,"contact");
		HX_STACK_LINE(210)
		contact->x = (int)0;
		HX_STACK_LINE(211)
		contact->y = (int)0;
		HX_STACK_LINE(212)
		(::box2D::common::math::B2Vec2_obj::pooli)++;
		HX_STACK_LINE(213)
		return contact;
	}
	else{
		HX_STACK_LINE(218)
		::box2D::common::math::B2Vec2 contact = ::box2D::common::math::B2Vec2_obj::__new(null(),null());		HX_STACK_VAR(contact,"contact");
		HX_STACK_LINE(219)
		::box2D::common::math::B2Vec2_obj::pool->push(contact);
		HX_STACK_LINE(220)
		(::box2D::common::math::B2Vec2_obj::pooli)++;
		HX_STACK_LINE(221)
		return contact;
	}
	HX_STACK_LINE(207)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(B2Vec2_obj,getFromPool,return )


B2Vec2_obj::B2Vec2_obj()
{
}

void B2Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Vec2);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void B2Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic B2Vec2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"abs") ) { return abs_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"pool") ) { return pool; }
		if (HX_FIELD_EQ(inName,"maxV") ) { return maxV_dyn(); }
		if (HX_FIELD_EQ(inName,"minV") ) { return minV_dyn(); }
		if (HX_FIELD_EQ(inName,"mulM") ) { return mulM_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"setV") ) { return setV_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pooli") ) { return pooli; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"mulTM") ) { return mulTM_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
		if (HX_FIELD_EQ(inName,"winding") ) { return winding_dyn(); }
		if (HX_FIELD_EQ(inName,"perpDot") ) { return perpDot_dyn(); }
		if (HX_FIELD_EQ(inName,"crossFV") ) { return crossFV_dyn(); }
		if (HX_FIELD_EQ(inName,"crossVF") ) { return crossVF_dyn(); }
		if (HX_FIELD_EQ(inName,"setZero") ) { return setZero_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"freePool") ) { return freePool_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFromPool") ) { return getFromPool_dyn(); }
		if (HX_FIELD_EQ(inName,"getNegative") ) { return getNegative_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"negativeSelf") ) { return negativeSelf_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return lengthSquared_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getNegativePooled") ) { return getNegativePooled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pooli") ) { pooli=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("pool"),
	HX_CSTRING("pooli"),
	HX_CSTRING("freePool"),
	HX_CSTRING("getFromPool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("isValid"),
	HX_CSTRING("winding"),
	HX_CSTRING("perpDot"),
	HX_CSTRING("normalize"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("length"),
	HX_CSTRING("abs"),
	HX_CSTRING("maxV"),
	HX_CSTRING("minV"),
	HX_CSTRING("crossFV"),
	HX_CSTRING("crossVF"),
	HX_CSTRING("mulTM"),
	HX_CSTRING("mulM"),
	HX_CSTRING("multiply"),
	HX_CSTRING("subtract"),
	HX_CSTRING("add"),
	HX_CSTRING("copy"),
	HX_CSTRING("negativeSelf"),
	HX_CSTRING("getNegativePooled"),
	HX_CSTRING("getNegative"),
	HX_CSTRING("setV"),
	HX_CSTRING("set"),
	HX_CSTRING("setZero"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Vec2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Vec2_obj::pool,"pool");
	HX_MARK_MEMBER_NAME(B2Vec2_obj::pooli,"pooli");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Vec2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Vec2_obj::pool,"pool");
	HX_VISIT_MEMBER_NAME(B2Vec2_obj::pooli,"pooli");
};

Class B2Vec2_obj::__mClass;

void B2Vec2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.common.math.B2Vec2"), hx::TCanCast< B2Vec2_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Vec2_obj::__boot()
{
	pool= Array_obj< ::Dynamic >::__new();
}

} // end namespace box2D
} // end namespace common
} // end namespace math
