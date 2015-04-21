#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace openfl{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::openfl::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::openfl::AssetType type){
	HX_STACK_PUSH("Assets::exists","openfl/Assets.hx",40);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(42)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(46)
	if (((type == null()))){
		HX_STACK_LINE(46)
		type = ::openfl::AssetType_obj::BINARY;
	}
	HX_STACK_LINE(52)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(53)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(54)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(56)
	if (((library != null()))){
		HX_STACK_LINE(56)
		return library->exists(symbolName,type);
	}
	HX_STACK_LINE(64)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::flash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","openfl/Assets.hx",76);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(78)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(82)
		if (((bool((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled))) && bool(::openfl::Assets_obj::cache->bitmapData->exists(id))))){
			HX_STACK_LINE(82)
			return ::openfl::Assets_obj::cache->bitmapData->get(id);
		}
		HX_STACK_LINE(88)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(89)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(90)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(92)
		if (((library != null()))){
			HX_STACK_LINE(92)
			if ((library->exists(symbolName,::openfl::AssetType_obj::IMAGE))){
				HX_STACK_LINE(96)
				::flash::display::BitmapData bitmapData = library->getBitmapData(symbolName);		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(98)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
					HX_STACK_LINE(98)
					::openfl::Assets_obj::cache->bitmapData->set(id,bitmapData);
				}
				HX_STACK_LINE(104)
				return bitmapData;
			}
			else{
				HX_STACK_LINE(106)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),108,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		else{
			HX_STACK_LINE(112)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),114,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
		}
		HX_STACK_LINE(120)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::flash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","openfl/Assets.hx",131);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(133)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(137)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(138)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(139)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(141)
	if (((library != null()))){
		HX_STACK_LINE(141)
		if ((library->exists(symbolName,::openfl::AssetType_obj::BINARY))){
			HX_STACK_LINE(143)
			return library->getBytes(symbolName);
		}
		else{
			HX_STACK_LINE(147)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),149,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
		}
	}
	else{
		HX_STACK_LINE(153)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),155,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(161)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::flash::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","openfl/Assets.hx",172);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(174)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(178)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(179)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(180)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(182)
	if (((library != null()))){
		HX_STACK_LINE(182)
		if ((library->exists(symbolName,::openfl::AssetType_obj::FONT))){
			HX_STACK_LINE(184)
			return library->getFont(symbolName);
		}
		else{
			HX_STACK_LINE(188)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),190,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
		}
	}
	else{
		HX_STACK_LINE(194)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),196,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
	}
	HX_STACK_LINE(202)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::openfl::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_PUSH("Assets::getLibrary","openfl/Assets.hx",207);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(209)
	if (((bool((name == null())) || bool((name == HX_CSTRING("")))))){
		HX_STACK_LINE(209)
		name = HX_CSTRING("default");
	}
	HX_STACK_LINE(215)
	return ::openfl::Assets_obj::libraries->get(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::flash::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","openfl/Assets.hx",226);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(228)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(232)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(233)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(234)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(236)
	if (((library != null()))){
		HX_STACK_LINE(236)
		if ((library->exists(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
			HX_STACK_LINE(238)
			return library->getMovieClip(symbolName);
		}
		else{
			HX_STACK_LINE(242)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),244,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
		}
	}
	else{
		HX_STACK_LINE(248)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),250,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(256)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_PUSH("Assets::getPath","openfl/Assets.hx",267);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(269)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(273)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(274)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(275)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(277)
	if (((library != null()))){
		HX_STACK_LINE(277)
		if ((library->exists(symbolName,null()))){
			HX_STACK_LINE(279)
			return library->getPath(symbolName);
		}
		else{
			HX_STACK_LINE(283)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),285,HX_CSTRING("openfl.Assets"),HX_CSTRING("getPath")));
		}
	}
	else{
		HX_STACK_LINE(289)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),291,HX_CSTRING("openfl.Assets"),HX_CSTRING("getPath")));
	}
	HX_STACK_LINE(297)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::flash::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","openfl/Assets.hx",308);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(310)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(314)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(315)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(316)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(318)
	if (((library != null()))){
		HX_STACK_LINE(318)
		if ((library->exists(symbolName,::openfl::AssetType_obj::SOUND))){
			HX_STACK_LINE(320)
			return library->getSound(symbolName);
		}
		else{
			HX_STACK_LINE(324)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),326,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
		}
	}
	else{
		HX_STACK_LINE(330)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),332,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
	}
	HX_STACK_LINE(338)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","openfl/Assets.hx",349);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(351)
	::flash::utils::ByteArray bytes = ::openfl::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(353)
	if (((bytes == null()))){
		HX_STACK_LINE(353)
		return null();
	}
	else{
		HX_STACK_LINE(357)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(353)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","openfl/Assets.hx",366);
		HX_STACK_LINE(366)
		if ((!(::openfl::Assets_obj::initialized))){
			HX_STACK_LINE(372)
			::openfl::Assets_obj::registerLibrary(HX_CSTRING("default"),::DefaultAssetLibrary_obj::__new());
			HX_STACK_LINE(376)
			::openfl::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

Void Assets_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadBitmapData","openfl/Assets.hx",383);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(385)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(389)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(390)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(391)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(393)
		if (((library != null()))){
			HX_STACK_LINE(393)
			if ((library->exists(symbolName,::openfl::AssetType_obj::IMAGE))){
				HX_STACK_LINE(397)
				library->loadBitmapData(symbolName,handler);
				HX_STACK_LINE(398)
				return null();
			}
			else{
				HX_STACK_LINE(400)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),402,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBitmapData")));
			}
		}
		else{
			HX_STACK_LINE(406)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),408,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBitmapData")));
		}
		HX_STACK_LINE(414)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBitmapData,(void))

Void Assets_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadBytes","openfl/Assets.hx",419);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(421)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(425)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(426)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(427)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(429)
		if (((library != null()))){
			HX_STACK_LINE(429)
			if ((library->exists(symbolName,::openfl::AssetType_obj::BINARY))){
				HX_STACK_LINE(433)
				library->loadBytes(symbolName,handler);
				HX_STACK_LINE(434)
				return null();
			}
			else{
				HX_STACK_LINE(436)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),438,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBytes")));
			}
		}
		else{
			HX_STACK_LINE(442)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),444,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBytes")));
		}
		HX_STACK_LINE(450)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,(void))

Void Assets_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadFont","openfl/Assets.hx",455);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(457)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(461)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(462)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(463)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(465)
		if (((library != null()))){
			HX_STACK_LINE(465)
			if ((library->exists(symbolName,::openfl::AssetType_obj::FONT))){
				HX_STACK_LINE(469)
				library->loadFont(symbolName,handler);
				HX_STACK_LINE(470)
				return null();
			}
			else{
				HX_STACK_LINE(472)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),474,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadFont")));
			}
		}
		else{
			HX_STACK_LINE(478)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),480,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadFont")));
		}
		HX_STACK_LINE(486)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,(void))

Void Assets_obj::loadLibrary( ::String name,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadLibrary","openfl/Assets.hx",491);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(493)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(497)
		::String data = ::openfl::Assets_obj::getText(((HX_CSTRING("libraries/") + name) + HX_CSTRING(".dat")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(499)
		if (((bool((data != null())) && bool((data != HX_CSTRING("")))))){
			HX_STACK_LINE(501)
			::haxe::Unserializer unserializer = ::haxe::Unserializer_obj::__new(data);		HX_STACK_VAR(unserializer,"unserializer");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","openfl/Assets.hx",502);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("resolveEnum") , ::openfl::Assets_obj::resolveEnum_dyn(),false);
						__result->Add(HX_CSTRING("resolveClass") , ::openfl::Assets_obj::resolveClass_dyn(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(502)
			unserializer->setResolver(_Function_2_1::Block());
			HX_STACK_LINE(504)
			::openfl::AssetLibrary library = unserializer->unserialize();		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(505)
			::openfl::Assets_obj::libraries->set(name,library);
			HX_STACK_LINE(506)
			library->load(handler);
		}
		else{
			HX_STACK_LINE(508)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + name) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),510,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadLibrary")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,(void))

Void Assets_obj::loadMovieClip( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadMovieClip","openfl/Assets.hx",519);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(521)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(525)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(526)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(527)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(529)
		if (((library != null()))){
			HX_STACK_LINE(529)
			if ((library->exists(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
				HX_STACK_LINE(533)
				library->loadMovieClip(symbolName,handler);
				HX_STACK_LINE(534)
				return null();
			}
			else{
				HX_STACK_LINE(536)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),538,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMovieClip")));
			}
		}
		else{
			HX_STACK_LINE(542)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),544,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMovieClip")));
		}
		HX_STACK_LINE(550)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,(void))

Void Assets_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadSound","openfl/Assets.hx",555);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(557)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(561)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(562)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(563)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(565)
		if (((library != null()))){
			HX_STACK_LINE(565)
			if ((library->exists(symbolName,::openfl::AssetType_obj::SOUND))){
				HX_STACK_LINE(569)
				library->loadSound(symbolName,handler);
				HX_STACK_LINE(570)
				return null();
			}
			else{
				HX_STACK_LINE(572)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),574,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadSound")));
			}
		}
		else{
			HX_STACK_LINE(578)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),580,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadSound")));
		}
		HX_STACK_LINE(586)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadSound,(void))

Void Assets_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_PUSH("Assets::loadText","openfl/Assets.hx",591);
		HX_STACK_ARG(id,"id");
		HX_STACK_ARG(handler,"handler");
		HX_STACK_LINE(591)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(593)
		::openfl::Assets_obj::initialize();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler1)
		Void run(::flash::utils::ByteArray bytes){
			HX_STACK_PUSH("*::_Function_1_1","openfl/Assets.hx",597);
			HX_STACK_ARG(bytes,"bytes");
			{
				HX_STACK_LINE(597)
				if (((bytes == null()))){
					HX_STACK_LINE(599)
					handler1->__GetItem((int)0)(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(603)
					handler1->__GetItem((int)0)(bytes->readUTFBytes(bytes->length)).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(597)
		Dynamic callback =  Dynamic(new _Function_1_1(handler1));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(611)
		::openfl::Assets_obj::loadBytes(id,callback);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,(void))

Void Assets_obj::registerLibrary( ::String name,::openfl::AssetLibrary library){
{
		HX_STACK_PUSH("Assets::registerLibrary","openfl/Assets.hx",622);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(library,"library");
		HX_STACK_LINE(624)
		if ((::openfl::Assets_obj::libraries->exists(name))){
			HX_STACK_LINE(624)
			::openfl::Assets_obj::unloadLibrary(name);
		}
		HX_STACK_LINE(630)
		::openfl::Assets_obj::libraries->set(name,library);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_PUSH("Assets::resolveClass","openfl/Assets.hx",635);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(635)
	return ::Type_obj::resolveClass(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_PUSH("Assets::resolveEnum","openfl/Assets.hx",642);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(644)
	::Enum value = ::Type_obj::resolveEnum(name);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(656)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_PUSH("Assets::unloadLibrary","openfl/Assets.hx",661);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(663)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(667)
		Dynamic keys = ::openfl::Assets_obj::cache->bitmapData->keys();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(669)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(671)
				::String libraryName = key.substring((int)0,key.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(672)
				::String symbolName = key.substr((key.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(674)
				if (((libraryName == name))){
					HX_STACK_LINE(674)
					::openfl::Assets_obj::cache->bitmapData->remove(key);
				}
			}
;
		}
		HX_STACK_LINE(682)
		::openfl::Assets_obj::libraries->remove(name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return libraries; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { return getLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { return loadLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { return resolveEnum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return loadMovieClip_dyn(); }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { return unloadLibrary_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { return registerLibrary_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::openfl::AssetCache >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("libraries"),
	HX_CSTRING("initialized"),
	HX_CSTRING("exists"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getLibrary"),
	HX_CSTRING("getMovieClip"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("initialize"),
	HX_CSTRING("loadBitmapData"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadLibrary"),
	HX_CSTRING("loadMovieClip"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadText"),
	HX_CSTRING("registerLibrary"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("resolveEnum"),
	HX_CSTRING("unloadLibrary"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cache= ::openfl::AssetCache_obj::__new();
	libraries= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace openfl
