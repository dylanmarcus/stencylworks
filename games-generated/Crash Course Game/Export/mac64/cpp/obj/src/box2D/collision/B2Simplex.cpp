#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceProxy
#include <box2D/collision/B2DistanceProxy.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Simplex
#include <box2D/collision/B2Simplex.h>
#endif
#ifndef INCLUDED_box2D_collision_B2SimplexCache
#include <box2D/collision/B2SimplexCache.h>
#endif
#ifndef INCLUDED_box2D_collision_B2SimplexVertex
#include <box2D/collision/B2SimplexVertex.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
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
namespace box2D{
namespace collision{

Void B2Simplex_obj::__construct()
{
HX_STACK_PUSH("B2Simplex::new","box2D/collision/B2Simplex.hx",32);
{
	HX_STACK_LINE(33)
	this->m_v1 = ::box2D::collision::B2SimplexVertex_obj::__new();
	HX_STACK_LINE(34)
	this->m_v2 = ::box2D::collision::B2SimplexVertex_obj::__new();
	HX_STACK_LINE(35)
	this->m_v3 = ::box2D::collision::B2SimplexVertex_obj::__new();
	HX_STACK_LINE(36)
	this->m_vertices = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(38)
	this->m_vertices[(int)0] = this->m_v1;
	HX_STACK_LINE(39)
	this->m_vertices[(int)1] = this->m_v2;
	HX_STACK_LINE(40)
	this->m_vertices[(int)2] = this->m_v3;
}
;
	return null();
}

B2Simplex_obj::~B2Simplex_obj() { }

Dynamic B2Simplex_obj::__CreateEmpty() { return  new B2Simplex_obj; }
hx::ObjectPtr< B2Simplex_obj > B2Simplex_obj::__new()
{  hx::ObjectPtr< B2Simplex_obj > result = new B2Simplex_obj();
	result->__construct();
	return result;}

Dynamic B2Simplex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Simplex_obj > result = new B2Simplex_obj();
	result->__construct();
	return result;}

Void B2Simplex_obj::solve3( ){
{
		HX_STACK_PUSH("B2Simplex::solve3","box2D/collision/B2Simplex.hx",263);
		HX_STACK_THIS(this);
		HX_STACK_LINE(264)
		::box2D::common::math::B2Vec2 w1 = this->m_v1->w;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(265)
		::box2D::common::math::B2Vec2 w2 = this->m_v2->w;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(266)
		::box2D::common::math::B2Vec2 w3 = this->m_v3->w;		HX_STACK_VAR(w3,"w3");
		HX_STACK_LINE(272)
		::box2D::common::math::B2Vec2 e12 = ::box2D::common::math::B2Math_obj::subtractVVPooled(w2,w1);		HX_STACK_VAR(e12,"e12");
		HX_STACK_LINE(273)
		Float w1e12 = ::box2D::common::math::B2Math_obj::dot(w1,e12);		HX_STACK_VAR(w1e12,"w1e12");
		HX_STACK_LINE(274)
		Float w2e12 = ::box2D::common::math::B2Math_obj::dot(w2,e12);		HX_STACK_VAR(w2e12,"w2e12");
		HX_STACK_LINE(275)
		Float d12_1 = w2e12;		HX_STACK_VAR(d12_1,"d12_1");
		HX_STACK_LINE(276)
		Float d12_2 = -(w1e12);		HX_STACK_VAR(d12_2,"d12_2");
		HX_STACK_LINE(282)
		::box2D::common::math::B2Vec2 e13 = ::box2D::common::math::B2Math_obj::subtractVVPooled(w3,w1);		HX_STACK_VAR(e13,"e13");
		HX_STACK_LINE(283)
		Float w1e13 = ::box2D::common::math::B2Math_obj::dot(w1,e13);		HX_STACK_VAR(w1e13,"w1e13");
		HX_STACK_LINE(284)
		Float w3e13 = ::box2D::common::math::B2Math_obj::dot(w3,e13);		HX_STACK_VAR(w3e13,"w3e13");
		HX_STACK_LINE(285)
		Float d13_1 = w3e13;		HX_STACK_VAR(d13_1,"d13_1");
		HX_STACK_LINE(286)
		Float d13_2 = -(w1e13);		HX_STACK_VAR(d13_2,"d13_2");
		HX_STACK_LINE(292)
		::box2D::common::math::B2Vec2 e23 = ::box2D::common::math::B2Math_obj::subtractVVPooled(w3,w2);		HX_STACK_VAR(e23,"e23");
		HX_STACK_LINE(293)
		Float w2e23 = ::box2D::common::math::B2Math_obj::dot(w2,e23);		HX_STACK_VAR(w2e23,"w2e23");
		HX_STACK_LINE(294)
		Float w3e23 = ::box2D::common::math::B2Math_obj::dot(w3,e23);		HX_STACK_VAR(w3e23,"w3e23");
		HX_STACK_LINE(295)
		Float d23_1 = w3e23;		HX_STACK_VAR(d23_1,"d23_1");
		HX_STACK_LINE(296)
		Float d23_2 = -(w2e23);		HX_STACK_VAR(d23_2,"d23_2");
		HX_STACK_LINE(299)
		Float n123 = ::box2D::common::math::B2Math_obj::crossVV(e12,e13);		HX_STACK_VAR(n123,"n123");
		HX_STACK_LINE(301)
		Float d123_1 = (n123 * ::box2D::common::math::B2Math_obj::crossVV(w2,w3));		HX_STACK_VAR(d123_1,"d123_1");
		HX_STACK_LINE(302)
		Float d123_2 = (n123 * ::box2D::common::math::B2Math_obj::crossVV(w3,w1));		HX_STACK_VAR(d123_2,"d123_2");
		HX_STACK_LINE(303)
		Float d123_3 = (n123 * ::box2D::common::math::B2Math_obj::crossVV(w1,w2));		HX_STACK_VAR(d123_3,"d123_3");
		HX_STACK_LINE(306)
		if (((bool((d12_2 <= 0.0)) && bool((d13_2 <= 0.0))))){
			HX_STACK_LINE(308)
			this->m_v1->a = 1.0;
			HX_STACK_LINE(309)
			this->m_count = (int)1;
			HX_STACK_LINE(310)
			return null();
		}
		HX_STACK_LINE(314)
		if (((bool((bool((d12_1 > 0.0)) && bool((d12_2 > 0.0)))) && bool((d123_3 <= 0.0))))){
			HX_STACK_LINE(316)
			Float inv_d12 = (Float(1.0) / Float(((d12_1 + d12_2))));		HX_STACK_VAR(inv_d12,"inv_d12");
			HX_STACK_LINE(317)
			this->m_v1->a = (d12_1 * inv_d12);
			HX_STACK_LINE(318)
			this->m_v2->a = (d12_2 * inv_d12);
			HX_STACK_LINE(319)
			this->m_count = (int)2;
			HX_STACK_LINE(320)
			return null();
		}
		HX_STACK_LINE(324)
		if (((bool((bool((d13_1 > 0.0)) && bool((d13_2 > 0.0)))) && bool((d123_2 <= 0.0))))){
			HX_STACK_LINE(326)
			Float inv_d13 = (Float(1.0) / Float(((d13_1 + d13_2))));		HX_STACK_VAR(inv_d13,"inv_d13");
			HX_STACK_LINE(327)
			this->m_v1->a = (d13_1 * inv_d13);
			HX_STACK_LINE(328)
			this->m_v3->a = (d13_2 * inv_d13);
			HX_STACK_LINE(329)
			this->m_count = (int)2;
			HX_STACK_LINE(330)
			this->m_v2->set(this->m_v3);
			HX_STACK_LINE(331)
			return null();
		}
		HX_STACK_LINE(335)
		if (((bool((d12_1 <= 0.0)) && bool((d23_2 <= 0.0))))){
			HX_STACK_LINE(337)
			this->m_v2->a = 1.0;
			HX_STACK_LINE(338)
			this->m_count = (int)1;
			HX_STACK_LINE(339)
			this->m_v1->set(this->m_v2);
			HX_STACK_LINE(340)
			return null();
		}
		HX_STACK_LINE(344)
		if (((bool((d13_1 <= 0.0)) && bool((d23_1 <= 0.0))))){
			HX_STACK_LINE(346)
			this->m_v3->a = 1.0;
			HX_STACK_LINE(347)
			this->m_count = (int)1;
			HX_STACK_LINE(348)
			this->m_v1->set(this->m_v3);
			HX_STACK_LINE(349)
			return null();
		}
		HX_STACK_LINE(353)
		if (((bool((bool((d23_1 > 0.0)) && bool((d23_2 > 0.0)))) && bool((d123_1 <= 0.0))))){
			HX_STACK_LINE(355)
			Float inv_d23 = (Float(1.0) / Float(((d23_1 + d23_2))));		HX_STACK_VAR(inv_d23,"inv_d23");
			HX_STACK_LINE(356)
			this->m_v2->a = (d23_1 * inv_d23);
			HX_STACK_LINE(357)
			this->m_v3->a = (d23_2 * inv_d23);
			HX_STACK_LINE(358)
			this->m_count = (int)2;
			HX_STACK_LINE(359)
			this->m_v1->set(this->m_v3);
			HX_STACK_LINE(360)
			return null();
		}
		HX_STACK_LINE(364)
		Float inv_d123 = (Float(1.0) / Float((((d123_1 + d123_2) + d123_3))));		HX_STACK_VAR(inv_d123,"inv_d123");
		HX_STACK_LINE(365)
		this->m_v1->a = (d123_1 * inv_d123);
		HX_STACK_LINE(366)
		this->m_v2->a = (d123_2 * inv_d123);
		HX_STACK_LINE(367)
		this->m_v3->a = (d123_3 * inv_d123);
		HX_STACK_LINE(368)
		this->m_count = (int)3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Simplex_obj,solve3,(void))

Void B2Simplex_obj::solve2( ){
{
		HX_STACK_PUSH("B2Simplex::solve2","box2D/collision/B2Simplex.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_LINE(230)
		::box2D::common::math::B2Vec2 w1 = this->m_v1->w;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(231)
		::box2D::common::math::B2Vec2 w2 = this->m_v2->w;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(232)
		::box2D::common::math::B2Vec2 e12 = ::box2D::common::math::B2Math_obj::subtractVVPooled(w2,w1);		HX_STACK_VAR(e12,"e12");
		HX_STACK_LINE(235)
		Float d12_2 = -((((w1->x * e12->x) + (w1->y * e12->y))));		HX_STACK_VAR(d12_2,"d12_2");
		HX_STACK_LINE(236)
		if (((d12_2 <= 0.0))){
			HX_STACK_LINE(239)
			this->m_v1->a = 1.0;
			HX_STACK_LINE(240)
			this->m_count = (int)1;
			HX_STACK_LINE(241)
			return null();
		}
		HX_STACK_LINE(245)
		Float d12_1 = ((w2->x * e12->x) + (w2->y * e12->y));		HX_STACK_VAR(d12_1,"d12_1");
		HX_STACK_LINE(246)
		if (((d12_1 <= 0.0))){
			HX_STACK_LINE(249)
			this->m_v2->a = 1.0;
			HX_STACK_LINE(250)
			this->m_count = (int)1;
			HX_STACK_LINE(251)
			this->m_v1->set(this->m_v2);
			HX_STACK_LINE(252)
			return null();
		}
		HX_STACK_LINE(256)
		Float inv_d12 = (Float(1.0) / Float(((d12_1 + d12_2))));		HX_STACK_VAR(inv_d12,"inv_d12");
		HX_STACK_LINE(257)
		this->m_v1->a = (d12_1 * inv_d12);
		HX_STACK_LINE(258)
		this->m_v2->a = (d12_2 * inv_d12);
		HX_STACK_LINE(259)
		this->m_count = (int)2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Simplex_obj,solve2,(void))

Float B2Simplex_obj::getMetric( ){
	HX_STACK_PUSH("B2Simplex::getMetric","box2D/collision/B2Simplex.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(184)
	::box2D::collision::B2Simplex _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(184)
	switch( (int)(_g->m_count)){
		case (int)0: {
			HX_STACK_LINE(187)
			::box2D::common::B2Settings_obj::b2Assert(false);
			HX_STACK_LINE(188)
			return 0.0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(190)
			return 0.0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(193)
			return ::box2D::common::math::B2Math_obj::subtractVVPooled(this->m_v1->w,this->m_v2->w)->length();
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(196)
			return ::box2D::common::math::B2Math_obj::crossVV(::box2D::common::math::B2Math_obj::subtractVVPooled(this->m_v2->w,this->m_v1->w),::box2D::common::math::B2Math_obj::subtractVVPooled(this->m_v3->w,this->m_v1->w));
		}
		;break;
		default: {
			HX_STACK_LINE(200)
			::box2D::common::B2Settings_obj::b2Assert(false);
			HX_STACK_LINE(201)
			return 0.0;
		}
	}
	HX_STACK_LINE(184)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Simplex_obj,getMetric,return )

Void B2Simplex_obj::getWitnessPoints( ::box2D::common::math::B2Vec2 pA,::box2D::common::math::B2Vec2 pB){
{
		HX_STACK_PUSH("B2Simplex::getWitnessPoints","box2D/collision/B2Simplex.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pA,"pA");
		HX_STACK_ARG(pB,"pB");
		HX_STACK_LINE(157)
		::box2D::collision::B2Simplex _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		switch( (int)(_g->m_count)){
			case (int)0: {
				HX_STACK_LINE(159)
				::box2D::common::B2Settings_obj::b2Assert(false);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(163)
				{
					HX_STACK_LINE(163)
					::box2D::common::math::B2Vec2 v = this->m_v1->wA;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(163)
					pA->x = v->x;
					HX_STACK_LINE(163)
					pA->y = v->y;
				}
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					::box2D::common::math::B2Vec2 v = this->m_v1->wB;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(164)
					pB->x = v->x;
					HX_STACK_LINE(164)
					pB->y = v->y;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(167)
				pA->x = ((this->m_v1->a * this->m_v1->wA->x) + (this->m_v2->a * this->m_v2->wA->x));
				HX_STACK_LINE(168)
				pA->y = ((this->m_v1->a * this->m_v1->wA->y) + (this->m_v2->a * this->m_v2->wA->y));
				HX_STACK_LINE(169)
				pB->x = ((this->m_v1->a * this->m_v1->wB->x) + (this->m_v2->a * this->m_v2->wB->x));
				HX_STACK_LINE(170)
				pB->y = ((this->m_v1->a * this->m_v1->wB->y) + (this->m_v2->a * this->m_v2->wB->y));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(173)
				pB->x = pA->x = (((this->m_v1->a * this->m_v1->wA->x) + (this->m_v2->a * this->m_v2->wA->x)) + (this->m_v3->a * this->m_v3->wA->x));
				HX_STACK_LINE(174)
				pB->y = pA->y = (((this->m_v1->a * this->m_v1->wA->y) + (this->m_v2->a * this->m_v2->wA->y)) + (this->m_v3->a * this->m_v3->wA->y));
			}
			;break;
			default: {
				HX_STACK_LINE(176)
				::box2D::common::B2Settings_obj::b2Assert(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Simplex_obj,getWitnessPoints,(void))

::box2D::common::math::B2Vec2 B2Simplex_obj::getClosestPoint( ){
	HX_STACK_PUSH("B2Simplex::getClosestPoint","box2D/collision/B2Simplex.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_LINE(137)
	::box2D::collision::B2Simplex _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(137)
	switch( (int)(_g->m_count)){
		case (int)0: {
			HX_STACK_LINE(140)
			::box2D::common::B2Settings_obj::b2Assert(false);
			HX_STACK_LINE(141)
			return ::box2D::common::math::B2Vec2_obj::getFromPool();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(142)
			return this->m_v1->w;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(145)
			::box2D::common::math::B2Vec2 toReturn = ::box2D::common::math::B2Vec2_obj::getFromPool();		HX_STACK_VAR(toReturn,"toReturn");
			HX_STACK_LINE(146)
			toReturn->x = ((this->m_v1->a * this->m_v1->w->x) + (this->m_v2->a * this->m_v2->w->x));
			HX_STACK_LINE(147)
			toReturn->y = ((this->m_v1->a * this->m_v1->w->y) + (this->m_v2->a * this->m_v2->w->y));
			HX_STACK_LINE(148)
			return toReturn;
		}
		;break;
		default: {
			HX_STACK_LINE(150)
			::box2D::common::B2Settings_obj::b2Assert(false);
			HX_STACK_LINE(151)
			return ::box2D::common::math::B2Vec2_obj::getFromPool();
		}
	}
	HX_STACK_LINE(137)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Simplex_obj,getClosestPoint,return )

::box2D::common::math::B2Vec2 B2Simplex_obj::getSearchDirection( ){
	HX_STACK_PUSH("B2Simplex::getSearchDirection","box2D/collision/B2Simplex.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_LINE(111)
	::box2D::collision::B2Simplex _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(111)
	switch( (int)(_g->m_count)){
		case (int)1: {
			HX_STACK_LINE(113)
			return this->m_v1->w->getNegativePooled();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(118)
			::box2D::common::math::B2Vec2 e12 = ::box2D::common::math::B2Math_obj::subtractVVPooled(this->m_v2->w,this->m_v1->w);		HX_STACK_VAR(e12,"e12");
			HX_STACK_LINE(119)
			Float sgn = ::box2D::common::math::B2Math_obj::crossVV(e12,this->m_v1->w->getNegative());		HX_STACK_VAR(sgn,"sgn");
			HX_STACK_LINE(120)
			if (((sgn > 0.0))){
				HX_STACK_LINE(121)
				return ::box2D::common::math::B2Math_obj::crossFV(1.0,e12,true);
			}
			else{
				HX_STACK_LINE(124)
				return ::box2D::common::math::B2Math_obj::crossVF(e12,1.0,true);
			}
		}
		;break;
		default: {
			HX_STACK_LINE(130)
			::box2D::common::B2Settings_obj::b2Assert(false);
			HX_STACK_LINE(131)
			return ::box2D::common::math::B2Vec2_obj::getFromPool();
		}
	}
	HX_STACK_LINE(111)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Simplex_obj,getSearchDirection,return )

Void B2Simplex_obj::writeCache( ::box2D::collision::B2SimplexCache cache){
{
		HX_STACK_PUSH("B2Simplex::writeCache","box2D/collision/B2Simplex.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cache,"cache");
		HX_STACK_LINE(99)
		cache->metric = this->getMetric();
		HX_STACK_LINE(100)
		cache->count = ::Std_obj::_int(this->m_count);
		HX_STACK_LINE(101)
		Array< ::Dynamic > vertices = this->m_vertices;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			while(((_g1 < _g))){
				HX_STACK_LINE(102)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(104)
				cache->indexA[i] = ::Std_obj::_int(vertices->__get(i).StaticCast< ::box2D::collision::B2SimplexVertex >()->indexA);
				HX_STACK_LINE(105)
				cache->indexB[i] = ::Std_obj::_int(vertices->__get(i).StaticCast< ::box2D::collision::B2SimplexVertex >()->indexB);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Simplex_obj,writeCache,(void))

Void B2Simplex_obj::readCache( ::box2D::collision::B2SimplexCache cache,::box2D::collision::B2DistanceProxy proxyA,::box2D::common::math::B2Transform transformA,::box2D::collision::B2DistanceProxy proxyB,::box2D::common::math::B2Transform transformB){
{
		HX_STACK_PUSH("B2Simplex::readCache","box2D/collision/B2Simplex.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cache,"cache");
		HX_STACK_ARG(proxyA,"proxyA");
		HX_STACK_ARG(transformA,"transformA");
		HX_STACK_ARG(proxyB,"proxyB");
		HX_STACK_ARG(transformB,"transformB");
		HX_STACK_LINE(47)
		::box2D::common::B2Settings_obj::b2Assert((bool(((int)0 <= cache->count)) && bool((cache->count <= (int)3))));
		HX_STACK_LINE(49)
		::box2D::common::math::B2Vec2 wALocal;		HX_STACK_VAR(wALocal,"wALocal");
		HX_STACK_LINE(50)
		::box2D::common::math::B2Vec2 wBLocal;		HX_STACK_VAR(wBLocal,"wBLocal");
		HX_STACK_LINE(53)
		this->m_count = cache->count;
		HX_STACK_LINE(54)
		Array< ::Dynamic > vertices = this->m_vertices;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(55)
		::box2D::collision::B2SimplexVertex v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while(((_g1 < _g))){
				HX_STACK_LINE(56)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(58)
				v = vertices->__get(i).StaticCast< ::box2D::collision::B2SimplexVertex >();
				HX_STACK_LINE(59)
				v->indexA = cache->indexA->__get(i);
				HX_STACK_LINE(60)
				v->indexB = cache->indexB->__get(i);
				HX_STACK_LINE(61)
				wALocal = proxyA->getVertex(v->indexA);
				HX_STACK_LINE(62)
				wBLocal = proxyB->getVertex(v->indexB);
				HX_STACK_LINE(63)
				v->wA = ::box2D::common::math::B2Math_obj::mulX(transformA,wALocal,true);
				HX_STACK_LINE(64)
				v->wB = ::box2D::common::math::B2Math_obj::mulX(transformB,wBLocal,true);
				HX_STACK_LINE(65)
				v->w = ::box2D::common::math::B2Math_obj::subtractVVPooled(v->wB,v->wA);
				HX_STACK_LINE(66)
				v->a = (int)0;
			}
		}
		HX_STACK_LINE(71)
		if (((this->m_count > (int)1))){
			HX_STACK_LINE(73)
			Float metric1 = cache->metric;		HX_STACK_VAR(metric1,"metric1");
			HX_STACK_LINE(74)
			Float metric2 = this->getMetric();		HX_STACK_VAR(metric2,"metric2");
			HX_STACK_LINE(75)
			if (((bool((bool((metric2 < (.5 * metric1))) || bool(((2.0 * metric1) < metric2)))) || bool((metric2 < 2.2250738585072014e-308))))){
				HX_STACK_LINE(76)
				this->m_count = (int)0;
			}
		}
		HX_STACK_LINE(83)
		if (((this->m_count == (int)0))){
			HX_STACK_LINE(85)
			v = vertices->__get((int)0).StaticCast< ::box2D::collision::B2SimplexVertex >();
			HX_STACK_LINE(86)
			v->indexA = (int)0;
			HX_STACK_LINE(87)
			v->indexB = (int)0;
			HX_STACK_LINE(88)
			wALocal = proxyA->getVertex((int)0);
			HX_STACK_LINE(89)
			wBLocal = proxyB->getVertex((int)0);
			HX_STACK_LINE(90)
			v->wA = ::box2D::common::math::B2Math_obj::mulX(transformA,wALocal,true);
			HX_STACK_LINE(91)
			v->wB = ::box2D::common::math::B2Math_obj::mulX(transformB,wBLocal,true);
			HX_STACK_LINE(92)
			v->w = ::box2D::common::math::B2Math_obj::subtractVVPooled(v->wB,v->wA);
			HX_STACK_LINE(93)
			this->m_count = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(B2Simplex_obj,readCache,(void))


B2Simplex_obj::B2Simplex_obj()
{
}

void B2Simplex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Simplex);
	HX_MARK_MEMBER_NAME(m_count,"m_count");
	HX_MARK_MEMBER_NAME(m_vertices,"m_vertices");
	HX_MARK_MEMBER_NAME(m_v3,"m_v3");
	HX_MARK_MEMBER_NAME(m_v2,"m_v2");
	HX_MARK_MEMBER_NAME(m_v1,"m_v1");
	HX_MARK_END_CLASS();
}

void B2Simplex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_count,"m_count");
	HX_VISIT_MEMBER_NAME(m_vertices,"m_vertices");
	HX_VISIT_MEMBER_NAME(m_v3,"m_v3");
	HX_VISIT_MEMBER_NAME(m_v2,"m_v2");
	HX_VISIT_MEMBER_NAME(m_v1,"m_v1");
}

Dynamic B2Simplex_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_v3") ) { return m_v3; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { return m_v2; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { return m_v1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"solve3") ) { return solve3_dyn(); }
		if (HX_FIELD_EQ(inName,"solve2") ) { return solve2_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_count") ) { return m_count; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMetric") ) { return getMetric_dyn(); }
		if (HX_FIELD_EQ(inName,"readCache") ) { return readCache_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_vertices") ) { return m_vertices; }
		if (HX_FIELD_EQ(inName,"writeCache") ) { return writeCache_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getClosestPoint") ) { return getClosestPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWitnessPoints") ) { return getWitnessPoints_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getSearchDirection") ) { return getSearchDirection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Simplex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_v3") ) { m_v3=inValue.Cast< ::box2D::collision::B2SimplexVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { m_v2=inValue.Cast< ::box2D::collision::B2SimplexVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { m_v1=inValue.Cast< ::box2D::collision::B2SimplexVertex >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_count") ) { m_count=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_vertices") ) { m_vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Simplex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_count"));
	outFields->push(HX_CSTRING("m_vertices"));
	outFields->push(HX_CSTRING("m_v3"));
	outFields->push(HX_CSTRING("m_v2"));
	outFields->push(HX_CSTRING("m_v1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_count"),
	HX_CSTRING("m_vertices"),
	HX_CSTRING("m_v3"),
	HX_CSTRING("m_v2"),
	HX_CSTRING("m_v1"),
	HX_CSTRING("solve3"),
	HX_CSTRING("solve2"),
	HX_CSTRING("getMetric"),
	HX_CSTRING("getWitnessPoints"),
	HX_CSTRING("getClosestPoint"),
	HX_CSTRING("getSearchDirection"),
	HX_CSTRING("writeCache"),
	HX_CSTRING("readCache"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Simplex_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Simplex_obj::__mClass,"__mClass");
};

Class B2Simplex_obj::__mClass;

void B2Simplex_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2Simplex"), hx::TCanCast< B2Simplex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Simplex_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
