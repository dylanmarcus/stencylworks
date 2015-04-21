#ifndef INCLUDED_box2D_dynamics_contacts_EPAxis
#define INCLUDED_box2D_dynamics_contacts_EPAxis

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,dynamics,contacts,EPAxis)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,Type)
namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES  EPAxis_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EPAxis_obj OBJ_;
		EPAxis_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EPAxis_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EPAxis_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EPAxis"); }

		Float separation;
		int index;
		::box2D::dynamics::contacts::Type type;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_EPAxis */ 
