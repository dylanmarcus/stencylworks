#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2Collision
#include <box2D/collision/B2Collision.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
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
#ifndef INCLUDED_box2D_dynamics_contacts_B2PolygonContact
#include <box2D/dynamics/contacts/B2PolygonContact.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void B2PolygonContact_obj::__construct()
{
HX_STACK_PUSH("B2PolygonContact::new","box2D/dynamics/contacts/B2PolygonContact.hx",31);
{
	HX_STACK_LINE(31)
	super::__construct();
}
;
	return null();
}

B2PolygonContact_obj::~B2PolygonContact_obj() { }

Dynamic B2PolygonContact_obj::__CreateEmpty() { return  new B2PolygonContact_obj; }
hx::ObjectPtr< B2PolygonContact_obj > B2PolygonContact_obj::__new()
{  hx::ObjectPtr< B2PolygonContact_obj > result = new B2PolygonContact_obj();
	result->__construct();
	return result;}

Dynamic B2PolygonContact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2PolygonContact_obj > result = new B2PolygonContact_obj();
	result->__construct();
	return result;}

Void B2PolygonContact_obj::evaluate( ){
{
		HX_STACK_PUSH("B2PolygonContact::evaluate","box2D/dynamics/contacts/B2PolygonContact.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		::box2D::dynamics::B2Body bA = this->m_fixtureA->getBody();		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(51)
		::box2D::dynamics::B2Body bB = this->m_fixtureB->getBody();		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(53)
		::box2D::collision::B2Collision_obj::collidePolygons(this->m_manifold,hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(this->m_fixtureA->getShape()),bA->m_xf,hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(this->m_fixtureB->getShape()),bB->m_xf);
	}
return null();
}


Void B2PolygonContact_obj::reset( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB){
{
		HX_STACK_PUSH("B2PolygonContact::reset","box2D/dynamics/contacts/B2PolygonContact.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fixtureA,"fixtureA");
		HX_STACK_ARG(fixtureB,"fixtureB");
		HX_STACK_LINE(42)
		this->super::reset(fixtureA,fixtureB);
	}
return null();
}


::box2D::dynamics::contacts::B2Contact B2PolygonContact_obj::create( Dynamic allocator){
	HX_STACK_PUSH("B2PolygonContact::create","box2D/dynamics/contacts/B2PolygonContact.hx",33);
	HX_STACK_ARG(allocator,"allocator");
	HX_STACK_LINE(33)
	return ::box2D::dynamics::contacts::B2PolygonContact_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2PolygonContact_obj,create,return )

Void B2PolygonContact_obj::destroy( ::box2D::dynamics::contacts::B2Contact contact,Dynamic allocator){
{
		HX_STACK_PUSH("B2PolygonContact::destroy","box2D/dynamics/contacts/B2PolygonContact.hx",37);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_ARG(allocator,"allocator");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2PolygonContact_obj,destroy,(void))


B2PolygonContact_obj::B2PolygonContact_obj()
{
}

void B2PolygonContact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2PolygonContact);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2PolygonContact_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2PolygonContact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2PolygonContact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void B2PolygonContact_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("evaluate"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2PolygonContact_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2PolygonContact_obj::__mClass,"__mClass");
};

Class B2PolygonContact_obj::__mClass;

void B2PolygonContact_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.B2PolygonContact"), hx::TCanCast< B2PolygonContact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2PolygonContact_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
