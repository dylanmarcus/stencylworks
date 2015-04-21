#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SoundReader
#include <com/stencyl/io/SoundReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
namespace com{
namespace stencyl{
namespace io{

Void SoundReader_obj::__construct()
{
HX_STACK_PUSH("SoundReader::new","com/stencyl/io/SoundReader.hx",12);
{
}
;
	return null();
}

SoundReader_obj::~SoundReader_obj() { }

Dynamic SoundReader_obj::__CreateEmpty() { return  new SoundReader_obj; }
hx::ObjectPtr< SoundReader_obj > SoundReader_obj::__new()
{  hx::ObjectPtr< SoundReader_obj > result = new SoundReader_obj();
	result->__construct();
	return result;}

Dynamic SoundReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundReader_obj > result = new SoundReader_obj();
	result->__construct();
	return result;}

hx::Object *SoundReader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::io::AbstractReader_obj)) return operator ::com::stencyl::io::AbstractReader_obj *();
	return super::__ToInterface(inType);
}

::com::stencyl::models::Resource SoundReader_obj::read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("SoundReader::read","com/stencyl/io/SoundReader.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(24)
	bool streaming = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("stream")));		HX_STACK_VAR(streaming,"streaming");
	HX_STACK_LINE(25)
	bool looping = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("loop")));		HX_STACK_VAR(looping,"looping");
	HX_STACK_LINE(26)
	Float panning = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("pan")));		HX_STACK_VAR(panning,"panning");
	HX_STACK_LINE(27)
	Float volume = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("volume")));		HX_STACK_VAR(volume,"volume");
	HX_STACK_LINE(28)
	::String ext = xml->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(ext,"ext");
	HX_STACK_LINE(30)
	return ::com::stencyl::models::Sound_obj::__new(ID,name,streaming,looping,panning,volume,ext);
}


HX_DEFINE_DYNAMIC_FUNC5(SoundReader_obj,read,return )

bool SoundReader_obj::accepts( ::String type){
	HX_STACK_PUSH("SoundReader::accepts","com/stencyl/io/SoundReader.hx",16);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(16)
	return (bool((type == HX_CSTRING("sound"))) || bool((type == HX_CSTRING("music"))));
}


HX_DEFINE_DYNAMIC_FUNC1(SoundReader_obj,accepts,return )


SoundReader_obj::SoundReader_obj()
{
}

void SoundReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundReader);
	HX_MARK_END_CLASS();
}

void SoundReader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SoundReader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"accepts") ) { return accepts_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundReader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("read"),
	HX_CSTRING("accepts"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundReader_obj::__mClass,"__mClass");
};

Class SoundReader_obj::__mClass;

void SoundReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.SoundReader"), hx::TCanCast< SoundReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SoundReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
