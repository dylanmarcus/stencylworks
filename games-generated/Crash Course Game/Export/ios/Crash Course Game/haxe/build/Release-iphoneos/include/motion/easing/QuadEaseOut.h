#ifndef INCLUDED_motion_easing_QuadEaseOut
#define INCLUDED_motion_easing_QuadEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,QuadEaseOut)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  QuadEaseOut_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QuadEaseOut_obj OBJ_;
		QuadEaseOut_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< QuadEaseOut_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~QuadEaseOut_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< QuadEaseOut_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("QuadEaseOut"); }

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_QuadEaseOut */ 
