#ifndef INCLUDED_com_stencyl_models_actor_CollisionPoint
#define INCLUDED_com_stencyl_models_actor_CollisionPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,models,actor,CollisionPoint)
namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES  CollisionPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollisionPoint_obj OBJ_;
		CollisionPoint_obj();
		Void __construct(Float x,Float y,Float normalX,Float normalY);

	public:
		static hx::ObjectPtr< CollisionPoint_obj > __new(Float x,Float y,Float normalX,Float normalY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CollisionPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CollisionPoint"); }

		Float normalY;
		Float normalX;
		Float y;
		Float x;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_CollisionPoint */ 
