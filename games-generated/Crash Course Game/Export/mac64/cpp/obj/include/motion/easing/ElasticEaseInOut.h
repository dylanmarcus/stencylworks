#ifndef INCLUDED_motion_easing_ElasticEaseInOut
#define INCLUDED_motion_easing_ElasticEaseInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,ElasticEaseInOut)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  ElasticEaseInOut_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ElasticEaseInOut_obj OBJ_;
		ElasticEaseInOut_obj();
		Void __construct(Float a,Float p);

	public:
		static hx::ObjectPtr< ElasticEaseInOut_obj > __new(Float a,Float p);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ElasticEaseInOut_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< ElasticEaseInOut_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ElasticEaseInOut"); }

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		Float p;
		Float a;
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_ElasticEaseInOut */ 
