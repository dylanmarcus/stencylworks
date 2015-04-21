#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2EdgeShape
#include <box2D/collision/shapes/B2EdgeShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
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
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2EdgeAndCircleContact
#include <box2D/dynamics/contacts/B2EdgeAndCircleContact.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void B2EdgeAndCircleContact_obj::__construct()
{
HX_STACK_PUSH("B2EdgeAndCircleContact::new","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",35);
{
	HX_STACK_LINE(35)
	super::__construct();
}
;
	return null();
}

B2EdgeAndCircleContact_obj::~B2EdgeAndCircleContact_obj() { }

Dynamic B2EdgeAndCircleContact_obj::__CreateEmpty() { return  new B2EdgeAndCircleContact_obj; }
hx::ObjectPtr< B2EdgeAndCircleContact_obj > B2EdgeAndCircleContact_obj::__new()
{  hx::ObjectPtr< B2EdgeAndCircleContact_obj > result = new B2EdgeAndCircleContact_obj();
	result->__construct();
	return result;}

Dynamic B2EdgeAndCircleContact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2EdgeAndCircleContact_obj > result = new B2EdgeAndCircleContact_obj();
	result->__construct();
	return result;}

Void B2EdgeAndCircleContact_obj::multiplyTransformVector( ::box2D::common::math::B2Transform T,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::multiplyTransformVector","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",324);
		HX_STACK_THIS(this);
		HX_STACK_ARG(T,"T");
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(325)
		out->x = (((T->R->col1->x * v->x) + (T->R->col2->x * v->y)) + T->position->x);
		HX_STACK_LINE(326)
		out->y = (((T->R->col1->y * v->x) + (T->R->col2->y * v->y)) + T->position->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2EdgeAndCircleContact_obj,multiplyTransformVector,(void))

Void B2EdgeAndCircleContact_obj::multiplyRotationVectorInverse( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::multiplyRotationVectorInverse","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",318);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(319)
		out->x = ((q->col1->x * v->x) + (q->col1->y * v->y));
		HX_STACK_LINE(320)
		out->y = ((q->col2->x * v->x) + (q->col2->y * v->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2EdgeAndCircleContact_obj,multiplyRotationVectorInverse,(void))

Void B2EdgeAndCircleContact_obj::multiplyRotationVector( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::multiplyRotationVector","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",312);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(313)
		out->x = ((q->col1->x * v->x) + (q->col2->x * v->y));
		HX_STACK_LINE(314)
		out->y = ((q->col1->y * v->x) + (q->col2->y * v->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2EdgeAndCircleContact_obj,multiplyRotationVector,(void))

Void B2EdgeAndCircleContact_obj::multiplyRotationsInverse( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Mat22 r,::box2D::common::math::B2Mat22 out){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::multiplyRotationsInverse","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",304);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(305)
		out->col1->x = ((q->col1->x * r->col1->x) + (q->col1->y * r->col1->y));
		HX_STACK_LINE(306)
		out->col1->y = ((q->col2->x * r->col1->x) + (q->col2->y * r->col1->y));
		HX_STACK_LINE(307)
		out->col2->x = ((q->col1->x * r->col2->x) + (q->col1->y * r->col2->y));
		HX_STACK_LINE(308)
		out->col2->y = ((q->col2->x * r->col2->x) + (q->col2->y * r->col2->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2EdgeAndCircleContact_obj,multiplyRotationsInverse,(void))

Void B2EdgeAndCircleContact_obj::multiplyTransformsInverse( ::box2D::common::math::B2Transform A,::box2D::common::math::B2Transform B,::box2D::common::math::B2Transform out){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::multiplyTransformsInverse","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",289);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_ARG(B,"B");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(291)
		this->multiplyRotationsInverse(A->R,B->R,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::mat);
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = B->position;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(294)
			_this->x = v->x;
			HX_STACK_LINE(294)
			_this->y = v->y;
		}
		HX_STACK_LINE(295)
		::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2->subtract(A->position);
		HX_STACK_LINE(296)
		this->multiplyRotationVectorInverse(A->R,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2,out->position);
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			::box2D::common::math::B2Vec2 _this = out->R->col1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::mat->col1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(298)
			_this->x = v->x;
			HX_STACK_LINE(298)
			_this->y = v->y;
		}
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			::box2D::common::math::B2Vec2 _this = out->R->col2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::mat->col2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(299)
			_this->x = v->x;
			HX_STACK_LINE(299)
			_this->y = v->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2EdgeAndCircleContact_obj,multiplyTransformsInverse,(void))

Void B2EdgeAndCircleContact_obj::b2CollideEdgeAndCircle( ::box2D::collision::B2Manifold manifold,::box2D::collision::shapes::B2EdgeShape edge,::box2D::common::math::B2Transform xf1,::box2D::collision::shapes::B2CircleShape circle,::box2D::common::math::B2Transform xf2){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::b2CollideEdgeAndCircle","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_ARG(manifold,"manifold");
		HX_STACK_ARG(edge,"edge");
		HX_STACK_ARG(xf1,"xf1");
		HX_STACK_ARG(circle,"circle");
		HX_STACK_ARG(xf2,"xf2");
		HX_STACK_LINE(89)
		manifold->m_pointCount = (int)0;
		HX_STACK_LINE(93)
		this->multiplyTransformVector(xf2,circle->m_p,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1);
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Math_obj::mulXT(xf1,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1,null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(94)
			_this->x = v->x;
			HX_STACK_LINE(94)
			_this->y = v->y;
		}
		HX_STACK_LINE(98)
		this->m_v0 = edge->m_v0;
		HX_STACK_LINE(99)
		this->m_v1 = edge->m_v1;
		HX_STACK_LINE(100)
		this->m_v2 = edge->m_v2;
		HX_STACK_LINE(101)
		this->m_v3 = edge->m_v3;
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::e;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(103)
			_this->x = (this->m_v2->x - this->m_v1->x);
			HX_STACK_LINE(103)
			_this->y = (this->m_v2->y - this->m_v1->y);
		}
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(107)
			_this->x = (this->m_v2->x - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x);
			HX_STACK_LINE(107)
			_this->y = (this->m_v2->y - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y);
		}
		HX_STACK_LINE(108)
		Float u = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::e,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1);		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(110)
			_this->x = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x - this->m_v1->x);
			HX_STACK_LINE(110)
			_this->y = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y - this->m_v1->y);
		}
		HX_STACK_LINE(111)
		Float v = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::e,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(114)
		Float radius = (edge->m_radius + circle->m_radius);		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(117)
		if (((v <= 0.0))){
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v1 = this->m_v1;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(122)
				_this->x = v1->x;
				HX_STACK_LINE(122)
				_this->y = v1->y;
			}
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(123)
				_this->x = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->x);
				HX_STACK_LINE(123)
				_this->y = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->y);
			}
			HX_STACK_LINE(124)
			Float dd = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1);		HX_STACK_VAR(dd,"dd");
			HX_STACK_LINE(126)
			if (((dd > (radius * radius)))){
				HX_STACK_LINE(127)
				return null();
			}
			HX_STACK_LINE(132)
			if ((edge->m_hasVertex0)){
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(138)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(138)
					_this->x = (this->m_v1->x - this->m_v0->x);
					HX_STACK_LINE(138)
					_this->y = (this->m_v1->y - this->m_v0->y);
				}
				HX_STACK_LINE(139)
				{
					HX_STACK_LINE(139)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(139)
					_this->x = (this->m_v1->x - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x);
					HX_STACK_LINE(139)
					_this->y = (this->m_v1->y - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y);
				}
				HX_STACK_LINE(140)
				Float u1 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2);		HX_STACK_VAR(u1,"u1");
				HX_STACK_LINE(143)
				if (((u1 > 0.0))){
					HX_STACK_LINE(144)
					return null();
				}
			}
			HX_STACK_LINE(159)
			manifold->m_pointCount = (int)1;
			HX_STACK_LINE(160)
			manifold->m_type = ::box2D::collision::B2Manifold_obj::e_circles;
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPlaneNormal;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(161)
				_this->x = 0.0;
				HX_STACK_LINE(161)
				_this->y = 0.0;
			}
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPoint;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v1 = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(162)
				_this->x = v1->x;
				HX_STACK_LINE(162)
				_this->y = v1->y;
			}
			HX_STACK_LINE(164)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->set_key((int)0);
			HX_STACK_LINE(165)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->indexA = (int)0;
			HX_STACK_LINE(166)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->indexB = (int)0;
			HX_STACK_LINE(167)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->typeA = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(168)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->typeB = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				::box2D::common::math::B2Vec2 _this = manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_localPoint;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v1 = circle->m_p;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(169)
				_this->x = v1->x;
				HX_STACK_LINE(169)
				_this->y = v1->y;
			}
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(175)
		if (((u <= 0.0))){
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v1 = this->m_v2;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(180)
				_this->x = v1->x;
				HX_STACK_LINE(180)
				_this->y = v1->y;
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(181)
				_this->x = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->x);
				HX_STACK_LINE(181)
				_this->y = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->y);
			}
			HX_STACK_LINE(182)
			Float dd = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1);		HX_STACK_VAR(dd,"dd");
			HX_STACK_LINE(184)
			if (((dd > (radius * radius)))){
				HX_STACK_LINE(185)
				return null();
			}
			HX_STACK_LINE(190)
			if ((edge->m_hasVertex3)){
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(197)
					_this->x = (this->m_v3->x - this->m_v2->x);
					HX_STACK_LINE(197)
					_this->y = (this->m_v3->y - this->m_v2->y);
				}
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(198)
					_this->x = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x - this->m_v2->x);
					HX_STACK_LINE(198)
					_this->y = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y - this->m_v2->y);
				}
				HX_STACK_LINE(199)
				Float v2 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2);		HX_STACK_VAR(v2,"v2");
				HX_STACK_LINE(202)
				if (((v2 > 0.0))){
					HX_STACK_LINE(203)
					return null();
				}
			}
			HX_STACK_LINE(219)
			manifold->m_pointCount = (int)1;
			HX_STACK_LINE(220)
			manifold->m_type = ::box2D::collision::B2Manifold_obj::e_circles;
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPlaneNormal;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(221)
				_this->x = 0.0;
				HX_STACK_LINE(221)
				_this->y = 0.0;
			}
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPoint;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v1 = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(222)
				_this->x = v1->x;
				HX_STACK_LINE(222)
				_this->y = v1->y;
			}
			HX_STACK_LINE(224)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->set_key((int)0);
			HX_STACK_LINE(225)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->indexA = (int)1;
			HX_STACK_LINE(226)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->indexB = (int)0;
			HX_STACK_LINE(227)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->typeA = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(228)
			manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->typeB = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				::box2D::common::math::B2Vec2 _this = manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_localPoint;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v1 = circle->m_p;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(229)
				_this->x = v1->x;
				HX_STACK_LINE(229)
				_this->y = v1->y;
			}
			HX_STACK_LINE(231)
			return null();
		}
		HX_STACK_LINE(237)
		Float den = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::e,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::e);		HX_STACK_VAR(den,"den");
		HX_STACK_LINE(238)
		::box2D::common::B2Settings_obj::b2Assert((den > 0.0));
		HX_STACK_LINE(243)
		::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->x = ((((this->m_v1->x * u) + (this->m_v2->x * v))) * ((Float(1.0) / Float(den))));
		HX_STACK_LINE(244)
		::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->y = ((((this->m_v1->y * u) + (this->m_v2->y * v))) * ((Float(1.0) / Float(den))));
		HX_STACK_LINE(245)
		::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1->x = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->x);
		HX_STACK_LINE(246)
		::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1->y = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y - ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::p->y);
		HX_STACK_LINE(247)
		Float dd = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1);		HX_STACK_VAR(dd,"dd");
		HX_STACK_LINE(249)
		if (((dd > (radius * radius)))){
			HX_STACK_LINE(250)
			return null();
		}
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(255)
			_this->x = -(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::e->y);
			HX_STACK_LINE(255)
			_this->y = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::e->x;
		}
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(256)
			_this->x = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->x - this->m_v1->x);
			HX_STACK_LINE(256)
			_this->y = (::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::q->y - this->m_v1->y);
		}
		HX_STACK_LINE(258)
		if (((::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1,::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp2) < 0.0))){
			HX_STACK_LINE(260)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(260)
			_this->x = -(_this->x);
			HX_STACK_LINE(260)
			_this->y = -(_this->y);
		}
		HX_STACK_LINE(263)
		::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1->normalize();
		HX_STACK_LINE(275)
		manifold->m_pointCount = (int)1;
		HX_STACK_LINE(276)
		manifold->m_type = ::box2D::collision::B2Manifold_obj::e_faceA;
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			::box2D::common::math::B2Vec2 _this = manifold->m_localPlaneNormal;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v1 = ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::temp1;		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(277)
			_this->x = v1->x;
			HX_STACK_LINE(277)
			_this->y = v1->y;
		}
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			::box2D::common::math::B2Vec2 _this = manifold->m_localPoint;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v1 = this->m_v1;		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(278)
			_this->x = v1->x;
			HX_STACK_LINE(278)
			_this->y = v1->y;
		}
		HX_STACK_LINE(280)
		manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->set_key((int)0);
		HX_STACK_LINE(281)
		manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->indexA = (int)0;
		HX_STACK_LINE(282)
		manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->indexB = (int)0;
		HX_STACK_LINE(283)
		manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->typeA = ::box2D::collision::B2ContactID_obj::FACE;
		HX_STACK_LINE(284)
		manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_id->typeB = ::box2D::collision::B2ContactID_obj::VERTEX;
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			::box2D::common::math::B2Vec2 _this = manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_localPoint;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v1 = circle->m_p;		HX_STACK_VAR(v1,"v1");
			HX_STACK_LINE(285)
			_this->x = v1->x;
			HX_STACK_LINE(285)
			_this->y = v1->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(B2EdgeAndCircleContact_obj,b2CollideEdgeAndCircle,(void))

Void B2EdgeAndCircleContact_obj::evaluate( ){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::evaluate","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(72)
		::box2D::dynamics::B2Body bA = this->m_fixtureA->getBody();		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(73)
		::box2D::dynamics::B2Body bB = this->m_fixtureB->getBody();		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(75)
		this->b2CollideEdgeAndCircle(this->m_manifold,hx::TCast< box2D::collision::shapes::B2EdgeShape >::cast(this->m_fixtureA->getShape()),bA->m_xf,hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(this->m_fixtureB->getShape()),bB->m_xf);
	}
return null();
}


Void B2EdgeAndCircleContact_obj::reset( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::reset","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fixtureA,"fixtureA");
		HX_STACK_ARG(fixtureB,"fixtureB");
		HX_STACK_LINE(62)
		this->super::reset(fixtureA,fixtureB);
	}
return null();
}


::box2D::common::math::B2Transform B2EdgeAndCircleContact_obj::m_xf;

::box2D::common::math::B2Vec2 B2EdgeAndCircleContact_obj::q;

::box2D::common::math::B2Vec2 B2EdgeAndCircleContact_obj::p;

::box2D::common::math::B2Vec2 B2EdgeAndCircleContact_obj::e;

::box2D::common::math::B2Vec2 B2EdgeAndCircleContact_obj::temp1;

::box2D::common::math::B2Vec2 B2EdgeAndCircleContact_obj::temp2;

::box2D::common::math::B2Vec2 B2EdgeAndCircleContact_obj::m_centroidB;

::box2D::common::math::B2Mat22 B2EdgeAndCircleContact_obj::mat;

::box2D::dynamics::contacts::B2Contact B2EdgeAndCircleContact_obj::create( Dynamic allocator){
	HX_STACK_PUSH("B2EdgeAndCircleContact::create","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",53);
	HX_STACK_ARG(allocator,"allocator");
	HX_STACK_LINE(53)
	return ::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2EdgeAndCircleContact_obj,create,return )

Void B2EdgeAndCircleContact_obj::destroy( ::box2D::dynamics::contacts::B2Contact contact,Dynamic allocator){
{
		HX_STACK_PUSH("B2EdgeAndCircleContact::destroy","box2D/dynamics/contacts/B2EdgeAndCircleContact.hx",58);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_ARG(allocator,"allocator");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2EdgeAndCircleContact_obj,destroy,(void))


B2EdgeAndCircleContact_obj::B2EdgeAndCircleContact_obj()
{
}

void B2EdgeAndCircleContact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2EdgeAndCircleContact);
	HX_MARK_MEMBER_NAME(m_v3,"m_v3");
	HX_MARK_MEMBER_NAME(m_v2,"m_v2");
	HX_MARK_MEMBER_NAME(m_v1,"m_v1");
	HX_MARK_MEMBER_NAME(m_v0,"m_v0");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2EdgeAndCircleContact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_v3,"m_v3");
	HX_VISIT_MEMBER_NAME(m_v2,"m_v2");
	HX_VISIT_MEMBER_NAME(m_v1,"m_v1");
	HX_VISIT_MEMBER_NAME(m_v0,"m_v0");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2EdgeAndCircleContact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { return q; }
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		if (HX_FIELD_EQ(inName,"e") ) { return e; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { return mat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_xf") ) { return m_xf; }
		if (HX_FIELD_EQ(inName,"m_v3") ) { return m_v3; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { return m_v2; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { return m_v1; }
		if (HX_FIELD_EQ(inName,"m_v0") ) { return m_v0; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"temp1") ) { return temp1; }
		if (HX_FIELD_EQ(inName,"temp2") ) { return temp2; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return evaluate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_centroidB") ) { return m_centroidB; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"multiplyRotationVector") ) { return multiplyRotationVector_dyn(); }
		if (HX_FIELD_EQ(inName,"b2CollideEdgeAndCircle") ) { return b2CollideEdgeAndCircle_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"multiplyTransformVector") ) { return multiplyTransformVector_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"multiplyRotationsInverse") ) { return multiplyRotationsInverse_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"multiplyTransformsInverse") ) { return multiplyTransformsInverse_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"multiplyRotationVectorInverse") ) { return multiplyRotationVectorInverse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2EdgeAndCircleContact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e") ) { e=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { mat=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_xf") ) { m_xf=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v3") ) { m_v3=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { m_v2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { m_v1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v0") ) { m_v0=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"temp1") ) { temp1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"temp2") ) { temp2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_centroidB") ) { m_centroidB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2EdgeAndCircleContact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_v3"));
	outFields->push(HX_CSTRING("m_v2"));
	outFields->push(HX_CSTRING("m_v1"));
	outFields->push(HX_CSTRING("m_v0"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("m_xf"),
	HX_CSTRING("q"),
	HX_CSTRING("p"),
	HX_CSTRING("e"),
	HX_CSTRING("temp1"),
	HX_CSTRING("temp2"),
	HX_CSTRING("m_centroidB"),
	HX_CSTRING("mat"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("multiplyTransformVector"),
	HX_CSTRING("multiplyRotationVectorInverse"),
	HX_CSTRING("multiplyRotationVector"),
	HX_CSTRING("multiplyRotationsInverse"),
	HX_CSTRING("multiplyTransformsInverse"),
	HX_CSTRING("b2CollideEdgeAndCircle"),
	HX_CSTRING("evaluate"),
	HX_CSTRING("reset"),
	HX_CSTRING("m_v3"),
	HX_CSTRING("m_v2"),
	HX_CSTRING("m_v1"),
	HX_CSTRING("m_v0"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::m_xf,"m_xf");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::q,"q");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::p,"p");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::e,"e");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::temp1,"temp1");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::temp2,"temp2");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::m_centroidB,"m_centroidB");
	HX_MARK_MEMBER_NAME(B2EdgeAndCircleContact_obj::mat,"mat");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::m_xf,"m_xf");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::q,"q");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::p,"p");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::e,"e");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::temp1,"temp1");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::temp2,"temp2");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::m_centroidB,"m_centroidB");
	HX_VISIT_MEMBER_NAME(B2EdgeAndCircleContact_obj::mat,"mat");
};

Class B2EdgeAndCircleContact_obj::__mClass;

void B2EdgeAndCircleContact_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.B2EdgeAndCircleContact"), hx::TCanCast< B2EdgeAndCircleContact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2EdgeAndCircleContact_obj::__boot()
{
	m_xf= ::box2D::common::math::B2Transform_obj::__new(null(),null());
	q= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	p= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	e= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	temp1= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	temp2= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_centroidB= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	mat= ::box2D::common::math::B2Mat22_obj::__new();
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
