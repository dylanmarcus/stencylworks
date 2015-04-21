#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#define INCLUDED_com_stencyl_behavior_SceneScript

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/Script.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,SceneScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES  SceneScript_obj : public ::com::stencyl::behavior::Script_obj{
	public:
		typedef ::com::stencyl::behavior::Script_obj super;
		typedef SceneScript_obj OBJ_;
		SceneScript_obj();
		Void __construct(::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< SceneScript_obj > __new(::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SceneScript_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SceneScript"); }

};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_SceneScript */ 
