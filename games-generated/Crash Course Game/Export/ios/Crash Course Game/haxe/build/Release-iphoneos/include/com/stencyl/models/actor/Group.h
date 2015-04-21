#ifndef INCLUDED_com_stencyl_models_actor_Group
#define INCLUDED_com_stencyl_models_actor_Group

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Group)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES  Group_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Group_obj OBJ_;
		Group_obj();
		Void __construct(int ID,::String name);

	public:
		static hx::ObjectPtr< Group_obj > __new(int ID,::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Group_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Group"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void removeChild( ::com::stencyl::models::Actor a);
		Dynamic removeChild_dyn();

		virtual Void addChild( ::com::stencyl::models::Actor a);
		Dynamic addChild_dyn();

		::String sID;
		int ID;
		::String name;
		Array< ::Dynamic > list;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_Group */ 
