#ifndef INCLUDED_com_stencyl_models_actor_AngleHolder
#define INCLUDED_com_stencyl_models_actor_AngleHolder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,models,actor,AngleHolder)
namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES  AngleHolder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AngleHolder_obj OBJ_;
		AngleHolder_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AngleHolder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AngleHolder_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AngleHolder"); }

		Float angle;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_AngleHolder */ 
