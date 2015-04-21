#ifndef INCLUDED_com_stencyl_models_actor_Animation
#define INCLUDED_com_stencyl_models_actor_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Animation)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(int animID,::String animName,int parentID,::haxe::ds::IntMap simpleShapes,::haxe::ds::IntMap physicsShapes,bool looping,bool sync,int imgWidth,int imgHeight,Float originX,Float originY,Array< int > durations,int framesAcross,int framesDown,int atlasID);

	public:
		static hx::ObjectPtr< Animation_obj > __new(int animID,::String animName,int parentID,::haxe::ds::IntMap simpleShapes,::haxe::ds::IntMap physicsShapes,bool looping,bool sync,int imgWidth,int imgHeight,Float originX,Float originY,Array< int > durations,int framesAcross,int framesDown,int atlasID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		virtual Void unloadGraphics( );
		Dynamic unloadGraphics_dyn();

		virtual Void loadGraphics( );
		Dynamic loadGraphics_dyn();

		int sharedFrameIndex;
		Float sharedTimer;
		Float originY;
		Float originX;
		int framesDown;
		int framesAcross;
		int imgHeight;
		int imgWidth;
		Dynamic imgData;
		Array< int > durations;
		bool sync;
		bool looping;
		::haxe::ds::IntMap physicsShapes;
		::haxe::ds::IntMap simpleShapes;
		int parentID;
		::String animName;
		int animID;
		static Array< ::Dynamic > allAnimations;
		static Void updateAll( Float elapsedTime);
		static Dynamic updateAll_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_Animation */ 
