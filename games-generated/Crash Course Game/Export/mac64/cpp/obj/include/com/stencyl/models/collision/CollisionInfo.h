#ifndef INCLUDED_com_stencyl_models_collision_CollisionInfo
#define INCLUDED_com_stencyl_models_collision_CollisionInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,models,collision,CollisionInfo)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
namespace com{
namespace stencyl{
namespace models{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  CollisionInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollisionInfo_obj OBJ_;
		CollisionInfo_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CollisionInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CollisionInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CollisionInfo"); }

		virtual Void reset( );
		Dynamic reset_dyn();

		bool solidCollision;
		::com::stencyl::models::collision::Mask maskB;
		::com::stencyl::models::collision::Mask maskA;
		Float min;
		Float max;
		static Array< ::Dynamic > infoArray;
		static ::com::stencyl::models::collision::CollisionInfo getCollisionInfo( );
		static Dynamic getCollisionInfo_dyn();

		static Void recycle( ::com::stencyl::models::collision::CollisionInfo info);
		static Dynamic recycle_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision

#endif /* INCLUDED_com_stencyl_models_collision_CollisionInfo */ 
