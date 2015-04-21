#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastInput
#include <box2D/collision/B2RayCastInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastOutput
#include <box2D/collision/B2RayCastOutput.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2EdgeShape
#include <box2D/collision/shapes/B2EdgeShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2MassData
#include <box2D/collision/shapes/B2MassData.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace collision{
namespace shapes{

Void B2EdgeShape_obj::__construct(::box2D::common::math::B2Vec2 v1,::box2D::common::math::B2Vec2 v2)
{
HX_STACK_PUSH("B2EdgeShape::new","box2D/collision/shapes/B2EdgeShape.hx",356);
{
	HX_STACK_LINE(357)
	super::__construct();
	HX_STACK_LINE(359)
	this->s_supportVec = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(360)
	this->m_v1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(361)
	this->m_v2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(363)
	this->m_v0 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(364)
	this->m_v3 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(365)
	this->m_hasVertex0 = false;
	HX_STACK_LINE(366)
	this->m_hasVertex3 = false;
	HX_STACK_LINE(368)
	this->m_coreV1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(369)
	this->m_coreV2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(371)
	this->m_normal = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(373)
	this->m_direction = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(375)
	this->m_cornerDir1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(377)
	this->m_cornerDir2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(379)
	this->m_type = ::box2D::collision::shapes::B2Shape_obj::e_edgeShape;
	HX_STACK_LINE(381)
	this->m_prevEdge = null();
	HX_STACK_LINE(382)
	this->m_nextEdge = null();
	HX_STACK_LINE(384)
	this->m_v1 = v1;
	HX_STACK_LINE(385)
	this->m_v2 = v2;
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		::box2D::common::math::B2Vec2 _this = this->m_direction;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(387)
		_this->x = (this->m_v2->x - this->m_v1->x);
		HX_STACK_LINE(387)
		_this->y = (this->m_v2->y - this->m_v1->y);
	}
	HX_STACK_LINE(388)
	this->m_length = this->m_direction->normalize();
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		::box2D::common::math::B2Vec2 _this = this->m_normal;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(389)
		_this->x = this->m_direction->y;
		HX_STACK_LINE(389)
		_this->y = -(this->m_direction->x);
	}
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		::box2D::common::math::B2Vec2 _this = this->m_coreV1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(391)
		_this->x = ((-(::box2D::common::B2Settings_obj::b2_toiSlop) * ((this->m_normal->x - this->m_direction->x))) + this->m_v1->x);
		HX_STACK_LINE(391)
		_this->y = ((-(::box2D::common::B2Settings_obj::b2_toiSlop) * ((this->m_normal->y - this->m_direction->y))) + this->m_v1->y);
	}
	HX_STACK_LINE(393)
	{
		HX_STACK_LINE(393)
		::box2D::common::math::B2Vec2 _this = this->m_coreV2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(393)
		_this->x = ((-(::box2D::common::B2Settings_obj::b2_toiSlop) * ((this->m_normal->x + this->m_direction->x))) + this->m_v2->x);
		HX_STACK_LINE(393)
		_this->y = ((-(::box2D::common::B2Settings_obj::b2_toiSlop) * ((this->m_normal->y + this->m_direction->y))) + this->m_v2->y);
	}
	HX_STACK_LINE(396)
	this->m_cornerDir1 = this->m_normal;
	HX_STACK_LINE(397)
	{
		HX_STACK_LINE(397)
		::box2D::common::math::B2Vec2 _this = this->m_cornerDir2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(397)
		_this->x = -(this->m_normal->x);
		HX_STACK_LINE(397)
		_this->y = -(this->m_normal->y);
	}
}
;
	return null();
}

B2EdgeShape_obj::~B2EdgeShape_obj() { }

Dynamic B2EdgeShape_obj::__CreateEmpty() { return  new B2EdgeShape_obj; }
hx::ObjectPtr< B2EdgeShape_obj > B2EdgeShape_obj::__new(::box2D::common::math::B2Vec2 v1,::box2D::common::math::B2Vec2 v2)
{  hx::ObjectPtr< B2EdgeShape_obj > result = new B2EdgeShape_obj();
	result->__construct(v1,v2);
	return result;}

Dynamic B2EdgeShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2EdgeShape_obj > result = new B2EdgeShape_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void B2EdgeShape_obj::setNextEdge( ::box2D::collision::shapes::B2EdgeShape edge,::box2D::common::math::B2Vec2 core,::box2D::common::math::B2Vec2 cornerDir,bool convex){
{
		HX_STACK_PUSH("B2EdgeShape::setNextEdge","box2D/collision/shapes/B2EdgeShape.hx",415);
		HX_STACK_THIS(this);
		HX_STACK_ARG(edge,"edge");
		HX_STACK_ARG(core,"core");
		HX_STACK_ARG(cornerDir,"cornerDir");
		HX_STACK_ARG(convex,"convex");
		HX_STACK_LINE(416)
		this->m_nextEdge = edge;
		HX_STACK_LINE(417)
		this->m_coreV2 = core;
		HX_STACK_LINE(418)
		this->m_cornerDir2 = cornerDir;
		HX_STACK_LINE(419)
		this->m_cornerConvex2 = convex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(B2EdgeShape_obj,setNextEdge,(void))

Void B2EdgeShape_obj::setPrevEdge( ::box2D::collision::shapes::B2EdgeShape edge,::box2D::common::math::B2Vec2 core,::box2D::common::math::B2Vec2 cornerDir,bool convex){
{
		HX_STACK_PUSH("B2EdgeShape::setPrevEdge","box2D/collision/shapes/B2EdgeShape.hx",404);
		HX_STACK_THIS(this);
		HX_STACK_ARG(edge,"edge");
		HX_STACK_ARG(core,"core");
		HX_STACK_ARG(cornerDir,"cornerDir");
		HX_STACK_ARG(convex,"convex");
		HX_STACK_LINE(405)
		this->m_prevEdge = edge;
		HX_STACK_LINE(406)
		this->m_coreV1 = core;
		HX_STACK_LINE(407)
		this->m_cornerDir1 = cornerDir;
		HX_STACK_LINE(408)
		this->m_cornerConvex1 = convex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(B2EdgeShape_obj,setPrevEdge,(void))

::box2D::collision::shapes::B2Shape B2EdgeShape_obj::copy( ){
	HX_STACK_PUSH("B2EdgeShape::copy","box2D/collision/shapes/B2EdgeShape.hx",341);
	HX_STACK_THIS(this);
	HX_STACK_LINE(342)
	::box2D::collision::shapes::B2Shape s = ::box2D::collision::shapes::B2EdgeShape_obj::__new(this->m_v1,this->m_v2);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(343)
	s->set(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(345)
	::box2D::collision::shapes::B2EdgeShape edge = hx::TCast< box2D::collision::shapes::B2EdgeShape >::cast(s);		HX_STACK_VAR(edge,"edge");
	HX_STACK_LINE(346)
	{
		HX_STACK_LINE(346)
		::box2D::common::math::B2Vec2 _this = edge->m_v0;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = this->m_v0;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(346)
		_this->x = v->x;
		HX_STACK_LINE(346)
		_this->y = v->y;
	}
	HX_STACK_LINE(347)
	{
		HX_STACK_LINE(347)
		::box2D::common::math::B2Vec2 _this = edge->m_v3;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = this->m_v3;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(347)
		_this->x = v->x;
		HX_STACK_LINE(347)
		_this->y = v->y;
	}
	HX_STACK_LINE(348)
	edge->m_hasVertex0 = this->m_hasVertex0;
	HX_STACK_LINE(349)
	edge->m_hasVertex3 = this->m_hasVertex3;
	HX_STACK_LINE(350)
	return s;
}


::box2D::common::math::B2Vec2 B2EdgeShape_obj::support( ::box2D::common::math::B2Transform xf,Float dX,Float dY){
	HX_STACK_PUSH("B2EdgeShape::support","box2D/collision/shapes/B2EdgeShape.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xf,"xf");
	HX_STACK_ARG(dX,"dX");
	HX_STACK_ARG(dY,"dY");
	HX_STACK_LINE(319)
	::box2D::common::math::B2Mat22 tMat = xf->R;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(321)
	Float v1X = (xf->position->x + (((tMat->col1->x * this->m_coreV1->x) + (tMat->col2->x * this->m_coreV1->y))));		HX_STACK_VAR(v1X,"v1X");
	HX_STACK_LINE(322)
	Float v1Y = (xf->position->y + (((tMat->col1->y * this->m_coreV1->x) + (tMat->col2->y * this->m_coreV1->y))));		HX_STACK_VAR(v1Y,"v1Y");
	HX_STACK_LINE(325)
	Float v2X = (xf->position->x + (((tMat->col1->x * this->m_coreV2->x) + (tMat->col2->x * this->m_coreV2->y))));		HX_STACK_VAR(v2X,"v2X");
	HX_STACK_LINE(326)
	Float v2Y = (xf->position->y + (((tMat->col1->y * this->m_coreV2->x) + (tMat->col2->y * this->m_coreV2->y))));		HX_STACK_VAR(v2Y,"v2Y");
	HX_STACK_LINE(328)
	if (((((v1X * dX) + (v1Y * dY)) > ((v2X * dX) + (v2Y * dY))))){
		HX_STACK_LINE(329)
		this->s_supportVec->x = v1X;
		HX_STACK_LINE(330)
		this->s_supportVec->y = v1Y;
	}
	else{
		HX_STACK_LINE(332)
		this->s_supportVec->x = v2X;
		HX_STACK_LINE(333)
		this->s_supportVec->y = v2Y;
	}
	HX_STACK_LINE(335)
	return this->s_supportVec;
}


HX_DEFINE_DYNAMIC_FUNC3(B2EdgeShape_obj,support,return )

::box2D::collision::shapes::B2EdgeShape B2EdgeShape_obj::getPrevEdge( ){
	HX_STACK_PUSH("B2EdgeShape::getPrevEdge","box2D/collision/shapes/B2EdgeShape.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return this->m_prevEdge;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getPrevEdge,return )

::box2D::collision::shapes::B2EdgeShape B2EdgeShape_obj::getNextEdge( ){
	HX_STACK_PUSH("B2EdgeShape::getNextEdge","box2D/collision/shapes/B2EdgeShape.hx",301);
	HX_STACK_THIS(this);
	HX_STACK_LINE(301)
	return this->m_nextEdge;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getNextEdge,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getFirstVertex( ::box2D::common::math::B2Transform xf){
	HX_STACK_PUSH("B2EdgeShape::getFirstVertex","box2D/collision/shapes/B2EdgeShape.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xf,"xf");
	HX_STACK_LINE(292)
	::box2D::common::math::B2Mat22 tMat = xf->R;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(293)
	return ::box2D::common::math::B2Vec2_obj::__new((xf->position->x + (((tMat->col1->x * this->m_coreV1->x) + (tMat->col2->x * this->m_coreV1->y)))),(xf->position->y + (((tMat->col1->y * this->m_coreV1->x) + (tMat->col2->y * this->m_coreV1->y)))));
}


HX_DEFINE_DYNAMIC_FUNC1(B2EdgeShape_obj,getFirstVertex,return )

bool B2EdgeShape_obj::corner2IsConvex( ){
	HX_STACK_PUSH("B2EdgeShape::corner2IsConvex","box2D/collision/shapes/B2EdgeShape.hx",282);
	HX_STACK_THIS(this);
	HX_STACK_LINE(282)
	return this->m_cornerConvex2;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,corner2IsConvex,return )

bool B2EdgeShape_obj::corner1IsConvex( ){
	HX_STACK_PUSH("B2EdgeShape::corner1IsConvex","box2D/collision/shapes/B2EdgeShape.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_LINE(273)
	return this->m_cornerConvex1;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,corner1IsConvex,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getCorner2Vector( ){
	HX_STACK_PUSH("B2EdgeShape::getCorner2Vector","box2D/collision/shapes/B2EdgeShape.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(264)
	return this->m_cornerDir2;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getCorner2Vector,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getCorner1Vector( ){
	HX_STACK_PUSH("B2EdgeShape::getCorner1Vector","box2D/collision/shapes/B2EdgeShape.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_LINE(255)
	return this->m_cornerDir1;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getCorner1Vector,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getDirectionVector( ){
	HX_STACK_PUSH("B2EdgeShape::getDirectionVector","box2D/collision/shapes/B2EdgeShape.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_LINE(246)
	return this->m_direction;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getDirectionVector,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getNormalVector( ){
	HX_STACK_PUSH("B2EdgeShape::getNormalVector","box2D/collision/shapes/B2EdgeShape.hx",236);
	HX_STACK_THIS(this);
	HX_STACK_LINE(236)
	return this->m_normal;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getNormalVector,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getCoreVertex2( ){
	HX_STACK_PUSH("B2EdgeShape::getCoreVertex2","box2D/collision/shapes/B2EdgeShape.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	return this->m_coreV2;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getCoreVertex2,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getCoreVertex1( ){
	HX_STACK_PUSH("B2EdgeShape::getCoreVertex1","box2D/collision/shapes/B2EdgeShape.hx",217);
	HX_STACK_THIS(this);
	HX_STACK_LINE(217)
	return this->m_coreV1;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getCoreVertex1,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getVertex2( ){
	HX_STACK_PUSH("B2EdgeShape::getVertex2","box2D/collision/shapes/B2EdgeShape.hx",207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(207)
	return this->m_v2;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getVertex2,return )

::box2D::common::math::B2Vec2 B2EdgeShape_obj::getVertex1( ){
	HX_STACK_PUSH("B2EdgeShape::getVertex1","box2D/collision/shapes/B2EdgeShape.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(199)
	return this->m_v1;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getVertex1,return )

Float B2EdgeShape_obj::getLength( ){
	HX_STACK_PUSH("B2EdgeShape::getLength","box2D/collision/shapes/B2EdgeShape.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_LINE(191)
	return this->m_length;
}


HX_DEFINE_DYNAMIC_FUNC0(B2EdgeShape_obj,getLength,return )

Float B2EdgeShape_obj::computeSubmergedArea( ::box2D::common::math::B2Vec2 normal,Float offset,::box2D::common::math::B2Transform xf,::box2D::common::math::B2Vec2 c){
	HX_STACK_PUSH("B2EdgeShape::computeSubmergedArea","box2D/collision/shapes/B2EdgeShape.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(normal,"normal");
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(xf,"xf");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(143)
	::box2D::common::math::B2Vec2 v0 = ::box2D::common::math::B2Vec2_obj::__new((normal->x * offset),(normal->y * offset));		HX_STACK_VAR(v0,"v0");
	HX_STACK_LINE(145)
	::box2D::common::math::B2Vec2 v1 = ::box2D::common::math::B2Math_obj::mulX(xf,this->m_v1,true);		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(146)
	::box2D::common::math::B2Vec2 v2 = ::box2D::common::math::B2Math_obj::mulX(xf,this->m_v2,true);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(148)
	Float d1 = (::box2D::common::math::B2Math_obj::dot(normal,v1) - offset);		HX_STACK_VAR(d1,"d1");
	HX_STACK_LINE(149)
	Float d2 = (::box2D::common::math::B2Math_obj::dot(normal,v2) - offset);		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(150)
	if (((d1 > (int)0))){
		HX_STACK_LINE(151)
		if (((d2 > (int)0))){
			HX_STACK_LINE(153)
			return (int)0;
		}
		else{
			HX_STACK_LINE(159)
			v1->x = (((Float(-(d2)) / Float(((d1 - d2)))) * v1->x) + ((Float(d1) / Float(((d1 - d2)))) * v2->x));
			HX_STACK_LINE(160)
			v1->y = (((Float(-(d2)) / Float(((d1 - d2)))) * v1->y) + ((Float(d1) / Float(((d1 - d2)))) * v2->y));
		}
	}
	else{
		HX_STACK_LINE(164)
		if (((d2 > (int)0))){
			HX_STACK_LINE(168)
			v2->x = (((Float(-(d2)) / Float(((d1 - d2)))) * v1->x) + ((Float(d1) / Float(((d1 - d2)))) * v2->x));
			HX_STACK_LINE(169)
			v2->y = (((Float(-(d2)) / Float(((d1 - d2)))) * v1->y) + ((Float(d1) / Float(((d1 - d2)))) * v2->y));
		}
		else{
		}
	}
	HX_STACK_LINE(178)
	c->x = (Float((((v0->x + v1->x) + v2->x))) / Float((int)3));
	HX_STACK_LINE(179)
	c->y = (Float((((v0->y + v1->y) + v2->y))) / Float((int)3));
	HX_STACK_LINE(184)
	return (0.5 * (((((v1->x - v0->x)) * ((v2->y - v0->y))) - (((v1->y - v0->y)) * ((v2->x - v0->x))))));
}


Void B2EdgeShape_obj::computeMass( ::box2D::collision::shapes::B2MassData massData,Float density){
{
		HX_STACK_PUSH("B2EdgeShape::computeMass","box2D/collision/shapes/B2EdgeShape.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_ARG(massData,"massData");
		HX_STACK_ARG(density,"density");
		HX_STACK_LINE(126)
		massData->mass = (int)0;
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::box2D::common::math::B2Vec2 _this = massData->center;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_v1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(127)
			_this->x = v->x;
			HX_STACK_LINE(127)
			_this->y = v->y;
		}
		HX_STACK_LINE(128)
		massData->I = (int)0;
	}
return null();
}


Void B2EdgeShape_obj::computeAABB( ::box2D::collision::B2AABB aabb,::box2D::common::math::B2Transform transform){
{
		HX_STACK_PUSH("B2EdgeShape::computeAABB","box2D/collision/shapes/B2EdgeShape.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(aabb,"aabb");
		HX_STACK_ARG(transform,"transform");
		HX_STACK_LINE(99)
		::box2D::common::math::B2Mat22 tMat = transform->R;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(101)
		Float v1X = (transform->position->x + (((tMat->col1->x * this->m_v1->x) + (tMat->col2->x * this->m_v1->y))));		HX_STACK_VAR(v1X,"v1X");
		HX_STACK_LINE(102)
		Float v1Y = (transform->position->y + (((tMat->col1->y * this->m_v1->x) + (tMat->col2->y * this->m_v1->y))));		HX_STACK_VAR(v1Y,"v1Y");
		HX_STACK_LINE(104)
		Float v2X = (transform->position->x + (((tMat->col1->x * this->m_v2->x) + (tMat->col2->x * this->m_v2->y))));		HX_STACK_VAR(v2X,"v2X");
		HX_STACK_LINE(105)
		Float v2Y = (transform->position->y + (((tMat->col1->y * this->m_v2->x) + (tMat->col2->y * this->m_v2->y))));		HX_STACK_VAR(v2Y,"v2Y");
		HX_STACK_LINE(106)
		if (((v1X < v2X))){
			HX_STACK_LINE(107)
			aabb->lowerBound->x = v1X;
			HX_STACK_LINE(108)
			aabb->upperBound->x = v2X;
		}
		else{
			HX_STACK_LINE(110)
			aabb->lowerBound->x = v2X;
			HX_STACK_LINE(111)
			aabb->upperBound->x = v1X;
		}
		HX_STACK_LINE(113)
		if (((v1Y < v2Y))){
			HX_STACK_LINE(114)
			aabb->lowerBound->y = v1Y;
			HX_STACK_LINE(115)
			aabb->upperBound->y = v2Y;
		}
		else{
			HX_STACK_LINE(117)
			aabb->lowerBound->y = v2Y;
			HX_STACK_LINE(118)
			aabb->upperBound->y = v1Y;
		}
	}
return null();
}


bool B2EdgeShape_obj::rayCast( ::box2D::collision::B2RayCastOutput output,::box2D::collision::B2RayCastInput input,::box2D::common::math::B2Transform transform){
	HX_STACK_PUSH("B2EdgeShape::rayCast","box2D/collision/shapes/B2EdgeShape.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_ARG(output,"output");
	HX_STACK_ARG(input,"input");
	HX_STACK_ARG(transform,"transform");
	HX_STACK_LINE(51)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(52)
	Float rX = (input->p2->x - input->p1->x);		HX_STACK_VAR(rX,"rX");
	HX_STACK_LINE(53)
	Float rY = (input->p2->y - input->p1->y);		HX_STACK_VAR(rY,"rY");
	HX_STACK_LINE(56)
	tMat = transform->R;
	HX_STACK_LINE(57)
	Float v1X = (transform->position->x + (((tMat->col1->x * this->m_v1->x) + (tMat->col2->x * this->m_v1->y))));		HX_STACK_VAR(v1X,"v1X");
	HX_STACK_LINE(58)
	Float v1Y = (transform->position->y + (((tMat->col1->y * this->m_v1->x) + (tMat->col2->y * this->m_v1->y))));		HX_STACK_VAR(v1Y,"v1Y");
	HX_STACK_LINE(61)
	Float nX = ((transform->position->y + (((tMat->col1->y * this->m_v2->x) + (tMat->col2->y * this->m_v2->y)))) - v1Y);		HX_STACK_VAR(nX,"nX");
	HX_STACK_LINE(62)
	Float nY = -((((transform->position->x + (((tMat->col1->x * this->m_v2->x) + (tMat->col2->x * this->m_v2->y)))) - v1X)));		HX_STACK_VAR(nY,"nY");
	HX_STACK_LINE(64)
	Float k_slop = (100.0 * 2.2250738585072014e-308);		HX_STACK_VAR(k_slop,"k_slop");
	HX_STACK_LINE(65)
	Float denom = -((((rX * nX) + (rY * nY))));		HX_STACK_VAR(denom,"denom");
	HX_STACK_LINE(68)
	if (((denom > k_slop))){
		HX_STACK_LINE(71)
		Float bX = (input->p1->x - v1X);		HX_STACK_VAR(bX,"bX");
		HX_STACK_LINE(72)
		Float bY = (input->p1->y - v1Y);		HX_STACK_VAR(bY,"bY");
		HX_STACK_LINE(73)
		Float a = ((bX * nX) + (bY * nY));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(75)
		if (((bool((0.0 <= a)) && bool((a <= (input->maxFraction * denom)))))){
			HX_STACK_LINE(77)
			Float mu2 = ((-(rX) * bY) + (rY * bX));		HX_STACK_VAR(mu2,"mu2");
			HX_STACK_LINE(80)
			if (((bool(((-(k_slop) * denom) <= mu2)) && bool((mu2 <= (denom * ((1.0 + k_slop)))))))){
				HX_STACK_LINE(82)
				hx::DivEq(a,denom);
				HX_STACK_LINE(83)
				output->fraction = a;
				HX_STACK_LINE(84)
				Float nLen = ::Math_obj::sqrt(((nX * nX) + (nY * nY)));		HX_STACK_VAR(nLen,"nLen");
				HX_STACK_LINE(85)
				output->normal->x = (Float(nX) / Float(nLen));
				HX_STACK_LINE(86)
				output->normal->y = (Float(nY) / Float(nLen));
				HX_STACK_LINE(87)
				return true;
			}
		}
	}
	HX_STACK_LINE(92)
	return false;
}


bool B2EdgeShape_obj::testPoint( ::box2D::common::math::B2Transform transform,::box2D::common::math::B2Vec2 p){
	HX_STACK_PUSH("B2EdgeShape::testPoint","box2D/collision/shapes/B2EdgeShape.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_ARG(transform,"transform");
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(42)
	return false;
}



B2EdgeShape_obj::B2EdgeShape_obj()
{
}

void B2EdgeShape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2EdgeShape);
	HX_MARK_MEMBER_NAME(m_prevEdge,"m_prevEdge");
	HX_MARK_MEMBER_NAME(m_nextEdge,"m_nextEdge");
	HX_MARK_MEMBER_NAME(m_cornerConvex2,"m_cornerConvex2");
	HX_MARK_MEMBER_NAME(m_cornerConvex1,"m_cornerConvex1");
	HX_MARK_MEMBER_NAME(m_cornerDir2,"m_cornerDir2");
	HX_MARK_MEMBER_NAME(m_cornerDir1,"m_cornerDir1");
	HX_MARK_MEMBER_NAME(m_direction,"m_direction");
	HX_MARK_MEMBER_NAME(m_normal,"m_normal");
	HX_MARK_MEMBER_NAME(m_length,"m_length");
	HX_MARK_MEMBER_NAME(m_coreV2,"m_coreV2");
	HX_MARK_MEMBER_NAME(m_coreV1,"m_coreV1");
	HX_MARK_MEMBER_NAME(m_hasVertex3,"m_hasVertex3");
	HX_MARK_MEMBER_NAME(m_hasVertex0,"m_hasVertex0");
	HX_MARK_MEMBER_NAME(m_v3,"m_v3");
	HX_MARK_MEMBER_NAME(m_v0,"m_v0");
	HX_MARK_MEMBER_NAME(m_v2,"m_v2");
	HX_MARK_MEMBER_NAME(m_v1,"m_v1");
	HX_MARK_MEMBER_NAME(s_supportVec,"s_supportVec");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2EdgeShape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_prevEdge,"m_prevEdge");
	HX_VISIT_MEMBER_NAME(m_nextEdge,"m_nextEdge");
	HX_VISIT_MEMBER_NAME(m_cornerConvex2,"m_cornerConvex2");
	HX_VISIT_MEMBER_NAME(m_cornerConvex1,"m_cornerConvex1");
	HX_VISIT_MEMBER_NAME(m_cornerDir2,"m_cornerDir2");
	HX_VISIT_MEMBER_NAME(m_cornerDir1,"m_cornerDir1");
	HX_VISIT_MEMBER_NAME(m_direction,"m_direction");
	HX_VISIT_MEMBER_NAME(m_normal,"m_normal");
	HX_VISIT_MEMBER_NAME(m_length,"m_length");
	HX_VISIT_MEMBER_NAME(m_coreV2,"m_coreV2");
	HX_VISIT_MEMBER_NAME(m_coreV1,"m_coreV1");
	HX_VISIT_MEMBER_NAME(m_hasVertex3,"m_hasVertex3");
	HX_VISIT_MEMBER_NAME(m_hasVertex0,"m_hasVertex0");
	HX_VISIT_MEMBER_NAME(m_v3,"m_v3");
	HX_VISIT_MEMBER_NAME(m_v0,"m_v0");
	HX_VISIT_MEMBER_NAME(m_v2,"m_v2");
	HX_VISIT_MEMBER_NAME(m_v1,"m_v1");
	HX_VISIT_MEMBER_NAME(s_supportVec,"s_supportVec");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2EdgeShape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_v3") ) { return m_v3; }
		if (HX_FIELD_EQ(inName,"m_v0") ) { return m_v0; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { return m_v2; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { return m_v1; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"support") ) { return support_dyn(); }
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_normal") ) { return m_normal; }
		if (HX_FIELD_EQ(inName,"m_length") ) { return m_length; }
		if (HX_FIELD_EQ(inName,"m_coreV2") ) { return m_coreV2; }
		if (HX_FIELD_EQ(inName,"m_coreV1") ) { return m_coreV1; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"testPoint") ) { return testPoint_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_prevEdge") ) { return m_prevEdge; }
		if (HX_FIELD_EQ(inName,"m_nextEdge") ) { return m_nextEdge; }
		if (HX_FIELD_EQ(inName,"getVertex2") ) { return getVertex2_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertex1") ) { return getVertex1_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_direction") ) { return m_direction; }
		if (HX_FIELD_EQ(inName,"setNextEdge") ) { return setNextEdge_dyn(); }
		if (HX_FIELD_EQ(inName,"setPrevEdge") ) { return setPrevEdge_dyn(); }
		if (HX_FIELD_EQ(inName,"getPrevEdge") ) { return getPrevEdge_dyn(); }
		if (HX_FIELD_EQ(inName,"getNextEdge") ) { return getNextEdge_dyn(); }
		if (HX_FIELD_EQ(inName,"computeMass") ) { return computeMass_dyn(); }
		if (HX_FIELD_EQ(inName,"computeAABB") ) { return computeAABB_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_cornerDir2") ) { return m_cornerDir2; }
		if (HX_FIELD_EQ(inName,"m_cornerDir1") ) { return m_cornerDir1; }
		if (HX_FIELD_EQ(inName,"m_hasVertex3") ) { return m_hasVertex3; }
		if (HX_FIELD_EQ(inName,"m_hasVertex0") ) { return m_hasVertex0; }
		if (HX_FIELD_EQ(inName,"s_supportVec") ) { return s_supportVec; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFirstVertex") ) { return getFirstVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"getCoreVertex2") ) { return getCoreVertex2_dyn(); }
		if (HX_FIELD_EQ(inName,"getCoreVertex1") ) { return getCoreVertex1_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_cornerConvex2") ) { return m_cornerConvex2; }
		if (HX_FIELD_EQ(inName,"m_cornerConvex1") ) { return m_cornerConvex1; }
		if (HX_FIELD_EQ(inName,"corner2IsConvex") ) { return corner2IsConvex_dyn(); }
		if (HX_FIELD_EQ(inName,"corner1IsConvex") ) { return corner1IsConvex_dyn(); }
		if (HX_FIELD_EQ(inName,"getNormalVector") ) { return getNormalVector_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCorner2Vector") ) { return getCorner2Vector_dyn(); }
		if (HX_FIELD_EQ(inName,"getCorner1Vector") ) { return getCorner1Vector_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDirectionVector") ) { return getDirectionVector_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"computeSubmergedArea") ) { return computeSubmergedArea_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2EdgeShape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_v3") ) { m_v3=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v0") ) { m_v0=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v2") ) { m_v2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_v1") ) { m_v1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_normal") ) { m_normal=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_length") ) { m_length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_coreV2") ) { m_coreV2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_coreV1") ) { m_coreV1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_prevEdge") ) { m_prevEdge=inValue.Cast< ::box2D::collision::shapes::B2EdgeShape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nextEdge") ) { m_nextEdge=inValue.Cast< ::box2D::collision::shapes::B2EdgeShape >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_direction") ) { m_direction=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_cornerDir2") ) { m_cornerDir2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_cornerDir1") ) { m_cornerDir1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_hasVertex3") ) { m_hasVertex3=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_hasVertex0") ) { m_hasVertex0=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s_supportVec") ) { s_supportVec=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_cornerConvex2") ) { m_cornerConvex2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_cornerConvex1") ) { m_cornerConvex1=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2EdgeShape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_prevEdge"));
	outFields->push(HX_CSTRING("m_nextEdge"));
	outFields->push(HX_CSTRING("m_cornerConvex2"));
	outFields->push(HX_CSTRING("m_cornerConvex1"));
	outFields->push(HX_CSTRING("m_cornerDir2"));
	outFields->push(HX_CSTRING("m_cornerDir1"));
	outFields->push(HX_CSTRING("m_direction"));
	outFields->push(HX_CSTRING("m_normal"));
	outFields->push(HX_CSTRING("m_length"));
	outFields->push(HX_CSTRING("m_coreV2"));
	outFields->push(HX_CSTRING("m_coreV1"));
	outFields->push(HX_CSTRING("m_hasVertex3"));
	outFields->push(HX_CSTRING("m_hasVertex0"));
	outFields->push(HX_CSTRING("m_v3"));
	outFields->push(HX_CSTRING("m_v0"));
	outFields->push(HX_CSTRING("m_v2"));
	outFields->push(HX_CSTRING("m_v1"));
	outFields->push(HX_CSTRING("s_supportVec"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_prevEdge"),
	HX_CSTRING("m_nextEdge"),
	HX_CSTRING("m_cornerConvex2"),
	HX_CSTRING("m_cornerConvex1"),
	HX_CSTRING("m_cornerDir2"),
	HX_CSTRING("m_cornerDir1"),
	HX_CSTRING("m_direction"),
	HX_CSTRING("m_normal"),
	HX_CSTRING("m_length"),
	HX_CSTRING("m_coreV2"),
	HX_CSTRING("m_coreV1"),
	HX_CSTRING("m_hasVertex3"),
	HX_CSTRING("m_hasVertex0"),
	HX_CSTRING("m_v3"),
	HX_CSTRING("m_v0"),
	HX_CSTRING("m_v2"),
	HX_CSTRING("m_v1"),
	HX_CSTRING("setNextEdge"),
	HX_CSTRING("setPrevEdge"),
	HX_CSTRING("copy"),
	HX_CSTRING("support"),
	HX_CSTRING("s_supportVec"),
	HX_CSTRING("getPrevEdge"),
	HX_CSTRING("getNextEdge"),
	HX_CSTRING("getFirstVertex"),
	HX_CSTRING("corner2IsConvex"),
	HX_CSTRING("corner1IsConvex"),
	HX_CSTRING("getCorner2Vector"),
	HX_CSTRING("getCorner1Vector"),
	HX_CSTRING("getDirectionVector"),
	HX_CSTRING("getNormalVector"),
	HX_CSTRING("getCoreVertex2"),
	HX_CSTRING("getCoreVertex1"),
	HX_CSTRING("getVertex2"),
	HX_CSTRING("getVertex1"),
	HX_CSTRING("getLength"),
	HX_CSTRING("computeSubmergedArea"),
	HX_CSTRING("computeMass"),
	HX_CSTRING("computeAABB"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("testPoint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2EdgeShape_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2EdgeShape_obj::__mClass,"__mClass");
};

Class B2EdgeShape_obj::__mClass;

void B2EdgeShape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.shapes.B2EdgeShape"), hx::TCanCast< B2EdgeShape_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2EdgeShape_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
} // end namespace shapes
