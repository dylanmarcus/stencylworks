#ifndef INCLUDED_com_nmefermmmtools_debug_Stats
#define INCLUDED_com_nmefermmmtools_debug_Stats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS3(com,nmefermmmtools,debug,Stats)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flash,text,TextField)
namespace com{
namespace nmefermmmtools{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Stats_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Stats_obj OBJ_;
		Stats_obj();
		Void __construct(hx::Null< bool >  __o_alignRight);

	public:
		static hx::ObjectPtr< Stats_obj > __new(hx::Null< bool >  __o_alignRight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stats_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stats"); }

		virtual int normalizeMem( Float _mem);
		Dynamic normalizeMem_dyn();

		virtual Void update( ::flash::events::Event e);
		Dynamic update_dyn();

		virtual Void destroy( ::flash::events::Event e);
		Dynamic destroy_dyn();

		virtual Void init( ::flash::events::Event e);
		Dynamic init_dyn();

		::String msStr;
		::String memMaxStr;
		::String memStr;
		::String fpsStr;
		::flash::display::Stage _stage;
		int mem_max_graph;
		int ms_graph;
		int mem_graph;
		int fps_graph;
		bool start;
		bool alignRight;
		::flash::geom::Rectangle rectangle;
		::flash::display::BitmapData graph;
		Float mem_max;
		Float mem;
		int ms_prev;
		int ms;
		int fps;
		int timer;
		::flash::text::TextField text;
		static int GRAPH_WIDTH;
		static int XPOS;
		static int GRAPH_HEIGHT;
		static int TEXT_HEIGHT;
};

} // end namespace com
} // end namespace nmefermmmtools
} // end namespace debug

#endif /* INCLUDED_com_nmefermmmtools_debug_Stats */ 
