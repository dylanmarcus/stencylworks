#ifndef INCLUDED_com_stencyl_graphics_G
#define INCLUDED_com_stencyl_graphics_G

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Font)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace com{
namespace stencyl{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  G_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef G_obj OBJ_;
		G_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< G_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~G_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("G"); }

		virtual Void resetFont( );
		Dynamic resetFont_dyn();

		virtual int toARGB( int rgb,int newAlpha);
		Dynamic toARGB_dyn();

		virtual Void drawImage( ::flash::display::BitmapData img,Float x,Float y,hx::Null< Float >  angle,::flash::geom::Matrix matrix);
		Dynamic drawImage_dyn();

		virtual Void addPointToPolygon( Float x,Float y);
		Dynamic addPointToPolygon_dyn();

		virtual Void beginDrawPolygon( );
		Dynamic beginDrawPolygon_dyn();

		virtual Void endDrawingPolygon( );
		Dynamic endDrawingPolygon_dyn();

		virtual Void beginFillPolygon( );
		Dynamic beginFillPolygon_dyn();

		virtual Void fillCircle( Float x,Float y,Float r);
		Dynamic fillCircle_dyn();

		virtual Void drawCircle( Float x,Float y,Float r);
		Dynamic drawCircle_dyn();

		virtual Void fillRoundRect( Float x,Float y,Float w,Float h,Float arc);
		Dynamic fillRoundRect_dyn();

		virtual Void drawRoundRect( Float x,Float y,Float w,Float h,Float arc);
		Dynamic drawRoundRect_dyn();

		virtual Void fillRect( Float x,Float y,Float w,Float h);
		Dynamic fillRect_dyn();

		virtual Void drawRect( Float x,Float y,Float w,Float h);
		Dynamic drawRect_dyn();

		virtual Void fillPixel( Float x,Float y);
		Dynamic fillPixel_dyn();

		virtual Void drawLine( Float x1,Float y1,Float x2,Float y2);
		Dynamic drawLine_dyn();

		virtual Void drawString( ::String s,Float x,Float y);
		Dynamic drawString_dyn();

		Array< Float > drawData;
		virtual Void translateToActor( ::com::stencyl::models::Actor a);
		Dynamic translateToActor_dyn();

		virtual Void translateToScreen( );
		Dynamic translateToScreen_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual Void translate( Float x,Float y);
		Dynamic translate_dyn();

		virtual Void endGraphics( );
		Dynamic endGraphics_dyn();

		virtual Void startGraphics( );
		Dynamic startGraphics_dyn();

		virtual Void setFont( ::com::stencyl::models::Font newFont);
		Dynamic setFont_dyn();

		virtual Void resetGraphicsSettings( );
		Dynamic resetGraphicsSettings_dyn();

		::com::stencyl::models::Actor actor;
		bool drawActor;
		Float firstY;
		Float firstX;
		int pointCounter;
		bool drawPoly;
		Array< Float > data;
		::flash::geom::Point point2;
		::flash::geom::Point point;
		::flash::geom::Rectangle rect2;
		::flash::geom::Rectangle rect;
		::flash::geom::Matrix mtx;
		Array< ::Dynamic > fontData;
		::com::stencyl::models::Font font;
		int strokeColor;
		int fillColor;
		int strokeSize;
		Dynamic blendMode;
		Float alpha;
		Float scaleY;
		Float scaleX;
		Float y;
		Float x;
		Dynamic canvas;
		::flash::display::Graphics graphics;
		::com::stencyl::models::Font defaultFont;
		static ::haxe::ds::IntMap fontCache;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics

#endif /* INCLUDED_com_stencyl_graphics_G */ 
