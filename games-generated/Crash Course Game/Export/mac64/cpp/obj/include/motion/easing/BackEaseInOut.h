#ifndef INCLUDED_motion_easing_BackEaseInOut
#define INCLUDED_motion_easing_BackEaseInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,BackEaseInOut)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  BackEaseInOut_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BackEaseInOut_obj OBJ_;
		BackEaseInOut_obj();
		Void __construct(Float s);

	public:
		static hx::ObjectPtr< BackEaseInOut_obj > __new(Float s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BackEaseInOut_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< BackEaseInOut_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BackEaseInOut"); }

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		Float s;
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_BackEaseInOut */ 
