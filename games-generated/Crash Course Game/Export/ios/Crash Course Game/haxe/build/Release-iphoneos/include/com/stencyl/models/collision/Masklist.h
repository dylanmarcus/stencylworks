#ifndef INCLUDED_com_stencyl_models_collision_Masklist
#define INCLUDED_com_stencyl_models_collision_Masklist

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/collision/Hitbox.h>
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Hitbox)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Masklist)
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
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  Masklist_obj : public ::com::stencyl::models::collision::Hitbox_obj{
	public:
		typedef ::com::stencyl::models::collision::Hitbox_obj super;
		typedef Masklist_obj OBJ_;
		Masklist_obj();
		Void __construct(Dynamic masks);

	public:
		static hx::ObjectPtr< Masklist_obj > __new(Dynamic masks);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Masklist_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Masklist"); }

		int _count;
		Array< ::Dynamic > _temp;
		Array< ::Dynamic > _masks;
		virtual int get_count( );
		Dynamic get_count_dyn();

		int count;
		virtual Void update( );

		virtual Void assignTo( ::com::stencyl::models::Actor parent);

		virtual ::com::stencyl::models::collision::Mask getMask( hx::Null< int >  index);
		Dynamic getMask_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void removeAt( hx::Null< int >  index);
		Dynamic removeAt_dyn();

		virtual ::com::stencyl::models::collision::Mask remove( ::com::stencyl::models::collision::Mask mask);
		Dynamic remove_dyn();

		virtual ::com::stencyl::models::collision::Mask add( ::com::stencyl::models::collision::Mask mask);
		Dynamic add_dyn();

		virtual bool collideMasklist( ::com::stencyl::models::collision::Masklist other);

		virtual bool collide( ::com::stencyl::models::collision::Mask mask);

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision

#endif /* INCLUDED_com_stencyl_models_collision_Masklist */ 
