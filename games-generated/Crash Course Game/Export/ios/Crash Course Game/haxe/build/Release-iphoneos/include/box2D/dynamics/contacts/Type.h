#ifndef INCLUDED_box2D_dynamics_contacts_Type
#define INCLUDED_box2D_dynamics_contacts_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,dynamics,contacts,Type)
namespace box2D{
namespace dynamics{
namespace contacts{


class Type_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Type_obj OBJ_;

	public:
		Type_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("box2D.dynamics.contacts.Type"); }
		::String __ToString() const { return HX_CSTRING("Type.") + tag; }

		static ::box2D::dynamics::contacts::Type EDGE_A;
		static inline ::box2D::dynamics::contacts::Type EDGE_A_dyn() { return EDGE_A; }
		static ::box2D::dynamics::contacts::Type EDGE_B;
		static inline ::box2D::dynamics::contacts::Type EDGE_B_dyn() { return EDGE_B; }
		static ::box2D::dynamics::contacts::Type UNKNOWN;
		static inline ::box2D::dynamics::contacts::Type UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_Type */ 
