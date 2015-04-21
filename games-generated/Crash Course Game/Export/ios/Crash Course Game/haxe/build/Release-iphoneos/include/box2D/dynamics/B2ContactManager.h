#ifndef INCLUDED_box2D_dynamics_B2ContactManager
#define INCLUDED_box2D_dynamics_B2ContactManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2ContactPoint)
HX_DECLARE_CLASS2(box2D,collision,IBroadPhase)
HX_DECLARE_CLASS2(box2D,dynamics,B2ContactFilter)
HX_DECLARE_CLASS2(box2D,dynamics,B2ContactListener)
HX_DECLARE_CLASS2(box2D,dynamics,B2ContactManager)
HX_DECLARE_CLASS2(box2D,dynamics,B2World)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2ContactFactory)
namespace box2D{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  B2ContactManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2ContactManager_obj OBJ_;
		B2ContactManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2ContactManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2ContactManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2ContactManager"); }

		Dynamic m_allocator;
		::box2D::dynamics::contacts::B2ContactFactory m_contactFactory;
		::box2D::dynamics::B2ContactListener m_contactListener;
		::box2D::dynamics::B2ContactFilter m_contactFilter;
		int m_contactCount;
		::box2D::dynamics::contacts::B2Contact m_contactList;
		::box2D::collision::IBroadPhase m_broadPhase;
		::box2D::dynamics::B2World m_world;
		virtual Void collide( );
		Dynamic collide_dyn();

		virtual Void destroy( ::box2D::dynamics::contacts::B2Contact c);
		Dynamic destroy_dyn();

		virtual Void findNewContacts( );
		Dynamic findNewContacts_dyn();

		virtual Void addPair( Dynamic proxyUserDataA,Dynamic proxyUserDataB);
		Dynamic addPair_dyn();

		static ::box2D::collision::B2ContactPoint s_evalCP;
};

} // end namespace box2D
} // end namespace dynamics

#endif /* INCLUDED_box2D_dynamics_B2ContactManager */ 
