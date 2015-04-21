#ifndef INCLUDED_motion_easing_CubicEaseIn
#define INCLUDED_motion_easing_CubicEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,CubicEaseIn)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  CubicEaseIn_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CubicEaseIn_obj OBJ_;
		CubicEaseIn_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CubicEaseIn_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CubicEaseIn_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< CubicEaseIn_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("CubicEaseIn"); }

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_CubicEaseIn */ 
