#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Distance
#include <box2D/collision/B2Distance.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceInput
#include <box2D/collision/B2DistanceInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceOutput
#include <box2D/collision/B2DistanceOutput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceProxy
#include <box2D/collision/B2DistanceProxy.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastInput
#include <box2D/collision/B2RayCastInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastOutput
#include <box2D/collision/B2RayCastOutput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2SimplexCache
#include <box2D/collision/B2SimplexCache.h>
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
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
namespace box2D{
namespace collision{
namespace shapes{

Void B2Shape_obj::__construct()
{
HX_STACK_PUSH("B2Shape::new","box2D/collision/shapes/B2Shape.hx",163);
{
	HX_STACK_LINE(164)
	this->m_type = ::box2D::collision::shapes::B2Shape_obj::e_unknownShape;
	HX_STACK_LINE(165)
	this->m_radius = ::box2D::common::B2Settings_obj::b2_linearSlop;
}
;
	return null();
}

B2Shape_obj::~B2Shape_obj() { }

Dynamic B2Shape_obj::__CreateEmpty() { return  new B2Shape_obj; }
hx::ObjectPtr< B2Shape_obj > B2Shape_obj::__new()
{  hx::ObjectPtr< B2Shape_obj > result = new B2Shape_obj();
	result->__construct();
	return result;}

Dynamic B2Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Shape_obj > result = new B2Shape_obj();
	result->__construct();
	return result;}

Float B2Shape_obj::computeSubmergedArea( ::box2D::common::math::B2Vec2 normal,Float offset,::box2D::common::math::B2Transform xf,::box2D::common::math::B2Vec2 c){
	HX_STACK_PUSH("B2Shape::computeSubmergedArea","box2D/collision/shapes/B2Shape.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(normal,"normal");
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(xf,"xf");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(119)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(B2Shape_obj,computeSubmergedArea,return )

Void B2Shape_obj::computeMass( ::box2D::collision::shapes::B2MassData massData,Float density){
{
		HX_STACK_PUSH("B2Shape::computeMass","box2D/collision/shapes/B2Shape.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(massData,"massData");
		HX_STACK_ARG(density,"density");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Shape_obj,computeMass,(void))

Void B2Shape_obj::computeAABB( ::box2D::collision::B2AABB aabb,::box2D::common::math::B2Transform xf){
{
		HX_STACK_PUSH("B2Shape::computeAABB","box2D/collision/shapes/B2Shape.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(aabb,"aabb");
		HX_STACK_ARG(xf,"xf");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Shape_obj,computeAABB,(void))

bool B2Shape_obj::rayCast( ::box2D::collision::B2RayCastOutput output,::box2D::collision::B2RayCastInput input,::box2D::common::math::B2Transform transform){
	HX_STACK_PUSH("B2Shape::rayCast","box2D/collision/shapes/B2Shape.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(output,"output");
	HX_STACK_ARG(input,"input");
	HX_STACK_ARG(transform,"transform");
	HX_STACK_LINE(89)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(B2Shape_obj,rayCast,return )

bool B2Shape_obj::testPoint( ::box2D::common::math::B2Transform xf,::box2D::common::math::B2Vec2 p){
	HX_STACK_PUSH("B2Shape::testPoint","box2D/collision/shapes/B2Shape.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xf,"xf");
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(80)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(B2Shape_obj,testPoint,return )

int B2Shape_obj::getType( ){
	HX_STACK_PUSH("B2Shape::getType","box2D/collision/shapes/B2Shape.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_LINE(71)
	return this->m_type;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Shape_obj,getType,return )

Void B2Shape_obj::set( ::box2D::collision::shapes::B2Shape other){
{
		HX_STACK_PUSH("B2Shape::set","box2D/collision/shapes/B2Shape.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_ARG(other,"other");
		HX_STACK_LINE(60)
		this->m_radius = other->m_radius;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Shape_obj,set,(void))

::box2D::collision::shapes::B2Shape B2Shape_obj::copy( ){
	HX_STACK_PUSH("B2Shape::copy","box2D/collision/shapes/B2Shape.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Shape_obj,copy,return )

bool B2Shape_obj::testOverlap( ::box2D::collision::shapes::B2Shape shape1,::box2D::common::math::B2Transform transform1,::box2D::collision::shapes::B2Shape shape2,::box2D::common::math::B2Transform transform2){
	HX_STACK_PUSH("B2Shape::testOverlap","box2D/collision/shapes/B2Shape.hx",122);
	HX_STACK_ARG(shape1,"shape1");
	HX_STACK_ARG(transform1,"transform1");
	HX_STACK_ARG(shape2,"shape2");
	HX_STACK_ARG(transform2,"transform2");
	HX_STACK_LINE(123)
	::box2D::collision::B2DistanceInput input = ::box2D::collision::B2DistanceInput_obj::__new();		HX_STACK_VAR(input,"input");
	HX_STACK_LINE(124)
	input->proxyA = ::box2D::collision::B2DistanceProxy_obj::__new();
	HX_STACK_LINE(125)
	input->proxyA->set(shape1);
	HX_STACK_LINE(126)
	input->proxyB = ::box2D::collision::B2DistanceProxy_obj::__new();
	HX_STACK_LINE(127)
	input->proxyB->set(shape2);
	HX_STACK_LINE(128)
	input->transformA = transform1;
	HX_STACK_LINE(129)
	input->transformB = transform2;
	HX_STACK_LINE(130)
	input->useRadii = true;
	HX_STACK_LINE(131)
	::box2D::collision::B2SimplexCache simplexCache = ::box2D::collision::B2SimplexCache_obj::__new();		HX_STACK_VAR(simplexCache,"simplexCache");
	HX_STACK_LINE(132)
	simplexCache->count = (int)0;
	HX_STACK_LINE(133)
	::box2D::collision::B2DistanceOutput output = ::box2D::collision::B2DistanceOutput_obj::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(134)
	::box2D::collision::B2Distance_obj::distance(output,simplexCache,input);
	HX_STACK_LINE(135)
	return (output->distance < (10.0 * 2.2250738585072014e-308));
	HX_STACK_LINE(148)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(B2Shape_obj,testOverlap,return )

::box2D::collision::B2DistanceInput B2Shape_obj::distanceInput;

::box2D::collision::B2DistanceProxy B2Shape_obj::proxyA;

::box2D::collision::B2DistanceProxy B2Shape_obj::proxyB;

::box2D::collision::B2SimplexCache B2Shape_obj::simplexCache;

::box2D::collision::B2DistanceOutput B2Shape_obj::distanceOutput;

int B2Shape_obj::e_unknownShape;

int B2Shape_obj::e_circleShape;

int B2Shape_obj::e_polygonShape;

int B2Shape_obj::e_edgeShape;

int B2Shape_obj::e_shapeTypeCount;

int B2Shape_obj::e_hitCollide;

int B2Shape_obj::e_missCollide;

int B2Shape_obj::e_startsInsideCollide;


B2Shape_obj::B2Shape_obj()
{
}

void B2Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Shape);
	HX_MARK_MEMBER_NAME(m_radius,"m_radius");
	HX_MARK_MEMBER_NAME(m_type,"m_type");
	HX_MARK_END_CLASS();
}

void B2Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_radius,"m_radius");
	HX_VISIT_MEMBER_NAME(m_type,"m_type");
}

Dynamic B2Shape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"proxyA") ) { return proxyA; }
		if (HX_FIELD_EQ(inName,"proxyB") ) { return proxyB; }
		if (HX_FIELD_EQ(inName,"m_type") ) { return m_type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_radius") ) { return m_radius; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testPoint") ) { return testPoint_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testOverlap") ) { return testOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"e_edgeShape") ) { return e_edgeShape; }
		if (HX_FIELD_EQ(inName,"computeMass") ) { return computeMass_dyn(); }
		if (HX_FIELD_EQ(inName,"computeAABB") ) { return computeAABB_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplexCache") ) { return simplexCache; }
		if (HX_FIELD_EQ(inName,"e_hitCollide") ) { return e_hitCollide; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceInput") ) { return distanceInput; }
		if (HX_FIELD_EQ(inName,"e_circleShape") ) { return e_circleShape; }
		if (HX_FIELD_EQ(inName,"e_missCollide") ) { return e_missCollide; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"distanceOutput") ) { return distanceOutput; }
		if (HX_FIELD_EQ(inName,"e_unknownShape") ) { return e_unknownShape; }
		if (HX_FIELD_EQ(inName,"e_polygonShape") ) { return e_polygonShape; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_shapeTypeCount") ) { return e_shapeTypeCount; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"computeSubmergedArea") ) { return computeSubmergedArea_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"e_startsInsideCollide") ) { return e_startsInsideCollide; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"proxyA") ) { proxyA=inValue.Cast< ::box2D::collision::B2DistanceProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"proxyB") ) { proxyB=inValue.Cast< ::box2D::collision::B2DistanceProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_type") ) { m_type=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_radius") ) { m_radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"e_edgeShape") ) { e_edgeShape=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplexCache") ) { simplexCache=inValue.Cast< ::box2D::collision::B2SimplexCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_hitCollide") ) { e_hitCollide=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceInput") ) { distanceInput=inValue.Cast< ::box2D::collision::B2DistanceInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_circleShape") ) { e_circleShape=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_missCollide") ) { e_missCollide=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"distanceOutput") ) { distanceOutput=inValue.Cast< ::box2D::collision::B2DistanceOutput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_unknownShape") ) { e_unknownShape=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_polygonShape") ) { e_polygonShape=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_shapeTypeCount") ) { e_shapeTypeCount=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"e_startsInsideCollide") ) { e_startsInsideCollide=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_radius"));
	outFields->push(HX_CSTRING("m_type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("testOverlap"),
	HX_CSTRING("distanceInput"),
	HX_CSTRING("proxyA"),
	HX_CSTRING("proxyB"),
	HX_CSTRING("simplexCache"),
	HX_CSTRING("distanceOutput"),
	HX_CSTRING("e_unknownShape"),
	HX_CSTRING("e_circleShape"),
	HX_CSTRING("e_polygonShape"),
	HX_CSTRING("e_edgeShape"),
	HX_CSTRING("e_shapeTypeCount"),
	HX_CSTRING("e_hitCollide"),
	HX_CSTRING("e_missCollide"),
	HX_CSTRING("e_startsInsideCollide"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_radius"),
	HX_CSTRING("m_type"),
	HX_CSTRING("computeSubmergedArea"),
	HX_CSTRING("computeMass"),
	HX_CSTRING("computeAABB"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("testPoint"),
	HX_CSTRING("getType"),
	HX_CSTRING("set"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Shape_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Shape_obj::distanceInput,"distanceInput");
	HX_MARK_MEMBER_NAME(B2Shape_obj::proxyA,"proxyA");
	HX_MARK_MEMBER_NAME(B2Shape_obj::proxyB,"proxyB");
	HX_MARK_MEMBER_NAME(B2Shape_obj::simplexCache,"simplexCache");
	HX_MARK_MEMBER_NAME(B2Shape_obj::distanceOutput,"distanceOutput");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_unknownShape,"e_unknownShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_circleShape,"e_circleShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_polygonShape,"e_polygonShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_edgeShape,"e_edgeShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_shapeTypeCount,"e_shapeTypeCount");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_hitCollide,"e_hitCollide");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_missCollide,"e_missCollide");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_startsInsideCollide,"e_startsInsideCollide");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Shape_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::distanceInput,"distanceInput");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::proxyA,"proxyA");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::proxyB,"proxyB");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::simplexCache,"simplexCache");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::distanceOutput,"distanceOutput");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_unknownShape,"e_unknownShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_circleShape,"e_circleShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_polygonShape,"e_polygonShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_edgeShape,"e_edgeShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_shapeTypeCount,"e_shapeTypeCount");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_hitCollide,"e_hitCollide");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_missCollide,"e_missCollide");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_startsInsideCollide,"e_startsInsideCollide");
};

Class B2Shape_obj::__mClass;

void B2Shape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.shapes.B2Shape"), hx::TCanCast< B2Shape_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Shape_obj::__boot()
{
	distanceInput= ::box2D::collision::B2DistanceInput_obj::__new();
	proxyA= ::box2D::collision::B2DistanceProxy_obj::__new();
	proxyB= ::box2D::collision::B2DistanceProxy_obj::__new();
	simplexCache= ::box2D::collision::B2SimplexCache_obj::__new();
	distanceOutput= ::box2D::collision::B2DistanceOutput_obj::__new();
	e_unknownShape= (int)-1;
	e_circleShape= (int)0;
	e_polygonShape= (int)1;
	e_edgeShape= (int)2;
	e_shapeTypeCount= (int)3;
	e_hitCollide= (int)1;
	e_missCollide= (int)0;
	e_startsInsideCollide= (int)-1;
}

} // end namespace box2D
} // end namespace collision
} // end namespace shapes
