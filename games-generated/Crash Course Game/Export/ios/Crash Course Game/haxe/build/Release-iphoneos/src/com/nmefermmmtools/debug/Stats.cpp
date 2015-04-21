#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_nmefermmmtools_debug_Stats
#include <com/nmefermmmtools/debug/Stats.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_system_System
#include <flash/system/System.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace nmefermmmtools{
namespace debug{

Void Stats_obj::__construct(hx::Null< bool >  __o_alignRight)
{
HX_STACK_PUSH("Stats::new","com/nmefermmmtools/debug/Stats.hx",69);
bool alignRight = __o_alignRight.Default(true);
{
	HX_STACK_LINE(70)
	super::__construct();
	HX_STACK_LINE(71)
	this->alignRight = alignRight;
	HX_STACK_LINE(72)
	this->start = true;
	HX_STACK_LINE(73)
	this->mem_max = (int)0;
	HX_STACK_LINE(74)
	this->fps = (int)0;
	HX_STACK_LINE(77)
	this->text = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(78)
	this->text->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(HX_CSTRING("_sans"),(int)9,(int)16776960,null(),null(),null(),null(),null(),null(),null(),null(),null(),(int)-2));
	HX_STACK_LINE(79)
	this->text->set_multiline(true);
	HX_STACK_LINE(80)
	this->text->set_width((int)70);
	HX_STACK_LINE(81)
	this->text->set_height((int)50);
	HX_STACK_LINE(82)
	this->text->set_selectable(false);
	HX_STACK_LINE(83)
	this->text->set_mouseEnabled(false);
	HX_STACK_LINE(95)
	this->rectangle = ::flash::geom::Rectangle_obj::__new((int)69,(int)0,(int)1,(int)50);
	HX_STACK_LINE(97)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),false,(int)0,true);
	HX_STACK_LINE(98)
	this->addEventListener(::flash::events::Event_obj::REMOVED_FROM_STAGE,this->destroy_dyn(),false,(int)0,true);
}
;
	return null();
}

Stats_obj::~Stats_obj() { }

Dynamic Stats_obj::__CreateEmpty() { return  new Stats_obj; }
hx::ObjectPtr< Stats_obj > Stats_obj::__new(hx::Null< bool >  __o_alignRight)
{  hx::ObjectPtr< Stats_obj > result = new Stats_obj();
	result->__construct(__o_alignRight);
	return result;}

Dynamic Stats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stats_obj > result = new Stats_obj();
	result->__construct(inArgs[0]);
	return result;}

int Stats_obj::normalizeMem( Float _mem){
	HX_STACK_PUSH("Stats::normalizeMem","com/nmefermmmtools/debug/Stats.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_mem,"_mem");
	HX_STACK_LINE(232)
	return ::Std_obj::_int((::Math_obj::min((int)50,::Math_obj::sqrt(::Math_obj::sqrt((_mem * (int)5000)))) - (int)2));
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,normalizeMem,return )

Void Stats_obj::update( ::flash::events::Event e){
{
		HX_STACK_PUSH("Stats::update","com/nmefermmmtools/debug/Stats.hx",149);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(160)
		this->timer = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(163)
		if ((((this->timer - (int)1000) > this->ms_prev))){
			HX_STACK_LINE(165)
			this->mem = (::flash::system::System_obj::get_totalMemory() * 0.000000954);
			HX_STACK_LINE(166)
			this->mem_max = (  (((this->mem_max > this->mem))) ? Float(this->mem_max) : Float(this->mem) );
			HX_STACK_LINE(169)
			this->fps_graph = ((int)50 - ::Std_obj::_int(::Math_obj::min((int)50,((Float(this->fps) / Float(this->_stage->frameRate)) * (int)50))));
			HX_STACK_LINE(171)
			this->mem_graph = ((int)50 - this->normalizeMem(this->mem));
			HX_STACK_LINE(172)
			this->mem_max_graph = ((int)50 - this->normalizeMem(this->mem_max));
			HX_STACK_LINE(174)
			this->ms_graph = ::Std_obj::_int(((int)50 - ((int((this->timer - this->ms)) >> int((int)1)))));
			HX_STACK_LINE(175)
			this->graph->scroll((int)-1,(int)0);
			HX_STACK_LINE(177)
			this->graph->fillRect(this->rectangle,(int)51);
			HX_STACK_LINE(178)
			this->graph->lock();
			HX_STACK_LINE(179)
			this->graph->setPixel((int)69,this->fps_graph,(int)16776960);
			HX_STACK_LINE(180)
			this->graph->setPixel((int)69,this->mem_graph,(int)65535);
			HX_STACK_LINE(181)
			this->graph->setPixel((int)69,this->mem_max_graph,(int)16711792);
			HX_STACK_LINE(182)
			this->graph->setPixel((int)69,this->ms_graph,(int)65280);
			HX_STACK_LINE(183)
			this->graph->unlock(null());
			HX_STACK_LINE(188)
			if (((this->fps > (int)60))){
				HX_STACK_LINE(189)
				this->fps = (int)60;
			}
			HX_STACK_LINE(190)
			this->fpsStr = ((HX_CSTRING("FPS: ") + this->fps) + HX_CSTRING(" / 60"));
			HX_STACK_LINE(192)
			this->memStr = (HX_CSTRING("MEM: ") + ::Math_obj::round(this->mem));
			HX_STACK_LINE(193)
			this->memMaxStr = (HX_CSTRING("MAX: ") + ::Math_obj::round(this->mem_max));
			HX_STACK_LINE(198)
			this->fps = (int)0;
			HX_STACK_LINE(199)
			this->ms_prev = this->timer;
			HX_STACK_LINE(210)
			::String htmlText = ((((((((((((((((HX_CSTRING("<font color='") + HX_CSTRING("#ffff00")) + HX_CSTRING("'>")) + this->fpsStr) + HX_CSTRING("</font>")) + HX_CSTRING("<br>")) + HX_CSTRING("<font color='")) + HX_CSTRING("#00ffff")) + HX_CSTRING("'>")) + this->memStr) + HX_CSTRING("</font>")) + HX_CSTRING("<br>")) + HX_CSTRING("<font color='")) + HX_CSTRING("#ff0070")) + HX_CSTRING("'>")) + this->memMaxStr) + HX_CSTRING("</font>"));		HX_STACK_VAR(htmlText,"htmlText");
			HX_STACK_LINE(216)
			this->text->set_htmlText(htmlText);
			HX_STACK_LINE(221)
			return null();
		}
		HX_STACK_LINE(225)
		(this->fps)++;
		HX_STACK_LINE(227)
		this->ms = this->timer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,update,(void))

Void Stats_obj::destroy( ::flash::events::Event e){
{
		HX_STACK_PUSH("Stats::destroy","com/nmefermmmtools/debug/Stats.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(138)
		this->get_graphics()->clear();
		HX_STACK_LINE(140)
		while(((this->get_numChildren() > (int)0))){
			HX_STACK_LINE(141)
			this->removeChildAt((int)0);
		}
		HX_STACK_LINE(143)
		this->graph->dispose();
		HX_STACK_LINE(145)
		this->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->update_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,destroy,(void))

Void Stats_obj::init( ::flash::events::Event e){
{
		HX_STACK_PUSH("Stats::init","com/nmefermmmtools/debug/Stats.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(103)
		this->_stage = ::flash::Lib_obj::get_current()->get_stage();
		HX_STACK_LINE(104)
		this->get_graphics()->beginFill((int)51,null());
		HX_STACK_LINE(105)
		this->get_graphics()->drawRect((int)0,(int)0,(int)70,(int)50);
		HX_STACK_LINE(106)
		this->get_graphics()->endFill();
		HX_STACK_LINE(108)
		this->addChild(this->text);
		HX_STACK_LINE(110)
		this->graph = ::flash::display::BitmapData_obj::__new((int)70,(int)50,false,(int)51,null());
		HX_STACK_LINE(111)
		this->get_graphics()->beginBitmapFill(this->graph,::flash::geom::Matrix_obj::__new((int)1,(int)0,(int)0,(int)1,(int)0,(int)50),null(),null());
		HX_STACK_LINE(112)
		this->get_graphics()->drawRect((int)0,(int)50,(int)70,(int)50);
		HX_STACK_LINE(114)
		this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->update_dyn(),null(),null(),null());
		HX_STACK_LINE(116)
		if ((this->alignRight)){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,init,(void))

int Stats_obj::GRAPH_WIDTH;

int Stats_obj::XPOS;

int Stats_obj::GRAPH_HEIGHT;

int Stats_obj::TEXT_HEIGHT;


Stats_obj::Stats_obj()
{
}

void Stats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stats);
	HX_MARK_MEMBER_NAME(msStr,"msStr");
	HX_MARK_MEMBER_NAME(memMaxStr,"memMaxStr");
	HX_MARK_MEMBER_NAME(memStr,"memStr");
	HX_MARK_MEMBER_NAME(fpsStr,"fpsStr");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_MEMBER_NAME(mem_max_graph,"mem_max_graph");
	HX_MARK_MEMBER_NAME(ms_graph,"ms_graph");
	HX_MARK_MEMBER_NAME(mem_graph,"mem_graph");
	HX_MARK_MEMBER_NAME(fps_graph,"fps_graph");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(alignRight,"alignRight");
	HX_MARK_MEMBER_NAME(rectangle,"rectangle");
	HX_MARK_MEMBER_NAME(graph,"graph");
	HX_MARK_MEMBER_NAME(mem_max,"mem_max");
	HX_MARK_MEMBER_NAME(mem,"mem");
	HX_MARK_MEMBER_NAME(ms_prev,"ms_prev");
	HX_MARK_MEMBER_NAME(ms,"ms");
	HX_MARK_MEMBER_NAME(fps,"fps");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(text,"text");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stats_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(msStr,"msStr");
	HX_VISIT_MEMBER_NAME(memMaxStr,"memMaxStr");
	HX_VISIT_MEMBER_NAME(memStr,"memStr");
	HX_VISIT_MEMBER_NAME(fpsStr,"fpsStr");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
	HX_VISIT_MEMBER_NAME(mem_max_graph,"mem_max_graph");
	HX_VISIT_MEMBER_NAME(ms_graph,"ms_graph");
	HX_VISIT_MEMBER_NAME(mem_graph,"mem_graph");
	HX_VISIT_MEMBER_NAME(fps_graph,"fps_graph");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(alignRight,"alignRight");
	HX_VISIT_MEMBER_NAME(rectangle,"rectangle");
	HX_VISIT_MEMBER_NAME(graph,"graph");
	HX_VISIT_MEMBER_NAME(mem_max,"mem_max");
	HX_VISIT_MEMBER_NAME(mem,"mem");
	HX_VISIT_MEMBER_NAME(ms_prev,"ms_prev");
	HX_VISIT_MEMBER_NAME(ms,"ms");
	HX_VISIT_MEMBER_NAME(fps,"fps");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(text,"text");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stats_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { return ms; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { return mem; }
		if (HX_FIELD_EQ(inName,"fps") ) { return fps; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"msStr") ) { return msStr; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"graph") ) { return graph; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"memStr") ) { return memStr; }
		if (HX_FIELD_EQ(inName,"fpsStr") ) { return fpsStr; }
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"mem_max") ) { return mem_max; }
		if (HX_FIELD_EQ(inName,"ms_prev") ) { return ms_prev; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ms_graph") ) { return ms_graph; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"memMaxStr") ) { return memMaxStr; }
		if (HX_FIELD_EQ(inName,"mem_graph") ) { return mem_graph; }
		if (HX_FIELD_EQ(inName,"fps_graph") ) { return fps_graph; }
		if (HX_FIELD_EQ(inName,"rectangle") ) { return rectangle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignRight") ) { return alignRight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"normalizeMem") ) { return normalizeMem_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mem_max_graph") ) { return mem_max_graph; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stats_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { ms=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mem") ) { mem=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fps") ) { fps=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"msStr") ) { msStr=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graph") ) { graph=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"memStr") ) { memStr=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fpsStr") ) { fpsStr=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mem_max") ) { mem_max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ms_prev") ) { ms_prev=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ms_graph") ) { ms_graph=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"memMaxStr") ) { memMaxStr=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mem_graph") ) { mem_graph=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fps_graph") ) { fps_graph=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectangle") ) { rectangle=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignRight") ) { alignRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mem_max_graph") ) { mem_max_graph=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("msStr"));
	outFields->push(HX_CSTRING("memMaxStr"));
	outFields->push(HX_CSTRING("memStr"));
	outFields->push(HX_CSTRING("fpsStr"));
	outFields->push(HX_CSTRING("_stage"));
	outFields->push(HX_CSTRING("mem_max_graph"));
	outFields->push(HX_CSTRING("ms_graph"));
	outFields->push(HX_CSTRING("mem_graph"));
	outFields->push(HX_CSTRING("fps_graph"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("alignRight"));
	outFields->push(HX_CSTRING("rectangle"));
	outFields->push(HX_CSTRING("graph"));
	outFields->push(HX_CSTRING("mem_max"));
	outFields->push(HX_CSTRING("mem"));
	outFields->push(HX_CSTRING("ms_prev"));
	outFields->push(HX_CSTRING("ms"));
	outFields->push(HX_CSTRING("fps"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GRAPH_WIDTH"),
	HX_CSTRING("XPOS"),
	HX_CSTRING("GRAPH_HEIGHT"),
	HX_CSTRING("TEXT_HEIGHT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("normalizeMem"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("init"),
	HX_CSTRING("msStr"),
	HX_CSTRING("memMaxStr"),
	HX_CSTRING("memStr"),
	HX_CSTRING("fpsStr"),
	HX_CSTRING("_stage"),
	HX_CSTRING("mem_max_graph"),
	HX_CSTRING("ms_graph"),
	HX_CSTRING("mem_graph"),
	HX_CSTRING("fps_graph"),
	HX_CSTRING("start"),
	HX_CSTRING("alignRight"),
	HX_CSTRING("rectangle"),
	HX_CSTRING("graph"),
	HX_CSTRING("mem_max"),
	HX_CSTRING("mem"),
	HX_CSTRING("ms_prev"),
	HX_CSTRING("ms"),
	HX_CSTRING("fps"),
	HX_CSTRING("timer"),
	HX_CSTRING("text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stats_obj::GRAPH_WIDTH,"GRAPH_WIDTH");
	HX_MARK_MEMBER_NAME(Stats_obj::XPOS,"XPOS");
	HX_MARK_MEMBER_NAME(Stats_obj::GRAPH_HEIGHT,"GRAPH_HEIGHT");
	HX_MARK_MEMBER_NAME(Stats_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stats_obj::GRAPH_WIDTH,"GRAPH_WIDTH");
	HX_VISIT_MEMBER_NAME(Stats_obj::XPOS,"XPOS");
	HX_VISIT_MEMBER_NAME(Stats_obj::GRAPH_HEIGHT,"GRAPH_HEIGHT");
	HX_VISIT_MEMBER_NAME(Stats_obj::TEXT_HEIGHT,"TEXT_HEIGHT");
};

Class Stats_obj::__mClass;

void Stats_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nmefermmmtools.debug.Stats"), hx::TCanCast< Stats_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stats_obj::__boot()
{
	GRAPH_WIDTH= (int)70;
	XPOS= (int)69;
	GRAPH_HEIGHT= (int)50;
	TEXT_HEIGHT= (int)50;
}

} // end namespace com
} // end namespace nmefermmmtools
} // end namespace debug
