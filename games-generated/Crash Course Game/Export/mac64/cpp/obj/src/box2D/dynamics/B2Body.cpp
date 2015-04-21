#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_IBroadPhase
#include <box2D/collision/IBroadPhase.h>
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
#ifndef INCLUDED_box2D_common_math_B2Sweep
#include <box2D/common/math/B2Sweep.h>
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
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactManager
#include <box2D/dynamics/B2ContactManager.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#include <box2D/dynamics/B2FixtureDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2World
#include <box2D/dynamics/B2World.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#include <box2D/dynamics/contacts/B2ContactEdge.h>
#endif
#ifndef INCLUDED_box2D_dynamics_controllers_B2ControllerEdge
#include <box2D/dynamics/controllers/B2ControllerEdge.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointEdge
#include <box2D/dynamics/joints/B2JointEdge.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace dynamics{

Void B2Body_obj::__construct(::box2D::dynamics::B2BodyDef bd,::box2D::dynamics::B2World world)
{
HX_STACK_PUSH("B2Body::new","box2D/dynamics/B2Body.hx",1249);
{
	HX_STACK_LINE(1251)
	this->m_xf = ::box2D::common::math::B2Transform_obj::__new(null(),null());
	HX_STACK_LINE(1252)
	this->m_sweep = ::box2D::common::math::B2Sweep_obj::__new();
	HX_STACK_LINE(1253)
	this->m_linearVelocity = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(1254)
	this->m_force = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(1266)
	this->m_flags = (int)0;
	HX_STACK_LINE(1268)
	if ((bd->bullet)){
		HX_STACK_LINE(1269)
		hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_bulletFlag);
	}
	HX_STACK_LINE(1272)
	if ((bd->fixedRotation)){
		HX_STACK_LINE(1273)
		hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_fixedRotationFlag);
	}
	HX_STACK_LINE(1276)
	if ((bd->allowSleep)){
		HX_STACK_LINE(1277)
		hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_allowSleepFlag);
	}
	HX_STACK_LINE(1280)
	if ((bd->awake)){
		HX_STACK_LINE(1281)
		hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_awakeFlag);
	}
	HX_STACK_LINE(1284)
	if ((bd->active)){
		HX_STACK_LINE(1285)
		hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_activeFlag);
	}
	HX_STACK_LINE(1290)
	if ((bd->ignoreGravity)){
		HX_STACK_LINE(1291)
		hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_ignoreGravityFlag);
	}
	HX_STACK_LINE(1295)
	this->m_world = world;
	HX_STACK_LINE(1297)
	{
		HX_STACK_LINE(1297)
		::box2D::common::math::B2Vec2 _this = this->m_xf->position;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = bd->position;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(1297)
		_this->x = v->x;
		HX_STACK_LINE(1297)
		_this->y = v->y;
	}
	HX_STACK_LINE(1298)
	this->m_xf->R->set(bd->angle);
	HX_STACK_LINE(1300)
	{
		HX_STACK_LINE(1300)
		::box2D::common::math::B2Vec2 _this = this->m_sweep->localCenter;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1300)
		_this->x = 0.0;
		HX_STACK_LINE(1300)
		_this->y = 0.0;
	}
	HX_STACK_LINE(1301)
	this->m_sweep->t0 = 1.0;
	HX_STACK_LINE(1302)
	this->m_sweep->a0 = this->m_sweep->a = bd->angle;
	HX_STACK_LINE(1306)
	::box2D::common::math::B2Mat22 tMat = this->m_xf->R;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(1307)
	::box2D::common::math::B2Vec2 tVec = this->m_sweep->localCenter;		HX_STACK_VAR(tVec,"tVec");
	HX_STACK_LINE(1309)
	this->m_sweep->c->x = ((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y));
	HX_STACK_LINE(1311)
	this->m_sweep->c->y = ((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y));
	HX_STACK_LINE(1313)
	hx::AddEq(this->m_sweep->c->x,this->m_xf->position->x);
	HX_STACK_LINE(1314)
	hx::AddEq(this->m_sweep->c->y,this->m_xf->position->y);
	HX_STACK_LINE(1316)
	{
		HX_STACK_LINE(1316)
		::box2D::common::math::B2Vec2 _this = this->m_sweep->c0;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = this->m_sweep->c;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(1316)
		_this->x = v->x;
		HX_STACK_LINE(1316)
		_this->y = v->y;
	}
	HX_STACK_LINE(1318)
	this->m_jointList = null();
	HX_STACK_LINE(1319)
	this->m_controllerList = null();
	HX_STACK_LINE(1320)
	this->m_contactList = null();
	HX_STACK_LINE(1321)
	this->m_controllerCount = (int)0;
	HX_STACK_LINE(1322)
	this->m_prev = null();
	HX_STACK_LINE(1323)
	this->m_next = null();
	HX_STACK_LINE(1325)
	{
		HX_STACK_LINE(1325)
		::box2D::common::math::B2Vec2 _this = this->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = bd->linearVelocity;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(1325)
		_this->x = v->x;
		HX_STACK_LINE(1325)
		_this->y = v->y;
	}
	HX_STACK_LINE(1326)
	this->m_angularVelocity = bd->angularVelocity;
	HX_STACK_LINE(1328)
	this->m_linearDamping = bd->linearDamping;
	HX_STACK_LINE(1329)
	this->m_angularDamping = bd->angularDamping;
	HX_STACK_LINE(1331)
	{
		HX_STACK_LINE(1331)
		::box2D::common::math::B2Vec2 _this = this->m_force;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1331)
		_this->x = 0.0;
		HX_STACK_LINE(1331)
		_this->y = 0.0;
	}
	HX_STACK_LINE(1332)
	this->m_torque = 0.0;
	HX_STACK_LINE(1334)
	this->m_sleepTime = 0.0;
	HX_STACK_LINE(1336)
	this->m_type = bd->type;
	HX_STACK_LINE(1338)
	if (((this->m_type == ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
		HX_STACK_LINE(1340)
		this->m_mass = 1.0;
		HX_STACK_LINE(1341)
		this->m_invMass = 1.0;
	}
	else{
		HX_STACK_LINE(1345)
		this->m_mass = 0.0;
		HX_STACK_LINE(1346)
		this->m_invMass = 0.0;
	}
	HX_STACK_LINE(1349)
	this->m_I = 0.0;
	HX_STACK_LINE(1350)
	this->m_invI = 0.0;
	HX_STACK_LINE(1352)
	this->m_inertiaScale = bd->inertiaScale;
	HX_STACK_LINE(1354)
	this->m_userData = bd->userData;
	HX_STACK_LINE(1356)
	this->m_fixtureList = null();
	HX_STACK_LINE(1357)
	this->m_fixtureCount = (int)0;
	HX_STACK_LINE(1360)
	this->groupID = bd->groupID;
	HX_STACK_LINE(1361)
	this->origin = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(1362)
	this->size = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
}
;
	return null();
}

B2Body_obj::~B2Body_obj() { }

Dynamic B2Body_obj::__CreateEmpty() { return  new B2Body_obj; }
hx::ObjectPtr< B2Body_obj > B2Body_obj::__new(::box2D::dynamics::B2BodyDef bd,::box2D::dynamics::B2World world)
{  hx::ObjectPtr< B2Body_obj > result = new B2Body_obj();
	result->__construct(bd,world);
	return result;}

Dynamic B2Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Body_obj > result = new B2Body_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void B2Body_obj::advance( Float t){
{
		HX_STACK_PUSH("B2Body::advance","box2D/dynamics/B2Body.hx",1423);
		HX_STACK_THIS(this);
		HX_STACK_ARG(t,"t");
		HX_STACK_LINE(1425)
		this->m_sweep->advance(t);
		HX_STACK_LINE(1426)
		{
			HX_STACK_LINE(1426)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->c;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_sweep->c0;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1426)
			_this->x = v->x;
			HX_STACK_LINE(1426)
			_this->y = v->y;
		}
		HX_STACK_LINE(1427)
		this->m_sweep->a = this->m_sweep->a0;
		HX_STACK_LINE(1428)
		this->synchronizeTransform();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,advance,(void))

bool B2Body_obj::shouldCollide( ::box2D::dynamics::B2Body other){
	HX_STACK_PUSH("B2Body::shouldCollide","box2D/dynamics/B2Body.hx",1402);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(1404)
	if (((bool((this->m_type != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)) && bool((other->m_type != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))))){
		HX_STACK_LINE(1405)
		return false;
	}
	HX_STACK_LINE(1409)
	::box2D::dynamics::joints::B2JointEdge jn = this->m_jointList;		HX_STACK_VAR(jn,"jn");
	HX_STACK_LINE(1410)
	while(((jn != null()))){
		HX_STACK_LINE(1412)
		if (((jn->other == other))){
			HX_STACK_LINE(1413)
			if (((jn->joint->m_collideConnected == false))){
				HX_STACK_LINE(1414)
				return false;
			}
		}
		HX_STACK_LINE(1417)
		jn = jn->next;
	}
	HX_STACK_LINE(1420)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,shouldCollide,return )

Void B2Body_obj::synchronizeTransform( ){
{
		HX_STACK_PUSH("B2Body::synchronizeTransform","box2D/dynamics/B2Body.hx",1391);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1392)
		this->m_xf->R->set(this->m_sweep->a);
		HX_STACK_LINE(1394)
		::box2D::common::math::B2Mat22 tMat = this->m_xf->R;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(1395)
		::box2D::common::math::B2Vec2 tVec = this->m_sweep->localCenter;		HX_STACK_VAR(tVec,"tVec");
		HX_STACK_LINE(1396)
		this->m_xf->position->x = (this->m_sweep->c->x - (((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y))));
		HX_STACK_LINE(1397)
		this->m_xf->position->y = (this->m_sweep->c->y - (((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,synchronizeTransform,(void))

Void B2Body_obj::synchronizeFixtures( ){
{
		HX_STACK_PUSH("B2Body::synchronizeFixtures","box2D/dynamics/B2Body.hx",1371);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1373)
		::box2D::common::math::B2Transform xf1 = ::box2D::dynamics::B2Body_obj::s_xf1;		HX_STACK_VAR(xf1,"xf1");
		HX_STACK_LINE(1374)
		xf1->R->set(this->m_sweep->a0);
		HX_STACK_LINE(1376)
		::box2D::common::math::B2Mat22 tMat = xf1->R;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(1377)
		::box2D::common::math::B2Vec2 tVec = this->m_sweep->localCenter;		HX_STACK_VAR(tVec,"tVec");
		HX_STACK_LINE(1378)
		xf1->position->x = (this->m_sweep->c0->x - (((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y))));
		HX_STACK_LINE(1379)
		xf1->position->y = (this->m_sweep->c0->y - (((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y))));
		HX_STACK_LINE(1381)
		::box2D::dynamics::B2Fixture f;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(1382)
		::box2D::collision::IBroadPhase broadPhase = this->m_world->m_contactManager->m_broadPhase;		HX_STACK_VAR(broadPhase,"broadPhase");
		HX_STACK_LINE(1383)
		f = this->m_fixtureList;
		HX_STACK_LINE(1384)
		while(((f != null()))){
			HX_STACK_LINE(1386)
			f->synchronize(broadPhase,xf1,this->m_xf);
			HX_STACK_LINE(1387)
			f = f->m_next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,synchronizeFixtures,(void))

bool B2Body_obj::isAlwaysActive( ){
	HX_STACK_PUSH("B2Body::isAlwaysActive","box2D/dynamics/B2Body.hx",1236);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1236)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_alwaysActiveFlag))) == ::box2D::dynamics::B2Body_obj::e_alwaysActiveFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isAlwaysActive,return )

Void B2Body_obj::setAlwaysActive( bool flag){
{
		HX_STACK_PUSH("B2Body::setAlwaysActive","box2D/dynamics/B2Body.hx",1227);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(1227)
		if ((flag)){
			HX_STACK_LINE(1228)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_alwaysActiveFlag);
		}
		else{
			HX_STACK_LINE(1231)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_alwaysActiveFlag));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setAlwaysActive,(void))

bool B2Body_obj::isIgnoringGravity( ){
	HX_STACK_PUSH("B2Body::isIgnoringGravity","box2D/dynamics/B2Body.hx",1223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1223)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_ignoreGravityFlag))) == ::box2D::dynamics::B2Body_obj::e_ignoreGravityFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isIgnoringGravity,return )

Void B2Body_obj::setIgnoreGravity( bool flag){
{
		HX_STACK_PUSH("B2Body::setIgnoreGravity","box2D/dynamics/B2Body.hx",1214);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(1214)
		if ((flag)){
			HX_STACK_LINE(1215)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_ignoreGravityFlag);
		}
		else{
			HX_STACK_LINE(1218)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_ignoreGravityFlag));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setIgnoreGravity,(void))

bool B2Body_obj::isPaused( ){
	HX_STACK_PUSH("B2Body::isPaused","box2D/dynamics/B2Body.hx",1210);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1210)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_pausedFlag))) == ::box2D::dynamics::B2Body_obj::e_pausedFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isPaused,return )

Void B2Body_obj::setPaused( bool flag){
{
		HX_STACK_PUSH("B2Body::setPaused","box2D/dynamics/B2Body.hx",1197);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(1197)
		if ((flag)){
			HX_STACK_LINE(1199)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_pausedFlag);
		}
		else{
			HX_STACK_LINE(1204)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_pausedFlag));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setPaused,(void))

Void B2Body_obj::setBounciness( Float bounciness){
{
		HX_STACK_PUSH("B2Body::setBounciness","box2D/dynamics/B2Body.hx",1186);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bounciness,"bounciness");
		HX_STACK_LINE(1187)
		::box2D::dynamics::B2Fixture fixture = this->m_fixtureList;		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(1189)
		while(((fixture != null()))){
			HX_STACK_LINE(1191)
			fixture->m_restitution = bounciness;
			HX_STACK_LINE(1192)
			fixture = fixture->m_next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setBounciness,(void))

Void B2Body_obj::setFriction( Float friction){
{
		HX_STACK_PUSH("B2Body::setFriction","box2D/dynamics/B2Body.hx",1175);
		HX_STACK_THIS(this);
		HX_STACK_ARG(friction,"friction");
		HX_STACK_LINE(1176)
		::box2D::dynamics::B2Fixture fixture = this->m_fixtureList;		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(1178)
		while(((fixture != null()))){
			HX_STACK_LINE(1180)
			fixture->m_friction = friction;
			HX_STACK_LINE(1181)
			fixture = fixture->m_next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setFriction,(void))

::box2D::dynamics::B2World B2Body_obj::getWorld( ){
	HX_STACK_PUSH("B2Body::getWorld","box2D/dynamics/B2Body.hx",1169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1169)
	return this->m_world;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getWorld,return )

Void B2Body_obj::setUserData( Dynamic data){
{
		HX_STACK_PUSH("B2Body::setUserData","box2D/dynamics/B2Body.hx",1161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(1161)
		this->m_userData = data;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setUserData,(void))

Dynamic B2Body_obj::getUserData( ){
	HX_STACK_PUSH("B2Body::getUserData","box2D/dynamics/B2Body.hx",1153);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1153)
	return this->m_userData;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getUserData,return )

::box2D::dynamics::B2Body B2Body_obj::getNext( ){
	HX_STACK_PUSH("B2Body::getNext","box2D/dynamics/B2Body.hx",1146);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1146)
	return this->m_next;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getNext,return )

::box2D::dynamics::contacts::B2ContactEdge B2Body_obj::getContactList( ){
	HX_STACK_PUSH("B2Body::getContactList","box2D/dynamics/B2Body.hx",1139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1139)
	return this->m_contactList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getContactList,return )

::box2D::dynamics::controllers::B2ControllerEdge B2Body_obj::getControllerList( ){
	HX_STACK_PUSH("B2Body::getControllerList","box2D/dynamics/B2Body.hx",1132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1132)
	return this->m_controllerList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getControllerList,return )

::box2D::dynamics::joints::B2JointEdge B2Body_obj::getJointList( ){
	HX_STACK_PUSH("B2Body::getJointList","box2D/dynamics/B2Body.hx",1125);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1125)
	return this->m_jointList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getJointList,return )

::box2D::dynamics::B2Fixture B2Body_obj::getFixtureList( ){
	HX_STACK_PUSH("B2Body::getFixtureList","box2D/dynamics/B2Body.hx",1118);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1118)
	return this->m_fixtureList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getFixtureList,return )

bool B2Body_obj::isSleepingAllowed( ){
	HX_STACK_PUSH("B2Body::isSleepingAllowed","box2D/dynamics/B2Body.hx",1111);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1111)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_allowSleepFlag))) == ::box2D::dynamics::B2Body_obj::e_allowSleepFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isSleepingAllowed,return )

bool B2Body_obj::isActive( ){
	HX_STACK_PUSH("B2Body::isActive","box2D/dynamics/B2Body.hx",1103);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1103)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_activeFlag))) == ::box2D::dynamics::B2Body_obj::e_activeFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isActive,return )

Void B2Body_obj::setActive( bool flag){
{
		HX_STACK_PUSH("B2Body::setActive","box2D/dynamics/B2Body.hx",1052);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(1053)
		if (((flag == this->isActive()))){
			HX_STACK_LINE(1054)
			return null();
		}
		HX_STACK_LINE(1058)
		::box2D::collision::IBroadPhase broadPhase;		HX_STACK_VAR(broadPhase,"broadPhase");
		HX_STACK_LINE(1059)
		::box2D::dynamics::B2Fixture f;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(1060)
		if ((flag)){
			HX_STACK_LINE(1062)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_activeFlag);
			HX_STACK_LINE(1065)
			broadPhase = this->m_world->m_contactManager->m_broadPhase;
			HX_STACK_LINE(1066)
			f = this->m_fixtureList;
			HX_STACK_LINE(1067)
			while(((f != null()))){
				HX_STACK_LINE(1069)
				f->createProxy(broadPhase,this->m_xf);
				HX_STACK_LINE(1070)
				f = f->m_next;
			}
		}
		else{
			HX_STACK_LINE(1076)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_activeFlag));
			HX_STACK_LINE(1079)
			broadPhase = this->m_world->m_contactManager->m_broadPhase;
			HX_STACK_LINE(1080)
			f = this->m_fixtureList;
			HX_STACK_LINE(1081)
			while(((f != null()))){
				HX_STACK_LINE(1083)
				f->destroyProxy(broadPhase);
				HX_STACK_LINE(1084)
				f = f->m_next;
			}
			HX_STACK_LINE(1088)
			::box2D::dynamics::contacts::B2ContactEdge ce = this->m_contactList;		HX_STACK_VAR(ce,"ce");
			HX_STACK_LINE(1089)
			while(((ce != null()))){
				HX_STACK_LINE(1091)
				::box2D::dynamics::contacts::B2ContactEdge ce0 = ce;		HX_STACK_VAR(ce0,"ce0");
				HX_STACK_LINE(1092)
				ce = ce->next;
				HX_STACK_LINE(1093)
				this->m_world->m_contactManager->destroy(ce0->contact);
			}
			HX_STACK_LINE(1095)
			this->m_contactList = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setActive,(void))

bool B2Body_obj::isFixedRotation( ){
	HX_STACK_PUSH("B2Body::isFixedRotation","box2D/dynamics/B2Body.hx",1034);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1034)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_fixedRotationFlag))) == ::box2D::dynamics::B2Body_obj::e_fixedRotationFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isFixedRotation,return )

Void B2Body_obj::setFixedRotation( bool fixed){
{
		HX_STACK_PUSH("B2Body::setFixedRotation","box2D/dynamics/B2Body.hx",1016);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fixed,"fixed");
		HX_STACK_LINE(1017)
		if ((fixed)){
			HX_STACK_LINE(1018)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_fixedRotationFlag);
		}
		else{
			HX_STACK_LINE(1022)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_fixedRotationFlag));
		}
		HX_STACK_LINE(1026)
		this->resetMassData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setFixedRotation,(void))

bool B2Body_obj::isAwake( ){
	HX_STACK_PUSH("B2Body::isAwake","box2D/dynamics/B2Body.hx",1007);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1007)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_awakeFlag))) == ::box2D::dynamics::B2Body_obj::e_awakeFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isAwake,return )

Void B2Body_obj::setAwake( bool flag){
{
		HX_STACK_PUSH("B2Body::setAwake","box2D/dynamics/B2Body.hx",986);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(986)
		if ((flag)){
			HX_STACK_LINE(989)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_awakeFlag);
			HX_STACK_LINE(990)
			this->m_sleepTime = 0.0;
		}
		else{
			HX_STACK_LINE(994)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_awakeFlag));
			HX_STACK_LINE(995)
			this->m_sleepTime = 0.0;
			HX_STACK_LINE(996)
			{
				HX_STACK_LINE(996)
				::box2D::common::math::B2Vec2 _this = this->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(996)
				_this->x = 0.0;
				HX_STACK_LINE(996)
				_this->y = 0.0;
			}
			HX_STACK_LINE(997)
			this->m_angularVelocity = 0.0;
			HX_STACK_LINE(998)
			{
				HX_STACK_LINE(998)
				::box2D::common::math::B2Vec2 _this = this->m_force;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(998)
				_this->x = 0.0;
				HX_STACK_LINE(998)
				_this->y = 0.0;
			}
			HX_STACK_LINE(999)
			this->m_torque = 0.0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setAwake,(void))

Void B2Body_obj::setSleepingAllowed( bool flag){
{
		HX_STACK_PUSH("B2Body::setSleepingAllowed","box2D/dynamics/B2Body.hx",970);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(970)
		if ((flag)){
			HX_STACK_LINE(972)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_allowSleepFlag);
		}
		else{
			HX_STACK_LINE(977)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_allowSleepFlag));
			HX_STACK_LINE(978)
			this->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setSleepingAllowed,(void))

bool B2Body_obj::isBullet( ){
	HX_STACK_PUSH("B2Body::isBullet","box2D/dynamics/B2Body.hx",962);
	HX_STACK_THIS(this);
	HX_STACK_LINE(962)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_bulletFlag))) == ::box2D::dynamics::B2Body_obj::e_bulletFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,isBullet,return )

Void B2Body_obj::setBullet( bool flag){
{
		HX_STACK_PUSH("B2Body::setBullet","box2D/dynamics/B2Body.hx",948);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(948)
		if ((flag)){
			HX_STACK_LINE(950)
			hx::OrEq(this->m_flags,::box2D::dynamics::B2Body_obj::e_bulletFlag);
		}
		else{
			HX_STACK_LINE(954)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_bulletFlag));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setBullet,(void))

int B2Body_obj::getType( ){
	HX_STACK_PUSH("B2Body::getType","box2D/dynamics/B2Body.hx",941);
	HX_STACK_THIS(this);
	HX_STACK_LINE(941)
	return this->m_type;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getType,return )

Void B2Body_obj::setType( int type){
{
		HX_STACK_PUSH("B2Body::setType","box2D/dynamics/B2Body.hx",906);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(907)
		if (((this->m_type == type))){
			HX_STACK_LINE(908)
			return null();
		}
		HX_STACK_LINE(912)
		this->m_type = type;
		HX_STACK_LINE(914)
		this->resetMassData();
		HX_STACK_LINE(916)
		if (((this->m_type == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
			HX_STACK_LINE(918)
			{
				HX_STACK_LINE(918)
				::box2D::common::math::B2Vec2 _this = this->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(918)
				_this->x = 0.0;
				HX_STACK_LINE(918)
				_this->y = 0.0;
			}
			HX_STACK_LINE(919)
			this->m_angularVelocity = 0.0;
		}
		HX_STACK_LINE(922)
		this->setAwake(true);
		HX_STACK_LINE(924)
		{
			HX_STACK_LINE(924)
			::box2D::common::math::B2Vec2 _this = this->m_force;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(924)
			_this->x = 0.0;
			HX_STACK_LINE(924)
			_this->y = 0.0;
		}
		HX_STACK_LINE(925)
		this->m_torque = 0.0;
		HX_STACK_LINE(928)
		::box2D::dynamics::contacts::B2ContactEdge ce = this->m_contactList;		HX_STACK_VAR(ce,"ce");
		HX_STACK_LINE(929)
		while(((ce != null()))){
			HX_STACK_LINE(931)
			ce->contact->flagForFiltering();
			HX_STACK_LINE(932)
			ce = ce->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setType,(void))

Void B2Body_obj::setAngularDamping( Float angularDamping){
{
		HX_STACK_PUSH("B2Body::setAngularDamping","box2D/dynamics/B2Body.hx",897);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angularDamping,"angularDamping");
		HX_STACK_LINE(897)
		this->m_angularDamping = angularDamping;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setAngularDamping,(void))

Float B2Body_obj::getAngularDamping( ){
	HX_STACK_PUSH("B2Body::getAngularDamping","box2D/dynamics/B2Body.hx",889);
	HX_STACK_THIS(this);
	HX_STACK_LINE(889)
	return this->m_angularDamping;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getAngularDamping,return )

Void B2Body_obj::setLinearDamping( Float linearDamping){
{
		HX_STACK_PUSH("B2Body::setLinearDamping","box2D/dynamics/B2Body.hx",881);
		HX_STACK_THIS(this);
		HX_STACK_ARG(linearDamping,"linearDamping");
		HX_STACK_LINE(881)
		this->m_linearDamping = linearDamping;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setLinearDamping,(void))

Float B2Body_obj::getLinearDamping( ){
	HX_STACK_PUSH("B2Body::getLinearDamping","box2D/dynamics/B2Body.hx",873);
	HX_STACK_THIS(this);
	HX_STACK_LINE(873)
	return this->m_linearDamping;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getLinearDamping,return )

::box2D::common::math::B2Vec2 B2Body_obj::getLinearVelocityFromLocalPoint( ::box2D::common::math::B2Vec2 localPoint){
	HX_STACK_PUSH("B2Body::getLinearVelocityFromLocalPoint","box2D/dynamics/B2Body.hx",858);
	HX_STACK_THIS(this);
	HX_STACK_ARG(localPoint,"localPoint");
	HX_STACK_LINE(860)
	::box2D::common::math::B2Mat22 A = this->m_xf->R;		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(861)
	::box2D::common::math::B2Vec2 worldPoint = ::box2D::common::math::B2Vec2_obj::__new(((A->col1->x * localPoint->x) + (A->col2->x * localPoint->y)),((A->col1->y * localPoint->x) + (A->col2->y * localPoint->y)));		HX_STACK_VAR(worldPoint,"worldPoint");
	HX_STACK_LINE(863)
	hx::AddEq(worldPoint->x,this->m_xf->position->x);
	HX_STACK_LINE(864)
	hx::AddEq(worldPoint->y,this->m_xf->position->y);
	HX_STACK_LINE(865)
	return ::box2D::common::math::B2Vec2_obj::__new((this->m_linearVelocity->x - (this->m_angularVelocity * ((worldPoint->y - this->m_sweep->c->y)))),(this->m_linearVelocity->y + (this->m_angularVelocity * ((worldPoint->x - this->m_sweep->c->x)))));
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,getLinearVelocityFromLocalPoint,return )

::box2D::common::math::B2Vec2 B2Body_obj::getLinearVelocityFromWorldPoint( ::box2D::common::math::B2Vec2 worldPoint){
	HX_STACK_PUSH("B2Body::getLinearVelocityFromWorldPoint","box2D/dynamics/B2Body.hx",846);
	HX_STACK_THIS(this);
	HX_STACK_ARG(worldPoint,"worldPoint");
	HX_STACK_LINE(846)
	return ::box2D::common::math::B2Vec2_obj::__new((this->m_linearVelocity->x - (this->m_angularVelocity * ((worldPoint->y - this->m_sweep->c->y)))),(this->m_linearVelocity->y + (this->m_angularVelocity * ((worldPoint->x - this->m_sweep->c->x)))));
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,getLinearVelocityFromWorldPoint,return )

::box2D::common::math::B2Vec2 B2Body_obj::getLocalVector( ::box2D::common::math::B2Vec2 worldVector){
	HX_STACK_PUSH("B2Body::getLocalVector","box2D/dynamics/B2Body.hx",836);
	HX_STACK_THIS(this);
	HX_STACK_ARG(worldVector,"worldVector");
	HX_STACK_LINE(836)
	return ::box2D::common::math::B2Math_obj::mulTMV(this->m_xf->R,worldVector,null());
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,getLocalVector,return )

::box2D::common::math::B2Vec2 B2Body_obj::getLocalPoint( ::box2D::common::math::B2Vec2 worldPoint){
	HX_STACK_PUSH("B2Body::getLocalPoint","box2D/dynamics/B2Body.hx",827);
	HX_STACK_THIS(this);
	HX_STACK_ARG(worldPoint,"worldPoint");
	HX_STACK_LINE(827)
	return ::box2D::common::math::B2Math_obj::mulXT(this->m_xf,worldPoint,null());
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,getLocalPoint,return )

::box2D::common::math::B2Vec2 B2Body_obj::getWorldVector( ::box2D::common::math::B2Vec2 localVector){
	HX_STACK_PUSH("B2Body::getWorldVector","box2D/dynamics/B2Body.hx",818);
	HX_STACK_THIS(this);
	HX_STACK_ARG(localVector,"localVector");
	HX_STACK_LINE(818)
	return ::box2D::common::math::B2Math_obj::mulMV(this->m_xf->R,localVector,null());
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,getWorldVector,return )

::box2D::common::math::B2Vec2 B2Body_obj::getWorldPoint( ::box2D::common::math::B2Vec2 localPoint){
	HX_STACK_PUSH("B2Body::getWorldPoint","box2D/dynamics/B2Body.hx",803);
	HX_STACK_THIS(this);
	HX_STACK_ARG(localPoint,"localPoint");
	HX_STACK_LINE(805)
	::box2D::common::math::B2Mat22 A = this->m_xf->R;		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(806)
	::box2D::common::math::B2Vec2 u = ::box2D::common::math::B2Vec2_obj::__new(((A->col1->x * localPoint->x) + (A->col2->x * localPoint->y)),((A->col1->y * localPoint->x) + (A->col2->y * localPoint->y)));		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(808)
	hx::AddEq(u->x,this->m_xf->position->x);
	HX_STACK_LINE(809)
	hx::AddEq(u->y,this->m_xf->position->y);
	HX_STACK_LINE(810)
	return u;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,getWorldPoint,return )

Void B2Body_obj::resetMassData( ){
{
		HX_STACK_PUSH("B2Body::resetMassData","box2D/dynamics/B2Body.hx",723);
		HX_STACK_THIS(this);
		HX_STACK_LINE(725)
		this->m_mass = 0.0;
		HX_STACK_LINE(726)
		this->m_invMass = 0.0;
		HX_STACK_LINE(727)
		this->m_I = 0.0;
		HX_STACK_LINE(728)
		this->m_invI = 0.0;
		HX_STACK_LINE(729)
		{
			HX_STACK_LINE(729)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->localCenter;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(729)
			_this->x = 0.0;
			HX_STACK_LINE(729)
			_this->y = 0.0;
		}
		HX_STACK_LINE(732)
		if (((bool((this->m_type == ::box2D::dynamics::B2Body_obj::b2_staticBody)) || bool((this->m_type == ::box2D::dynamics::B2Body_obj::b2_kinematicBody))))){
			HX_STACK_LINE(733)
			return null();
		}
		HX_STACK_LINE(739)
		::box2D::common::math::B2Vec2 center = ::box2D::common::math::B2Vec2_obj::make((int)0,(int)0);		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(741)
		::box2D::dynamics::B2Fixture f = this->m_fixtureList;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(743)
		while(((f != null()))){
			HX_STACK_LINE(745)
			if (((f->m_density == 0.0))){
				HX_STACK_LINE(746)
				continue;
			}
			HX_STACK_LINE(750)
			::box2D::collision::shapes::B2MassData massData = f->getMassData(null());		HX_STACK_VAR(massData,"massData");
			HX_STACK_LINE(751)
			hx::AddEq(this->m_mass,massData->mass);
			HX_STACK_LINE(752)
			hx::AddEq(center->x,(massData->center->x * massData->mass));
			HX_STACK_LINE(753)
			hx::AddEq(center->y,(massData->center->y * massData->mass));
			HX_STACK_LINE(754)
			hx::AddEq(this->m_I,massData->I);
			HX_STACK_LINE(756)
			f = f->m_next;
		}
		HX_STACK_LINE(760)
		if (((this->m_mass > 0.0))){
			HX_STACK_LINE(762)
			this->m_invMass = (Float(1.0) / Float(this->m_mass));
			HX_STACK_LINE(763)
			hx::MultEq(center->x,this->m_invMass);
			HX_STACK_LINE(764)
			hx::MultEq(center->y,this->m_invMass);
		}
		else{
			HX_STACK_LINE(769)
			this->m_mass = 1.0;
			HX_STACK_LINE(770)
			this->m_invMass = 1.0;
		}
		HX_STACK_LINE(773)
		if (((bool((this->m_I > 0.0)) && bool((((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_fixedRotationFlag))) == (int)0))))){
			HX_STACK_LINE(776)
			hx::SubEq(this->m_I,(this->m_mass * (((center->x * center->x) + (center->y * center->y)))));
			HX_STACK_LINE(777)
			hx::MultEq(this->m_I,this->m_inertiaScale);
			HX_STACK_LINE(778)
			::box2D::common::B2Settings_obj::b2Assert((this->m_I > (int)0));
			HX_STACK_LINE(779)
			this->m_invI = (Float(1.0) / Float(this->m_I));
		}
		else{
			HX_STACK_LINE(781)
			this->m_I = 0.0;
			HX_STACK_LINE(782)
			this->m_invI = 0.0;
		}
		HX_STACK_LINE(786)
		::box2D::common::math::B2Vec2 oldCenter = this->m_sweep->c->copy(null());		HX_STACK_VAR(oldCenter,"oldCenter");
		HX_STACK_LINE(787)
		{
			HX_STACK_LINE(787)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->localCenter;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(787)
			_this->x = center->x;
			HX_STACK_LINE(787)
			_this->y = center->y;
		}
		HX_STACK_LINE(788)
		{
			HX_STACK_LINE(788)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->c0;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Math_obj::mulX(this->m_xf,this->m_sweep->localCenter,null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(788)
			_this->x = v->x;
			HX_STACK_LINE(788)
			_this->y = v->y;
		}
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->c;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_sweep->c0;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(789)
			_this->x = v->x;
			HX_STACK_LINE(789)
			_this->y = v->y;
		}
		HX_STACK_LINE(793)
		hx::AddEq(this->m_linearVelocity->x,(this->m_angularVelocity * -(((this->m_sweep->c->y - oldCenter->y)))));
		HX_STACK_LINE(794)
		hx::AddEq(this->m_linearVelocity->y,(this->m_angularVelocity * ((this->m_sweep->c->x - oldCenter->x))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,resetMassData,(void))

Void B2Body_obj::setMassData( ::box2D::collision::shapes::B2MassData massData){
{
		HX_STACK_PUSH("B2Body::setMassData","box2D/dynamics/B2Body.hx",672);
		HX_STACK_THIS(this);
		HX_STACK_ARG(massData,"massData");
		HX_STACK_LINE(673)
		::box2D::common::B2Settings_obj::b2Assert((this->m_world->isLocked() == false));
		HX_STACK_LINE(674)
		if (((this->m_world->isLocked() == true))){
			HX_STACK_LINE(675)
			return null();
		}
		HX_STACK_LINE(679)
		if (((this->m_type != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
			HX_STACK_LINE(680)
			return null();
		}
		HX_STACK_LINE(684)
		this->m_invMass = 0.0;
		HX_STACK_LINE(685)
		this->m_I = 0.0;
		HX_STACK_LINE(686)
		this->m_invI = 0.0;
		HX_STACK_LINE(688)
		this->m_mass = massData->mass;
		HX_STACK_LINE(691)
		if (((this->m_mass <= 0.0))){
			HX_STACK_LINE(692)
			this->m_mass = 1.0;
		}
		HX_STACK_LINE(695)
		this->m_invMass = (Float(1.0) / Float(this->m_mass));
		HX_STACK_LINE(697)
		if (((bool((massData->I > 0.0)) && bool((((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_fixedRotationFlag))) == (int)0))))){
			HX_STACK_LINE(700)
			this->m_I = (massData->I - (this->m_mass * (((massData->center->x * massData->center->x) + (massData->center->y * massData->center->y)))));
			HX_STACK_LINE(701)
			this->m_invI = (Float(1.0) / Float(this->m_I));
		}
		HX_STACK_LINE(705)
		::box2D::common::math::B2Vec2 oldCenter = this->m_sweep->c->copy(null());		HX_STACK_VAR(oldCenter,"oldCenter");
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->localCenter;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = massData->center;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(706)
			_this->x = v->x;
			HX_STACK_LINE(706)
			_this->y = v->y;
		}
		HX_STACK_LINE(707)
		{
			HX_STACK_LINE(707)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->c0;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Math_obj::mulX(this->m_xf,this->m_sweep->localCenter,null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(707)
			_this->x = v->x;
			HX_STACK_LINE(707)
			_this->y = v->y;
		}
		HX_STACK_LINE(708)
		{
			HX_STACK_LINE(708)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->c;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_sweep->c0;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(708)
			_this->x = v->x;
			HX_STACK_LINE(708)
			_this->y = v->y;
		}
		HX_STACK_LINE(712)
		hx::AddEq(this->m_linearVelocity->x,(this->m_angularVelocity * -(((this->m_sweep->c->y - oldCenter->y)))));
		HX_STACK_LINE(713)
		hx::AddEq(this->m_linearVelocity->y,(this->m_angularVelocity * ((this->m_sweep->c->x - oldCenter->x))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setMassData,(void))

Void B2Body_obj::getMassData( ::box2D::collision::shapes::B2MassData data){
{
		HX_STACK_PUSH("B2Body::getMassData","box2D/dynamics/B2Body.hx",657);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(658)
		data->mass = this->m_mass;
		HX_STACK_LINE(659)
		data->I = this->m_I;
		HX_STACK_LINE(660)
		{
			HX_STACK_LINE(660)
			::box2D::common::math::B2Vec2 _this = data->center;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_sweep->localCenter;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(660)
			_this->x = v->x;
			HX_STACK_LINE(660)
			_this->y = v->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,getMassData,(void))

Float B2Body_obj::getInertia( ){
	HX_STACK_PUSH("B2Body::getInertia","box2D/dynamics/B2Body.hx",649);
	HX_STACK_THIS(this);
	HX_STACK_LINE(649)
	return this->m_I;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getInertia,return )

Float B2Body_obj::getMass( ){
	HX_STACK_PUSH("B2Body::getMass","box2D/dynamics/B2Body.hx",641);
	HX_STACK_THIS(this);
	HX_STACK_LINE(641)
	return this->m_mass;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getMass,return )

Void B2Body_obj::merge( ::box2D::dynamics::B2Body other){
{
		HX_STACK_PUSH("B2Body::merge","box2D/dynamics/B2Body.hx",594);
		HX_STACK_THIS(this);
		HX_STACK_ARG(other,"other");
		HX_STACK_LINE(595)
		::box2D::dynamics::B2Fixture f;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(596)
		f = other->m_fixtureList;
		HX_STACK_LINE(599)
		::box2D::dynamics::B2Body body1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(body1,"body1");
		HX_STACK_LINE(600)
		::box2D::dynamics::B2Body body2 = other;		HX_STACK_VAR(body2,"body2");
		HX_STACK_LINE(602)
		while(((f != null()))){
			HX_STACK_LINE(604)
			::box2D::dynamics::B2Fixture next = f->m_next;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(607)
			(other->m_fixtureCount)--;
			HX_STACK_LINE(610)
			f->m_next = this->m_fixtureList;
			HX_STACK_LINE(611)
			this->m_fixtureList = f;
			HX_STACK_LINE(612)
			(this->m_fixtureCount)++;
			HX_STACK_LINE(614)
			f->m_body = body2;
			HX_STACK_LINE(616)
			f = next;
		}
		HX_STACK_LINE(618)
		body1->m_fixtureCount = (int)0;
		HX_STACK_LINE(621)
		::box2D::common::math::B2Vec2 center1 = body1->getWorldCenter();		HX_STACK_VAR(center1,"center1");
		HX_STACK_LINE(622)
		::box2D::common::math::B2Vec2 center2 = body2->getWorldCenter();		HX_STACK_VAR(center2,"center2");
		HX_STACK_LINE(624)
		::box2D::common::math::B2Vec2 velocity1 = body1->getLinearVelocity()->copy(null());		HX_STACK_VAR(velocity1,"velocity1");
		HX_STACK_LINE(625)
		::box2D::common::math::B2Vec2 velocity2 = body2->getLinearVelocity()->copy(null());		HX_STACK_VAR(velocity2,"velocity2");
		HX_STACK_LINE(627)
		Float angular1 = body1->getAngularVelocity();		HX_STACK_VAR(angular1,"angular1");
		HX_STACK_LINE(628)
		Float angular = body2->getAngularVelocity();		HX_STACK_VAR(angular,"angular");
		HX_STACK_LINE(632)
		body1->resetMassData();
		HX_STACK_LINE(634)
		this->synchronizeFixtures();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,merge,(void))

::box2D::dynamics::B2Body B2Body_obj::split( Dynamic callbackMethod){
	HX_STACK_PUSH("B2Body::split","box2D/dynamics/B2Body.hx",525);
	HX_STACK_THIS(this);
	HX_STACK_ARG(callbackMethod,"callbackMethod");
	HX_STACK_LINE(526)
	::box2D::common::math::B2Vec2 linearVelocity = this->getLinearVelocity()->copy(null());		HX_STACK_VAR(linearVelocity,"linearVelocity");
	HX_STACK_LINE(527)
	Float angularVelocity = this->getAngularVelocity();		HX_STACK_VAR(angularVelocity,"angularVelocity");
	HX_STACK_LINE(528)
	::box2D::common::math::B2Vec2 center = this->getWorldCenter();		HX_STACK_VAR(center,"center");
	HX_STACK_LINE(529)
	::box2D::dynamics::B2Body body1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(body1,"body1");
	HX_STACK_LINE(530)
	::box2D::dynamics::B2Body body2 = this->m_world->createBody(this->getDefinition());		HX_STACK_VAR(body2,"body2");
	HX_STACK_LINE(532)
	::box2D::dynamics::B2Fixture prev = null();		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(533)
	::box2D::dynamics::B2Fixture f = body1->m_fixtureList;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(534)
	while(((f != null()))){
		HX_STACK_LINE(535)
		if ((callbackMethod(f).Cast< bool >())){
			HX_STACK_LINE(538)
			::box2D::dynamics::B2Fixture next = f->m_next;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(540)
			if (((prev != null()))){
				HX_STACK_LINE(541)
				prev->m_next = next;
			}
			else{
				HX_STACK_LINE(543)
				body1->m_fixtureList = next;
			}
			HX_STACK_LINE(546)
			(body1->m_fixtureCount)--;
			HX_STACK_LINE(549)
			f->m_next = body2->m_fixtureList;
			HX_STACK_LINE(550)
			body2->m_fixtureList = f;
			HX_STACK_LINE(551)
			(body2->m_fixtureCount)++;
			HX_STACK_LINE(553)
			f->m_body = body2;
			HX_STACK_LINE(555)
			f = next;
		}
		else{
			HX_STACK_LINE(557)
			prev = f;
			HX_STACK_LINE(558)
			f = f->m_next;
		}
	}
	HX_STACK_LINE(562)
	body1->resetMassData();
	HX_STACK_LINE(563)
	body2->resetMassData();
	HX_STACK_LINE(566)
	::box2D::common::math::B2Vec2 center1 = body1->getWorldCenter();		HX_STACK_VAR(center1,"center1");
	HX_STACK_LINE(567)
	::box2D::common::math::B2Vec2 center2 = body2->getWorldCenter();		HX_STACK_VAR(center2,"center2");
	HX_STACK_LINE(569)
	::box2D::common::math::B2Vec2 velocity1 = ::box2D::common::math::B2Math_obj::addVV(linearVelocity,::box2D::common::math::B2Math_obj::crossFV(angularVelocity,::box2D::common::math::B2Math_obj::subtractVV(center1,center),null()));		HX_STACK_VAR(velocity1,"velocity1");
	HX_STACK_LINE(573)
	::box2D::common::math::B2Vec2 velocity2 = ::box2D::common::math::B2Math_obj::addVV(linearVelocity,::box2D::common::math::B2Math_obj::crossFV(angularVelocity,::box2D::common::math::B2Math_obj::subtractVV(center2,center),null()));		HX_STACK_VAR(velocity2,"velocity2");
	HX_STACK_LINE(577)
	body1->setLinearVelocity(velocity1);
	HX_STACK_LINE(578)
	body2->setLinearVelocity(velocity2);
	HX_STACK_LINE(579)
	body1->setAngularVelocity(angularVelocity);
	HX_STACK_LINE(580)
	body2->setAngularVelocity(angularVelocity);
	HX_STACK_LINE(582)
	body1->synchronizeFixtures();
	HX_STACK_LINE(583)
	body2->synchronizeFixtures();
	HX_STACK_LINE(585)
	return body2;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,split,return )

Void B2Body_obj::applyImpulse( ::box2D::common::math::B2Vec2 impulse,::box2D::common::math::B2Vec2 point){
{
		HX_STACK_PUSH("B2Body::applyImpulse","box2D/dynamics/B2Body.hx",500);
		HX_STACK_THIS(this);
		HX_STACK_ARG(impulse,"impulse");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(501)
		if (((this->m_type != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
			HX_STACK_LINE(502)
			return null();
		}
		HX_STACK_LINE(506)
		if (((this->isAwake() == false))){
			HX_STACK_LINE(507)
			this->setAwake(true);
		}
		HX_STACK_LINE(511)
		hx::AddEq(this->m_linearVelocity->x,(this->m_invMass * impulse->x));
		HX_STACK_LINE(512)
		hx::AddEq(this->m_linearVelocity->y,(this->m_invMass * impulse->y));
		HX_STACK_LINE(514)
		hx::AddEq(this->m_angularVelocity,(this->m_invI * (((((point->x - this->m_sweep->c->x)) * impulse->y) - (((point->y - this->m_sweep->c->y)) * impulse->x)))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Body_obj,applyImpulse,(void))

Void B2Body_obj::applyTorque( Float torque){
{
		HX_STACK_PUSH("B2Body::applyTorque","box2D/dynamics/B2Body.hx",480);
		HX_STACK_THIS(this);
		HX_STACK_ARG(torque,"torque");
		HX_STACK_LINE(481)
		if (((this->m_type != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
			HX_STACK_LINE(482)
			return null();
		}
		HX_STACK_LINE(486)
		if (((this->isAwake() == false))){
			HX_STACK_LINE(487)
			this->setAwake(true);
		}
		HX_STACK_LINE(490)
		hx::AddEq(this->m_torque,torque);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,applyTorque,(void))

Void B2Body_obj::applyForce( ::box2D::common::math::B2Vec2 force,::box2D::common::math::B2Vec2 point){
{
		HX_STACK_PUSH("B2Body::applyForce","box2D/dynamics/B2Body.hx",456);
		HX_STACK_THIS(this);
		HX_STACK_ARG(force,"force");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(457)
		if (((this->m_type != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
			HX_STACK_LINE(458)
			return null();
		}
		HX_STACK_LINE(462)
		if (((this->isAwake() == false))){
			HX_STACK_LINE(463)
			this->setAwake(true);
		}
		HX_STACK_LINE(468)
		hx::AddEq(this->m_force->x,force->x);
		HX_STACK_LINE(469)
		hx::AddEq(this->m_force->y,force->y);
		HX_STACK_LINE(471)
		hx::AddEq(this->m_torque,((((point->x - this->m_sweep->c->x)) * force->y) - (((point->y - this->m_sweep->c->y)) * force->x)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Body_obj,applyForce,(void))

::box2D::dynamics::B2BodyDef B2Body_obj::getDefinition( ){
	HX_STACK_PUSH("B2Body::getDefinition","box2D/dynamics/B2Body.hx",432);
	HX_STACK_THIS(this);
	HX_STACK_LINE(433)
	::box2D::dynamics::B2BodyDef bd = ::box2D::dynamics::B2BodyDef_obj::__new();		HX_STACK_VAR(bd,"bd");
	HX_STACK_LINE(434)
	bd->type = this->getType();
	HX_STACK_LINE(435)
	bd->allowSleep = (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_allowSleepFlag))) == ::box2D::dynamics::B2Body_obj::e_allowSleepFlag);
	HX_STACK_LINE(436)
	bd->angle = this->getAngle();
	HX_STACK_LINE(437)
	bd->angularDamping = this->m_angularDamping;
	HX_STACK_LINE(438)
	bd->angularVelocity = this->m_angularVelocity;
	HX_STACK_LINE(439)
	bd->fixedRotation = (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_fixedRotationFlag))) == ::box2D::dynamics::B2Body_obj::e_fixedRotationFlag);
	HX_STACK_LINE(440)
	bd->bullet = (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_bulletFlag))) == ::box2D::dynamics::B2Body_obj::e_bulletFlag);
	HX_STACK_LINE(441)
	bd->awake = (((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_awakeFlag))) == ::box2D::dynamics::B2Body_obj::e_awakeFlag);
	HX_STACK_LINE(442)
	bd->linearDamping = this->m_linearDamping;
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		::box2D::common::math::B2Vec2 _this = bd->linearVelocity;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = this->getLinearVelocity();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(443)
		_this->x = v->x;
		HX_STACK_LINE(443)
		_this->y = v->y;
	}
	HX_STACK_LINE(444)
	bd->position = this->getPosition();
	HX_STACK_LINE(445)
	bd->userData = this->getUserData();
	HX_STACK_LINE(446)
	return bd;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getDefinition,return )

Float B2Body_obj::getAngularVelocity( ){
	HX_STACK_PUSH("B2Body::getAngularVelocity","box2D/dynamics/B2Body.hx",423);
	HX_STACK_THIS(this);
	HX_STACK_LINE(423)
	return this->m_angularVelocity;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getAngularVelocity,return )

Void B2Body_obj::setAngularVelocity( Float omega){
{
		HX_STACK_PUSH("B2Body::setAngularVelocity","box2D/dynamics/B2Body.hx",411);
		HX_STACK_THIS(this);
		HX_STACK_ARG(omega,"omega");
		HX_STACK_LINE(412)
		if (((this->m_type == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
			HX_STACK_LINE(413)
			return null();
		}
		HX_STACK_LINE(416)
		this->m_angularVelocity = omega;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setAngularVelocity,(void))

::box2D::common::math::B2Vec2 B2Body_obj::getLinearVelocity( ){
	HX_STACK_PUSH("B2Body::getLinearVelocity","box2D/dynamics/B2Body.hx",403);
	HX_STACK_THIS(this);
	HX_STACK_LINE(403)
	return this->m_linearVelocity;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getLinearVelocity,return )

Void B2Body_obj::setLinearVelocity( ::box2D::common::math::B2Vec2 v){
{
		HX_STACK_PUSH("B2Body::setLinearVelocity","box2D/dynamics/B2Body.hx",391);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(392)
		if (((this->m_type == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
			HX_STACK_LINE(393)
			return null();
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			::box2D::common::math::B2Vec2 _this = this->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(396)
			_this->x = v->x;
			HX_STACK_LINE(396)
			_this->y = v->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setLinearVelocity,(void))

::box2D::common::math::B2Vec2 B2Body_obj::getLocalCenter( ){
	HX_STACK_PUSH("B2Body::getLocalCenter","box2D/dynamics/B2Body.hx",383);
	HX_STACK_THIS(this);
	HX_STACK_LINE(383)
	return this->m_sweep->localCenter;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getLocalCenter,return )

::box2D::common::math::B2Vec2 B2Body_obj::getWorldCenter( ){
	HX_STACK_PUSH("B2Body::getWorldCenter","box2D/dynamics/B2Body.hx",376);
	HX_STACK_THIS(this);
	HX_STACK_LINE(376)
	return this->m_sweep->c;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getWorldCenter,return )

Void B2Body_obj::setAngle( Float angle){
{
		HX_STACK_PUSH("B2Body::setAngle","box2D/dynamics/B2Body.hx",368);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(368)
		this->setPositionAndAngle(this->getPosition(),angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setAngle,(void))

Float B2Body_obj::getAngle( ){
	HX_STACK_PUSH("B2Body::getAngle","box2D/dynamics/B2Body.hx",359);
	HX_STACK_THIS(this);
	HX_STACK_LINE(359)
	return this->m_sweep->a;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getAngle,return )

Void B2Body_obj::setPosition( ::box2D::common::math::B2Vec2 position){
{
		HX_STACK_PUSH("B2Body::setPosition","box2D/dynamics/B2Body.hx",351);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_LINE(351)
		this->setPositionAndAngle(position,this->getAngle());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setPosition,(void))

::box2D::common::math::B2Vec2 B2Body_obj::getPosition( ){
	HX_STACK_PUSH("B2Body::getPosition","box2D/dynamics/B2Body.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_LINE(342)
	return this->m_xf->position;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getPosition,return )

::box2D::common::math::B2Transform B2Body_obj::getTransform( ){
	HX_STACK_PUSH("B2Body::getTransform","box2D/dynamics/B2Body.hx",334);
	HX_STACK_THIS(this);
	HX_STACK_LINE(334)
	return this->m_xf;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Body_obj,getTransform,return )

Void B2Body_obj::setTransform( ::box2D::common::math::B2Transform xf){
{
		HX_STACK_PUSH("B2Body::setTransform","box2D/dynamics/B2Body.hx",326);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xf,"xf");
		HX_STACK_LINE(326)
		this->setPositionAndAngle(xf->position,xf->getAngle());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setTransform,(void))

Void B2Body_obj::setPositionFast( ::box2D::common::math::B2Vec2 position){
{
		HX_STACK_PUSH("B2Body::setPositionFast","box2D/dynamics/B2Body.hx",298);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_LINE(299)
		if (((this->m_world->isLocked() == true))){
			HX_STACK_LINE(300)
			return null();
		}
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			::box2D::common::math::B2Vec2 _this = this->m_xf->position;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(304)
			_this->x = position->x;
			HX_STACK_LINE(304)
			_this->y = position->y;
		}
		HX_STACK_LINE(306)
		::box2D::common::math::B2Mat22 tMat = this->m_xf->R;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(307)
		::box2D::common::math::B2Vec2 tVec = this->m_sweep->localCenter;		HX_STACK_VAR(tVec,"tVec");
		HX_STACK_LINE(309)
		this->m_sweep->c->x = ((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y));
		HX_STACK_LINE(310)
		this->m_sweep->c->y = ((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y));
		HX_STACK_LINE(312)
		hx::AddEq(this->m_sweep->c->x,this->m_xf->position->x);
		HX_STACK_LINE(313)
		hx::AddEq(this->m_sweep->c->y,this->m_xf->position->y);
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->c0;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_sweep->c;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(315)
			_this->x = v->x;
			HX_STACK_LINE(315)
			_this->y = v->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,setPositionFast,(void))

Void B2Body_obj::setPositionAndAngle( ::box2D::common::math::B2Vec2 position,Float angle){
{
		HX_STACK_PUSH("B2Body::setPositionAndAngle","box2D/dynamics/B2Body.hx",257);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(259)
		::box2D::dynamics::B2Fixture f;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(262)
		if (((this->m_world->isLocked() == true))){
			HX_STACK_LINE(263)
			return null();
		}
		HX_STACK_LINE(267)
		this->m_xf->R->set(angle);
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			::box2D::common::math::B2Vec2 _this = this->m_xf->position;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(268)
			_this->x = position->x;
			HX_STACK_LINE(268)
			_this->y = position->y;
		}
		HX_STACK_LINE(272)
		::box2D::common::math::B2Mat22 tMat = this->m_xf->R;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(273)
		::box2D::common::math::B2Vec2 tVec = this->m_sweep->localCenter;		HX_STACK_VAR(tVec,"tVec");
		HX_STACK_LINE(275)
		this->m_sweep->c->x = ((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y));
		HX_STACK_LINE(277)
		this->m_sweep->c->y = ((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y));
		HX_STACK_LINE(279)
		hx::AddEq(this->m_sweep->c->x,this->m_xf->position->x);
		HX_STACK_LINE(280)
		hx::AddEq(this->m_sweep->c->y,this->m_xf->position->y);
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			::box2D::common::math::B2Vec2 _this = this->m_sweep->c0;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_sweep->c;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(282)
			_this->x = v->x;
			HX_STACK_LINE(282)
			_this->y = v->y;
		}
		HX_STACK_LINE(284)
		this->m_sweep->a0 = this->m_sweep->a = angle;
		HX_STACK_LINE(286)
		::box2D::collision::IBroadPhase broadPhase = this->m_world->m_contactManager->m_broadPhase;		HX_STACK_VAR(broadPhase,"broadPhase");
		HX_STACK_LINE(287)
		f = this->m_fixtureList;
		HX_STACK_LINE(288)
		while(((f != null()))){
			HX_STACK_LINE(290)
			f->synchronize(broadPhase,this->m_xf,this->m_xf);
			HX_STACK_LINE(291)
			f = f->m_next;
		}
		HX_STACK_LINE(293)
		this->m_world->m_contactManager->findNewContacts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Body_obj,setPositionAndAngle,(void))

Void B2Body_obj::DestroyFixture( ::box2D::dynamics::B2Fixture fixture){
{
		HX_STACK_PUSH("B2Body::DestroyFixture","box2D/dynamics/B2Body.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fixture,"fixture");
		HX_STACK_LINE(182)
		if (((this->m_world->isLocked() == true))){
			HX_STACK_LINE(183)
			return null();
		}
		HX_STACK_LINE(189)
		::box2D::dynamics::B2Fixture node = this->m_fixtureList;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(190)
		::box2D::dynamics::B2Fixture ppF = null();		HX_STACK_VAR(ppF,"ppF");
		HX_STACK_LINE(191)
		bool found = false;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(192)
		while(((node != null()))){
			HX_STACK_LINE(194)
			if (((node == fixture))){
				HX_STACK_LINE(196)
				if (((ppF != null()))){
					HX_STACK_LINE(197)
					ppF->m_next = fixture->m_next;
				}
				else{
					HX_STACK_LINE(199)
					this->m_fixtureList = fixture->m_next;
				}
				HX_STACK_LINE(201)
				found = true;
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(205)
			ppF = node;
			HX_STACK_LINE(206)
			node = node->m_next;
		}
		HX_STACK_LINE(213)
		::box2D::dynamics::contacts::B2ContactEdge edge = this->m_contactList;		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(214)
		while(((edge != null()))){
			HX_STACK_LINE(216)
			::box2D::dynamics::contacts::B2Contact c = edge->contact;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(217)
			edge = edge->next;
			HX_STACK_LINE(219)
			::box2D::dynamics::B2Fixture fixtureA = c->getFixtureA();		HX_STACK_VAR(fixtureA,"fixtureA");
			HX_STACK_LINE(220)
			::box2D::dynamics::B2Fixture fixtureB = c->getFixtureB();		HX_STACK_VAR(fixtureB,"fixtureB");
			HX_STACK_LINE(221)
			if (((bool((fixture == fixtureA)) || bool((fixture == fixtureB))))){
				HX_STACK_LINE(222)
				this->m_world->m_contactManager->destroy(c);
			}
		}
		HX_STACK_LINE(230)
		if (((((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_activeFlag))) != (int)0))){
			HX_STACK_LINE(232)
			::box2D::collision::IBroadPhase broadPhase = this->m_world->m_contactManager->m_broadPhase;		HX_STACK_VAR(broadPhase,"broadPhase");
			HX_STACK_LINE(233)
			fixture->destroyProxy(broadPhase);
		}
		else{
		}
		HX_STACK_LINE(240)
		fixture->destroy();
		HX_STACK_LINE(241)
		fixture->m_body = null();
		HX_STACK_LINE(242)
		fixture->m_next = null();
		HX_STACK_LINE(244)
		--(this->m_fixtureCount);
		HX_STACK_LINE(247)
		this->resetMassData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,DestroyFixture,(void))

::box2D::dynamics::B2Fixture B2Body_obj::createFixture2( ::box2D::collision::shapes::B2Shape shape,hx::Null< Float >  __o_density){
Float density = __o_density.Default(0.0);
	HX_STACK_PUSH("B2Body::createFixture2","box2D/dynamics/B2Body.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(density,"density");
{
		HX_STACK_LINE(164)
		::box2D::dynamics::B2FixtureDef def = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(def,"def");
		HX_STACK_LINE(165)
		def->shape = shape;
		HX_STACK_LINE(166)
		def->density = density;
		HX_STACK_LINE(168)
		return this->createFixture(def);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(B2Body_obj,createFixture2,return )

::box2D::dynamics::B2Fixture B2Body_obj::createFixture( ::box2D::dynamics::B2FixtureDef def){
	HX_STACK_PUSH("B2Body::createFixture","box2D/dynamics/B2Body.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(def,"def");
	HX_STACK_LINE(72)
	if (((this->m_world->isLocked() == true))){
		HX_STACK_LINE(73)
		return null();
	}
	HX_STACK_LINE(124)
	::box2D::dynamics::B2Fixture fixture = ::box2D::dynamics::B2Fixture_obj::__new();		HX_STACK_VAR(fixture,"fixture");
	HX_STACK_LINE(125)
	fixture->create(hx::ObjectPtr<OBJ_>(this),this->m_xf,def);
	HX_STACK_LINE(128)
	if (((((int(this->m_flags) & int(::box2D::dynamics::B2Body_obj::e_activeFlag))) != (int)0))){
		HX_STACK_LINE(130)
		::box2D::collision::IBroadPhase broadPhase = this->m_world->m_contactManager->m_broadPhase;		HX_STACK_VAR(broadPhase,"broadPhase");
		HX_STACK_LINE(131)
		fixture->createProxy(broadPhase,this->m_xf);
	}
	HX_STACK_LINE(134)
	fixture->m_next = this->m_fixtureList;
	HX_STACK_LINE(135)
	this->m_fixtureList = fixture;
	HX_STACK_LINE(136)
	++(this->m_fixtureCount);
	HX_STACK_LINE(138)
	fixture->m_body = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(141)
	if (((fixture->m_density > 0.0))){
		HX_STACK_LINE(142)
		this->resetMassData();
	}
	HX_STACK_LINE(148)
	hx::OrEq(this->m_world->m_flags,::box2D::dynamics::B2World_obj::e_newFixture);
	HX_STACK_LINE(150)
	return fixture;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Body_obj,createFixture,return )

Float B2Body_obj::connectEdges( ::box2D::collision::shapes::B2EdgeShape s1,::box2D::collision::shapes::B2EdgeShape s2,Float angle1){
	HX_STACK_PUSH("B2Body::connectEdges","box2D/dynamics/B2Body.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s1,"s1");
	HX_STACK_ARG(s2,"s2");
	HX_STACK_ARG(angle1,"angle1");
	HX_STACK_LINE(47)
	Float angle2 = ::Math_obj::atan2(s2->getDirectionVector()->y,s2->getDirectionVector()->x);		HX_STACK_VAR(angle2,"angle2");
	HX_STACK_LINE(48)
	Float coreOffset = ::Math_obj::tan((((angle2 - angle1)) * 0.5));		HX_STACK_VAR(coreOffset,"coreOffset");
	HX_STACK_LINE(49)
	::box2D::common::math::B2Vec2 core = ::box2D::common::math::B2Math_obj::mulFV(coreOffset,s2->getDirectionVector());		HX_STACK_VAR(core,"core");
	HX_STACK_LINE(50)
	core = ::box2D::common::math::B2Math_obj::subtractVV(core,s2->getNormalVector());
	HX_STACK_LINE(51)
	core = ::box2D::common::math::B2Math_obj::mulFV(::box2D::common::B2Settings_obj::b2_toiSlop,core);
	HX_STACK_LINE(52)
	core = ::box2D::common::math::B2Math_obj::addVV(core,s2->getVertex1());
	HX_STACK_LINE(53)
	::box2D::common::math::B2Vec2 cornerDir = ::box2D::common::math::B2Math_obj::addVV(s1->getDirectionVector(),s2->getDirectionVector());		HX_STACK_VAR(cornerDir,"cornerDir");
	HX_STACK_LINE(54)
	cornerDir->normalize();
	HX_STACK_LINE(55)
	bool convex = (::box2D::common::math::B2Math_obj::dot(s1->getDirectionVector(),s2->getNormalVector()) > 0.0);		HX_STACK_VAR(convex,"convex");
	HX_STACK_LINE(56)
	s1->setNextEdge(s2,core,cornerDir,convex);
	HX_STACK_LINE(57)
	s2->setPrevEdge(s1,core,cornerDir,convex);
	HX_STACK_LINE(58)
	return angle2;
}


HX_DEFINE_DYNAMIC_FUNC3(B2Body_obj,connectEdges,return )

::box2D::common::math::B2Transform B2Body_obj::s_xf1;

int B2Body_obj::e_islandFlag;

int B2Body_obj::e_awakeFlag;

int B2Body_obj::e_allowSleepFlag;

int B2Body_obj::e_bulletFlag;

int B2Body_obj::e_fixedRotationFlag;

int B2Body_obj::e_activeFlag;

int B2Body_obj::e_ignoreGravityFlag;

int B2Body_obj::e_alwaysActiveFlag;

int B2Body_obj::e_pausedFlag;

int B2Body_obj::b2_staticBody;

int B2Body_obj::b2_kinematicBody;

int B2Body_obj::b2_dynamicBody;


B2Body_obj::B2Body_obj()
{
}

void B2Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Body);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	HX_MARK_MEMBER_NAME(m_userData,"m_userData");
	HX_MARK_MEMBER_NAME(m_sleepTime,"m_sleepTime");
	HX_MARK_MEMBER_NAME(m_angularDamping,"m_angularDamping");
	HX_MARK_MEMBER_NAME(m_linearDamping,"m_linearDamping");
	HX_MARK_MEMBER_NAME(m_inertiaScale,"m_inertiaScale");
	HX_MARK_MEMBER_NAME(m_invI,"m_invI");
	HX_MARK_MEMBER_NAME(m_I,"m_I");
	HX_MARK_MEMBER_NAME(m_invMass,"m_invMass");
	HX_MARK_MEMBER_NAME(m_mass,"m_mass");
	HX_MARK_MEMBER_NAME(m_contactList,"m_contactList");
	HX_MARK_MEMBER_NAME(m_jointList,"m_jointList");
	HX_MARK_MEMBER_NAME(m_controllerCount,"m_controllerCount");
	HX_MARK_MEMBER_NAME(m_controllerList,"m_controllerList");
	HX_MARK_MEMBER_NAME(m_fixtureCount,"m_fixtureCount");
	HX_MARK_MEMBER_NAME(m_fixtureList,"m_fixtureList");
	HX_MARK_MEMBER_NAME(m_next,"m_next");
	HX_MARK_MEMBER_NAME(m_prev,"m_prev");
	HX_MARK_MEMBER_NAME(m_world,"m_world");
	HX_MARK_MEMBER_NAME(m_torque,"m_torque");
	HX_MARK_MEMBER_NAME(m_force,"m_force");
	HX_MARK_MEMBER_NAME(m_angularVelocity,"m_angularVelocity");
	HX_MARK_MEMBER_NAME(m_linearVelocity,"m_linearVelocity");
	HX_MARK_MEMBER_NAME(m_sweep,"m_sweep");
	HX_MARK_MEMBER_NAME(m_xf,"m_xf");
	HX_MARK_MEMBER_NAME(m_islandIndex,"m_islandIndex");
	HX_MARK_MEMBER_NAME(m_type,"m_type");
	HX_MARK_MEMBER_NAME(m_flags,"m_flags");
	HX_MARK_END_CLASS();
}

void B2Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	HX_VISIT_MEMBER_NAME(m_userData,"m_userData");
	HX_VISIT_MEMBER_NAME(m_sleepTime,"m_sleepTime");
	HX_VISIT_MEMBER_NAME(m_angularDamping,"m_angularDamping");
	HX_VISIT_MEMBER_NAME(m_linearDamping,"m_linearDamping");
	HX_VISIT_MEMBER_NAME(m_inertiaScale,"m_inertiaScale");
	HX_VISIT_MEMBER_NAME(m_invI,"m_invI");
	HX_VISIT_MEMBER_NAME(m_I,"m_I");
	HX_VISIT_MEMBER_NAME(m_invMass,"m_invMass");
	HX_VISIT_MEMBER_NAME(m_mass,"m_mass");
	HX_VISIT_MEMBER_NAME(m_contactList,"m_contactList");
	HX_VISIT_MEMBER_NAME(m_jointList,"m_jointList");
	HX_VISIT_MEMBER_NAME(m_controllerCount,"m_controllerCount");
	HX_VISIT_MEMBER_NAME(m_controllerList,"m_controllerList");
	HX_VISIT_MEMBER_NAME(m_fixtureCount,"m_fixtureCount");
	HX_VISIT_MEMBER_NAME(m_fixtureList,"m_fixtureList");
	HX_VISIT_MEMBER_NAME(m_next,"m_next");
	HX_VISIT_MEMBER_NAME(m_prev,"m_prev");
	HX_VISIT_MEMBER_NAME(m_world,"m_world");
	HX_VISIT_MEMBER_NAME(m_torque,"m_torque");
	HX_VISIT_MEMBER_NAME(m_force,"m_force");
	HX_VISIT_MEMBER_NAME(m_angularVelocity,"m_angularVelocity");
	HX_VISIT_MEMBER_NAME(m_linearVelocity,"m_linearVelocity");
	HX_VISIT_MEMBER_NAME(m_sweep,"m_sweep");
	HX_VISIT_MEMBER_NAME(m_xf,"m_xf");
	HX_VISIT_MEMBER_NAME(m_islandIndex,"m_islandIndex");
	HX_VISIT_MEMBER_NAME(m_type,"m_type");
	HX_VISIT_MEMBER_NAME(m_flags,"m_flags");
}

Dynamic B2Body_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_I") ) { return m_I; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"m_xf") ) { return m_xf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"s_xf1") ) { return s_xf1; }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"split") ) { return split_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"m_invI") ) { return m_invI; }
		if (HX_FIELD_EQ(inName,"m_mass") ) { return m_mass; }
		if (HX_FIELD_EQ(inName,"m_next") ) { return m_next; }
		if (HX_FIELD_EQ(inName,"m_prev") ) { return m_prev; }
		if (HX_FIELD_EQ(inName,"m_type") ) { return m_type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		if (HX_FIELD_EQ(inName,"m_world") ) { return m_world; }
		if (HX_FIELD_EQ(inName,"m_force") ) { return m_force; }
		if (HX_FIELD_EQ(inName,"m_sweep") ) { return m_sweep; }
		if (HX_FIELD_EQ(inName,"m_flags") ) { return m_flags; }
		if (HX_FIELD_EQ(inName,"advance") ) { return advance_dyn(); }
		if (HX_FIELD_EQ(inName,"getNext") ) { return getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"isAwake") ) { return isAwake_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"setType") ) { return setType_dyn(); }
		if (HX_FIELD_EQ(inName,"getMass") ) { return getMass_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_torque") ) { return m_torque; }
		if (HX_FIELD_EQ(inName,"isPaused") ) { return isPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		if (HX_FIELD_EQ(inName,"setAwake") ) { return setAwake_dyn(); }
		if (HX_FIELD_EQ(inName,"isBullet") ) { return isBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_invMass") ) { return m_invMass; }
		if (HX_FIELD_EQ(inName,"setPaused") ) { return setPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"setActive") ) { return setActive_dyn(); }
		if (HX_FIELD_EQ(inName,"setBullet") ) { return setBullet_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_userData") ) { return m_userData; }
		if (HX_FIELD_EQ(inName,"getInertia") ) { return getInertia_dyn(); }
		if (HX_FIELD_EQ(inName,"applyForce") ) { return applyForce_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"e_awakeFlag") ) { return e_awakeFlag; }
		if (HX_FIELD_EQ(inName,"m_sleepTime") ) { return m_sleepTime; }
		if (HX_FIELD_EQ(inName,"m_jointList") ) { return m_jointList; }
		if (HX_FIELD_EQ(inName,"setFriction") ) { return setFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"setUserData") ) { return setUserData_dyn(); }
		if (HX_FIELD_EQ(inName,"getUserData") ) { return getUserData_dyn(); }
		if (HX_FIELD_EQ(inName,"setMassData") ) { return setMassData_dyn(); }
		if (HX_FIELD_EQ(inName,"getMassData") ) { return getMassData_dyn(); }
		if (HX_FIELD_EQ(inName,"applyTorque") ) { return applyTorque_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"e_islandFlag") ) { return e_islandFlag; }
		if (HX_FIELD_EQ(inName,"e_bulletFlag") ) { return e_bulletFlag; }
		if (HX_FIELD_EQ(inName,"e_activeFlag") ) { return e_activeFlag; }
		if (HX_FIELD_EQ(inName,"e_pausedFlag") ) { return e_pausedFlag; }
		if (HX_FIELD_EQ(inName,"getJointList") ) { return getJointList_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"getTransform") ) { return getTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"setTransform") ) { return setTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"connectEdges") ) { return connectEdges_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"b2_staticBody") ) { return b2_staticBody; }
		if (HX_FIELD_EQ(inName,"m_contactList") ) { return m_contactList; }
		if (HX_FIELD_EQ(inName,"m_fixtureList") ) { return m_fixtureList; }
		if (HX_FIELD_EQ(inName,"m_islandIndex") ) { return m_islandIndex; }
		if (HX_FIELD_EQ(inName,"shouldCollide") ) { return shouldCollide_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounciness") ) { return setBounciness_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocalPoint") ) { return getLocalPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldPoint") ) { return getWorldPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"resetMassData") ) { return resetMassData_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return getDefinition_dyn(); }
		if (HX_FIELD_EQ(inName,"createFixture") ) { return createFixture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"b2_dynamicBody") ) { return b2_dynamicBody; }
		if (HX_FIELD_EQ(inName,"m_inertiaScale") ) { return m_inertiaScale; }
		if (HX_FIELD_EQ(inName,"m_fixtureCount") ) { return m_fixtureCount; }
		if (HX_FIELD_EQ(inName,"isAlwaysActive") ) { return isAlwaysActive_dyn(); }
		if (HX_FIELD_EQ(inName,"getContactList") ) { return getContactList_dyn(); }
		if (HX_FIELD_EQ(inName,"getFixtureList") ) { return getFixtureList_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocalVector") ) { return getLocalVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldVector") ) { return getWorldVector_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocalCenter") ) { return getLocalCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldCenter") ) { return getWorldCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"DestroyFixture") ) { return DestroyFixture_dyn(); }
		if (HX_FIELD_EQ(inName,"createFixture2") ) { return createFixture2_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_linearDamping") ) { return m_linearDamping; }
		if (HX_FIELD_EQ(inName,"setAlwaysActive") ) { return setAlwaysActive_dyn(); }
		if (HX_FIELD_EQ(inName,"isFixedRotation") ) { return isFixedRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"setPositionFast") ) { return setPositionFast_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_allowSleepFlag") ) { return e_allowSleepFlag; }
		if (HX_FIELD_EQ(inName,"b2_kinematicBody") ) { return b2_kinematicBody; }
		if (HX_FIELD_EQ(inName,"m_angularDamping") ) { return m_angularDamping; }
		if (HX_FIELD_EQ(inName,"m_controllerList") ) { return m_controllerList; }
		if (HX_FIELD_EQ(inName,"m_linearVelocity") ) { return m_linearVelocity; }
		if (HX_FIELD_EQ(inName,"setIgnoreGravity") ) { return setIgnoreGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"setFixedRotation") ) { return setFixedRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearDamping") ) { return setLinearDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"getLinearDamping") ) { return getLinearDamping_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_controllerCount") ) { return m_controllerCount; }
		if (HX_FIELD_EQ(inName,"m_angularVelocity") ) { return m_angularVelocity; }
		if (HX_FIELD_EQ(inName,"isIgnoringGravity") ) { return isIgnoringGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"getControllerList") ) { return getControllerList_dyn(); }
		if (HX_FIELD_EQ(inName,"isSleepingAllowed") ) { return isSleepingAllowed_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularDamping") ) { return setAngularDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngularDamping") ) { return getAngularDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"getLinearVelocity") ) { return getLinearVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearVelocity") ) { return setLinearVelocity_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"e_alwaysActiveFlag") ) { return e_alwaysActiveFlag; }
		if (HX_FIELD_EQ(inName,"setSleepingAllowed") ) { return setSleepingAllowed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngularVelocity") ) { return getAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularVelocity") ) { return setAngularVelocity_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"e_fixedRotationFlag") ) { return e_fixedRotationFlag; }
		if (HX_FIELD_EQ(inName,"e_ignoreGravityFlag") ) { return e_ignoreGravityFlag; }
		if (HX_FIELD_EQ(inName,"synchronizeFixtures") ) { return synchronizeFixtures_dyn(); }
		if (HX_FIELD_EQ(inName,"setPositionAndAngle") ) { return setPositionAndAngle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"synchronizeTransform") ) { return synchronizeTransform_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"getLinearVelocityFromLocalPoint") ) { return getLinearVelocityFromLocalPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLinearVelocityFromWorldPoint") ) { return getLinearVelocityFromWorldPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_I") ) { m_I=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_xf") ) { m_xf=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"s_xf1") ) { s_xf1=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_invI") ) { m_invI=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mass") ) { m_mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_next") ) { m_next=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_prev") ) { m_prev=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_type") ) { m_type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_world") ) { m_world=inValue.Cast< ::box2D::dynamics::B2World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_force") ) { m_force=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_sweep") ) { m_sweep=inValue.Cast< ::box2D::common::math::B2Sweep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_flags") ) { m_flags=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_torque") ) { m_torque=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_invMass") ) { m_invMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_userData") ) { m_userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"e_awakeFlag") ) { e_awakeFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_sleepTime") ) { m_sleepTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_jointList") ) { m_jointList=inValue.Cast< ::box2D::dynamics::joints::B2JointEdge >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"e_islandFlag") ) { e_islandFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_bulletFlag") ) { e_bulletFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_activeFlag") ) { e_activeFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_pausedFlag") ) { e_pausedFlag=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"b2_staticBody") ) { b2_staticBody=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_contactList") ) { m_contactList=inValue.Cast< ::box2D::dynamics::contacts::B2ContactEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fixtureList") ) { m_fixtureList=inValue.Cast< ::box2D::dynamics::B2Fixture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_islandIndex") ) { m_islandIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"b2_dynamicBody") ) { b2_dynamicBody=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_inertiaScale") ) { m_inertiaScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fixtureCount") ) { m_fixtureCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_linearDamping") ) { m_linearDamping=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_allowSleepFlag") ) { e_allowSleepFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2_kinematicBody") ) { b2_kinematicBody=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_angularDamping") ) { m_angularDamping=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_controllerList") ) { m_controllerList=inValue.Cast< ::box2D::dynamics::controllers::B2ControllerEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_linearVelocity") ) { m_linearVelocity=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_controllerCount") ) { m_controllerCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_angularVelocity") ) { m_angularVelocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"e_alwaysActiveFlag") ) { e_alwaysActiveFlag=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"e_fixedRotationFlag") ) { e_fixedRotationFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_ignoreGravityFlag") ) { e_ignoreGravityFlag=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("groupID"));
	outFields->push(HX_CSTRING("m_userData"));
	outFields->push(HX_CSTRING("m_sleepTime"));
	outFields->push(HX_CSTRING("m_angularDamping"));
	outFields->push(HX_CSTRING("m_linearDamping"));
	outFields->push(HX_CSTRING("m_inertiaScale"));
	outFields->push(HX_CSTRING("m_invI"));
	outFields->push(HX_CSTRING("m_I"));
	outFields->push(HX_CSTRING("m_invMass"));
	outFields->push(HX_CSTRING("m_mass"));
	outFields->push(HX_CSTRING("m_contactList"));
	outFields->push(HX_CSTRING("m_jointList"));
	outFields->push(HX_CSTRING("m_controllerCount"));
	outFields->push(HX_CSTRING("m_controllerList"));
	outFields->push(HX_CSTRING("m_fixtureCount"));
	outFields->push(HX_CSTRING("m_fixtureList"));
	outFields->push(HX_CSTRING("m_next"));
	outFields->push(HX_CSTRING("m_prev"));
	outFields->push(HX_CSTRING("m_world"));
	outFields->push(HX_CSTRING("m_torque"));
	outFields->push(HX_CSTRING("m_force"));
	outFields->push(HX_CSTRING("m_angularVelocity"));
	outFields->push(HX_CSTRING("m_linearVelocity"));
	outFields->push(HX_CSTRING("m_sweep"));
	outFields->push(HX_CSTRING("m_xf"));
	outFields->push(HX_CSTRING("m_islandIndex"));
	outFields->push(HX_CSTRING("m_type"));
	outFields->push(HX_CSTRING("m_flags"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("s_xf1"),
	HX_CSTRING("e_islandFlag"),
	HX_CSTRING("e_awakeFlag"),
	HX_CSTRING("e_allowSleepFlag"),
	HX_CSTRING("e_bulletFlag"),
	HX_CSTRING("e_fixedRotationFlag"),
	HX_CSTRING("e_activeFlag"),
	HX_CSTRING("e_ignoreGravityFlag"),
	HX_CSTRING("e_alwaysActiveFlag"),
	HX_CSTRING("e_pausedFlag"),
	HX_CSTRING("b2_staticBody"),
	HX_CSTRING("b2_kinematicBody"),
	HX_CSTRING("b2_dynamicBody"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("size"),
	HX_CSTRING("origin"),
	HX_CSTRING("groupID"),
	HX_CSTRING("m_userData"),
	HX_CSTRING("m_sleepTime"),
	HX_CSTRING("m_angularDamping"),
	HX_CSTRING("m_linearDamping"),
	HX_CSTRING("m_inertiaScale"),
	HX_CSTRING("m_invI"),
	HX_CSTRING("m_I"),
	HX_CSTRING("m_invMass"),
	HX_CSTRING("m_mass"),
	HX_CSTRING("m_contactList"),
	HX_CSTRING("m_jointList"),
	HX_CSTRING("m_controllerCount"),
	HX_CSTRING("m_controllerList"),
	HX_CSTRING("m_fixtureCount"),
	HX_CSTRING("m_fixtureList"),
	HX_CSTRING("m_next"),
	HX_CSTRING("m_prev"),
	HX_CSTRING("m_world"),
	HX_CSTRING("m_torque"),
	HX_CSTRING("m_force"),
	HX_CSTRING("m_angularVelocity"),
	HX_CSTRING("m_linearVelocity"),
	HX_CSTRING("m_sweep"),
	HX_CSTRING("m_xf"),
	HX_CSTRING("m_islandIndex"),
	HX_CSTRING("m_type"),
	HX_CSTRING("m_flags"),
	HX_CSTRING("advance"),
	HX_CSTRING("shouldCollide"),
	HX_CSTRING("synchronizeTransform"),
	HX_CSTRING("synchronizeFixtures"),
	HX_CSTRING("isAlwaysActive"),
	HX_CSTRING("setAlwaysActive"),
	HX_CSTRING("isIgnoringGravity"),
	HX_CSTRING("setIgnoreGravity"),
	HX_CSTRING("isPaused"),
	HX_CSTRING("setPaused"),
	HX_CSTRING("setBounciness"),
	HX_CSTRING("setFriction"),
	HX_CSTRING("getWorld"),
	HX_CSTRING("setUserData"),
	HX_CSTRING("getUserData"),
	HX_CSTRING("getNext"),
	HX_CSTRING("getContactList"),
	HX_CSTRING("getControllerList"),
	HX_CSTRING("getJointList"),
	HX_CSTRING("getFixtureList"),
	HX_CSTRING("isSleepingAllowed"),
	HX_CSTRING("isActive"),
	HX_CSTRING("setActive"),
	HX_CSTRING("isFixedRotation"),
	HX_CSTRING("setFixedRotation"),
	HX_CSTRING("isAwake"),
	HX_CSTRING("setAwake"),
	HX_CSTRING("setSleepingAllowed"),
	HX_CSTRING("isBullet"),
	HX_CSTRING("setBullet"),
	HX_CSTRING("getType"),
	HX_CSTRING("setType"),
	HX_CSTRING("setAngularDamping"),
	HX_CSTRING("getAngularDamping"),
	HX_CSTRING("setLinearDamping"),
	HX_CSTRING("getLinearDamping"),
	HX_CSTRING("getLinearVelocityFromLocalPoint"),
	HX_CSTRING("getLinearVelocityFromWorldPoint"),
	HX_CSTRING("getLocalVector"),
	HX_CSTRING("getLocalPoint"),
	HX_CSTRING("getWorldVector"),
	HX_CSTRING("getWorldPoint"),
	HX_CSTRING("resetMassData"),
	HX_CSTRING("setMassData"),
	HX_CSTRING("getMassData"),
	HX_CSTRING("getInertia"),
	HX_CSTRING("getMass"),
	HX_CSTRING("merge"),
	HX_CSTRING("split"),
	HX_CSTRING("applyImpulse"),
	HX_CSTRING("applyTorque"),
	HX_CSTRING("applyForce"),
	HX_CSTRING("getDefinition"),
	HX_CSTRING("getAngularVelocity"),
	HX_CSTRING("setAngularVelocity"),
	HX_CSTRING("getLinearVelocity"),
	HX_CSTRING("setLinearVelocity"),
	HX_CSTRING("getLocalCenter"),
	HX_CSTRING("getWorldCenter"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("getPosition"),
	HX_CSTRING("getTransform"),
	HX_CSTRING("setTransform"),
	HX_CSTRING("setPositionFast"),
	HX_CSTRING("setPositionAndAngle"),
	HX_CSTRING("DestroyFixture"),
	HX_CSTRING("createFixture2"),
	HX_CSTRING("createFixture"),
	HX_CSTRING("connectEdges"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Body_obj::s_xf1,"s_xf1");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_islandFlag,"e_islandFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_awakeFlag,"e_awakeFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_allowSleepFlag,"e_allowSleepFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_bulletFlag,"e_bulletFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_fixedRotationFlag,"e_fixedRotationFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_activeFlag,"e_activeFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_ignoreGravityFlag,"e_ignoreGravityFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_alwaysActiveFlag,"e_alwaysActiveFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::e_pausedFlag,"e_pausedFlag");
	HX_MARK_MEMBER_NAME(B2Body_obj::b2_staticBody,"b2_staticBody");
	HX_MARK_MEMBER_NAME(B2Body_obj::b2_kinematicBody,"b2_kinematicBody");
	HX_MARK_MEMBER_NAME(B2Body_obj::b2_dynamicBody,"b2_dynamicBody");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Body_obj::s_xf1,"s_xf1");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_islandFlag,"e_islandFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_awakeFlag,"e_awakeFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_allowSleepFlag,"e_allowSleepFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_bulletFlag,"e_bulletFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_fixedRotationFlag,"e_fixedRotationFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_activeFlag,"e_activeFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_ignoreGravityFlag,"e_ignoreGravityFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_alwaysActiveFlag,"e_alwaysActiveFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::e_pausedFlag,"e_pausedFlag");
	HX_VISIT_MEMBER_NAME(B2Body_obj::b2_staticBody,"b2_staticBody");
	HX_VISIT_MEMBER_NAME(B2Body_obj::b2_kinematicBody,"b2_kinematicBody");
	HX_VISIT_MEMBER_NAME(B2Body_obj::b2_dynamicBody,"b2_dynamicBody");
};

Class B2Body_obj::__mClass;

void B2Body_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2Body"), hx::TCanCast< B2Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Body_obj::__boot()
{
	s_xf1= ::box2D::common::math::B2Transform_obj::__new(null(),null());
	e_islandFlag= (int)1;
	e_awakeFlag= (int)2;
	e_allowSleepFlag= (int)4;
	e_bulletFlag= (int)8;
	e_fixedRotationFlag= (int)16;
	e_activeFlag= (int)32;
	e_ignoreGravityFlag= (int)128;
	e_alwaysActiveFlag= (int)256;
	e_pausedFlag= (int)512;
	b2_staticBody= (int)0;
	b2_kinematicBody= (int)1;
	b2_dynamicBody= (int)2;
}

} // end namespace box2D
} // end namespace dynamics
