#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2EdgeShape
#include <box2D/collision/shapes/B2EdgeShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
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
#ifndef INCLUDED_box2D_dynamics_contacts_B2PolyAndEdgeContact
#include <box2D/dynamics/contacts/B2PolyAndEdgeContact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_ClipVertex
#include <box2D/dynamics/contacts/ClipVertex.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_EPAxis
#include <box2D/dynamics/contacts/EPAxis.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_ReferenceFace
#include <box2D/dynamics/contacts/ReferenceFace.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_TempPolygon
#include <box2D/dynamics/contacts/TempPolygon.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_Type
#include <box2D/dynamics/contacts/Type.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void B2PolyAndEdgeContact_obj::__construct()
{
HX_STACK_PUSH("B2PolyAndEdgeContact::new","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",35);
{
	HX_STACK_LINE(35)
	super::__construct();
}
;
	return null();
}

B2PolyAndEdgeContact_obj::~B2PolyAndEdgeContact_obj() { }

Dynamic B2PolyAndEdgeContact_obj::__CreateEmpty() { return  new B2PolyAndEdgeContact_obj; }
hx::ObjectPtr< B2PolyAndEdgeContact_obj > B2PolyAndEdgeContact_obj::__new()
{  hx::ObjectPtr< B2PolyAndEdgeContact_obj > result = new B2PolyAndEdgeContact_obj();
	result->__construct();
	return result;}

Dynamic B2PolyAndEdgeContact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2PolyAndEdgeContact_obj > result = new B2PolyAndEdgeContact_obj();
	result->__construct();
	return result;}

Void B2PolyAndEdgeContact_obj::multiplyTransformVector( ::box2D::common::math::B2Transform T,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::multiplyTransformVector","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",825);
		HX_STACK_THIS(this);
		HX_STACK_ARG(T,"T");
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(826)
		out->x = (((T->R->col1->x * v->x) + (T->R->col2->x * v->y)) + T->position->x);
		HX_STACK_LINE(827)
		out->y = (((T->R->col1->y * v->x) + (T->R->col2->y * v->y)) + T->position->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2PolyAndEdgeContact_obj,multiplyTransformVector,(void))

Void B2PolyAndEdgeContact_obj::multiplyRotationVectorInverse( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::multiplyRotationVectorInverse","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",819);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(820)
		out->x = ((q->col1->x * v->x) + (q->col1->y * v->y));
		HX_STACK_LINE(821)
		out->y = ((q->col2->x * v->x) + (q->col2->y * v->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2PolyAndEdgeContact_obj,multiplyRotationVectorInverse,(void))

Void B2PolyAndEdgeContact_obj::multiplyRotationVector( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::multiplyRotationVector","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",813);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(814)
		out->x = ((q->col1->x * v->x) + (q->col2->x * v->y));
		HX_STACK_LINE(815)
		out->y = ((q->col1->y * v->x) + (q->col2->y * v->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2PolyAndEdgeContact_obj,multiplyRotationVector,(void))

Void B2PolyAndEdgeContact_obj::multiplyRotationsInverse( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Mat22 r,::box2D::common::math::B2Mat22 out){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::multiplyRotationsInverse","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",805);
		HX_STACK_THIS(this);
		HX_STACK_ARG(q,"q");
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(806)
		out->col1->x = ((q->col1->x * r->col1->x) + (q->col1->y * r->col1->y));
		HX_STACK_LINE(807)
		out->col1->y = ((q->col2->x * r->col1->x) + (q->col2->y * r->col1->y));
		HX_STACK_LINE(808)
		out->col2->x = ((q->col1->x * r->col2->x) + (q->col1->y * r->col2->y));
		HX_STACK_LINE(809)
		out->col2->y = ((q->col2->x * r->col2->x) + (q->col2->y * r->col2->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2PolyAndEdgeContact_obj,multiplyRotationsInverse,(void))

Void B2PolyAndEdgeContact_obj::multiplyTransformsInverse( ::box2D::common::math::B2Transform A,::box2D::common::math::B2Transform B,::box2D::common::math::B2Transform out){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::multiplyTransformsInverse","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",791);
		HX_STACK_THIS(this);
		HX_STACK_ARG(A,"A");
		HX_STACK_ARG(B,"B");
		HX_STACK_ARG(out,"out");
		HX_STACK_LINE(793)
		this->multiplyRotationsInverse(A->R,B->R,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::mat);
		HX_STACK_LINE(796)
		{
			HX_STACK_LINE(796)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = B->position;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(796)
			_this->x = v->x;
			HX_STACK_LINE(796)
			_this->y = v->y;
		}
		HX_STACK_LINE(797)
		::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp2->subtract(A->position);
		HX_STACK_LINE(798)
		this->multiplyRotationVectorInverse(A->R,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp2,out->position);
		HX_STACK_LINE(800)
		{
			HX_STACK_LINE(800)
			::box2D::common::math::B2Vec2 _this = out->R->col1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::mat->col1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(800)
			_this->x = v->x;
			HX_STACK_LINE(800)
			_this->y = v->y;
		}
		HX_STACK_LINE(801)
		{
			HX_STACK_LINE(801)
			::box2D::common::math::B2Vec2 _this = out->R->col2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::mat->col2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(801)
			_this->x = v->x;
			HX_STACK_LINE(801)
			_this->y = v->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2PolyAndEdgeContact_obj,multiplyTransformsInverse,(void))

Void B2PolyAndEdgeContact_obj::computePolygonSeparation( ::box2D::dynamics::contacts::EPAxis axis){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::computePolygonSeparation","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",669);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_LINE(670)
		axis->type = ::box2D::dynamics::contacts::Type_obj::UNKNOWN;
		HX_STACK_LINE(671)
		axis->index = (int)-1;
		HX_STACK_LINE(672)
		axis->separation = -(1.7976931348623158e+308);
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(674)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::perp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(674)
			_this->x = -(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal->y);
			HX_STACK_LINE(674)
			_this->y = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal->x;
		}
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(676)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(676)
			while(((_g1 < _g))){
				HX_STACK_LINE(676)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(678)
				{
					HX_STACK_LINE(678)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::n;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->normals->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(678)
					_this->x = v->x;
					HX_STACK_LINE(678)
					_this->y = v->y;
				}
				HX_STACK_LINE(679)
				{
					HX_STACK_LINE(679)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::n;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(679)
					_this->x = -(_this->x);
					HX_STACK_LINE(679)
					_this->y = -(_this->y);
				}
				HX_STACK_LINE(681)
				{
					HX_STACK_LINE(681)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(681)
					_this->x = v->x;
					HX_STACK_LINE(681)
					_this->y = v->y;
				}
				HX_STACK_LINE(682)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(this->m_v1);
				HX_STACK_LINE(683)
				Float s1 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::n,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(685)
				{
					HX_STACK_LINE(685)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(685)
					_this->x = v->x;
					HX_STACK_LINE(685)
					_this->y = v->y;
				}
				HX_STACK_LINE(686)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(this->m_v2);
				HX_STACK_LINE(687)
				Float s2 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::n,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);		HX_STACK_VAR(s2,"s2");
				HX_STACK_LINE(689)
				Float s = ::Math_obj::min(s1,s2);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(691)
				if (((s > this->m_radius))){
					HX_STACK_LINE(694)
					axis->type = ::box2D::dynamics::contacts::Type_obj::EDGE_B;
					HX_STACK_LINE(695)
					axis->index = i;
					HX_STACK_LINE(696)
					axis->separation = s;
					HX_STACK_LINE(704)
					return null();
				}
				HX_STACK_LINE(708)
				if (((::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::n,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::perp) >= 0.0))){
					HX_STACK_LINE(710)
					{
						HX_STACK_LINE(710)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::n;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(710)
						_this->x = v->x;
						HX_STACK_LINE(710)
						_this->y = v->y;
					}
					HX_STACK_LINE(711)
					::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit);
					HX_STACK_LINE(713)
					if (((::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal) < -(::box2D::common::B2Settings_obj::b2_angularSlop)))){
						HX_STACK_LINE(714)
						continue;
					}
				}
				else{
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(721)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::n;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(721)
						_this->x = v->x;
						HX_STACK_LINE(721)
						_this->y = v->y;
					}
					HX_STACK_LINE(722)
					::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit);
					HX_STACK_LINE(724)
					if (((::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal) < -(::box2D::common::B2Settings_obj::b2_angularSlop)))){
						HX_STACK_LINE(725)
						continue;
					}
				}
				HX_STACK_LINE(730)
				if (((s > axis->separation))){
					HX_STACK_LINE(732)
					axis->type = ::box2D::dynamics::contacts::Type_obj::EDGE_B;
					HX_STACK_LINE(733)
					axis->index = i;
					HX_STACK_LINE(734)
					axis->separation = s;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2PolyAndEdgeContact_obj,computePolygonSeparation,(void))

Void B2PolyAndEdgeContact_obj::computeEdgeSeparation( ::box2D::dynamics::contacts::EPAxis axis){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::computeEdgeSeparation","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",649);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_LINE(650)
		axis->type = ::box2D::dynamics::contacts::Type_obj::EDGE_A;
		HX_STACK_LINE(651)
		axis->index = (  ((this->m_front)) ? int((int)0) : int((int)1) );
		HX_STACK_LINE(652)
		axis->separation = 1.7976931348623158e+308;
		HX_STACK_LINE(654)
		{
			HX_STACK_LINE(654)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->count;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(654)
			while(((_g1 < _g))){
				HX_STACK_LINE(654)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(656)
				{
					HX_STACK_LINE(656)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(656)
					_this->x = v->x;
					HX_STACK_LINE(656)
					_this->y = v->y;
				}
				HX_STACK_LINE(657)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(this->m_v1);
				HX_STACK_LINE(659)
				Float s = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(661)
				if (((s < axis->separation))){
					HX_STACK_LINE(662)
					axis->separation = s;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2PolyAndEdgeContact_obj,computeEdgeSeparation,(void))

Void B2PolyAndEdgeContact_obj::b2CollidePolyAndEdge( ::box2D::collision::B2Manifold manifold,::box2D::collision::shapes::B2EdgeShape edgeA,::box2D::common::math::B2Transform xfA,::box2D::collision::shapes::B2PolygonShape polygonB,::box2D::common::math::B2Transform xfB){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::b2CollidePolyAndEdge","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_ARG(manifold,"manifold");
		HX_STACK_ARG(edgeA,"edgeA");
		HX_STACK_ARG(xfA,"xfA");
		HX_STACK_ARG(polygonB,"polygonB");
		HX_STACK_ARG(xfB,"xfB");
		HX_STACK_LINE(123)
		this->multiplyTransformsInverse(xfA,xfB,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_xf);
		HX_STACK_LINE(124)
		this->multiplyTransformVector(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_xf,polygonB->m_centroid,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_centroidB;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(125)
			_this->x = v->x;
			HX_STACK_LINE(125)
			_this->y = v->y;
		}
		HX_STACK_LINE(127)
		this->m_v0 = edgeA->m_v0;
		HX_STACK_LINE(128)
		this->m_v1 = edgeA->m_v1;
		HX_STACK_LINE(129)
		this->m_v2 = edgeA->m_v2;
		HX_STACK_LINE(130)
		this->m_v3 = edgeA->m_v3;
		HX_STACK_LINE(135)
		bool hasVertex0 = edgeA->m_hasVertex0;		HX_STACK_VAR(hasVertex0,"hasVertex0");
		HX_STACK_LINE(136)
		bool hasVertex3 = edgeA->m_hasVertex3;		HX_STACK_VAR(hasVertex3,"hasVertex3");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_v2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(142)
			_this->x = v->x;
			HX_STACK_LINE(142)
			_this->y = v->y;
		}
		HX_STACK_LINE(143)
		::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge1->subtract(this->m_v1);
		HX_STACK_LINE(144)
		::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge1->normalize();
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(145)
			_this->x = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge1->y;
			HX_STACK_LINE(145)
			_this->y = -(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge1->x);
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_centroidB;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(151)
			_this->x = v->x;
			HX_STACK_LINE(151)
			_this->y = v->y;
		}
		HX_STACK_LINE(152)
		::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(this->m_v1);
		HX_STACK_LINE(154)
		Float offset1 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);		HX_STACK_VAR(offset1,"offset1");
		HX_STACK_LINE(155)
		Float offset0 = 0.0;		HX_STACK_VAR(offset0,"offset0");
		HX_STACK_LINE(156)
		Float offset2 = 0.0;		HX_STACK_VAR(offset2,"offset2");
		HX_STACK_LINE(157)
		bool convex1 = false;		HX_STACK_VAR(convex1,"convex1");
		HX_STACK_LINE(158)
		bool convex2 = false;		HX_STACK_VAR(convex2,"convex2");
		HX_STACK_LINE(175)
		if ((hasVertex0)){
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge0;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = this->m_v1;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(177)
				_this->x = v->x;
				HX_STACK_LINE(177)
				_this->y = v->y;
			}
			HX_STACK_LINE(178)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge0->subtract(this->m_v0);
			HX_STACK_LINE(179)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge0->normalize();
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(181)
				_this->x = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge0->y;
				HX_STACK_LINE(181)
				_this->y = -(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge0->x);
			}
			HX_STACK_LINE(182)
			convex1 = (::box2D::common::math::B2Math_obj::crossVV(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge0,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge1) >= 0.0);
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_centroidB;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(184)
				_this->x = v->x;
				HX_STACK_LINE(184)
				_this->y = v->y;
			}
			HX_STACK_LINE(185)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(this->m_v0);
			HX_STACK_LINE(186)
			offset0 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);
		}
		HX_STACK_LINE(202)
		if ((hasVertex3)){
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge2;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = this->m_v3;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(204)
				_this->x = v->x;
				HX_STACK_LINE(204)
				_this->y = v->y;
			}
			HX_STACK_LINE(205)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge2->subtract(this->m_v2);
			HX_STACK_LINE(206)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge2->normalize();
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(208)
				_this->x = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge2->y;
				HX_STACK_LINE(208)
				_this->y = -(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge2->x);
			}
			HX_STACK_LINE(209)
			convex2 = (::box2D::common::math::B2Math_obj::crossVV(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge1,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edge2) > 0.0);
			HX_STACK_LINE(211)
			{
				HX_STACK_LINE(211)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_centroidB;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(211)
				_this->x = v->x;
				HX_STACK_LINE(211)
				_this->y = v->y;
			}
			HX_STACK_LINE(212)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(this->m_v2);
			HX_STACK_LINE(213)
			offset2 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);
		}
		HX_STACK_LINE(219)
		if (((bool(hasVertex0) && bool(hasVertex3)))){
			HX_STACK_LINE(220)
			if (((bool(convex1) && bool(convex2)))){
				HX_STACK_LINE(223)
				this->m_front = (bool((bool((offset0 >= 0.0)) || bool((offset1 >= 0.0)))) || bool((offset2 >= 0.0)));
				HX_STACK_LINE(225)
				if ((this->m_front)){
					HX_STACK_LINE(227)
					{
						HX_STACK_LINE(227)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(227)
						_this->x = v->x;
						HX_STACK_LINE(227)
						_this->y = v->y;
					}
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(228)
						_this->x = v->x;
						HX_STACK_LINE(228)
						_this->y = v->y;
					}
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(229)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(229)
						_this->x = v->x;
						HX_STACK_LINE(229)
						_this->y = v->y;
					}
				}
				else{
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(234)
						_this->x = v->x;
						HX_STACK_LINE(234)
						_this->y = v->y;
					}
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(235)
						_this->x = -(_this->x);
						HX_STACK_LINE(235)
						_this->y = -(_this->y);
					}
					HX_STACK_LINE(236)
					{
						HX_STACK_LINE(236)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(236)
						_this->x = v->x;
						HX_STACK_LINE(236)
						_this->y = v->y;
					}
					HX_STACK_LINE(237)
					{
						HX_STACK_LINE(237)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(237)
						_this->x = -(_this->x);
						HX_STACK_LINE(237)
						_this->y = -(_this->y);
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
						::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(238)
						_this->x = v->x;
						HX_STACK_LINE(238)
						_this->y = v->y;
					}
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(239)
						_this->x = -(_this->x);
						HX_STACK_LINE(239)
						_this->y = -(_this->y);
					}
				}
			}
			else{
				HX_STACK_LINE(243)
				if ((convex1)){
					HX_STACK_LINE(245)
					this->m_front = (bool((offset0 >= 0.0)) || bool((bool((offset1 >= 0.0)) && bool((offset2 >= 0.0)))));
					HX_STACK_LINE(247)
					if ((this->m_front)){
						HX_STACK_LINE(249)
						{
							HX_STACK_LINE(249)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(249)
							_this->x = v->x;
							HX_STACK_LINE(249)
							_this->y = v->y;
						}
						HX_STACK_LINE(250)
						{
							HX_STACK_LINE(250)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(250)
							_this->x = v->x;
							HX_STACK_LINE(250)
							_this->y = v->y;
						}
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(251)
							_this->x = v->x;
							HX_STACK_LINE(251)
							_this->y = v->y;
						}
					}
					else{
						HX_STACK_LINE(256)
						{
							HX_STACK_LINE(256)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(256)
							_this->x = v->x;
							HX_STACK_LINE(256)
							_this->y = v->y;
						}
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(257)
							_this->x = -(_this->x);
							HX_STACK_LINE(257)
							_this->y = -(_this->y);
						}
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(258)
							_this->x = v->x;
							HX_STACK_LINE(258)
							_this->y = v->y;
						}
						HX_STACK_LINE(259)
						{
							HX_STACK_LINE(259)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(259)
							_this->x = -(_this->x);
							HX_STACK_LINE(259)
							_this->y = -(_this->y);
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(260)
							_this->x = v->x;
							HX_STACK_LINE(260)
							_this->y = v->y;
						}
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(261)
							_this->x = -(_this->x);
							HX_STACK_LINE(261)
							_this->y = -(_this->y);
						}
					}
				}
				else{
					HX_STACK_LINE(265)
					if ((convex2)){
						HX_STACK_LINE(267)
						this->m_front = (bool((offset2 >= 0.0)) || bool((bool((offset0 >= 0.0)) && bool((offset1 >= 0.0)))));
						HX_STACK_LINE(269)
						if ((this->m_front)){
							HX_STACK_LINE(271)
							{
								HX_STACK_LINE(271)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(271)
								_this->x = v->x;
								HX_STACK_LINE(271)
								_this->y = v->y;
							}
							HX_STACK_LINE(272)
							{
								HX_STACK_LINE(272)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(272)
								_this->x = v->x;
								HX_STACK_LINE(272)
								_this->y = v->y;
							}
							HX_STACK_LINE(273)
							{
								HX_STACK_LINE(273)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(273)
								_this->x = v->x;
								HX_STACK_LINE(273)
								_this->y = v->y;
							}
						}
						else{
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(278)
								_this->x = v->x;
								HX_STACK_LINE(278)
								_this->y = v->y;
							}
							HX_STACK_LINE(279)
							{
								HX_STACK_LINE(279)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(279)
								_this->x = -(_this->x);
								HX_STACK_LINE(279)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(280)
							{
								HX_STACK_LINE(280)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(280)
								_this->x = v->x;
								HX_STACK_LINE(280)
								_this->y = v->y;
							}
							HX_STACK_LINE(281)
							{
								HX_STACK_LINE(281)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(281)
								_this->x = -(_this->x);
								HX_STACK_LINE(281)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(282)
							{
								HX_STACK_LINE(282)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(282)
								_this->x = v->x;
								HX_STACK_LINE(282)
								_this->y = v->y;
							}
							HX_STACK_LINE(283)
							{
								HX_STACK_LINE(283)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(283)
								_this->x = -(_this->x);
								HX_STACK_LINE(283)
								_this->y = -(_this->y);
							}
						}
					}
					else{
						HX_STACK_LINE(289)
						this->m_front = (bool((bool((offset0 >= 0.0)) && bool((offset1 >= 0.0)))) && bool((offset2 >= 0.0)));
						HX_STACK_LINE(291)
						if ((this->m_front)){
							HX_STACK_LINE(293)
							{
								HX_STACK_LINE(293)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(293)
								_this->x = v->x;
								HX_STACK_LINE(293)
								_this->y = v->y;
							}
							HX_STACK_LINE(294)
							{
								HX_STACK_LINE(294)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(294)
								_this->x = v->x;
								HX_STACK_LINE(294)
								_this->y = v->y;
							}
							HX_STACK_LINE(295)
							{
								HX_STACK_LINE(295)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(295)
								_this->x = v->x;
								HX_STACK_LINE(295)
								_this->y = v->y;
							}
						}
						else{
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(300)
								_this->x = v->x;
								HX_STACK_LINE(300)
								_this->y = v->y;
							}
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(301)
								_this->x = -(_this->x);
								HX_STACK_LINE(301)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(302)
							{
								HX_STACK_LINE(302)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(302)
								_this->x = v->x;
								HX_STACK_LINE(302)
								_this->y = v->y;
							}
							HX_STACK_LINE(303)
							{
								HX_STACK_LINE(303)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(303)
								_this->x = -(_this->x);
								HX_STACK_LINE(303)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(304)
							{
								HX_STACK_LINE(304)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(304)
								_this->x = v->x;
								HX_STACK_LINE(304)
								_this->y = v->y;
							}
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(305)
								_this->x = -(_this->x);
								HX_STACK_LINE(305)
								_this->y = -(_this->y);
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(310)
			if ((hasVertex0)){
				HX_STACK_LINE(311)
				if ((convex1)){
					HX_STACK_LINE(314)
					this->m_front = (bool((offset0 >= 0.0)) || bool((offset1 >= 0.0)));
					HX_STACK_LINE(316)
					if ((this->m_front)){
						HX_STACK_LINE(318)
						{
							HX_STACK_LINE(318)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(318)
							_this->x = v->x;
							HX_STACK_LINE(318)
							_this->y = v->y;
						}
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(319)
							_this->x = v->x;
							HX_STACK_LINE(319)
							_this->y = v->y;
						}
						HX_STACK_LINE(320)
						{
							HX_STACK_LINE(320)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(320)
							_this->x = v->x;
							HX_STACK_LINE(320)
							_this->y = v->y;
						}
						HX_STACK_LINE(321)
						{
							HX_STACK_LINE(321)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(321)
							_this->x = -(_this->x);
							HX_STACK_LINE(321)
							_this->y = -(_this->y);
						}
					}
					else{
						HX_STACK_LINE(326)
						{
							HX_STACK_LINE(326)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(326)
							_this->x = v->x;
							HX_STACK_LINE(326)
							_this->y = v->y;
						}
						HX_STACK_LINE(327)
						{
							HX_STACK_LINE(327)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(327)
							_this->x = -(_this->x);
							HX_STACK_LINE(327)
							_this->y = -(_this->y);
						}
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(328)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(328)
							_this->x = v->x;
							HX_STACK_LINE(328)
							_this->y = v->y;
						}
						HX_STACK_LINE(329)
						{
							HX_STACK_LINE(329)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(329)
							_this->x = v->x;
							HX_STACK_LINE(329)
							_this->y = v->y;
						}
						HX_STACK_LINE(330)
						{
							HX_STACK_LINE(330)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(330)
							_this->x = -(_this->x);
							HX_STACK_LINE(330)
							_this->y = -(_this->y);
						}
					}
				}
				else{
					HX_STACK_LINE(336)
					this->m_front = (bool((offset0 >= 0.0)) && bool((offset1 >= 0.0)));
					HX_STACK_LINE(338)
					if ((this->m_front)){
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(340)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(340)
							_this->x = v->x;
							HX_STACK_LINE(340)
							_this->y = v->y;
						}
						HX_STACK_LINE(341)
						{
							HX_STACK_LINE(341)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(341)
							_this->x = v->x;
							HX_STACK_LINE(341)
							_this->y = v->y;
						}
						HX_STACK_LINE(342)
						{
							HX_STACK_LINE(342)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(342)
							_this->x = v->x;
							HX_STACK_LINE(342)
							_this->y = v->y;
						}
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(343)
							_this->x = -(_this->x);
							HX_STACK_LINE(343)
							_this->y = -(_this->y);
						}
					}
					else{
						HX_STACK_LINE(348)
						{
							HX_STACK_LINE(348)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(348)
							_this->x = v->x;
							HX_STACK_LINE(348)
							_this->y = v->y;
						}
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(349)
							_this->x = -(_this->x);
							HX_STACK_LINE(349)
							_this->y = -(_this->y);
						}
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(350)
							_this->x = v->x;
							HX_STACK_LINE(350)
							_this->y = v->y;
						}
						HX_STACK_LINE(351)
						{
							HX_STACK_LINE(351)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal0;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(351)
							_this->x = v->x;
							HX_STACK_LINE(351)
							_this->y = v->y;
						}
						HX_STACK_LINE(352)
						{
							HX_STACK_LINE(352)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(352)
							_this->x = -(_this->x);
							HX_STACK_LINE(352)
							_this->y = -(_this->y);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(357)
				if ((hasVertex3)){
					HX_STACK_LINE(358)
					if ((convex2)){
						HX_STACK_LINE(361)
						this->m_front = (bool((offset1 >= 0.0)) || bool((offset2 >= 0.0)));
						HX_STACK_LINE(363)
						if ((this->m_front)){
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(365)
								_this->x = v->x;
								HX_STACK_LINE(365)
								_this->y = v->y;
							}
							HX_STACK_LINE(366)
							{
								HX_STACK_LINE(366)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(366)
								_this->x = v->x;
								HX_STACK_LINE(366)
								_this->y = v->y;
							}
							HX_STACK_LINE(367)
							{
								HX_STACK_LINE(367)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(367)
								_this->x = -(_this->x);
								HX_STACK_LINE(367)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(368)
							{
								HX_STACK_LINE(368)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(368)
								_this->x = v->x;
								HX_STACK_LINE(368)
								_this->y = v->y;
							}
						}
						else{
							HX_STACK_LINE(373)
							{
								HX_STACK_LINE(373)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(373)
								_this->x = v->x;
								HX_STACK_LINE(373)
								_this->y = v->y;
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(374)
								_this->x = -(_this->x);
								HX_STACK_LINE(374)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(375)
							{
								HX_STACK_LINE(375)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(375)
								_this->x = v->x;
								HX_STACK_LINE(375)
								_this->y = v->y;
							}
							HX_STACK_LINE(376)
							{
								HX_STACK_LINE(376)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(376)
								_this->x = -(_this->x);
								HX_STACK_LINE(376)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(377)
							{
								HX_STACK_LINE(377)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(377)
								_this->x = v->x;
								HX_STACK_LINE(377)
								_this->y = v->y;
							}
						}
					}
					else{
						HX_STACK_LINE(383)
						this->m_front = (bool((offset1 >= 0.0)) && bool((offset2 >= 0.0)));
						HX_STACK_LINE(385)
						if ((this->m_front)){
							HX_STACK_LINE(387)
							{
								HX_STACK_LINE(387)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(387)
								_this->x = v->x;
								HX_STACK_LINE(387)
								_this->y = v->y;
							}
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(388)
								_this->x = v->x;
								HX_STACK_LINE(388)
								_this->y = v->y;
							}
							HX_STACK_LINE(389)
							{
								HX_STACK_LINE(389)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(389)
								_this->x = -(_this->x);
								HX_STACK_LINE(389)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(390)
							{
								HX_STACK_LINE(390)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(390)
								_this->x = v->x;
								HX_STACK_LINE(390)
								_this->y = v->y;
							}
						}
						else{
							HX_STACK_LINE(395)
							{
								HX_STACK_LINE(395)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(395)
								_this->x = v->x;
								HX_STACK_LINE(395)
								_this->y = v->y;
							}
							HX_STACK_LINE(396)
							{
								HX_STACK_LINE(396)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(396)
								_this->x = -(_this->x);
								HX_STACK_LINE(396)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(397)
							{
								HX_STACK_LINE(397)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal2;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(397)
								_this->x = v->x;
								HX_STACK_LINE(397)
								_this->y = v->y;
							}
							HX_STACK_LINE(398)
							{
								HX_STACK_LINE(398)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(398)
								_this->x = -(_this->x);
								HX_STACK_LINE(398)
								_this->y = -(_this->y);
							}
							HX_STACK_LINE(399)
							{
								HX_STACK_LINE(399)
								::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
								::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(399)
								_this->x = v->x;
								HX_STACK_LINE(399)
								_this->y = v->y;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(406)
					this->m_front = (offset1 >= 0.0);
					HX_STACK_LINE(408)
					if ((this->m_front)){
						HX_STACK_LINE(410)
						{
							HX_STACK_LINE(410)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(410)
							_this->x = v->x;
							HX_STACK_LINE(410)
							_this->y = v->y;
						}
						HX_STACK_LINE(411)
						{
							HX_STACK_LINE(411)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(411)
							_this->x = v->x;
							HX_STACK_LINE(411)
							_this->y = v->y;
						}
						HX_STACK_LINE(412)
						{
							HX_STACK_LINE(412)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(412)
							_this->x = -(_this->x);
							HX_STACK_LINE(412)
							_this->y = -(_this->y);
						}
						HX_STACK_LINE(413)
						{
							HX_STACK_LINE(413)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(413)
							_this->x = v->x;
							HX_STACK_LINE(413)
							_this->y = v->y;
						}
						HX_STACK_LINE(414)
						{
							HX_STACK_LINE(414)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(414)
							_this->x = -(_this->x);
							HX_STACK_LINE(414)
							_this->y = -(_this->y);
						}
					}
					else{
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(419)
							_this->x = v->x;
							HX_STACK_LINE(419)
							_this->y = v->y;
						}
						HX_STACK_LINE(420)
						{
							HX_STACK_LINE(420)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(420)
							_this->x = -(_this->x);
							HX_STACK_LINE(420)
							_this->y = -(_this->y);
						}
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_lowerLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(421)
							_this->x = v->x;
							HX_STACK_LINE(421)
							_this->y = v->y;
						}
						HX_STACK_LINE(422)
						{
							HX_STACK_LINE(422)
							::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_upperLimit;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(422)
							_this->x = v->x;
							HX_STACK_LINE(422)
							_this->y = v->y;
						}
					}
				}
			}
		}
		HX_STACK_LINE(429)
		::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->count = polygonB->m_vertexCount;
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = polygonB->m_vertexCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(431)
			while(((_g1 < _g))){
				HX_STACK_LINE(431)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(433)
				this->multiplyTransformVector(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_xf,polygonB->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >(),::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);
				HX_STACK_LINE(434)
				{
					HX_STACK_LINE(434)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(434)
					_this->x = v->x;
					HX_STACK_LINE(434)
					_this->y = v->y;
				}
				HX_STACK_LINE(436)
				this->multiplyRotationVector(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_xf->R,polygonB->m_normals->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >(),::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->normals->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(437)
					_this->x = v->x;
					HX_STACK_LINE(437)
					_this->y = v->y;
				}
			}
		}
		HX_STACK_LINE(442)
		this->m_radius = (2.0 * ::box2D::common::B2Settings_obj::b2_polygonRadius);
		HX_STACK_LINE(444)
		manifold->m_pointCount = (int)0;
		HX_STACK_LINE(446)
		this->computeEdgeSeparation(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edgeAxis);
		HX_STACK_LINE(449)
		if (((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edgeAxis->type == ::box2D::dynamics::contacts::Type_obj::UNKNOWN))){
			HX_STACK_LINE(450)
			return null();
		}
		HX_STACK_LINE(454)
		if (((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edgeAxis->separation > this->m_radius))){
			HX_STACK_LINE(455)
			return null();
		}
		HX_STACK_LINE(459)
		this->computePolygonSeparation(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::polygonAxis);
		HX_STACK_LINE(461)
		if (((bool((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::polygonAxis->type != ::box2D::dynamics::contacts::Type_obj::UNKNOWN)) && bool((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::polygonAxis->separation > this->m_radius))))){
			HX_STACK_LINE(462)
			return null();
		}
		HX_STACK_LINE(470)
		Float k_relativeTol = 0.98;		HX_STACK_VAR(k_relativeTol,"k_relativeTol");
		HX_STACK_LINE(471)
		Float k_absoluteTol = 0.001;		HX_STACK_VAR(k_absoluteTol,"k_absoluteTol");
		HX_STACK_LINE(473)
		::box2D::dynamics::contacts::EPAxis primaryAxis;		HX_STACK_VAR(primaryAxis,"primaryAxis");
		HX_STACK_LINE(475)
		if (((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::polygonAxis->type == ::box2D::dynamics::contacts::Type_obj::UNKNOWN))){
			HX_STACK_LINE(476)
			primaryAxis = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edgeAxis;
		}
		else{
			HX_STACK_LINE(480)
			if (((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::polygonAxis->separation > ((k_relativeTol * ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edgeAxis->separation) + k_absoluteTol)))){
				HX_STACK_LINE(481)
				primaryAxis = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::polygonAxis;
			}
			else{
				HX_STACK_LINE(486)
				primaryAxis = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::edgeAxis;
			}
		}
		HX_STACK_LINE(494)
		if (((primaryAxis->type == ::box2D::dynamics::contacts::Type_obj::EDGE_A))){
			HX_STACK_LINE(496)
			manifold->m_type = ::box2D::collision::B2Manifold_obj::e_faceA;
			HX_STACK_LINE(499)
			int bestIndex = (int)0;		HX_STACK_VAR(bestIndex,"bestIndex");
			HX_STACK_LINE(500)
			Float bestValue = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->normals->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >());		HX_STACK_VAR(bestValue,"bestValue");
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->count;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(502)
				while(((_g1 < _g))){
					HX_STACK_LINE(502)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(504)
					Float value = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->normals->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >());		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(506)
					if (((value < bestValue))){
						HX_STACK_LINE(508)
						bestValue = value;
						HX_STACK_LINE(509)
						bestIndex = i;
					}
				}
			}
			HX_STACK_LINE(513)
			int i1 = bestIndex;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(514)
			int i2 = (  ((((i1 + (int)1) < ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->count))) ? int((i1 + (int)1)) : int((int)0) );		HX_STACK_VAR(i2,"i2");
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(516)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(i1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(516)
				_this->x = v->x;
				HX_STACK_LINE(516)
				_this->y = v->y;
			}
			HX_STACK_LINE(517)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexA = (int)0;
			HX_STACK_LINE(518)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexB = i1;
			HX_STACK_LINE(519)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeA = ::box2D::collision::B2ContactID_obj::FACE;
			HX_STACK_LINE(520)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeB = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(522)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(i2).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(522)
				_this->x = v->x;
				HX_STACK_LINE(522)
				_this->y = v->y;
			}
			HX_STACK_LINE(523)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexA = (int)0;
			HX_STACK_LINE(524)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexB = i2;
			HX_STACK_LINE(525)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeA = ::box2D::collision::B2ContactID_obj::FACE;
			HX_STACK_LINE(526)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeB = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(528)
			if ((this->m_front)){
				HX_STACK_LINE(530)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1 = (int)0;
				HX_STACK_LINE(531)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i2 = (int)1;
				HX_STACK_LINE(532)
				{
					HX_STACK_LINE(532)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v1;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = this->m_v1;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(532)
					_this->x = v->x;
					HX_STACK_LINE(532)
					_this->y = v->y;
				}
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v2;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = this->m_v2;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(533)
					_this->x = v->x;
					HX_STACK_LINE(533)
					_this->y = v->y;
				}
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(534)
					_this->x = v->x;
					HX_STACK_LINE(534)
					_this->y = v->y;
				}
			}
			else{
				HX_STACK_LINE(539)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1 = (int)1;
				HX_STACK_LINE(540)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i2 = (int)0;
				HX_STACK_LINE(541)
				{
					HX_STACK_LINE(541)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v1;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = this->m_v2;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(541)
					_this->x = v->x;
					HX_STACK_LINE(541)
					_this->y = v->y;
				}
				HX_STACK_LINE(542)
				{
					HX_STACK_LINE(542)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v2;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = this->m_v1;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(542)
					_this->x = v->x;
					HX_STACK_LINE(542)
					_this->y = v->y;
				}
				HX_STACK_LINE(543)
				{
					HX_STACK_LINE(543)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_normal1;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(543)
					_this->x = v->x;
					HX_STACK_LINE(543)
					_this->y = v->y;
				}
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(544)
					_this->x = -(_this->x);
					HX_STACK_LINE(544)
					_this->y = -(_this->y);
				}
			}
		}
		else{
			HX_STACK_LINE(550)
			manifold->m_type = ::box2D::collision::B2Manifold_obj::e_faceB;
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = this->m_v1;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(552)
				_this->x = v->x;
				HX_STACK_LINE(552)
				_this->y = v->y;
			}
			HX_STACK_LINE(553)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexA = (int)0;
			HX_STACK_LINE(554)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexB = primaryAxis->index;
			HX_STACK_LINE(555)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeA = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(556)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeB = ::box2D::collision::B2ContactID_obj::FACE;
			HX_STACK_LINE(558)
			{
				HX_STACK_LINE(558)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = this->m_v2;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(558)
				_this->x = v->x;
				HX_STACK_LINE(558)
				_this->y = v->y;
			}
			HX_STACK_LINE(559)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexA = (int)0;
			HX_STACK_LINE(560)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexB = primaryAxis->index;
			HX_STACK_LINE(561)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeA = ::box2D::collision::B2ContactID_obj::VERTEX;
			HX_STACK_LINE(562)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeB = ::box2D::collision::B2ContactID_obj::FACE;
			HX_STACK_LINE(564)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1 = primaryAxis->index;
			HX_STACK_LINE(565)
			::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i2 = (  ((((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1 + (int)1) < ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->count))) ? int((::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1 + (int)1)) : int((int)0) );
			HX_STACK_LINE(566)
			{
				HX_STACK_LINE(566)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v1;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(566)
				_this->x = v->x;
				HX_STACK_LINE(566)
				_this->y = v->y;
			}
			HX_STACK_LINE(567)
			{
				HX_STACK_LINE(567)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v2;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->vertices->__get(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i2).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(567)
				_this->x = v->x;
				HX_STACK_LINE(567)
				_this->y = v->y;
			}
			HX_STACK_LINE(568)
			{
				HX_STACK_LINE(568)
				::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_polygonB->normals->__get(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(568)
				_this->x = v->x;
				HX_STACK_LINE(568)
				_this->y = v->y;
			}
		}
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(573)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(573)
			_this->x = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal->y;
			HX_STACK_LINE(573)
			_this->y = -(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal->x);
		}
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(574)
			_this->x = v->x;
			HX_STACK_LINE(574)
			_this->y = v->y;
		}
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(575)
			_this->x = -(_this->x);
			HX_STACK_LINE(575)
			_this->y = -(_this->y);
		}
		HX_STACK_LINE(576)
		::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideOffset1 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal1,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v1);
		HX_STACK_LINE(577)
		::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideOffset2 = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal2,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v2);
		HX_STACK_LINE(580)
		int np;		HX_STACK_VAR(np,"np");
		HX_STACK_LINE(583)
		np = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipSegmentToLine(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints1,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::ie,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal1,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideOffset1,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1);
		HX_STACK_LINE(585)
		if (((np < ::box2D::common::B2Settings_obj::b2_maxManifoldPoints))){
			HX_STACK_LINE(586)
			return null();
		}
		HX_STACK_LINE(591)
		np = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipSegmentToLine(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints1,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideNormal2,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->sideOffset2,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i2);
		HX_STACK_LINE(593)
		if (((np < ::box2D::common::B2Settings_obj::b2_maxManifoldPoints))){
			HX_STACK_LINE(594)
			return null();
		}
		HX_STACK_LINE(599)
		if (((primaryAxis->type == ::box2D::dynamics::contacts::Type_obj::EDGE_A))){
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPlaneNormal;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(601)
				_this->x = v->x;
				HX_STACK_LINE(601)
				_this->y = v->y;
			}
			HX_STACK_LINE(602)
			{
				HX_STACK_LINE(602)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPoint;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v1;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(602)
				_this->x = v->x;
				HX_STACK_LINE(602)
				_this->y = v->y;
			}
		}
		else{
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPlaneNormal;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = polygonB->m_normals->__get(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(607)
				_this->x = v->x;
				HX_STACK_LINE(607)
				_this->y = v->y;
			}
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				::box2D::common::math::B2Vec2 _this = manifold->m_localPoint;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = polygonB->m_vertices->__get(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->i1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(608)
				_this->x = v->x;
				HX_STACK_LINE(608)
				_this->y = v->y;
			}
		}
		HX_STACK_LINE(613)
		int pointCount = (int)0;		HX_STACK_VAR(pointCount,"pointCount");
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(615)
			while(((_g1 < _g))){
				HX_STACK_LINE(615)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(617)
				{
					HX_STACK_LINE(617)
					::box2D::common::math::B2Vec2 _this = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(617)
					_this->x = v->x;
					HX_STACK_LINE(617)
					_this->y = v->y;
				}
				HX_STACK_LINE(618)
				::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp->subtract(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->v1);
				HX_STACK_LINE(620)
				Float separation = ::box2D::common::math::B2Math_obj::dot(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::rf->normal,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::temp);		HX_STACK_VAR(separation,"separation");
				HX_STACK_LINE(622)
				if (((separation <= this->m_radius))){
					HX_STACK_LINE(624)
					::box2D::collision::B2ManifoldPoint cp = manifold->m_points->__get(pointCount).StaticCast< ::box2D::collision::B2ManifoldPoint >();		HX_STACK_VAR(cp,"cp");
					HX_STACK_LINE(626)
					if (((primaryAxis->type == ::box2D::dynamics::contacts::Type_obj::EDGE_A))){
						HX_STACK_LINE(628)
						{
							HX_STACK_LINE(628)
							::box2D::common::math::B2Vec2 _this = cp->m_localPoint;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Math_obj::mulXT(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::m_xf,::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v,null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(628)
							_this->x = v->x;
							HX_STACK_LINE(628)
							_this->y = v->y;
						}
						HX_STACK_LINE(629)
						cp->m_id->set(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id);
					}
					else{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::box2D::common::math::B2Vec2 _this = cp->m_localPoint;		HX_STACK_VAR(_this,"_this");
							::box2D::common::math::B2Vec2 v = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(634)
							_this->x = v->x;
							HX_STACK_LINE(634)
							_this->y = v->y;
						}
						HX_STACK_LINE(635)
						cp->m_id->typeA = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeB;
						HX_STACK_LINE(636)
						cp->m_id->typeB = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeA;
						HX_STACK_LINE(637)
						cp->m_id->indexA = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexB;
						HX_STACK_LINE(638)
						cp->m_id->indexB = ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::clipPoints2->__get(i).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexA;
					}
					HX_STACK_LINE(641)
					(pointCount)++;
				}
			}
		}
		HX_STACK_LINE(645)
		manifold->m_pointCount = pointCount;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(B2PolyAndEdgeContact_obj,b2CollidePolyAndEdge,(void))

Void B2PolyAndEdgeContact_obj::evaluate( ){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::evaluate","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		::box2D::dynamics::B2Body bA = this->m_fixtureA->getBody();		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(106)
		::box2D::dynamics::B2Body bB = this->m_fixtureB->getBody();		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(108)
		this->b2CollidePolyAndEdge(this->m_manifold,hx::TCast< box2D::collision::shapes::B2EdgeShape >::cast(this->m_fixtureA->getShape()),bA->m_xf,hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(this->m_fixtureB->getShape()),bB->m_xf);
	}
return null();
}


Void B2PolyAndEdgeContact_obj::reset( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::reset","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fixtureA,"fixtureA");
		HX_STACK_ARG(fixtureB,"fixtureB");
		HX_STACK_LINE(84)
		if ((::Std_obj::is(fixtureA->getShape(),hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
			HX_STACK_LINE(88)
			this->super::reset(fixtureB,fixtureA);
			HX_STACK_LINE(90)
			::box2D::common::B2Settings_obj::b2Assert((fixtureA->getType() == ::box2D::collision::shapes::B2Shape_obj::e_polygonShape));
			HX_STACK_LINE(91)
			::box2D::common::B2Settings_obj::b2Assert((fixtureB->getType() == ::box2D::collision::shapes::B2Shape_obj::e_edgeShape));
		}
		else{
			HX_STACK_LINE(96)
			this->super::reset(fixtureA,fixtureB);
			HX_STACK_LINE(98)
			::box2D::common::B2Settings_obj::b2Assert((fixtureA->getType() == ::box2D::collision::shapes::B2Shape_obj::e_edgeShape));
			HX_STACK_LINE(99)
			::box2D::common::B2Settings_obj::b2Assert((fixtureB->getType() == ::box2D::collision::shapes::B2Shape_obj::e_polygonShape));
		}
	}
return null();
}


::box2D::common::math::B2Transform B2PolyAndEdgeContact_obj::m_xf;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::temp;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::m_centroidB;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::m_lowerLimit;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::m_upperLimit;

::box2D::dynamics::contacts::TempPolygon B2PolyAndEdgeContact_obj::m_polygonB;

::box2D::dynamics::contacts::EPAxis B2PolyAndEdgeContact_obj::edgeAxis;

::box2D::dynamics::contacts::EPAxis B2PolyAndEdgeContact_obj::polygonAxis;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::perp;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::n;

::box2D::dynamics::contacts::ReferenceFace B2PolyAndEdgeContact_obj::rf;

::box2D::common::math::B2Mat22 B2PolyAndEdgeContact_obj::mat;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::temp1;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::temp2;

Array< ::Dynamic > B2PolyAndEdgeContact_obj::ie;

Array< ::Dynamic > B2PolyAndEdgeContact_obj::clipPoints1;

Array< ::Dynamic > B2PolyAndEdgeContact_obj::clipPoints2;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::edge0;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::edge1;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::edge2;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::m_normal;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::m_normal0;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::m_normal1;

::box2D::common::math::B2Vec2 B2PolyAndEdgeContact_obj::m_normal2;

::box2D::dynamics::contacts::B2Contact B2PolyAndEdgeContact_obj::create( Dynamic allocator){
	HX_STACK_PUSH("B2PolyAndEdgeContact::create","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",75);
	HX_STACK_ARG(allocator,"allocator");
	HX_STACK_LINE(75)
	return ::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2PolyAndEdgeContact_obj,create,return )

Void B2PolyAndEdgeContact_obj::destroy( ::box2D::dynamics::contacts::B2Contact contact,Dynamic allocator){
{
		HX_STACK_PUSH("B2PolyAndEdgeContact::destroy","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",80);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_ARG(allocator,"allocator");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2PolyAndEdgeContact_obj,destroy,(void))

int B2PolyAndEdgeContact_obj::clipSegmentToLine( Array< ::Dynamic > vOut,Array< ::Dynamic > vIn,::box2D::common::math::B2Vec2 normal,Float offset,int vertexIndexA){
	HX_STACK_PUSH("B2PolyAndEdgeContact::clipSegmentToLine","box2D/dynamics/contacts/B2PolyAndEdgeContact.hx",747);
	HX_STACK_ARG(vOut,"vOut");
	HX_STACK_ARG(vIn,"vIn");
	HX_STACK_ARG(normal,"normal");
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(vertexIndexA,"vertexIndexA");
	HX_STACK_LINE(749)
	int numOut = (int)0;		HX_STACK_VAR(numOut,"numOut");
	HX_STACK_LINE(752)
	Float distance0 = (::box2D::common::math::B2Math_obj::dot(normal,vIn->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v) - offset);		HX_STACK_VAR(distance0,"distance0");
	HX_STACK_LINE(753)
	Float distance1 = (::box2D::common::math::B2Math_obj::dot(normal,vIn->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v) - offset);		HX_STACK_VAR(distance1,"distance1");
	HX_STACK_LINE(756)
	if (((distance0 <= 0.0))){
		HX_STACK_LINE(757)
		vOut->__get((numOut)++).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->set(vIn->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >());
	}
	HX_STACK_LINE(761)
	if (((distance1 <= 0.0))){
		HX_STACK_LINE(762)
		vOut->__get((numOut)++).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->set(vIn->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >());
	}
	HX_STACK_LINE(767)
	if ((((distance0 * distance1) < 0.0))){
		HX_STACK_LINE(770)
		Float interp = (Float(distance0) / Float(((distance0 - distance1))));		HX_STACK_VAR(interp,"interp");
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			::box2D::common::math::B2Vec2 _this = vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = vIn->__get((int)1).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(773)
			_this->x = v->x;
			HX_STACK_LINE(773)
			_this->y = v->y;
		}
		HX_STACK_LINE(774)
		vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v->subtract(vIn->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v);
		HX_STACK_LINE(775)
		vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v->multiply(interp);
		HX_STACK_LINE(776)
		vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v->add(vIn->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->v);
		HX_STACK_LINE(779)
		vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexA = vertexIndexA;
		HX_STACK_LINE(780)
		vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexB = vIn->__get((int)0).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->indexB;
		HX_STACK_LINE(781)
		vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeA = ::box2D::collision::B2ContactID_obj::VERTEX;
		HX_STACK_LINE(782)
		vOut->__get(numOut).StaticCast< ::box2D::dynamics::contacts::ClipVertex >()->id->typeB = ::box2D::collision::B2ContactID_obj::FACE;
		HX_STACK_LINE(784)
		(numOut)++;
	}
	HX_STACK_LINE(787)
	return numOut;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(B2PolyAndEdgeContact_obj,clipSegmentToLine,return )


B2PolyAndEdgeContact_obj::B2PolyAndEdgeContact_obj()
{
}

void B2PolyAndEdgeContact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2PolyAndEdgeContact);
	HX_MARK_MEMBER_NAME(m_radius,"m_radius");
	HX_MARK_MEMBER_NAME(m_front,"m_front");
	HX_MARK_MEMBER_NAME(m_v3,"m_v3");
	HX_MARK_MEMBER_NAME(m_v2,"m_v2");
	HX_MARK_MEMBER_NAME(m_v1,"m_v1");
	HX_MARK_MEMBER_NAME(m_v0,"m_v0");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2PolyAndEdgeContact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_radius,"m_radius");
	HX_VISIT_MEMBER_NAME(m_front,"m_front");
	HX_VISIT_MEMBER_NAME(m_v3,"m_v3");
	HX_VISIT_MEMBER_NAME(m_v2,"m_v2");
	HX_VISIT_MEMBER_NAME(m_v1,"m_v1");
	HX_VISIT_MEMBER_NAME(m_v0,"m_v0");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2PolyAndEdgeContact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"rf") ) { return rf; }
		if (HX_FIELD_EQ(inName,"ie") ) { return ie; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { return mat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_xf") ) { return m_xf; }
		if (HX_FIELD_EQ(inName,"temp") ) { return temp; }
		if (HX_FIELD_EQ(inName,"perp") ) { return perp; }
		if (HX_FIELD_EQ(inName,"m_v3") ) { return m_v3; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { return m_v2; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { return m_v1; }
		if (HX_FIELD_EQ(inName,"m_v0") ) { return m_v0; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"temp1") ) { return temp1; }
		if (HX_FIELD_EQ(inName,"temp2") ) { return temp2; }
		if (HX_FIELD_EQ(inName,"edge0") ) { return edge0; }
		if (HX_FIELD_EQ(inName,"edge1") ) { return edge1; }
		if (HX_FIELD_EQ(inName,"edge2") ) { return edge2; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"m_front") ) { return m_front; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"edgeAxis") ) { return edgeAxis; }
		if (HX_FIELD_EQ(inName,"m_normal") ) { return m_normal; }
		if (HX_FIELD_EQ(inName,"evaluate") ) { return evaluate_dyn(); }
		if (HX_FIELD_EQ(inName,"m_radius") ) { return m_radius; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_normal0") ) { return m_normal0; }
		if (HX_FIELD_EQ(inName,"m_normal1") ) { return m_normal1; }
		if (HX_FIELD_EQ(inName,"m_normal2") ) { return m_normal2; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_polygonB") ) { return m_polygonB; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_centroidB") ) { return m_centroidB; }
		if (HX_FIELD_EQ(inName,"polygonAxis") ) { return polygonAxis; }
		if (HX_FIELD_EQ(inName,"clipPoints1") ) { return clipPoints1; }
		if (HX_FIELD_EQ(inName,"clipPoints2") ) { return clipPoints2; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_lowerLimit") ) { return m_lowerLimit; }
		if (HX_FIELD_EQ(inName,"m_upperLimit") ) { return m_upperLimit; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clipSegmentToLine") ) { return clipSegmentToLine_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"b2CollidePolyAndEdge") ) { return b2CollidePolyAndEdge_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"computeEdgeSeparation") ) { return computeEdgeSeparation_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"multiplyRotationVector") ) { return multiplyRotationVector_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"multiplyTransformVector") ) { return multiplyTransformVector_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"multiplyRotationsInverse") ) { return multiplyRotationsInverse_dyn(); }
		if (HX_FIELD_EQ(inName,"computePolygonSeparation") ) { return computePolygonSeparation_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"multiplyTransformsInverse") ) { return multiplyTransformsInverse_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"multiplyRotationVectorInverse") ) { return multiplyRotationVectorInverse_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2PolyAndEdgeContact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"rf") ) { rf=inValue.Cast< ::box2D::dynamics::contacts::ReferenceFace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ie") ) { ie=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mat") ) { mat=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_xf") ) { m_xf=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"temp") ) { temp=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"perp") ) { perp=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v3") ) { m_v3=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { m_v2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { m_v1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v0") ) { m_v0=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"temp1") ) { temp1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"temp2") ) { temp2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"edge0") ) { edge0=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"edge1") ) { edge1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"edge2") ) { edge2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_front") ) { m_front=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"edgeAxis") ) { edgeAxis=inValue.Cast< ::box2D::dynamics::contacts::EPAxis >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_normal") ) { m_normal=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_radius") ) { m_radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_normal0") ) { m_normal0=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_normal1") ) { m_normal1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_normal2") ) { m_normal2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_polygonB") ) { m_polygonB=inValue.Cast< ::box2D::dynamics::contacts::TempPolygon >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_centroidB") ) { m_centroidB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"polygonAxis") ) { polygonAxis=inValue.Cast< ::box2D::dynamics::contacts::EPAxis >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clipPoints1") ) { clipPoints1=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clipPoints2") ) { clipPoints2=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_lowerLimit") ) { m_lowerLimit=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_upperLimit") ) { m_upperLimit=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2PolyAndEdgeContact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_radius"));
	outFields->push(HX_CSTRING("m_front"));
	outFields->push(HX_CSTRING("m_v3"));
	outFields->push(HX_CSTRING("m_v2"));
	outFields->push(HX_CSTRING("m_v1"));
	outFields->push(HX_CSTRING("m_v0"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("m_xf"),
	HX_CSTRING("temp"),
	HX_CSTRING("m_centroidB"),
	HX_CSTRING("m_lowerLimit"),
	HX_CSTRING("m_upperLimit"),
	HX_CSTRING("m_polygonB"),
	HX_CSTRING("edgeAxis"),
	HX_CSTRING("polygonAxis"),
	HX_CSTRING("perp"),
	HX_CSTRING("n"),
	HX_CSTRING("rf"),
	HX_CSTRING("mat"),
	HX_CSTRING("temp1"),
	HX_CSTRING("temp2"),
	HX_CSTRING("ie"),
	HX_CSTRING("clipPoints1"),
	HX_CSTRING("clipPoints2"),
	HX_CSTRING("edge0"),
	HX_CSTRING("edge1"),
	HX_CSTRING("edge2"),
	HX_CSTRING("m_normal"),
	HX_CSTRING("m_normal0"),
	HX_CSTRING("m_normal1"),
	HX_CSTRING("m_normal2"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("clipSegmentToLine"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("multiplyTransformVector"),
	HX_CSTRING("multiplyRotationVectorInverse"),
	HX_CSTRING("multiplyRotationVector"),
	HX_CSTRING("multiplyRotationsInverse"),
	HX_CSTRING("multiplyTransformsInverse"),
	HX_CSTRING("computePolygonSeparation"),
	HX_CSTRING("computeEdgeSeparation"),
	HX_CSTRING("b2CollidePolyAndEdge"),
	HX_CSTRING("evaluate"),
	HX_CSTRING("reset"),
	HX_CSTRING("m_radius"),
	HX_CSTRING("m_front"),
	HX_CSTRING("m_v3"),
	HX_CSTRING("m_v2"),
	HX_CSTRING("m_v1"),
	HX_CSTRING("m_v0"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_xf,"m_xf");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::temp,"temp");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_centroidB,"m_centroidB");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_lowerLimit,"m_lowerLimit");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_upperLimit,"m_upperLimit");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_polygonB,"m_polygonB");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::edgeAxis,"edgeAxis");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::polygonAxis,"polygonAxis");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::perp,"perp");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::n,"n");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::rf,"rf");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::mat,"mat");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::temp1,"temp1");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::temp2,"temp2");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::ie,"ie");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::clipPoints1,"clipPoints1");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::clipPoints2,"clipPoints2");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::edge0,"edge0");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::edge1,"edge1");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::edge2,"edge2");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal,"m_normal");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal0,"m_normal0");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal1,"m_normal1");
	HX_MARK_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal2,"m_normal2");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_xf,"m_xf");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::temp,"temp");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_centroidB,"m_centroidB");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_lowerLimit,"m_lowerLimit");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_upperLimit,"m_upperLimit");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_polygonB,"m_polygonB");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::edgeAxis,"edgeAxis");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::polygonAxis,"polygonAxis");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::perp,"perp");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::n,"n");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::rf,"rf");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::mat,"mat");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::temp1,"temp1");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::temp2,"temp2");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::ie,"ie");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::clipPoints1,"clipPoints1");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::clipPoints2,"clipPoints2");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::edge0,"edge0");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::edge1,"edge1");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::edge2,"edge2");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal,"m_normal");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal0,"m_normal0");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal1,"m_normal1");
	HX_VISIT_MEMBER_NAME(B2PolyAndEdgeContact_obj::m_normal2,"m_normal2");
};

Class B2PolyAndEdgeContact_obj::__mClass;

void B2PolyAndEdgeContact_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.B2PolyAndEdgeContact"), hx::TCanCast< B2PolyAndEdgeContact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2PolyAndEdgeContact_obj::__boot()
{
	m_xf= ::box2D::common::math::B2Transform_obj::__new(null(),null());
	temp= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_centroidB= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_lowerLimit= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_upperLimit= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_polygonB= ::box2D::dynamics::contacts::TempPolygon_obj::__new();
	edgeAxis= ::box2D::dynamics::contacts::EPAxis_obj::__new();
	polygonAxis= ::box2D::dynamics::contacts::EPAxis_obj::__new();
	perp= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	n= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	rf= ::box2D::dynamics::contacts::ReferenceFace_obj::__new();
	mat= ::box2D::common::math::B2Mat22_obj::__new();
	temp1= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	temp2= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	ie= Array_obj< ::Dynamic >::__new().Add(::box2D::dynamics::contacts::ClipVertex_obj::__new()).Add(::box2D::dynamics::contacts::ClipVertex_obj::__new());
	clipPoints1= Array_obj< ::Dynamic >::__new().Add(::box2D::dynamics::contacts::ClipVertex_obj::__new()).Add(::box2D::dynamics::contacts::ClipVertex_obj::__new());
	clipPoints2= Array_obj< ::Dynamic >::__new().Add(::box2D::dynamics::contacts::ClipVertex_obj::__new()).Add(::box2D::dynamics::contacts::ClipVertex_obj::__new());
	edge0= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	edge1= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	edge2= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_normal= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_normal0= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_normal1= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	m_normal2= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
