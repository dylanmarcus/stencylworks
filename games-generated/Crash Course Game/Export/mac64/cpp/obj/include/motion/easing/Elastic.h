#ifndef INCLUDED_motion_easing_Elastic
#define INCLUDED_motion_easing_Elastic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,Elastic)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  Elastic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Elastic_obj OBJ_;
		Elastic_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Elastic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Elastic_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Elastic"); }

		static ::motion::easing::IEasing get_easeIn( );
		static Dynamic get_easeIn_dyn();

		static ::motion::easing::IEasing get_easeInOut( );
		static Dynamic get_easeInOut_dyn();

		static ::motion::easing::IEasing get_easeOut( );
		static Dynamic get_easeOut_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Elastic */ 
