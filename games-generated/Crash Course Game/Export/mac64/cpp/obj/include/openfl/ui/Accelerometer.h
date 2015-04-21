#ifndef INCLUDED_openfl_ui_Accelerometer
#define INCLUDED_openfl_ui_Accelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,ui,Accelerometer)
namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Accelerometer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Accelerometer_obj OBJ_;
		Accelerometer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Accelerometer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Accelerometer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Accelerometer"); }

		static Dynamic get( );
		static Dynamic get_dyn();

		static Dynamic nme_input_get_acceleration;
		static Dynamic &nme_input_get_acceleration_dyn() { return nme_input_get_acceleration;}
};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_Accelerometer */ 
