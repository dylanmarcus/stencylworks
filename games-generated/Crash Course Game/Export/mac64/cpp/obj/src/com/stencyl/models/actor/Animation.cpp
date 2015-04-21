#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace actor{

Void Animation_obj::__construct(int animID,::String animName,int parentID,::haxe::ds::IntMap simpleShapes,::haxe::ds::IntMap physicsShapes,bool looping,bool sync,int imgWidth,int imgHeight,Float originX,Float originY,Array< int > durations,int framesAcross,int framesDown,int atlasID)
{
HX_STACK_PUSH("Animation::new","com/stencyl/models/actor/Animation.hx",6);
{
	HX_STACK_LINE(29)
	this->sharedFrameIndex = (int)0;
	HX_STACK_LINE(28)
	this->sharedTimer = (int)0;
	HX_STACK_LINE(52)
	this->animID = animID;
	HX_STACK_LINE(53)
	this->animName = animName;
	HX_STACK_LINE(55)
	this->parentID = parentID;
	HX_STACK_LINE(56)
	this->simpleShapes = simpleShapes;
	HX_STACK_LINE(57)
	this->physicsShapes = physicsShapes;
	HX_STACK_LINE(58)
	this->looping = looping;
	HX_STACK_LINE(59)
	this->sync = sync;
	HX_STACK_LINE(60)
	this->durations = durations;
	HX_STACK_LINE(62)
	this->imgWidth = imgWidth;
	HX_STACK_LINE(63)
	this->imgHeight = imgHeight;
	HX_STACK_LINE(65)
	this->framesAcross = framesAcross;
	HX_STACK_LINE(66)
	this->framesDown = framesDown;
	HX_STACK_LINE(68)
	this->originX = originX;
	HX_STACK_LINE(69)
	this->originY = originY;
	HX_STACK_LINE(71)
	::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(atlasID);		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(73)
	if (((bool((atlas != null())) && bool(atlas->active)))){
		HX_STACK_LINE(74)
		this->loadGraphics();
	}
	HX_STACK_LINE(78)
	if (((bool((framesAcross > (int)1)) && bool(looping)))){
		HX_STACK_LINE(79)
		::com::stencyl::models::actor::Animation_obj::allAnimations->push(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(int animID,::String animName,int parentID,::haxe::ds::IntMap simpleShapes,::haxe::ds::IntMap physicsShapes,bool looping,bool sync,int imgWidth,int imgHeight,Float originX,Float originY,Array< int > durations,int framesAcross,int framesDown,int atlasID)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(animID,animName,parentID,simpleShapes,physicsShapes,looping,sync,imgWidth,imgHeight,originX,originY,durations,framesAcross,framesDown,atlasID);
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14]);
	return result;}

Void Animation_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Animation::update","com/stencyl/models/actor/Animation.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(112)
		hx::AddEq(this->sharedTimer,elapsedTime);
		HX_STACK_LINE(114)
		if (((bool((this->framesAcross > (int)1)) && bool((this->sharedTimer > this->durations->__get(this->sharedFrameIndex)))))){
			HX_STACK_LINE(116)
			int old = this->sharedFrameIndex;		HX_STACK_VAR(old,"old");
			HX_STACK_LINE(118)
			hx::SubEq(this->sharedTimer,this->durations->__get(this->sharedFrameIndex));
			HX_STACK_LINE(120)
			(this->sharedFrameIndex)++;
			HX_STACK_LINE(122)
			if (((this->sharedFrameIndex >= this->framesAcross))){
				HX_STACK_LINE(123)
				if ((this->looping)){
					HX_STACK_LINE(125)
					this->sharedFrameIndex = (int)0;
				}
				else{
					HX_STACK_LINE(130)
					(this->sharedFrameIndex)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,update,(void))

Void Animation_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("Animation::unloadGraphics","com/stencyl/models/actor/Animation.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		this->imgData = ::flash::display::BitmapData_obj::__new(this->framesAcross,(int)1,null(),null(),null());
		HX_STACK_LINE(99)
		::com::stencyl::Data_obj::get()->resourceAssets->remove((((this->parentID + HX_CSTRING("-")) + this->animID) + HX_CSTRING(".png")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,unloadGraphics,(void))

Void Animation_obj::loadGraphics( ){
{
		HX_STACK_PUSH("Animation::loadGraphics","com/stencyl/models/actor/Animation.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		this->imgData = ::com::stencyl::Data_obj::get()->getGraphicAsset((((this->parentID + HX_CSTRING("-")) + this->animID) + HX_CSTRING(".png")),((((((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-")) + this->parentID) + HX_CSTRING("-")) + this->animID) + HX_CSTRING(".png")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,loadGraphics,(void))

Array< ::Dynamic > Animation_obj::allAnimations;

Void Animation_obj::updateAll( Float elapsedTime){
{
		HX_STACK_PUSH("Animation::updateAll","com/stencyl/models/actor/Animation.hx",103);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(104)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::com::stencyl::models::actor::Animation_obj::allAnimations;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		while(((_g < _g1->length))){
			HX_STACK_LINE(104)
			::com::stencyl::models::actor::Animation a = _g1->__get(_g).StaticCast< ::com::stencyl::models::actor::Animation >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(104)
			++(_g);
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				hx::AddEq(a->sharedTimer,elapsedTime);
				HX_STACK_LINE(106)
				if (((bool((a->framesAcross > (int)1)) && bool((a->sharedTimer > a->durations->__get(a->sharedFrameIndex)))))){
					HX_STACK_LINE(106)
					int old = a->sharedFrameIndex;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(106)
					hx::SubEq(a->sharedTimer,a->durations->__get(a->sharedFrameIndex));
					HX_STACK_LINE(106)
					(a->sharedFrameIndex)++;
					HX_STACK_LINE(106)
					if (((a->sharedFrameIndex >= a->framesAcross))){
						HX_STACK_LINE(106)
						if ((a->looping)){
							HX_STACK_LINE(106)
							a->sharedFrameIndex = (int)0;
						}
						else{
							HX_STACK_LINE(106)
							(a->sharedFrameIndex)--;
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,updateAll,(void))


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(sharedFrameIndex,"sharedFrameIndex");
	HX_MARK_MEMBER_NAME(sharedTimer,"sharedTimer");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(framesDown,"framesDown");
	HX_MARK_MEMBER_NAME(framesAcross,"framesAcross");
	HX_MARK_MEMBER_NAME(imgHeight,"imgHeight");
	HX_MARK_MEMBER_NAME(imgWidth,"imgWidth");
	HX_MARK_MEMBER_NAME(imgData,"imgData");
	HX_MARK_MEMBER_NAME(durations,"durations");
	HX_MARK_MEMBER_NAME(sync,"sync");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(physicsShapes,"physicsShapes");
	HX_MARK_MEMBER_NAME(simpleShapes,"simpleShapes");
	HX_MARK_MEMBER_NAME(parentID,"parentID");
	HX_MARK_MEMBER_NAME(animName,"animName");
	HX_MARK_MEMBER_NAME(animID,"animID");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sharedFrameIndex,"sharedFrameIndex");
	HX_VISIT_MEMBER_NAME(sharedTimer,"sharedTimer");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(framesDown,"framesDown");
	HX_VISIT_MEMBER_NAME(framesAcross,"framesAcross");
	HX_VISIT_MEMBER_NAME(imgHeight,"imgHeight");
	HX_VISIT_MEMBER_NAME(imgWidth,"imgWidth");
	HX_VISIT_MEMBER_NAME(imgData,"imgData");
	HX_VISIT_MEMBER_NAME(durations,"durations");
	HX_VISIT_MEMBER_NAME(sync,"sync");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(physicsShapes,"physicsShapes");
	HX_VISIT_MEMBER_NAME(simpleShapes,"simpleShapes");
	HX_VISIT_MEMBER_NAME(parentID,"parentID");
	HX_VISIT_MEMBER_NAME(animName,"animName");
	HX_VISIT_MEMBER_NAME(animID,"animID");
}

Dynamic Animation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return sync; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"animID") ) { return animID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"imgData") ) { return imgData; }
		if (HX_FIELD_EQ(inName,"looping") ) { return looping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imgWidth") ) { return imgWidth; }
		if (HX_FIELD_EQ(inName,"parentID") ) { return parentID; }
		if (HX_FIELD_EQ(inName,"animName") ) { return animName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateAll") ) { return updateAll_dyn(); }
		if (HX_FIELD_EQ(inName,"imgHeight") ) { return imgHeight; }
		if (HX_FIELD_EQ(inName,"durations") ) { return durations; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesDown") ) { return framesDown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sharedTimer") ) { return sharedTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"framesAcross") ) { return framesAcross; }
		if (HX_FIELD_EQ(inName,"simpleShapes") ) { return simpleShapes; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allAnimations") ) { return allAnimations; }
		if (HX_FIELD_EQ(inName,"physicsShapes") ) { return physicsShapes; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sharedFrameIndex") ) { return sharedFrameIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { sync=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"animID") ) { animID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgData") ) { imgData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imgWidth") ) { imgWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentID") ) { parentID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animName") ) { animName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imgHeight") ) { imgHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"durations") ) { durations=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesDown") ) { framesDown=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sharedTimer") ) { sharedTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesAcross") ) { framesAcross=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simpleShapes") ) { simpleShapes=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allAnimations") ) { allAnimations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicsShapes") ) { physicsShapes=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sharedFrameIndex") ) { sharedFrameIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sharedFrameIndex"));
	outFields->push(HX_CSTRING("sharedTimer"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("framesDown"));
	outFields->push(HX_CSTRING("framesAcross"));
	outFields->push(HX_CSTRING("imgHeight"));
	outFields->push(HX_CSTRING("imgWidth"));
	outFields->push(HX_CSTRING("imgData"));
	outFields->push(HX_CSTRING("durations"));
	outFields->push(HX_CSTRING("sync"));
	outFields->push(HX_CSTRING("looping"));
	outFields->push(HX_CSTRING("physicsShapes"));
	outFields->push(HX_CSTRING("simpleShapes"));
	outFields->push(HX_CSTRING("parentID"));
	outFields->push(HX_CSTRING("animName"));
	outFields->push(HX_CSTRING("animID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("allAnimations"),
	HX_CSTRING("updateAll"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("sharedFrameIndex"),
	HX_CSTRING("sharedTimer"),
	HX_CSTRING("originY"),
	HX_CSTRING("originX"),
	HX_CSTRING("framesDown"),
	HX_CSTRING("framesAcross"),
	HX_CSTRING("imgHeight"),
	HX_CSTRING("imgWidth"),
	HX_CSTRING("imgData"),
	HX_CSTRING("durations"),
	HX_CSTRING("sync"),
	HX_CSTRING("looping"),
	HX_CSTRING("physicsShapes"),
	HX_CSTRING("simpleShapes"),
	HX_CSTRING("parentID"),
	HX_CSTRING("animName"),
	HX_CSTRING("animID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Animation_obj::allAnimations,"allAnimations");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Animation_obj::allAnimations,"allAnimations");
};

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.actor.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Animation_obj::__boot()
{
	allAnimations= Array_obj< ::Dynamic >::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
