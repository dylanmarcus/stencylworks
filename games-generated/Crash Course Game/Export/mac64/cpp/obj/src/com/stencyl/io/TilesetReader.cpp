#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_TilesetReader
#include <com/stencyl/io/TilesetReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tile
#include <com/stencyl/models/scene/Tile.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tileset
#include <com/stencyl/models/scene/Tileset.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace io{

Void TilesetReader_obj::__construct()
{
HX_STACK_PUSH("TilesetReader::new","com/stencyl/io/TilesetReader.hx",13);
{
}
;
	return null();
}

TilesetReader_obj::~TilesetReader_obj() { }

Dynamic TilesetReader_obj::__CreateEmpty() { return  new TilesetReader_obj; }
hx::ObjectPtr< TilesetReader_obj > TilesetReader_obj::__new()
{  hx::ObjectPtr< TilesetReader_obj > result = new TilesetReader_obj();
	result->__construct();
	return result;}

Dynamic TilesetReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TilesetReader_obj > result = new TilesetReader_obj();
	result->__construct();
	return result;}

hx::Object *TilesetReader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::io::AbstractReader_obj)) return operator ::com::stencyl::io::AbstractReader_obj *();
	return super::__ToInterface(inType);
}

::com::stencyl::models::scene::Tile TilesetReader_obj::readTile( ::haxe::xml::Fast xml,::com::stencyl::models::scene::Tileset parent){
	HX_STACK_PUSH("TilesetReader::readTile","com/stencyl/io/TilesetReader.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_ARG(parent,"parent");
	HX_STACK_LINE(45)
	int tileID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(tileID,"tileID");
	HX_STACK_LINE(46)
	int collisionID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("collision")));		HX_STACK_VAR(collisionID,"collisionID");
	HX_STACK_LINE(49)
	int frameID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("frames")));		HX_STACK_VAR(frameID,"frameID");
	HX_STACK_LINE(52)
	Dynamic imgData = null();		HX_STACK_VAR(imgData,"imgData");
	HX_STACK_LINE(53)
	Array< int > durations = Array_obj< int >::__new();		HX_STACK_VAR(durations,"durations");
	HX_STACK_LINE(54)
	int counter = (int)0;		HX_STACK_VAR(counter,"counter");
	HX_STACK_LINE(56)
	::String s = xml->att->resolve(HX_CSTRING("durations"));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(57)
	Array< ::String > frames = s.split(HX_CSTRING(","));		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		while(((_g < frames->length))){
			HX_STACK_LINE(59)
			::String f = frames->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(59)
			++(_g);
			HX_STACK_LINE(62)
			durations[counter] = ::Std_obj::parseInt(f);
			HX_STACK_LINE(64)
			durations[counter] = ::Math_obj::floor((Float(durations->__get(counter)) / Float((int)10)));
			HX_STACK_LINE(65)
			hx::MultEq(durations[counter],(int)10);
			HX_STACK_LINE(67)
			(counter)++;
		}
	}
	HX_STACK_LINE(70)
	return ::com::stencyl::models::scene::Tile_obj::__new(tileID,collisionID,frameID,durations,parent);
}


HX_DEFINE_DYNAMIC_FUNC2(TilesetReader_obj,readTile,return )

::com::stencyl::models::Resource TilesetReader_obj::read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("TilesetReader::read","com/stencyl/io/TilesetReader.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(25)
	int framesAcross = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("across")));		HX_STACK_VAR(framesAcross,"framesAcross");
	HX_STACK_LINE(26)
	int framesDown = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("down")));		HX_STACK_VAR(framesDown,"framesDown");
	HX_STACK_LINE(27)
	int tileWidth = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("tw")));		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(28)
	int tileHeight = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("th")));		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(29)
	Array< ::Dynamic > tiles = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tiles,"tiles");
	HX_STACK_LINE(31)
	::com::stencyl::models::scene::Tileset tset = ::com::stencyl::models::scene::Tileset_obj::__new(ID,atlasID,name,framesAcross,framesDown,tileWidth,tileHeight,tiles);		HX_STACK_VAR(tset,"tset");
	HX_STACK_LINE(33)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		tiles[::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")))] = this->readTile(e,tset);
	}
	HX_STACK_LINE(38)
	tset->setupTilesheet();
	HX_STACK_LINE(40)
	return tset;
}


HX_DEFINE_DYNAMIC_FUNC5(TilesetReader_obj,read,return )

bool TilesetReader_obj::accepts( ::String type){
	HX_STACK_PUSH("TilesetReader::accepts","com/stencyl/io/TilesetReader.hx",17);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(17)
	return (type == HX_CSTRING("tileset"));
}


HX_DEFINE_DYNAMIC_FUNC1(TilesetReader_obj,accepts,return )


TilesetReader_obj::TilesetReader_obj()
{
}

void TilesetReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TilesetReader);
	HX_MARK_END_CLASS();
}

void TilesetReader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic TilesetReader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"accepts") ) { return accepts_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readTile") ) { return readTile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TilesetReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TilesetReader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readTile"),
	HX_CSTRING("read"),
	HX_CSTRING("accepts"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TilesetReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TilesetReader_obj::__mClass,"__mClass");
};

Class TilesetReader_obj::__mClass;

void TilesetReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.TilesetReader"), hx::TCanCast< TilesetReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TilesetReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
