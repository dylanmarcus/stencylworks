#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_AbstractAnimation
#include <com/stencyl/graphics/AbstractAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_BitmapAnimation
#include <com/stencyl/graphics/BitmapAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{

Void BitmapAnimation_obj::__construct(::flash::display::BitmapData sheet,int numFrames,Array< int > durations,bool looping,::com::stencyl::models::actor::Animation model)
{
HX_STACK_PUSH("BitmapAnimation::new","com/stencyl/graphics/BitmapAnimation.hx",30);
{
	HX_STACK_LINE(31)
	super::__construct(::flash::display::BitmapData_obj::__new(::Std_obj::_int((Float(sheet->get_width()) / Float(numFrames))),sheet->get_height(),null(),null(),null()),null(),null());
	HX_STACK_LINE(33)
	this->model = model;
	HX_STACK_LINE(35)
	this->frameWidth = ::Std_obj::_int((Float(sheet->get_width()) / Float(numFrames)));
	HX_STACK_LINE(37)
	this->set_x(((Float(-(sheet->get_width())) / Float((((int)2 * numFrames)))) * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(38)
	this->set_y(((Float(-(sheet->get_height())) / Float((int)2)) * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(40)
	this->timer = (int)0;
	HX_STACK_LINE(41)
	this->frameIndex = (int)0;
	HX_STACK_LINE(42)
	this->looping = looping;
	HX_STACK_LINE(43)
	this->sheet = sheet;
	HX_STACK_LINE(44)
	this->durations = durations;
	HX_STACK_LINE(45)
	this->numFrames = numFrames;
	HX_STACK_LINE(46)
	this->set_smoothing(::scripts::MyAssets_obj::antialias);
	HX_STACK_LINE(48)
	this->region = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->frameWidth,sheet->get_height());
	HX_STACK_LINE(49)
	this->pt = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(51)
	this->finished = (numFrames <= (int)1);
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		this->region->x = (this->frameWidth * this->frameIndex);
		HX_STACK_LINE(53)
		this->bitmapData->fillRect(this->bitmapData->get_rect(),(int)0);
		HX_STACK_LINE(53)
		this->bitmapData->copyPixels(this->sheet,this->region,this->pt,null(),null(),null());
		HX_STACK_LINE(53)
		this->needsUpdate = false;
	}
}
;
	return null();
}

BitmapAnimation_obj::~BitmapAnimation_obj() { }

Dynamic BitmapAnimation_obj::__CreateEmpty() { return  new BitmapAnimation_obj; }
hx::ObjectPtr< BitmapAnimation_obj > BitmapAnimation_obj::__new(::flash::display::BitmapData sheet,int numFrames,Array< int > durations,bool looping,::com::stencyl::models::actor::Animation model)
{  hx::ObjectPtr< BitmapAnimation_obj > result = new BitmapAnimation_obj();
	result->__construct(sheet,numFrames,durations,looping,model);
	return result;}

Dynamic BitmapAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapAnimation_obj > result = new BitmapAnimation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *BitmapAnimation_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::graphics::AbstractAnimation_obj)) return operator ::com::stencyl::graphics::AbstractAnimation_obj *();
	return super::__ToInterface(inType);
}

Void BitmapAnimation_obj::setFrameDurations( int time){
{
		HX_STACK_PUSH("BitmapAnimation::setFrameDurations","com/stencyl/graphics/BitmapAnimation.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(177)
		if (((this->durations != null()))){
			HX_STACK_LINE(180)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->durations->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			while(((_g1 < _g))){
				HX_STACK_LINE(180)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(182)
				this->durations[i] = time;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapAnimation_obj,setFrameDurations,(void))

Array< int > BitmapAnimation_obj::getFrameDurations( ){
	HX_STACK_PUSH("BitmapAnimation::getFrameDurations","com/stencyl/graphics/BitmapAnimation.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_LINE(172)
	return this->durations;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapAnimation_obj,getFrameDurations,return )

Void BitmapAnimation_obj::draw( ::com::stencyl::graphics::G g,Float x,Float y,Float angle,Float alpha){
{
		HX_STACK_PUSH("BitmapAnimation::draw","com/stencyl/graphics/BitmapAnimation.hx",167);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(168)
		::flash::display::BitmapData img = this->bitmapData;		HX_STACK_VAR(img,"img");
		Float x1 = x;		HX_STACK_VAR(x1,"x1");
		Float y1 = y;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(168)
		hx::MultEq(x1,g->scaleX);
		HX_STACK_LINE(168)
		hx::MultEq(y1,g->scaleY);
		HX_STACK_LINE(168)
		g->rect->x = (int)0;
		HX_STACK_LINE(168)
		g->rect->y = (int)0;
		HX_STACK_LINE(168)
		g->rect->width = img->get_width();
		HX_STACK_LINE(168)
		g->rect->height = img->get_height();
		HX_STACK_LINE(168)
		if ((g->drawActor)){
			HX_STACK_LINE(168)
			if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
				HX_STACK_LINE(168)
				g->point->x = (g->x + x1);
				HX_STACK_LINE(168)
				g->point->y = (g->y + y1);
			}
			else{
				HX_STACK_LINE(168)
				g->point->x = ((g->x + x1) + ::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(168)
				g->point->y = ((g->y + y1) + ::com::stencyl::Engine_obj::cameraY);
			}
		}
		else{
			HX_STACK_LINE(168)
			g->point->x = (g->x + x1);
			HX_STACK_LINE(168)
			g->point->y = (g->y + y1);
		}
		HX_STACK_LINE(168)
		::openfl::display::Tilesheet sheet = ::openfl::display::Tilesheet_obj::__new(img);		HX_STACK_VAR(sheet,"sheet");
		HX_STACK_LINE(168)
		sheet->addTileRect(g->rect,g->point2);
		HX_STACK_LINE(168)
		g->data[(int)0] = g->point->x;
		HX_STACK_LINE(168)
		g->data[(int)1] = g->point->y;
		HX_STACK_LINE(168)
		g->data[(int)2] = (int)0;
		HX_STACK_LINE(168)
		if (((angle != (int)0))){
			HX_STACK_LINE(168)
			g->data[(int)3] = angle;
			HX_STACK_LINE(168)
			g->data[(int)4] = g->toARGB((int)0,::Std_obj::_int((g->alpha * (int)255)));
			HX_STACK_LINE(168)
			sheet->drawTiles(g->canvas->__Field(HX_CSTRING("graphics"),true),g->data,::scripts::MyAssets_obj::antialias,(int)10);
		}
		else{
			HX_STACK_LINE(168)
			g->data[(int)3] = g->toARGB((int)0,::Std_obj::_int((g->alpha * (int)255)));
			HX_STACK_LINE(168)
			sheet->drawTiles(g->canvas->__Field(HX_CSTRING("graphics"),true),g->data,::scripts::MyAssets_obj::antialias,(int)8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapAnimation_obj,draw,(void))

Void BitmapAnimation_obj::updateBitmap( ){
{
		HX_STACK_PUSH("BitmapAnimation::updateBitmap","com/stencyl/graphics/BitmapAnimation.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_LINE(158)
		this->region->x = (this->frameWidth * this->frameIndex);
		HX_STACK_LINE(160)
		this->bitmapData->fillRect(this->bitmapData->get_rect(),(int)0);
		HX_STACK_LINE(161)
		this->bitmapData->copyPixels(this->sheet,this->region,this->pt,null(),null(),null());
		HX_STACK_LINE(163)
		this->needsUpdate = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapAnimation_obj,updateBitmap,(void))

Void BitmapAnimation_obj::reset( ){
{
		HX_STACK_PUSH("BitmapAnimation::reset","com/stencyl/graphics/BitmapAnimation.hx",149);
		HX_STACK_THIS(this);
		HX_STACK_LINE(150)
		this->timer = (int)0;
		HX_STACK_LINE(151)
		this->frameIndex = (int)0;
		HX_STACK_LINE(152)
		this->finished = false;
		HX_STACK_LINE(153)
		this->needsUpdate = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapAnimation_obj,reset,(void))

bool BitmapAnimation_obj::needsBitmapUpdate( ){
	HX_STACK_PUSH("BitmapAnimation::needsBitmapUpdate","com/stencyl/graphics/BitmapAnimation.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	return this->needsUpdate;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapAnimation_obj,needsBitmapUpdate,return )

bool BitmapAnimation_obj::isFinished( ){
	HX_STACK_PUSH("BitmapAnimation::isFinished","com/stencyl/graphics/BitmapAnimation.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(139)
	return this->finished;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapAnimation_obj,isFinished,return )

Void BitmapAnimation_obj::setFrame( int frame){
{
		HX_STACK_PUSH("BitmapAnimation::setFrame","com/stencyl/graphics/BitmapAnimation.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_LINE(117)
		if (((bool((frame < (int)0)) || bool((frame >= this->numFrames))))){
			HX_STACK_LINE(118)
			frame = (int)0;
		}
		HX_STACK_LINE(122)
		if (((frame != this->frameIndex))){
			HX_STACK_LINE(124)
			this->frameIndex = frame;
			HX_STACK_LINE(125)
			this->needsUpdate = true;
		}
		HX_STACK_LINE(128)
		this->timer = (int)0;
		HX_STACK_LINE(129)
		this->finished = false;
		HX_STACK_LINE(132)
		if (((this->model != null()))){
			HX_STACK_LINE(133)
			this->model->sharedFrameIndex = frame;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapAnimation_obj,setFrame,(void))

int BitmapAnimation_obj::getNumFrames( ){
	HX_STACK_PUSH("BitmapAnimation::getNumFrames","com/stencyl/graphics/BitmapAnimation.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_LINE(111)
	return this->numFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapAnimation_obj,getNumFrames,return )

int BitmapAnimation_obj::getCurrentFrame( ){
	HX_STACK_PUSH("BitmapAnimation::getCurrentFrame","com/stencyl/graphics/BitmapAnimation.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_LINE(106)
	return this->frameIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapAnimation_obj,getCurrentFrame,return )

Void BitmapAnimation_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("BitmapAnimation::update","com/stencyl/graphics/BitmapAnimation.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(59)
		if (((bool((this->model == null())) || bool(!(this->looping))))){
			HX_STACK_LINE(61)
			hx::AddEq(this->timer,elapsedTime);
			HX_STACK_LINE(63)
			if (((bool((this->numFrames > (int)1)) && bool((this->timer > this->durations->__get(this->frameIndex)))))){
				HX_STACK_LINE(65)
				int old = this->frameIndex;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(67)
				hx::SubEq(this->timer,this->durations->__get(this->frameIndex));
				HX_STACK_LINE(69)
				(this->frameIndex)++;
				HX_STACK_LINE(71)
				if (((this->frameIndex >= this->numFrames))){
					HX_STACK_LINE(72)
					if ((this->looping)){
						HX_STACK_LINE(74)
						this->frameIndex = (int)0;
					}
					else{
						HX_STACK_LINE(80)
						this->finished = true;
						HX_STACK_LINE(81)
						(this->frameIndex)--;
					}
				}
				HX_STACK_LINE(85)
				if (((old != this->frameIndex))){
					HX_STACK_LINE(86)
					this->needsUpdate = true;
				}
			}
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(94)
		int old = this->frameIndex;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(96)
		this->timer = this->model->sharedTimer;
		HX_STACK_LINE(97)
		this->frameIndex = this->model->sharedFrameIndex;
		HX_STACK_LINE(99)
		if (((old != this->frameIndex))){
			HX_STACK_LINE(100)
			this->needsUpdate = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapAnimation_obj,update,(void))


BitmapAnimation_obj::BitmapAnimation_obj()
{
}

void BitmapAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapAnimation);
	HX_MARK_MEMBER_NAME(needsUpdate,"needsUpdate");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(pt,"pt");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(durations,"durations");
	HX_MARK_MEMBER_NAME(sheet,"sheet");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(model,"model");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(needsUpdate,"needsUpdate");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(pt,"pt");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(durations,"durations");
	HX_VISIT_MEMBER_NAME(sheet,"sheet");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(model,"model");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapAnimation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { return pt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"sheet") ) { return sheet; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { return looping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { return numFrames; }
		if (HX_FIELD_EQ(inName,"durations") ) { return durations; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFinished") ) { return isFinished_dyn(); }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return frameIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsUpdate") ) { return needsUpdate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBitmap") ) { return updateBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"getNumFrames") ) { return getNumFrames_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCurrentFrame") ) { return getCurrentFrame_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setFrameDurations") ) { return setFrameDurations_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameDurations") ) { return getFrameDurations_dyn(); }
		if (HX_FIELD_EQ(inName,"needsBitmapUpdate") ) { return needsBitmapUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { pt=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sheet") ) { sheet=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::com::stencyl::models::actor::Animation >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"durations") ) { durations=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameIndex") ) { frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsUpdate") ) { needsUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("needsUpdate"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("pt"));
	outFields->push(HX_CSTRING("region"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("numFrames"));
	outFields->push(HX_CSTRING("durations"));
	outFields->push(HX_CSTRING("sheet"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("looping"));
	outFields->push(HX_CSTRING("frameIndex"));
	outFields->push(HX_CSTRING("model"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setFrameDurations"),
	HX_CSTRING("getFrameDurations"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateBitmap"),
	HX_CSTRING("reset"),
	HX_CSTRING("needsBitmapUpdate"),
	HX_CSTRING("isFinished"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getNumFrames"),
	HX_CSTRING("getCurrentFrame"),
	HX_CSTRING("update"),
	HX_CSTRING("needsUpdate"),
	HX_CSTRING("finished"),
	HX_CSTRING("pt"),
	HX_CSTRING("region"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("numFrames"),
	HX_CSTRING("durations"),
	HX_CSTRING("sheet"),
	HX_CSTRING("timer"),
	HX_CSTRING("looping"),
	HX_CSTRING("frameIndex"),
	HX_CSTRING("model"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapAnimation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapAnimation_obj::__mClass,"__mClass");
};

Class BitmapAnimation_obj::__mClass;

void BitmapAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.BitmapAnimation"), hx::TCanCast< BitmapAnimation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapAnimation_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
