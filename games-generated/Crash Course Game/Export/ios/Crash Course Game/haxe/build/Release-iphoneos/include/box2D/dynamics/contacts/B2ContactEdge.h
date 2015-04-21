#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#define INCLUDED_box2D_dynamics_contacts_B2ContactEdge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2ContactEdge)
namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES  B2ContactEdge_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2ContactEdge_obj OBJ_;
		B2ContactEdge_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2ContactEdge_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2ContactEdge_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2ContactEdge"); }

		::box2D::dynamics::contacts::B2ContactEdge next;
		::box2D::dynamics::contacts::B2ContactEdge prev;
		::box2D::dynamics::contacts::B2Contact contact;
		::box2D::dynamics::B2Body other;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_B2ContactEdge */ 
