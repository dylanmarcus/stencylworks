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
#ifndef INCLUDED_box2D_collision_IBroadPhase
#include <box2D/collision/IBroadPhase.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2MassData
#include <box2D/collision/shapes/B2MassData.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
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
#ifndef INCLUDED_box2D_dynamics_B2FilterData
#include <box2D/dynamics/B2FilterData.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#include <box2D/dynamics/B2FixtureDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#include <box2D/dynamics/contacts/B2ContactEdge.h>
#endif
namespace box2D{
namespace dynamics{

Void B2Fixture_obj::__construct()
{
HX_STACK_PUSH("B2Fixture::new","box2D/dynamics/B2Fixture.hx",263);
{
	HX_STACK_LINE(264)
	this->m_filter = ::box2D::dynamics::B2FilterData_obj::__new();
	HX_STACK_LINE(265)
	this->m_aabb = ::box2D::collision::B2AABB_obj::__new();
	HX_STACK_LINE(266)
	this->m_userData = null();
	HX_STACK_LINE(267)
	this->m_body = null();
	HX_STACK_LINE(268)
	this->m_next = null();
	HX_STACK_LINE(270)
	this->m_shape = null();
	HX_STACK_LINE(271)
	this->m_density = 0.0;
	HX_STACK_LINE(273)
	this->m_friction = 0.0;
	HX_STACK_LINE(274)
	this->m_restitution = 0.0;
	HX_STACK_LINE(276)
	this->groupID = (int)3;
}
;
	return null();
}

B2Fixture_obj::~B2Fixture_obj() { }

Dynamic B2Fixture_obj::__CreateEmpty() { return  new B2Fixture_obj; }
hx::ObjectPtr< B2Fixture_obj > B2Fixture_obj::__new()
{  hx::ObjectPtr< B2Fixture_obj > result = new B2Fixture_obj();
	result->__construct();
	return result;}

Dynamic B2Fixture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Fixture_obj > result = new B2Fixture_obj();
	result->__construct();
	return result;}

Void B2Fixture_obj::synchronize( ::box2D::collision::IBroadPhase broadPhase,::box2D::common::math::B2Transform transform1,::box2D::common::math::B2Transform transform2){
{
		HX_STACK_PUSH("B2Fixture::synchronize","box2D/dynamics/B2Fixture.hx",343);
		HX_STACK_THIS(this);
		HX_STACK_ARG(broadPhase,"broadPhase");
		HX_STACK_ARG(transform1,"transform1");
		HX_STACK_ARG(transform2,"transform2");
		HX_STACK_LINE(344)
		if (((this->m_proxy == null()))){
			HX_STACK_LINE(345)
			return null();
		}
		HX_STACK_LINE(350)
		this->m_shape->computeAABB(::box2D::dynamics::B2Fixture_obj::tempAABB1,transform1);
		HX_STACK_LINE(351)
		this->m_shape->computeAABB(::box2D::dynamics::B2Fixture_obj::tempAABB2,transform2);
		HX_STACK_LINE(353)
		this->m_aabb->combine(::box2D::dynamics::B2Fixture_obj::tempAABB1,::box2D::dynamics::B2Fixture_obj::tempAABB2);
		HX_STACK_LINE(354)
		::box2D::common::math::B2Vec2 displacement = ::box2D::common::math::B2Math_obj::subtractVVPooled(transform2->position,transform1->position);		HX_STACK_VAR(displacement,"displacement");
		HX_STACK_LINE(355)
		broadPhase->moveProxy(this->m_proxy,this->m_aabb,displacement);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2Fixture_obj,synchronize,(void))

Void B2Fixture_obj::destroyProxy( ::box2D::collision::IBroadPhase broadPhase){
{
		HX_STACK_PUSH("B2Fixture::destroyProxy","box2D/dynamics/B2Fixture.hx",331);
		HX_STACK_THIS(this);
		HX_STACK_ARG(broadPhase,"broadPhase");
		HX_STACK_LINE(332)
		if (((this->m_proxy == null()))){
			HX_STACK_LINE(333)
			return null();
		}
		HX_STACK_LINE(338)
		broadPhase->destroyProxy(this->m_proxy);
		HX_STACK_LINE(339)
		this->m_proxy = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,destroyProxy,(void))

Void B2Fixture_obj::createProxy( ::box2D::collision::IBroadPhase broadPhase,::box2D::common::math::B2Transform xf){
{
		HX_STACK_PUSH("B2Fixture::createProxy","box2D/dynamics/B2Fixture.hx",320);
		HX_STACK_THIS(this);
		HX_STACK_ARG(broadPhase,"broadPhase");
		HX_STACK_ARG(xf,"xf");
		HX_STACK_LINE(324)
		this->m_shape->computeAABB(this->m_aabb,xf);
		HX_STACK_LINE(325)
		this->m_proxy = broadPhase->createProxy(this->m_aabb,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Fixture_obj,createProxy,(void))

Void B2Fixture_obj::destroy( ){
{
		HX_STACK_PUSH("B2Fixture::destroy","box2D/dynamics/B2Fixture.hx",309);
		HX_STACK_THIS(this);
		HX_STACK_LINE(309)
		this->m_shape = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,destroy,(void))

Void B2Fixture_obj::create( ::box2D::dynamics::B2Body body,::box2D::common::math::B2Transform xf,::box2D::dynamics::B2FixtureDef def){
{
		HX_STACK_PUSH("B2Fixture::create","box2D/dynamics/B2Fixture.hx",284);
		HX_STACK_THIS(this);
		HX_STACK_ARG(body,"body");
		HX_STACK_ARG(xf,"xf");
		HX_STACK_ARG(def,"def");
		HX_STACK_LINE(285)
		this->m_userData = def->userData;
		HX_STACK_LINE(286)
		this->m_friction = def->friction;
		HX_STACK_LINE(287)
		this->m_restitution = def->restitution;
		HX_STACK_LINE(289)
		this->m_body = body;
		HX_STACK_LINE(290)
		this->m_next = null();
		HX_STACK_LINE(292)
		this->m_filter = def->filter->copy();
		HX_STACK_LINE(294)
		this->m_isSensor = def->isSensor;
		HX_STACK_LINE(296)
		this->m_shape = def->shape->copy();
		HX_STACK_LINE(298)
		this->m_density = def->density;
		HX_STACK_LINE(301)
		this->groupID = def->groupID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2Fixture_obj,create,(void))

::box2D::collision::B2AABB B2Fixture_obj::getAABB( ){
	HX_STACK_PUSH("B2Fixture::getAABB","box2D/dynamics/B2Fixture.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_LINE(255)
	return this->m_aabb;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getAABB,return )

Void B2Fixture_obj::setRestitution( Float restitution){
{
		HX_STACK_PUSH("B2Fixture::setRestitution","box2D/dynamics/B2Fixture.hx",245);
		HX_STACK_THIS(this);
		HX_STACK_ARG(restitution,"restitution");
		HX_STACK_LINE(245)
		this->m_restitution = restitution;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,setRestitution,(void))

Float B2Fixture_obj::getRestitution( ){
	HX_STACK_PUSH("B2Fixture::getRestitution","box2D/dynamics/B2Fixture.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_LINE(237)
	return this->m_restitution;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getRestitution,return )

Void B2Fixture_obj::setFriction( Float friction){
{
		HX_STACK_PUSH("B2Fixture::setFriction","box2D/dynamics/B2Fixture.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_ARG(friction,"friction");
		HX_STACK_LINE(229)
		this->m_friction = friction;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,setFriction,(void))

Float B2Fixture_obj::getFriction( ){
	HX_STACK_PUSH("B2Fixture::getFriction","box2D/dynamics/B2Fixture.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(221)
	return this->m_friction;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getFriction,return )

Float B2Fixture_obj::getDensity( ){
	HX_STACK_PUSH("B2Fixture::getDensity","box2D/dynamics/B2Fixture.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_LINE(213)
	return this->m_density;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getDensity,return )

Void B2Fixture_obj::setDensity( Float density){
{
		HX_STACK_PUSH("B2Fixture::setDensity","box2D/dynamics/B2Fixture.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_ARG(density,"density");
		HX_STACK_LINE(204)
		this->m_density = density;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,setDensity,(void))

::box2D::collision::shapes::B2MassData B2Fixture_obj::getMassData( ::box2D::collision::shapes::B2MassData massData){
	HX_STACK_PUSH("B2Fixture::getMassData","box2D/dynamics/B2Fixture.hx",190);
	HX_STACK_THIS(this);
	HX_STACK_ARG(massData,"massData");
	HX_STACK_LINE(191)
	if (((massData == null()))){
		HX_STACK_LINE(192)
		massData = ::box2D::collision::shapes::B2MassData_obj::__new();
	}
	HX_STACK_LINE(195)
	this->m_shape->computeMass(massData,this->m_density);
	HX_STACK_LINE(196)
	return massData;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,getMassData,return )

bool B2Fixture_obj::rayCast( ::box2D::collision::B2RayCastOutput output,::box2D::collision::B2RayCastInput input){
	HX_STACK_PUSH("B2Fixture::rayCast","box2D/dynamics/B2Fixture.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_ARG(output,"output");
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(179)
	return this->m_shape->rayCast(output,input,this->m_body->getTransform());
}


HX_DEFINE_DYNAMIC_FUNC2(B2Fixture_obj,rayCast,return )

bool B2Fixture_obj::testPoint( ::box2D::common::math::B2Vec2 p){
	HX_STACK_PUSH("B2Fixture::testPoint","box2D/dynamics/B2Fixture.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(169)
	return this->m_shape->testPoint(this->m_body->getTransform(),p);
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,testPoint,return )

Void B2Fixture_obj::SetUserData( Dynamic data){
{
		HX_STACK_PUSH("B2Fixture::SetUserData","box2D/dynamics/B2Fixture.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(159)
		this->m_userData = data;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,SetUserData,(void))

Dynamic B2Fixture_obj::getUserData( ){
	HX_STACK_PUSH("B2Fixture::getUserData","box2D/dynamics/B2Fixture.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_LINE(151)
	return this->m_userData;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getUserData,return )

::box2D::dynamics::B2Fixture B2Fixture_obj::getNext( ){
	HX_STACK_PUSH("B2Fixture::getNext","box2D/dynamics/B2Fixture.hx",142);
	HX_STACK_THIS(this);
	HX_STACK_LINE(142)
	return this->m_next;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getNext,return )

::box2D::dynamics::B2Body B2Fixture_obj::getBody( ){
	HX_STACK_PUSH("B2Fixture::getBody","box2D/dynamics/B2Fixture.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(133)
	return this->m_body;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getBody,return )

::box2D::dynamics::B2FilterData B2Fixture_obj::getFilterData( ){
	HX_STACK_PUSH("B2Fixture::getFilterData","box2D/dynamics/B2Fixture.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_LINE(124)
	return this->m_filter->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getFilterData,return )

Void B2Fixture_obj::setFilterData( ::box2D::dynamics::B2FilterData filter){
{
		HX_STACK_PUSH("B2Fixture::setFilterData","box2D/dynamics/B2Fixture.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(103)
		this->m_filter = filter->copy();
		HX_STACK_LINE(105)
		if (((this->m_body != null()))){
			HX_STACK_LINE(106)
			return null();
		}
		HX_STACK_LINE(108)
		::box2D::dynamics::contacts::B2ContactEdge edge = this->m_body->getContactList();		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(109)
		while(((edge != null()))){
			HX_STACK_LINE(111)
			::box2D::dynamics::contacts::B2Contact contact = edge->contact;		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(112)
			::box2D::dynamics::B2Fixture fixtureA = contact->getFixtureA();		HX_STACK_VAR(fixtureA,"fixtureA");
			HX_STACK_LINE(113)
			::box2D::dynamics::B2Fixture fixtureB = contact->getFixtureB();		HX_STACK_VAR(fixtureB,"fixtureB");
			HX_STACK_LINE(114)
			if (((bool((fixtureA == hx::ObjectPtr<OBJ_>(this))) || bool((fixtureB == hx::ObjectPtr<OBJ_>(this)))))){
				HX_STACK_LINE(115)
				contact->flagForFiltering();
			}
			HX_STACK_LINE(116)
			edge = edge->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,setFilterData,(void))

bool B2Fixture_obj::isSensor( ){
	HX_STACK_PUSH("B2Fixture::isSensor","box2D/dynamics/B2Fixture.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return this->m_isSensor;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,isSensor,return )

Void B2Fixture_obj::setSensor( bool sensor){
{
		HX_STACK_PUSH("B2Fixture::setSensor","box2D/dynamics/B2Fixture.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sensor,"sensor");
		HX_STACK_LINE(67)
		if (((this->m_isSensor == sensor))){
			HX_STACK_LINE(68)
			return null();
		}
		HX_STACK_LINE(70)
		this->m_isSensor = sensor;
		HX_STACK_LINE(72)
		if (((this->m_body == null()))){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(75)
		::box2D::dynamics::contacts::B2ContactEdge edge = this->m_body->getContactList();		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(76)
		while(((edge != null()))){
			HX_STACK_LINE(78)
			::box2D::dynamics::contacts::B2Contact contact = edge->contact;		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(79)
			::box2D::dynamics::B2Fixture fixtureA = contact->getFixtureA();		HX_STACK_VAR(fixtureA,"fixtureA");
			HX_STACK_LINE(80)
			::box2D::dynamics::B2Fixture fixtureB = contact->getFixtureB();		HX_STACK_VAR(fixtureB,"fixtureB");
			HX_STACK_LINE(81)
			if (((bool((fixtureA == hx::ObjectPtr<OBJ_>(this))) || bool((fixtureB == hx::ObjectPtr<OBJ_>(this)))))){
				HX_STACK_LINE(82)
				contact->setSensor((bool(fixtureA->isSensor()) || bool(fixtureB->isSensor())));
			}
			HX_STACK_LINE(83)
			edge = edge->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Fixture_obj,setSensor,(void))

::box2D::collision::shapes::B2Shape B2Fixture_obj::getShape( ){
	HX_STACK_PUSH("B2Fixture::getShape","box2D/dynamics/B2Fixture.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return this->m_shape;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getShape,return )

int B2Fixture_obj::getType( ){
	HX_STACK_PUSH("B2Fixture::getType","box2D/dynamics/B2Fixture.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->m_shape->getType();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Fixture_obj,getType,return )

::box2D::collision::B2AABB B2Fixture_obj::tempAABB1;

::box2D::collision::B2AABB B2Fixture_obj::tempAABB2;


B2Fixture_obj::B2Fixture_obj()
{
}

void B2Fixture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Fixture);
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	HX_MARK_MEMBER_NAME(m_userData,"m_userData");
	HX_MARK_MEMBER_NAME(m_isSensor,"m_isSensor");
	HX_MARK_MEMBER_NAME(m_filter,"m_filter");
	HX_MARK_MEMBER_NAME(m_proxy,"m_proxy");
	HX_MARK_MEMBER_NAME(m_restitution,"m_restitution");
	HX_MARK_MEMBER_NAME(m_friction,"m_friction");
	HX_MARK_MEMBER_NAME(m_shape,"m_shape");
	HX_MARK_MEMBER_NAME(m_body,"m_body");
	HX_MARK_MEMBER_NAME(m_next,"m_next");
	HX_MARK_MEMBER_NAME(m_density,"m_density");
	HX_MARK_MEMBER_NAME(m_aabb,"m_aabb");
	HX_MARK_MEMBER_NAME(m_massData,"m_massData");
	HX_MARK_END_CLASS();
}

void B2Fixture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	HX_VISIT_MEMBER_NAME(m_userData,"m_userData");
	HX_VISIT_MEMBER_NAME(m_isSensor,"m_isSensor");
	HX_VISIT_MEMBER_NAME(m_filter,"m_filter");
	HX_VISIT_MEMBER_NAME(m_proxy,"m_proxy");
	HX_VISIT_MEMBER_NAME(m_restitution,"m_restitution");
	HX_VISIT_MEMBER_NAME(m_friction,"m_friction");
	HX_VISIT_MEMBER_NAME(m_shape,"m_shape");
	HX_VISIT_MEMBER_NAME(m_body,"m_body");
	HX_VISIT_MEMBER_NAME(m_next,"m_next");
	HX_VISIT_MEMBER_NAME(m_density,"m_density");
	HX_VISIT_MEMBER_NAME(m_aabb,"m_aabb");
	HX_VISIT_MEMBER_NAME(m_massData,"m_massData");
}

Dynamic B2Fixture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_body") ) { return m_body; }
		if (HX_FIELD_EQ(inName,"m_next") ) { return m_next; }
		if (HX_FIELD_EQ(inName,"m_aabb") ) { return m_aabb; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		if (HX_FIELD_EQ(inName,"m_proxy") ) { return m_proxy; }
		if (HX_FIELD_EQ(inName,"m_shape") ) { return m_shape; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getAABB") ) { return getAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		if (HX_FIELD_EQ(inName,"getNext") ) { return getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"getBody") ) { return getBody_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_filter") ) { return m_filter; }
		if (HX_FIELD_EQ(inName,"isSensor") ) { return isSensor_dyn(); }
		if (HX_FIELD_EQ(inName,"getShape") ) { return getShape_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tempAABB1") ) { return tempAABB1; }
		if (HX_FIELD_EQ(inName,"tempAABB2") ) { return tempAABB2; }
		if (HX_FIELD_EQ(inName,"m_density") ) { return m_density; }
		if (HX_FIELD_EQ(inName,"testPoint") ) { return testPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"setSensor") ) { return setSensor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_userData") ) { return m_userData; }
		if (HX_FIELD_EQ(inName,"m_isSensor") ) { return m_isSensor; }
		if (HX_FIELD_EQ(inName,"m_friction") ) { return m_friction; }
		if (HX_FIELD_EQ(inName,"m_massData") ) { return m_massData; }
		if (HX_FIELD_EQ(inName,"getDensity") ) { return getDensity_dyn(); }
		if (HX_FIELD_EQ(inName,"setDensity") ) { return setDensity_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"synchronize") ) { return synchronize_dyn(); }
		if (HX_FIELD_EQ(inName,"createProxy") ) { return createProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"setFriction") ) { return setFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"getFriction") ) { return getFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"getMassData") ) { return getMassData_dyn(); }
		if (HX_FIELD_EQ(inName,"SetUserData") ) { return SetUserData_dyn(); }
		if (HX_FIELD_EQ(inName,"getUserData") ) { return getUserData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyProxy") ) { return destroyProxy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_restitution") ) { return m_restitution; }
		if (HX_FIELD_EQ(inName,"getFilterData") ) { return getFilterData_dyn(); }
		if (HX_FIELD_EQ(inName,"setFilterData") ) { return setFilterData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setRestitution") ) { return setRestitution_dyn(); }
		if (HX_FIELD_EQ(inName,"getRestitution") ) { return getRestitution_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Fixture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_body") ) { m_body=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_next") ) { m_next=inValue.Cast< ::box2D::dynamics::B2Fixture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_aabb") ) { m_aabb=inValue.Cast< ::box2D::collision::B2AABB >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_proxy") ) { m_proxy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_shape") ) { m_shape=inValue.Cast< ::box2D::collision::shapes::B2Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_filter") ) { m_filter=inValue.Cast< ::box2D::dynamics::B2FilterData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tempAABB1") ) { tempAABB1=inValue.Cast< ::box2D::collision::B2AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempAABB2") ) { tempAABB2=inValue.Cast< ::box2D::collision::B2AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_density") ) { m_density=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_userData") ) { m_userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_isSensor") ) { m_isSensor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_friction") ) { m_friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_massData") ) { m_massData=inValue.Cast< ::box2D::collision::shapes::B2MassData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_restitution") ) { m_restitution=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Fixture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("groupID"));
	outFields->push(HX_CSTRING("m_userData"));
	outFields->push(HX_CSTRING("m_isSensor"));
	outFields->push(HX_CSTRING("m_filter"));
	outFields->push(HX_CSTRING("m_proxy"));
	outFields->push(HX_CSTRING("m_restitution"));
	outFields->push(HX_CSTRING("m_friction"));
	outFields->push(HX_CSTRING("m_shape"));
	outFields->push(HX_CSTRING("m_body"));
	outFields->push(HX_CSTRING("m_next"));
	outFields->push(HX_CSTRING("m_density"));
	outFields->push(HX_CSTRING("m_aabb"));
	outFields->push(HX_CSTRING("m_massData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tempAABB1"),
	HX_CSTRING("tempAABB2"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("groupID"),
	HX_CSTRING("m_userData"),
	HX_CSTRING("m_isSensor"),
	HX_CSTRING("m_filter"),
	HX_CSTRING("m_proxy"),
	HX_CSTRING("m_restitution"),
	HX_CSTRING("m_friction"),
	HX_CSTRING("m_shape"),
	HX_CSTRING("m_body"),
	HX_CSTRING("m_next"),
	HX_CSTRING("m_density"),
	HX_CSTRING("m_aabb"),
	HX_CSTRING("m_massData"),
	HX_CSTRING("synchronize"),
	HX_CSTRING("destroyProxy"),
	HX_CSTRING("createProxy"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("getAABB"),
	HX_CSTRING("setRestitution"),
	HX_CSTRING("getRestitution"),
	HX_CSTRING("setFriction"),
	HX_CSTRING("getFriction"),
	HX_CSTRING("getDensity"),
	HX_CSTRING("setDensity"),
	HX_CSTRING("getMassData"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("testPoint"),
	HX_CSTRING("SetUserData"),
	HX_CSTRING("getUserData"),
	HX_CSTRING("getNext"),
	HX_CSTRING("getBody"),
	HX_CSTRING("getFilterData"),
	HX_CSTRING("setFilterData"),
	HX_CSTRING("isSensor"),
	HX_CSTRING("setSensor"),
	HX_CSTRING("getShape"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Fixture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Fixture_obj::tempAABB1,"tempAABB1");
	HX_MARK_MEMBER_NAME(B2Fixture_obj::tempAABB2,"tempAABB2");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Fixture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Fixture_obj::tempAABB1,"tempAABB1");
	HX_VISIT_MEMBER_NAME(B2Fixture_obj::tempAABB2,"tempAABB2");
};

Class B2Fixture_obj::__mClass;

void B2Fixture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2Fixture"), hx::TCanCast< B2Fixture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Fixture_obj::__boot()
{
	tempAABB1= ::box2D::collision::B2AABB_obj::__new();
	tempAABB2= ::box2D::collision::B2AABB_obj::__new();
}

} // end namespace box2D
} // end namespace dynamics
