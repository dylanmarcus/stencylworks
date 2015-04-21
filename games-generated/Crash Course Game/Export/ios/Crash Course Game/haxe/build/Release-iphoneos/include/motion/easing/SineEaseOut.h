#ifndef INCLUDED_motion_easing_SineEaseOut
#define INCLUDED_motion_easing_SineEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,SineEaseOut)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  SineEaseOut_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SineEaseOut_obj OBJ_;
		SineEaseOut_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SineEaseOut_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SineEaseOut_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< SineEaseOut_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SineEaseOut"); }

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_SineEaseOut */ 
