#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactImpulse
#include <box2D/dynamics/B2ContactImpulse.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Terrain
#include <com/stencyl/models/Terrain.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace box2D{
namespace dynamics{

Void B2ContactListener_obj::__construct()
{
HX_STACK_PUSH("B2ContactListener::new","box2D/dynamics/B2ContactListener.hx",44);
{
}
;
	return null();
}

B2ContactListener_obj::~B2ContactListener_obj() { }

Dynamic B2ContactListener_obj::__CreateEmpty() { return  new B2ContactListener_obj; }
hx::ObjectPtr< B2ContactListener_obj > B2ContactListener_obj::__new()
{  hx::ObjectPtr< B2ContactListener_obj > result = new B2ContactListener_obj();
	result->__construct();
	return result;}

Dynamic B2ContactListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2ContactListener_obj > result = new B2ContactListener_obj();
	result->__construct();
	return result;}

Void B2ContactListener_obj::postSolve( ::box2D::dynamics::contacts::B2Contact contact,::box2D::dynamics::B2ContactImpulse impulse){
{
		HX_STACK_PUSH("B2ContactListener::postSolve","box2D/dynamics/B2ContactListener.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_ARG(impulse,"impulse");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2ContactListener_obj,postSolve,(void))

Void B2ContactListener_obj::preSolve( ::box2D::dynamics::contacts::B2Contact contact,::box2D::collision::B2Manifold oldManifold){
{
		HX_STACK_PUSH("B2ContactListener::preSolve","box2D/dynamics/B2ContactListener.hx",167);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_ARG(oldManifold,"oldManifold");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2ContactListener_obj,preSolve,(void))

Void B2ContactListener_obj::endContact( ::box2D::dynamics::contacts::B2Contact contact){
{
		HX_STACK_PUSH("B2ContactListener::endContact","box2D/dynamics/B2ContactListener.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_LINE(92)
		::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(93)
		::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(95)
		bool r1 = ::Std_obj::is(a1,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r1,"r1");
		HX_STACK_LINE(96)
		bool r2 = ::Std_obj::is(a2,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(98)
		if (((bool(r1) && bool(!(r2))))){
			HX_STACK_LINE(100)
			bool inRegion = false;		HX_STACK_VAR(inRegion,"inRegion");
			HX_STACK_LINE(102)
			if (((a2->regionContacts != null()))){
				HX_STACK_LINE(102)
				a2->regionContacts->remove(contact->key);
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Actor &a2){
					HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",104);
					{
						HX_STACK_LINE(104)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(a2->regionContacts);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","box2D/dynamics/B2ContactListener.hx",104);
							{
								HX_STACK_LINE(104)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(104)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(104)
			for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >((_Function_2_1::Block(a2))());  __it->hasNext(); ){
				::box2D::dynamics::contacts::B2Contact p = __it->next();
				{
					HX_STACK_LINE(106)
					if (((bool(::Std_obj::is(p->getFixtureA()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureA()->getUserData() == a1))))){
						HX_STACK_LINE(108)
						inRegion = true;
						HX_STACK_LINE(109)
						break;
					}
					HX_STACK_LINE(112)
					if (((bool(::Std_obj::is(p->getFixtureB()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureB()->getUserData() == a1))))){
						HX_STACK_LINE(114)
						inRegion = true;
						HX_STACK_LINE(115)
						break;
					}
				}
;
			}
			HX_STACK_LINE(119)
			if (((bool(!(inRegion)) || bool(a2->recycled)))){
				HX_STACK_LINE(119)
				(hx::TCast< com::stencyl::models::Region >::cast(a1))->removeActor(a2);
			}
			HX_STACK_LINE(121)
			return null();
		}
		HX_STACK_LINE(124)
		if (((bool(r2) && bool(!(r1))))){
			HX_STACK_LINE(126)
			bool inRegion = false;		HX_STACK_VAR(inRegion,"inRegion");
			HX_STACK_LINE(128)
			if (((a1->regionContacts != null()))){
				HX_STACK_LINE(128)
				a1->regionContacts->remove(contact->key);
			}
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Actor &a1){
					HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",130);
					{
						HX_STACK_LINE(130)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(a1->regionContacts);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","box2D/dynamics/B2ContactListener.hx",130);
							{
								HX_STACK_LINE(130)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(130)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(130)
			for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >((_Function_2_1::Block(a1))());  __it->hasNext(); ){
				::box2D::dynamics::contacts::B2Contact p = __it->next();
				{
					HX_STACK_LINE(132)
					if (((bool(::Std_obj::is(p->getFixtureA()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureA()->getUserData() == a2))))){
						HX_STACK_LINE(134)
						inRegion = true;
						HX_STACK_LINE(135)
						break;
					}
					HX_STACK_LINE(138)
					if (((bool(::Std_obj::is(p->getFixtureB()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureB()->getUserData() == a2))))){
						HX_STACK_LINE(140)
						inRegion = true;
						HX_STACK_LINE(141)
						break;
					}
				}
;
			}
			HX_STACK_LINE(145)
			if (((bool(!(inRegion)) || bool(a1->recycled)))){
				HX_STACK_LINE(145)
				(hx::TCast< com::stencyl::models::Region >::cast(a2))->removeActor(a1);
			}
			HX_STACK_LINE(147)
			return null();
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			if (((a1->collisions != null()))){
				HX_STACK_LINE(150)
				if ((a1->collisions->remove(contact->key))){
					HX_STACK_LINE(150)
					(a1->collisionsCount)--;
				}
			}
			HX_STACK_LINE(150)
			if (((a1->contacts != null()))){
				HX_STACK_LINE(150)
				if ((a1->contacts->remove(contact->key))){
					HX_STACK_LINE(150)
					(a1->contactCount)--;
				}
			}
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			if (((a2->collisions != null()))){
				HX_STACK_LINE(151)
				if ((a2->collisions->remove(contact->key))){
					HX_STACK_LINE(151)
					(a2->collisionsCount)--;
				}
			}
			HX_STACK_LINE(151)
			if (((a2->contacts != null()))){
				HX_STACK_LINE(151)
				if ((a2->contacts->remove(contact->key))){
					HX_STACK_LINE(151)
					(a2->contactCount)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2ContactListener_obj,endContact,(void))

Void B2ContactListener_obj::beginContact( ::box2D::dynamics::contacts::B2Contact contact){
{
		HX_STACK_PUSH("B2ContactListener::beginContact","box2D/dynamics/B2ContactListener.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_LINE(56)
		if (((::box2D::dynamics::B2ContactListener_obj::KEY_LOCK > (int)5000))){
			HX_STACK_LINE(57)
			::box2D::dynamics::B2ContactListener_obj::KEY_LOCK = (int)0;
		}
		HX_STACK_LINE(61)
		contact->key = (::box2D::dynamics::B2ContactListener_obj::KEY_LOCK)++;
		HX_STACK_LINE(63)
		::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(64)
		::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(66)
		bool r1 = ::Std_obj::is(a1,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r1,"r1");
		HX_STACK_LINE(67)
		bool r2 = ::Std_obj::is(a2,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(69)
		if (((bool(r1) && bool(!(((bool(r2) || bool(::Std_obj::is(a2,hx::ClassOf< ::com::stencyl::models::Terrain >()))))))))){
			HX_STACK_LINE(71)
			(hx::TCast< com::stencyl::models::Region >::cast(a1))->addActor(a2);
			HX_STACK_LINE(72)
			if (((a2->regionContacts != null()))){
				HX_STACK_LINE(72)
				a2->regionContacts->set(contact->key,contact);
			}
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(76)
		if (((bool(r2) && bool(!(((bool(r1) || bool(::Std_obj::is(a1,hx::ClassOf< ::com::stencyl::models::Terrain >()))))))))){
			HX_STACK_LINE(78)
			(hx::TCast< com::stencyl::models::Region >::cast(a2))->addActor(a1);
			HX_STACK_LINE(79)
			if (((a1->regionContacts != null()))){
				HX_STACK_LINE(79)
				a1->regionContacts->set(contact->key,contact);
			}
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(83)
		if (((a1->contacts != null()))){
			HX_STACK_LINE(83)
			a1->contacts->set(contact->key,contact);
			HX_STACK_LINE(83)
			(a1->contactCount)++;
			HX_STACK_LINE(83)
			if ((a1->collisions->remove(contact->key))){
				HX_STACK_LINE(83)
				(a1->collisionsCount)--;
			}
		}
		HX_STACK_LINE(84)
		if (((a2->contacts != null()))){
			HX_STACK_LINE(84)
			a2->contacts->set(contact->key,contact);
			HX_STACK_LINE(84)
			(a2->contactCount)++;
			HX_STACK_LINE(84)
			if ((a2->collisions->remove(contact->key))){
				HX_STACK_LINE(84)
				(a2->collisionsCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2ContactListener_obj,beginContact,(void))

int B2ContactListener_obj::KEY_LOCK;

::box2D::dynamics::B2ContactListener B2ContactListener_obj::b2_defaultListener;


B2ContactListener_obj::B2ContactListener_obj()
{
}

void B2ContactListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactListener);
	HX_MARK_END_CLASS();
}

void B2ContactListener_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic B2ContactListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_LOCK") ) { return KEY_LOCK; }
		if (HX_FIELD_EQ(inName,"preSolve") ) { return preSolve_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"postSolve") ) { return postSolve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endContact") ) { return endContact_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"beginContact") ) { return beginContact_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"b2_defaultListener") ) { return b2_defaultListener; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2ContactListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_LOCK") ) { KEY_LOCK=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"b2_defaultListener") ) { b2_defaultListener=inValue.Cast< ::box2D::dynamics::B2ContactListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactListener_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("KEY_LOCK"),
	HX_CSTRING("b2_defaultListener"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("postSolve"),
	HX_CSTRING("preSolve"),
	HX_CSTRING("endContact"),
	HX_CSTRING("beginContact"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactListener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2ContactListener_obj::KEY_LOCK,"KEY_LOCK");
	HX_MARK_MEMBER_NAME(B2ContactListener_obj::b2_defaultListener,"b2_defaultListener");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactListener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2ContactListener_obj::KEY_LOCK,"KEY_LOCK");
	HX_VISIT_MEMBER_NAME(B2ContactListener_obj::b2_defaultListener,"b2_defaultListener");
};

Class B2ContactListener_obj::__mClass;

void B2ContactListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2ContactListener"), hx::TCanCast< B2ContactListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2ContactListener_obj::__boot()
{
	KEY_LOCK= (int)0;
	b2_defaultListener= ::box2D::dynamics::B2ContactListener_obj::__new();
}

} // end namespace box2D
} // end namespace dynamics
