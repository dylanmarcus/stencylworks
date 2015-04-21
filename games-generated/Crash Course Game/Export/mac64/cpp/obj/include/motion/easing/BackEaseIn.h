#ifndef INCLUDED_motion_easing_BackEaseIn
#define INCLUDED_motion_easing_BackEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,BackEaseIn)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  BackEaseIn_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BackEaseIn_obj OBJ_;
		BackEaseIn_obj();
		Void __construct(Float s);

	public:
		static hx::ObjectPtr< BackEaseIn_obj > __new(Float s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BackEaseIn_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< BackEaseIn_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BackEaseIn"); }

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		Float s;
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_BackEaseIn */ 
