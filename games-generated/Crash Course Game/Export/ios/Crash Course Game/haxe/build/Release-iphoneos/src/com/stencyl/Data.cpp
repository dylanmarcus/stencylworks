#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_ActorTypeReader
#include <com/stencyl/io/ActorTypeReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_BackgroundReader
#include <com/stencyl/io/BackgroundReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_BehaviorReader
#include <com/stencyl/io/BehaviorReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_FontReader
#include <com/stencyl/io/FontReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SoundReader
#include <com/stencyl/io/SoundReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SpriteReader
#include <com/stencyl/io/SpriteReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_TilesetReader
#include <com/stencyl/io/TilesetReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace stencyl{

Void Data_obj::__construct()
{
HX_STACK_PUSH("Data::new","com/stencyl/Data.hx",95);
{
	HX_STACK_LINE(95)
	if (((::openfl::Assets_obj::getText(HX_CSTRING("assets/data/game.xml")) == HX_CSTRING("")))){
		HX_STACK_LINE(97)
		hx::Throw (HX_CSTRING("Data.hx - Could not load game. Check your logs for a possible cause (likely a bad MP3 file)."));
	}
}
;
	return null();
}

Data_obj::~Data_obj() { }

Dynamic Data_obj::__CreateEmpty() { return  new Data_obj; }
hx::ObjectPtr< Data_obj > Data_obj::__new()
{  hx::ObjectPtr< Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

Dynamic Data_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

Void Data_obj::unloadAtlas( int atlasID){
{
		HX_STACK_PUSH("Data::unloadAtlas","com/stencyl/Data.hx",318);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(320)
		::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(atlasID);		HX_STACK_VAR(atlas,"atlas");
		HX_STACK_LINE(322)
		if (((bool((atlas != null())) && bool(atlas->active)))){
			HX_STACK_LINE(324)
			atlas->active = false;
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< int > _g1 = atlas->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(326)
				while(((_g < _g1->length))){
					HX_STACK_LINE(326)
					int resourceID = _g1->__get(_g);		HX_STACK_VAR(resourceID,"resourceID");
					HX_STACK_LINE(326)
					++(_g);
					HX_STACK_LINE(328)
					::com::stencyl::models::Resource resource = this->resources->get(resourceID);		HX_STACK_VAR(resource,"resource");
					HX_STACK_LINE(330)
					if (((resource != null()))){
						HX_STACK_LINE(331)
						resource->unloadGraphics();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,unloadAtlas,(void))

Void Data_obj::loadAtlas( int atlasID){
{
		HX_STACK_PUSH("Data::loadAtlas","com/stencyl/Data.hx",298);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(299)
		::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(atlasID);		HX_STACK_VAR(atlas,"atlas");
		HX_STACK_LINE(301)
		if (((bool((atlas != null())) && bool(!(atlas->active))))){
			HX_STACK_LINE(303)
			atlas->active = true;
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< int > _g1 = atlas->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(305)
				while(((_g < _g1->length))){
					HX_STACK_LINE(305)
					int resourceID = _g1->__get(_g);		HX_STACK_VAR(resourceID,"resourceID");
					HX_STACK_LINE(305)
					++(_g);
					HX_STACK_LINE(307)
					::com::stencyl::models::Resource resource = this->resources->get(resourceID);		HX_STACK_VAR(resource,"resource");
					HX_STACK_LINE(309)
					if (((resource != null()))){
						HX_STACK_LINE(310)
						resource->loadGraphics();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,loadAtlas,(void))

Dynamic Data_obj::getGraphicAsset( ::String url,::String diskURL){
	HX_STACK_PUSH("Data::getGraphicAsset","com/stencyl/Data.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_ARG(diskURL,"diskURL");
	HX_STACK_LINE(289)
	if (((this->resourceAssets->get(url) == null()))){
		HX_STACK_LINE(290)
		this->resourceAssets->set(url,::openfl::Assets_obj::getBitmapData(diskURL,false));
	}
	HX_STACK_LINE(294)
	return this->resourceAssets->get(url);
}


HX_DEFINE_DYNAMIC_FUNC2(Data_obj,getGraphicAsset,return )

Array< ::Dynamic > Data_obj::getAllActorTypes( ){
	HX_STACK_PUSH("Data::getAllActorTypes","com/stencyl/Data.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_LINE(274)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Data_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Data.hx",276);
			{
				HX_STACK_LINE(276)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->resources);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Data.hx",276);
					{
						HX_STACK_LINE(276)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(276)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(276)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Resource > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Resource >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Resource r = __it->next();
		if ((::Std_obj::is(r,hx::ClassOf< ::com::stencyl::models::actor::ActorType >()))){
			HX_STACK_LINE(279)
			a->push(hx::TCast< com::stencyl::models::actor::ActorType >::cast(r));
		}
;
	}
	HX_STACK_LINE(284)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,getAllActorTypes,return )

Dynamic Data_obj::getResourcesOfType( Dynamic type){
	HX_STACK_PUSH("Data::getResourcesOfType","com/stencyl/Data.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(259)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Data_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Data.hx",261);
			{
				HX_STACK_LINE(261)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->resources);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Data.hx",261);
					{
						HX_STACK_LINE(261)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(261)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(261)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Resource > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Resource >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Resource r = __it->next();
		if ((::Std_obj::is(r,type))){
			HX_STACK_LINE(264)
			a->__Field(HX_CSTRING("push"),true)(r);
		}
;
	}
	HX_STACK_LINE(269)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,getResourcesOfType,return )

::com::stencyl::models::Resource Data_obj::readResource( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("Data::readResource","com/stencyl/Data.hx",245);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->readers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		while(((_g < _g1->length))){
			HX_STACK_LINE(246)
			::com::stencyl::io::AbstractReader reader = _g1->__get(_g).StaticCast< ::com::stencyl::io::AbstractReader >();		HX_STACK_VAR(reader,"reader");
			HX_STACK_LINE(246)
			++(_g);
			HX_STACK_LINE(248)
			if ((reader->accepts(type))){
				HX_STACK_LINE(249)
				return reader->read(ID,atlasID,type,name,xml);
			}
		}
	}
	HX_STACK_LINE(254)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Data_obj,readResource,return )

Void Data_obj::readResourceXML( ::haxe::xml::Fast list){
{
		HX_STACK_PUSH("Data::readResourceXML","com/stencyl/Data.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(207)
		this->resources = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(210)
		int numParts = (int)0;		HX_STACK_VAR(numParts,"numParts");
		HX_STACK_LINE(212)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			(numParts)++;
		}
		HX_STACK_LINE(217)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(218)
		Float increment = (Float(10.0) / Float(numParts));		HX_STACK_VAR(increment,"increment");
		HX_STACK_LINE(221)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			{
				HX_STACK_LINE(226)
				this->updatePreloader(((int)65 + ::Std_obj::_int((increment * i))));
				HX_STACK_LINE(229)
				int atlasID = (int)0;		HX_STACK_VAR(atlasID,"atlasID");
				HX_STACK_LINE(231)
				if ((e->has->resolve(HX_CSTRING("atlasID")))){
					HX_STACK_LINE(232)
					atlasID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("atlasID")));
				}
				HX_STACK_LINE(236)
				this->resources->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),this->readResource(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),atlasID,e->get_name(),e->att->resolve(HX_CSTRING("name")),e));
				HX_STACK_LINE(239)
				(i)++;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,readResourceXML,(void))

Void Data_obj::loadResources( ){
{
		HX_STACK_PUSH("Data::loadResources","com/stencyl/Data.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_LINE(199)
		this->resourceAssets = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(200)
		this->loader->loadResources(this->resourceAssets);
		HX_STACK_LINE(201)
		this->updatePreloader((int)65);
		HX_STACK_LINE(202)
		this->readResourceXML(this->resourceListXML);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadResources,(void))

Void Data_obj::loadBehaviors( ){
{
		HX_STACK_PUSH("Data::loadBehaviors","com/stencyl/Data.hx",166);
		HX_STACK_THIS(this);
		HX_STACK_LINE(167)
		this->behaviors = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(170)
		int numParts = (int)0;		HX_STACK_VAR(numParts,"numParts");
		HX_STACK_LINE(172)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(this->behaviorListXML->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			(numParts)++;
		}
		HX_STACK_LINE(177)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(178)
		Float increment = (Float(10.0) / Float(numParts));		HX_STACK_VAR(increment,"increment");
		HX_STACK_LINE(181)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(this->behaviorListXML->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			{
				HX_STACK_LINE(186)
				this->updatePreloader(((int)5 + ::Std_obj::_int((increment * i))));
				HX_STACK_LINE(189)
				this->behaviors->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),::com::stencyl::io::BehaviorReader_obj::readBehavior(e));
				HX_STACK_LINE(192)
				(i)++;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadBehaviors,(void))

Void Data_obj::loadReaders( ){
{
		HX_STACK_PUSH("Data::loadReaders","com/stencyl/Data.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(156)
		this->readers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(157)
		this->readers->push(::com::stencyl::io::BackgroundReader_obj::__new());
		HX_STACK_LINE(158)
		this->readers->push(::com::stencyl::io::SoundReader_obj::__new());
		HX_STACK_LINE(159)
		this->readers->push(::com::stencyl::io::TilesetReader_obj::__new());
		HX_STACK_LINE(160)
		this->readers->push(::com::stencyl::io::ActorTypeReader_obj::__new());
		HX_STACK_LINE(161)
		this->readers->push(::com::stencyl::io::SpriteReader_obj::__new());
		HX_STACK_LINE(162)
		this->readers->push(::com::stencyl::io::FontReader_obj::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadReaders,(void))

Void Data_obj::loadAll( ){
{
		HX_STACK_PUSH("Data::loadAll","com/stencyl/Data.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_LINE(117)
		if (((this->preloader != null()))){
			HX_STACK_LINE(118)
			::flash::Lib_obj::get_current()->addChild(this->preloader);
		}
		HX_STACK_LINE(121)
		this->updatePreloader((int)0);
		HX_STACK_LINE(124)
		this->gameXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/game.xml")))->firstElement());
		HX_STACK_LINE(125)
		this->resourceListXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/resources.xml")))->firstElement());
		HX_STACK_LINE(126)
		this->sceneListXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/scenes.xml")))->firstElement());
		HX_STACK_LINE(127)
		this->behaviorListXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/behaviors.xml")))->firstElement());
		HX_STACK_LINE(129)
		this->updatePreloader((int)5);
		HX_STACK_LINE(131)
		this->loadReaders();
		HX_STACK_LINE(132)
		this->loadBehaviors();
		HX_STACK_LINE(134)
		this->updatePreloader((int)15);
		HX_STACK_LINE(136)
		this->loadResources();
		HX_STACK_LINE(138)
		this->updatePreloader((int)90);
		HX_STACK_LINE(140)
		this->scenesXML = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(142)
		this->loader->loadScenes(this->scenesXML);
		HX_STACK_LINE(144)
		this->updatePreloader((int)100);
		HX_STACK_LINE(147)
		::flash::Lib_obj::get_current()->removeChild(::com::stencyl::Data_obj::instance->preloader);
		HX_STACK_LINE(150)
		this->resourceListXML = null();
		HX_STACK_LINE(151)
		this->behaviorListXML = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadAll,(void))

Void Data_obj::updatePreloader( int pct){
{
		HX_STACK_PUSH("Data::updatePreloader","com/stencyl/Data.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pct,"pct");
		HX_STACK_LINE(103)
		if (((this->preloader != null()))){
			HX_STACK_LINE(108)
			::Reflect_obj::callMethod(this->preloader,::Reflect_obj::field(this->preloader,HX_CSTRING("onUpdate")),Dynamic( Array_obj<Dynamic>::__new().Add(pct).Add((int)100)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,updatePreloader,(void))

::com::stencyl::Data Data_obj::instance;

::com::stencyl::AssetLoader Data_obj::theLoader;

::com::stencyl::Data Data_obj::get( ){
	HX_STACK_PUSH("Data::get","com/stencyl/Data.hx",36);
	HX_STACK_LINE(37)
	if (((::com::stencyl::Data_obj::instance == null()))){
		HX_STACK_LINE(39)
		::com::stencyl::Data_obj::instance = ::com::stencyl::Data_obj::__new();
		HX_STACK_LINE(40)
		::com::stencyl::Data_obj::instance->loader = ::com::stencyl::Data_obj::theLoader = ::Type_obj::createInstance(::Type_obj::resolveClass(HX_CSTRING("scripts.MyAssets")),Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(43)
		::com::stencyl::Data_obj::instance->preloader = ::Type_obj::createInstance(::Type_obj::resolveClass(HX_CSTRING("scripts.StencylPreloader")),Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(46)
		::com::stencyl::Data_obj::instance->loadAll();
	}
	HX_STACK_LINE(49)
	return ::com::stencyl::Data_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Data_obj,get,return )


Data_obj::Data_obj()
{
}

void Data_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Data);
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(resourceAssets,"resourceAssets");
	HX_MARK_MEMBER_NAME(resources,"resources");
	HX_MARK_MEMBER_NAME(scenesXML,"scenesXML");
	HX_MARK_MEMBER_NAME(behaviorListXML,"behaviorListXML");
	HX_MARK_MEMBER_NAME(sceneListXML,"sceneListXML");
	HX_MARK_MEMBER_NAME(resourceListXML,"resourceListXML");
	HX_MARK_MEMBER_NAME(gameXML,"gameXML");
	HX_MARK_MEMBER_NAME(readers,"readers");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_END_CLASS();
}

void Data_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(resourceAssets,"resourceAssets");
	HX_VISIT_MEMBER_NAME(resources,"resources");
	HX_VISIT_MEMBER_NAME(scenesXML,"scenesXML");
	HX_VISIT_MEMBER_NAME(behaviorListXML,"behaviorListXML");
	HX_VISIT_MEMBER_NAME(sceneListXML,"sceneListXML");
	HX_VISIT_MEMBER_NAME(resourceListXML,"resourceListXML");
	HX_VISIT_MEMBER_NAME(gameXML,"gameXML");
	HX_VISIT_MEMBER_NAME(readers,"readers");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(loader,"loader");
}

Dynamic Data_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadAll") ) { return loadAll_dyn(); }
		if (HX_FIELD_EQ(inName,"gameXML") ) { return gameXML; }
		if (HX_FIELD_EQ(inName,"readers") ) { return readers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"theLoader") ) { return theLoader; }
		if (HX_FIELD_EQ(inName,"loadAtlas") ) { return loadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		if (HX_FIELD_EQ(inName,"scenesXML") ) { return scenesXML; }
		if (HX_FIELD_EQ(inName,"preloader") ) { return preloader; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unloadAtlas") ) { return unloadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"loadReaders") ) { return loadReaders_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readResource") ) { return readResource_dyn(); }
		if (HX_FIELD_EQ(inName,"sceneListXML") ) { return sceneListXML; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadResources") ) { return loadResources_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBehaviors") ) { return loadBehaviors_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resourceAssets") ) { return resourceAssets; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGraphicAsset") ) { return getGraphicAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"readResourceXML") ) { return readResourceXML_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePreloader") ) { return updatePreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"behaviorListXML") ) { return behaviorListXML; }
		if (HX_FIELD_EQ(inName,"resourceListXML") ) { return resourceListXML; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAllActorTypes") ) { return getAllActorTypes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getResourcesOfType") ) { return getResourcesOfType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Data_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::com::stencyl::AssetLoader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gameXML") ) { gameXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readers") ) { readers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::stencyl::Data >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"theLoader") ) { theLoader=inValue.Cast< ::com::stencyl::AssetLoader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scenesXML") ) { scenesXML=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sceneListXML") ) { sceneListXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resourceAssets") ) { resourceAssets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"behaviorListXML") ) { behaviorListXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceListXML") ) { resourceListXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Data_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("behaviors"));
	outFields->push(HX_CSTRING("resourceAssets"));
	outFields->push(HX_CSTRING("resources"));
	outFields->push(HX_CSTRING("scenesXML"));
	outFields->push(HX_CSTRING("behaviorListXML"));
	outFields->push(HX_CSTRING("sceneListXML"));
	outFields->push(HX_CSTRING("resourceListXML"));
	outFields->push(HX_CSTRING("gameXML"));
	outFields->push(HX_CSTRING("readers"));
	outFields->push(HX_CSTRING("preloader"));
	outFields->push(HX_CSTRING("loader"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("theLoader"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadAtlas"),
	HX_CSTRING("loadAtlas"),
	HX_CSTRING("getGraphicAsset"),
	HX_CSTRING("getAllActorTypes"),
	HX_CSTRING("getResourcesOfType"),
	HX_CSTRING("readResource"),
	HX_CSTRING("readResourceXML"),
	HX_CSTRING("loadResources"),
	HX_CSTRING("loadBehaviors"),
	HX_CSTRING("loadReaders"),
	HX_CSTRING("loadAll"),
	HX_CSTRING("updatePreloader"),
	HX_CSTRING("behaviors"),
	HX_CSTRING("resourceAssets"),
	HX_CSTRING("resources"),
	HX_CSTRING("scenesXML"),
	HX_CSTRING("behaviorListXML"),
	HX_CSTRING("sceneListXML"),
	HX_CSTRING("resourceListXML"),
	HX_CSTRING("gameXML"),
	HX_CSTRING("readers"),
	HX_CSTRING("preloader"),
	HX_CSTRING("loader"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Data_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Data_obj::theLoader,"theLoader");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Data_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Data_obj::theLoader,"theLoader");
};

Class Data_obj::__mClass;

void Data_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.Data"), hx::TCanCast< Data_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Data_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
