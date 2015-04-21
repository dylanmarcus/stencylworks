#ifndef INCLUDED_box2D_dynamics_contacts_TempPolygon
#define INCLUDED_box2D_dynamics_contacts_TempPolygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,TempPolygon)
namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES  TempPolygon_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TempPolygon_obj OBJ_;
		TempPolygon_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TempPolygon_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TempPolygon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TempPolygon"); }

		int count;
		Array< ::Dynamic > normals;
		Array< ::Dynamic > vertices;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_TempPolygon */ 
