#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
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

Void B2Math_obj::__construct()
{
	return null();
}

B2Math_obj::~B2Math_obj() { }

Dynamic B2Math_obj::__CreateEmpty() { return  new B2Math_obj; }
hx::ObjectPtr< B2Math_obj > B2Math_obj::__new()
{  hx::ObjectPtr< B2Math_obj > result = new B2Math_obj();
	result->__construct();
	return result;}

Dynamic B2Math_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Math_obj > result = new B2Math_obj();
	result->__construct();
	return result;}

bool B2Math_obj::isValid( Float x){
	HX_STACK_PUSH("B2Math::isValid","box2D/common/math/B2Math.hx",35);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(36)
	if (((bool((bool(::Math_obj::isNaN(x)) || bool((x == ::Math_obj::NEGATIVE_INFINITY)))) || bool((x == ::Math_obj::POSITIVE_INFINITY))))){
		HX_STACK_LINE(36)
		return false;
	}
	HX_STACK_LINE(42)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,isValid,return )

Float B2Math_obj::dot( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::dot","box2D/common/math/B2Math.hx",62);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(62)
	return ((a->x * b->x) + (a->y * b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,dot,return )

Float B2Math_obj::crossVV( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::crossVV","box2D/common/math/B2Math.hx",67);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(67)
	return ((a->x * b->y) - (a->y * b->x));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,crossVV,return )

::box2D::common::math::B2Vec2 B2Math_obj::crossVF( ::box2D::common::math::B2Vec2 a,Float s,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
	HX_STACK_PUSH("B2Math::crossVF","box2D/common/math/B2Math.hx",72);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(fromPool,"fromPool");
{
		HX_STACK_LINE(73)
		::box2D::common::math::B2Vec2 v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(75)
		if ((fromPool)){
			HX_STACK_LINE(77)
			v = ::box2D::common::math::B2Vec2_obj::getFromPool();
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				v->x = (s * a->y);
				HX_STACK_LINE(78)
				v->y = (-(s) * a->x);
			}
		}
		else{
			HX_STACK_LINE(82)
			v = ::box2D::common::math::B2Vec2_obj::__new((s * a->y),(-(s) * a->x));
		}
		HX_STACK_LINE(86)
		return v;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,crossVF,return )

::box2D::common::math::B2Vec2 B2Math_obj::crossFV( Float s,::box2D::common::math::B2Vec2 a,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
	HX_STACK_PUSH("B2Math::crossFV","box2D/common/math/B2Math.hx",90);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(fromPool,"fromPool");
{
		HX_STACK_LINE(91)
		::box2D::common::math::B2Vec2 v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(93)
		if ((fromPool)){
			HX_STACK_LINE(95)
			v = ::box2D::common::math::B2Vec2_obj::getFromPool();
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				v->x = (-(s) * a->y);
				HX_STACK_LINE(96)
				v->y = (s * a->x);
			}
		}
		else{
			HX_STACK_LINE(100)
			v = ::box2D::common::math::B2Vec2_obj::__new((-(s) * a->y),(s * a->x));
		}
		HX_STACK_LINE(104)
		return v;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,crossFV,return )

::box2D::common::math::B2Vec2 B2Math_obj::mulMV( ::box2D::common::math::B2Mat22 A,::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
	HX_STACK_PUSH("B2Math::mulMV","box2D/common/math/B2Math.hx",108);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(fromPool,"fromPool");
{
		HX_STACK_LINE(109)
		::box2D::common::math::B2Vec2 vec;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(111)
		if ((fromPool)){
			HX_STACK_LINE(113)
			vec = ::box2D::common::math::B2Vec2_obj::getFromPool();
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				vec->x = ((A->col1->x * v->x) + (A->col2->x * v->y));
				HX_STACK_LINE(114)
				vec->y = ((A->col1->y * v->x) + (A->col2->y * v->y));
			}
		}
		else{
			HX_STACK_LINE(118)
			vec = ::box2D::common::math::B2Vec2_obj::__new(((A->col1->x * v->x) + (A->col2->x * v->y)),((A->col1->y * v->x) + (A->col2->y * v->y)));
		}
		HX_STACK_LINE(122)
		return vec;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulMV,return )

::box2D::common::math::B2Vec2 B2Math_obj::mulTMV( ::box2D::common::math::B2Mat22 A,::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
	HX_STACK_PUSH("B2Math::mulTMV","box2D/common/math/B2Math.hx",126);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(fromPool,"fromPool");
{
		HX_STACK_LINE(127)
		::box2D::common::math::B2Vec2 vec;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(129)
		if ((fromPool)){
			HX_STACK_LINE(131)
			vec = ::box2D::common::math::B2Vec2_obj::getFromPool();
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				vec->x = ::box2D::common::math::B2Math_obj::dot(v,A->col1);
				HX_STACK_LINE(132)
				vec->y = ::box2D::common::math::B2Math_obj::dot(v,A->col2);
			}
		}
		else{
			HX_STACK_LINE(136)
			vec = ::box2D::common::math::B2Vec2_obj::__new(::box2D::common::math::B2Math_obj::dot(v,A->col1),::box2D::common::math::B2Math_obj::dot(v,A->col2));
		}
		HX_STACK_LINE(140)
		return vec;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulTMV,return )

::box2D::common::math::B2Vec2 B2Math_obj::mulX( ::box2D::common::math::B2Transform T,::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
	HX_STACK_PUSH("B2Math::mulX","box2D/common/math/B2Math.hx",144);
	HX_STACK_ARG(T,"T");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(fromPool,"fromPool");
{
		HX_STACK_LINE(145)
		::box2D::common::math::B2Vec2 a = ::box2D::common::math::B2Math_obj::mulMV(T->R,v,fromPool);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(146)
		hx::AddEq(a->x,T->position->x);
		HX_STACK_LINE(147)
		hx::AddEq(a->y,T->position->y);
		HX_STACK_LINE(148)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulX,return )

::box2D::common::math::B2Vec2 B2Math_obj::mulXT( ::box2D::common::math::B2Transform T,::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
	HX_STACK_PUSH("B2Math::mulXT","box2D/common/math/B2Math.hx",152);
	HX_STACK_ARG(T,"T");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(fromPool,"fromPool");
{
		HX_STACK_LINE(153)
		::box2D::common::math::B2Vec2 a = ::box2D::common::math::B2Math_obj::subtractVVPooled(v,T->position);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(154)
		Float tX = ((a->x * T->R->col1->x) + (a->y * T->R->col1->y));		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(155)
		a->y = ((a->x * T->R->col2->x) + (a->y * T->R->col2->y));
		HX_STACK_LINE(156)
		a->x = tX;
		HX_STACK_LINE(157)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulXT,return )

::box2D::common::math::B2Vec2 B2Math_obj::addVV( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::addVV","box2D/common/math/B2Math.hx",161);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(162)
	::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Vec2_obj::__new((a->x + b->x),(a->y + b->y));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(163)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,addVV,return )

::box2D::common::math::B2Vec2 B2Math_obj::subtractVV( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::subtractVV","box2D/common/math/B2Math.hx",167);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(167)
	return ::box2D::common::math::B2Vec2_obj::__new((a->x - b->x),(a->y - b->y));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,subtractVV,return )

::box2D::common::math::B2Vec2 B2Math_obj::subtractVVPooled( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::subtractVVPooled","box2D/common/math/B2Math.hx",172);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(173)
	::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Vec2_obj::getFromPool();		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		v->x = (a->x - b->x);
		HX_STACK_LINE(174)
		v->y = (a->y - b->y);
	}
	HX_STACK_LINE(175)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,subtractVVPooled,return )

Float B2Math_obj::distance( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::distance","box2D/common/math/B2Math.hx",178);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(179)
	Float cX = (a->x - b->x);		HX_STACK_VAR(cX,"cX");
	HX_STACK_LINE(180)
	Float cY = (a->y - b->y);		HX_STACK_VAR(cY,"cY");
	HX_STACK_LINE(181)
	return ::Math_obj::sqrt(((cX * cX) + (cY * cY)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,distance,return )

Float B2Math_obj::distanceSquared( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::distanceSquared","box2D/common/math/B2Math.hx",184);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(185)
	Float cX = (a->x - b->x);		HX_STACK_VAR(cX,"cX");
	HX_STACK_LINE(186)
	Float cY = (a->y - b->y);		HX_STACK_VAR(cY,"cY");
	HX_STACK_LINE(187)
	return ((cX * cX) + (cY * cY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,distanceSquared,return )

::box2D::common::math::B2Vec2 B2Math_obj::mulFV( Float s,::box2D::common::math::B2Vec2 a){
	HX_STACK_PUSH("B2Math::mulFV","box2D/common/math/B2Math.hx",191);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(192)
	::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Vec2_obj::__new((s * a->x),(s * a->y));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(193)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,mulFV,return )

::box2D::common::math::B2Mat22 B2Math_obj::addMM( ::box2D::common::math::B2Mat22 A,::box2D::common::math::B2Mat22 B){
	HX_STACK_PUSH("B2Math::addMM","box2D/common/math/B2Math.hx",197);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(B,"B");
	HX_STACK_LINE(198)
	::box2D::common::math::B2Mat22 C = ::box2D::common::math::B2Mat22_obj::fromVV(::box2D::common::math::B2Math_obj::addVV(A->col1,B->col1),::box2D::common::math::B2Math_obj::addVV(A->col2,B->col2));		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(199)
	return C;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,addMM,return )

::box2D::common::math::B2Mat22 B2Math_obj::mulMM( ::box2D::common::math::B2Mat22 A,::box2D::common::math::B2Mat22 B){
	HX_STACK_PUSH("B2Math::mulMM","box2D/common/math/B2Math.hx",204);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(B,"B");
	HX_STACK_LINE(205)
	::box2D::common::math::B2Mat22 C = ::box2D::common::math::B2Mat22_obj::fromVV(::box2D::common::math::B2Math_obj::mulMV(A,B->col1,null()),::box2D::common::math::B2Math_obj::mulMV(A,B->col2,null()));		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(206)
	return C;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,mulMM,return )

::box2D::common::math::B2Mat22 B2Math_obj::mulTMM( ::box2D::common::math::B2Mat22 A,::box2D::common::math::B2Mat22 B){
	HX_STACK_PUSH("B2Math::mulTMM","box2D/common/math/B2Math.hx",211);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(B,"B");
	HX_STACK_LINE(212)
	::box2D::common::math::B2Vec2 c1 = ::box2D::common::math::B2Vec2_obj::__new(::box2D::common::math::B2Math_obj::dot(A->col1,B->col1),::box2D::common::math::B2Math_obj::dot(A->col2,B->col1));		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(213)
	::box2D::common::math::B2Vec2 c2 = ::box2D::common::math::B2Vec2_obj::__new(::box2D::common::math::B2Math_obj::dot(A->col1,B->col2),::box2D::common::math::B2Math_obj::dot(A->col2,B->col2));		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(214)
	::box2D::common::math::B2Mat22 C = ::box2D::common::math::B2Mat22_obj::fromVV(c1,c2);		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(215)
	return C;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,mulTMM,return )

Float B2Math_obj::abs( Float a){
	HX_STACK_PUSH("B2Math::abs","box2D/common/math/B2Math.hx",219);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(219)
	return (  (((a > 0.0))) ? Float(a) : Float(-(a)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,abs,return )

::box2D::common::math::B2Vec2 B2Math_obj::absV( ::box2D::common::math::B2Vec2 a){
	HX_STACK_PUSH("B2Math::absV","box2D/common/math/B2Math.hx",224);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(225)
	::box2D::common::math::B2Vec2 b = ::box2D::common::math::B2Vec2_obj::__new(::box2D::common::math::B2Math_obj::abs(a->x),::box2D::common::math::B2Math_obj::abs(a->y));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(226)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,absV,return )

::box2D::common::math::B2Mat22 B2Math_obj::absM( ::box2D::common::math::B2Mat22 A){
	HX_STACK_PUSH("B2Math::absM","box2D/common/math/B2Math.hx",230);
	HX_STACK_ARG(A,"A");
	HX_STACK_LINE(231)
	::box2D::common::math::B2Mat22 B = ::box2D::common::math::B2Mat22_obj::fromVV(::box2D::common::math::B2Math_obj::absV(A->col1),::box2D::common::math::B2Math_obj::absV(A->col2));		HX_STACK_VAR(B,"B");
	HX_STACK_LINE(232)
	return B;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,absM,return )

Float B2Math_obj::min( Float a,Float b){
	HX_STACK_PUSH("B2Math::min","box2D/common/math/B2Math.hx",236);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(236)
	return (  (((a < b))) ? Float(a) : Float(b) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,min,return )

::box2D::common::math::B2Vec2 B2Math_obj::minV( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::minV","box2D/common/math/B2Math.hx",241);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(242)
	::box2D::common::math::B2Vec2 c = ::box2D::common::math::B2Vec2_obj::__new(::box2D::common::math::B2Math_obj::min(a->x,b->x),::box2D::common::math::B2Math_obj::min(a->y,b->y));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(243)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,minV,return )

Float B2Math_obj::max( Float a,Float b){
	HX_STACK_PUSH("B2Math::max","box2D/common/math/B2Math.hx",247);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(247)
	return (  (((a > b))) ? Float(a) : Float(b) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,max,return )

::box2D::common::math::B2Vec2 B2Math_obj::maxV( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 b){
	HX_STACK_PUSH("B2Math::maxV","box2D/common/math/B2Math.hx",252);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(253)
	::box2D::common::math::B2Vec2 c = ::box2D::common::math::B2Vec2_obj::__new(::box2D::common::math::B2Math_obj::max(a->x,b->x),::box2D::common::math::B2Math_obj::max(a->y,b->y));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(254)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,maxV,return )

Float B2Math_obj::clamp( Float a,Float low,Float high){
	HX_STACK_PUSH("B2Math::clamp","box2D/common/math/B2Math.hx",258);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(low,"low");
	HX_STACK_ARG(high,"high");
	HX_STACK_LINE(258)
	return (  (((a < low))) ? Float(low) : Float((  (((a > high))) ? Float(high) : Float(a) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,clamp,return )

::box2D::common::math::B2Vec2 B2Math_obj::clampV( ::box2D::common::math::B2Vec2 a,::box2D::common::math::B2Vec2 low,::box2D::common::math::B2Vec2 high){
	HX_STACK_PUSH("B2Math::clampV","box2D/common/math/B2Math.hx",263);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(low,"low");
	HX_STACK_ARG(high,"high");
	HX_STACK_LINE(263)
	return ::box2D::common::math::B2Math_obj::maxV(low,::box2D::common::math::B2Math_obj::minV(a,high));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,clampV,return )

Void B2Math_obj::swap( Dynamic a,Dynamic b){
{
		HX_STACK_PUSH("B2Math::swap","box2D/common/math/B2Math.hx",268);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(269)
		Dynamic tmp = a->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		hx::IndexRef((a).mPtr,(int)0) = b->__GetItem((int)0);
		HX_STACK_LINE(271)
		hx::IndexRef((b).mPtr,(int)0) = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,swap,(void))

Float B2Math_obj::random( ){
	HX_STACK_PUSH("B2Math::random","box2D/common/math/B2Math.hx",276);
	HX_STACK_LINE(276)
	return ((::Math_obj::random() * (int)2) - (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(B2Math_obj,random,return )

Float B2Math_obj::randomRange( Float lo,Float hi){
	HX_STACK_PUSH("B2Math::randomRange","box2D/common/math/B2Math.hx",281);
	HX_STACK_ARG(lo,"lo");
	HX_STACK_ARG(hi,"hi");
	HX_STACK_LINE(282)
	Float r = ::Math_obj::random();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(283)
	r = ((((hi - lo)) * r) + lo);
	HX_STACK_LINE(284)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,randomRange,return )

int B2Math_obj::nextPowerOfTwo( int x){
	HX_STACK_PUSH("B2Math::nextPowerOfTwo","box2D/common/math/B2Math.hx",293);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(294)
	hx::OrEq(x,(int((int(x) >> int((int)1))) & int((int)2147483647)));
	HX_STACK_LINE(295)
	hx::OrEq(x,(int((int(x) >> int((int)2))) & int((int)1073741823)));
	HX_STACK_LINE(296)
	hx::OrEq(x,(int((int(x) >> int((int)4))) & int((int)268435455)));
	HX_STACK_LINE(297)
	hx::OrEq(x,(int((int(x) >> int((int)8))) & int((int)16777215)));
	HX_STACK_LINE(298)
	hx::OrEq(x,(int((int(x) >> int((int)16))) & int((int)65535)));
	HX_STACK_LINE(299)
	return (x + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,nextPowerOfTwo,return )

bool B2Math_obj::isPowerOfTwo( int x){
	HX_STACK_PUSH("B2Math::isPowerOfTwo","box2D/common/math/B2Math.hx",303);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(304)
	bool result = (bool((x > (int)0)) && bool((((int(x) & int((x - (int)1)))) == (int)0)));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(305)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,isPowerOfTwo,return )

::box2D::common::math::B2Vec2 B2Math_obj::b2Vec2_zero;

::box2D::common::math::B2Mat22 B2Math_obj::b2Mat22_identity;

::box2D::common::math::B2Transform B2Math_obj::b2Transform_identity;

Float B2Math_obj::MIN_VALUE;

Float B2Math_obj::MAX_VALUE;


B2Math_obj::B2Math_obj()
{
}

void B2Math_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Math);
	HX_MARK_END_CLASS();
}

void B2Math_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic B2Math_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"abs") ) { return abs_dyn(); }
		if (HX_FIELD_EQ(inName,"min") ) { return min_dyn(); }
		if (HX_FIELD_EQ(inName,"max") ) { return max_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mulX") ) { return mulX_dyn(); }
		if (HX_FIELD_EQ(inName,"absV") ) { return absV_dyn(); }
		if (HX_FIELD_EQ(inName,"absM") ) { return absM_dyn(); }
		if (HX_FIELD_EQ(inName,"minV") ) { return minV_dyn(); }
		if (HX_FIELD_EQ(inName,"maxV") ) { return maxV_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mulMV") ) { return mulMV_dyn(); }
		if (HX_FIELD_EQ(inName,"mulXT") ) { return mulXT_dyn(); }
		if (HX_FIELD_EQ(inName,"addVV") ) { return addVV_dyn(); }
		if (HX_FIELD_EQ(inName,"mulFV") ) { return mulFV_dyn(); }
		if (HX_FIELD_EQ(inName,"addMM") ) { return addMM_dyn(); }
		if (HX_FIELD_EQ(inName,"mulMM") ) { return mulMM_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mulTMV") ) { return mulTMV_dyn(); }
		if (HX_FIELD_EQ(inName,"mulTMM") ) { return mulTMM_dyn(); }
		if (HX_FIELD_EQ(inName,"clampV") ) { return clampV_dyn(); }
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
		if (HX_FIELD_EQ(inName,"crossVV") ) { return crossVV_dyn(); }
		if (HX_FIELD_EQ(inName,"crossVF") ) { return crossVF_dyn(); }
		if (HX_FIELD_EQ(inName,"crossFV") ) { return crossFV_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"subtractVV") ) { return subtractVV_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomRange") ) { return randomRange_dyn(); }
		if (HX_FIELD_EQ(inName,"b2Vec2_zero") ) { return b2Vec2_zero; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isPowerOfTwo") ) { return isPowerOfTwo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nextPowerOfTwo") ) { return nextPowerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subtractVVPooled") ) { return subtractVVPooled_dyn(); }
		if (HX_FIELD_EQ(inName,"b2Mat22_identity") ) { return b2Mat22_identity; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"b2Transform_identity") ) { return b2Transform_identity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Math_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"b2Vec2_zero") ) { b2Vec2_zero=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"b2Mat22_identity") ) { b2Mat22_identity=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"b2Transform_identity") ) { b2Transform_identity=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Math_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isValid"),
	HX_CSTRING("dot"),
	HX_CSTRING("crossVV"),
	HX_CSTRING("crossVF"),
	HX_CSTRING("crossFV"),
	HX_CSTRING("mulMV"),
	HX_CSTRING("mulTMV"),
	HX_CSTRING("mulX"),
	HX_CSTRING("mulXT"),
	HX_CSTRING("addVV"),
	HX_CSTRING("subtractVV"),
	HX_CSTRING("subtractVVPooled"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("mulFV"),
	HX_CSTRING("addMM"),
	HX_CSTRING("mulMM"),
	HX_CSTRING("mulTMM"),
	HX_CSTRING("abs"),
	HX_CSTRING("absV"),
	HX_CSTRING("absM"),
	HX_CSTRING("min"),
	HX_CSTRING("minV"),
	HX_CSTRING("max"),
	HX_CSTRING("maxV"),
	HX_CSTRING("clamp"),
	HX_CSTRING("clampV"),
	HX_CSTRING("swap"),
	HX_CSTRING("random"),
	HX_CSTRING("randomRange"),
	HX_CSTRING("nextPowerOfTwo"),
	HX_CSTRING("isPowerOfTwo"),
	HX_CSTRING("b2Vec2_zero"),
	HX_CSTRING("b2Mat22_identity"),
	HX_CSTRING("b2Transform_identity"),
	HX_CSTRING("MIN_VALUE"),
	HX_CSTRING("MAX_VALUE"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Math_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Math_obj::b2Vec2_zero,"b2Vec2_zero");
	HX_MARK_MEMBER_NAME(B2Math_obj::b2Mat22_identity,"b2Mat22_identity");
	HX_MARK_MEMBER_NAME(B2Math_obj::b2Transform_identity,"b2Transform_identity");
	HX_MARK_MEMBER_NAME(B2Math_obj::MIN_VALUE,"MIN_VALUE");
	HX_MARK_MEMBER_NAME(B2Math_obj::MAX_VALUE,"MAX_VALUE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Math_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Math_obj::b2Vec2_zero,"b2Vec2_zero");
	HX_VISIT_MEMBER_NAME(B2Math_obj::b2Mat22_identity,"b2Mat22_identity");
	HX_VISIT_MEMBER_NAME(B2Math_obj::b2Transform_identity,"b2Transform_identity");
	HX_VISIT_MEMBER_NAME(B2Math_obj::MIN_VALUE,"MIN_VALUE");
	HX_VISIT_MEMBER_NAME(B2Math_obj::MAX_VALUE,"MAX_VALUE");
};

Class B2Math_obj::__mClass;

void B2Math_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.common.math.B2Math"), hx::TCanCast< B2Math_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Math_obj::__boot()
{
	b2Vec2_zero= ::box2D::common::math::B2Vec2_obj::__new(0.0,0.0);
	b2Mat22_identity= ::box2D::common::math::B2Mat22_obj::fromVV(::box2D::common::math::B2Vec2_obj::__new(1.0,0.0),::box2D::common::math::B2Vec2_obj::__new(0.0,1.0));
	b2Transform_identity= ::box2D::common::math::B2Transform_obj::__new(::box2D::common::math::B2Math_obj::b2Vec2_zero,::box2D::common::math::B2Math_obj::b2Mat22_identity);
	MIN_VALUE= 2.2250738585072014e-308;
	MAX_VALUE= 1.7976931348623158e+308;
}

} // end namespace box2D
} // end namespace common
} // end namespace math
