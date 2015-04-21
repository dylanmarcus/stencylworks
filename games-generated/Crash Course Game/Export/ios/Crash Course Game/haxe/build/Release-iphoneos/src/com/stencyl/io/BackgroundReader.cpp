#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_BackgroundReader
#include <com/stencyl/io/BackgroundReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ColorBackground
#include <com/stencyl/models/background/ColorBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_GradientBackground
#include <com/stencyl/models/background/GradientBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ImageBackground
#include <com/stencyl/models/background/ImageBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ScrollingBackground
#include <com/stencyl/models/background/ScrollingBackground.h>
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

Void BackgroundReader_obj::__construct()
{
HX_STACK_PUSH("BackgroundReader::new","com/stencyl/io/BackgroundReader.hx",15);
{
}
;
	return null();
}

BackgroundReader_obj::~BackgroundReader_obj() { }

Dynamic BackgroundReader_obj::__CreateEmpty() { return  new BackgroundReader_obj; }
hx::ObjectPtr< BackgroundReader_obj > BackgroundReader_obj::__new()
{  hx::ObjectPtr< BackgroundReader_obj > result = new BackgroundReader_obj();
	result->__construct();
	return result;}

Dynamic BackgroundReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackgroundReader_obj > result = new BackgroundReader_obj();
	result->__construct();
	return result;}

hx::Object *BackgroundReader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::io::AbstractReader_obj)) return operator ::com::stencyl::io::AbstractReader_obj *();
	return super::__ToInterface(inType);
}

::com::stencyl::models::Resource BackgroundReader_obj::read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("BackgroundReader::read","com/stencyl/io/BackgroundReader.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(27)
	int red;		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(28)
	int green;		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(29)
	int blue;		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(30)
	int alpha;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(32)
	if (((type == HX_CSTRING("color-bg")))){
		HX_STACK_LINE(34)
		red = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("red")));
		HX_STACK_LINE(35)
		green = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("green")));
		HX_STACK_LINE(36)
		blue = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("blue")));
		HX_STACK_LINE(37)
		alpha = (int)255;
		HX_STACK_LINE(39)
		if (((bool((bool((red == (int)-1)) || bool((green == (int)-1)))) || bool((blue == (int)-1))))){
			HX_STACK_LINE(40)
			return ::com::stencyl::models::background::ColorBackground_obj::__new(::com::stencyl::models::background::ColorBackground_obj::TRANSPARENT);
		}
		else{
			HX_STACK_LINE(46)
			int color = (int((int((int((int(alpha) << int((int)24))) | int((int(red) << int((int)16))))) | int((int(green) << int((int)8))))) | int(blue));		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(47)
			return ::com::stencyl::models::background::ColorBackground_obj::__new(color);
		}
	}
	else{
		HX_STACK_LINE(51)
		if (((type == HX_CSTRING("grad-bg")))){
			HX_STACK_LINE(53)
			red = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("r1")));
			HX_STACK_LINE(54)
			green = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("g1")));
			HX_STACK_LINE(55)
			blue = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("b1")));
			HX_STACK_LINE(56)
			alpha = (int)255;
			HX_STACK_LINE(58)
			int color1 = (int((int((int((int(alpha) << int((int)24))) | int((int(red) << int((int)16))))) | int((int(green) << int((int)8))))) | int(blue));		HX_STACK_VAR(color1,"color1");
			HX_STACK_LINE(60)
			red = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("r2")));
			HX_STACK_LINE(61)
			green = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("g2")));
			HX_STACK_LINE(62)
			blue = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("b2")));
			HX_STACK_LINE(64)
			int color2 = (int((int((int((int(alpha) << int((int)24))) | int((int(red) << int((int)16))))) | int((int(green) << int((int)8))))) | int(blue));		HX_STACK_VAR(color2,"color2");
			HX_STACK_LINE(66)
			return ::com::stencyl::models::background::GradientBackground_obj::__new(color1,color2);
		}
	}
	HX_STACK_LINE(69)
	Float scrollX = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("dx")));		HX_STACK_VAR(scrollX,"scrollX");
	HX_STACK_LINE(70)
	Float scrollY = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("dy")));		HX_STACK_VAR(scrollY,"scrollY");
	HX_STACK_LINE(71)
	Float parallaxX = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("xpf")));		HX_STACK_VAR(parallaxX,"parallaxX");
	HX_STACK_LINE(72)
	Float parallaxY = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("ypf")));		HX_STACK_VAR(parallaxY,"parallaxY");
	HX_STACK_LINE(73)
	int numFrames = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("numframes")));		HX_STACK_VAR(numFrames,"numFrames");
	HX_STACK_LINE(74)
	Array< int > durations = Array_obj< int >::__new();		HX_STACK_VAR(durations,"durations");
	HX_STACK_LINE(75)
	Dynamic frameData = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(frameData,"frameData");
	HX_STACK_LINE(76)
	int counter = (int)0;		HX_STACK_VAR(counter,"counter");
	HX_STACK_LINE(78)
	if (((numFrames > (int)0))){
		HX_STACK_LINE(80)
		::String s = xml->att->resolve(HX_CSTRING("durations"));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(81)
		Array< ::String > frames = s.split(HX_CSTRING(","));		HX_STACK_VAR(frames,"frames");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while(((_g < frames->length))){
				HX_STACK_LINE(83)
				::String f = frames->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(83)
				++(_g);
				HX_STACK_LINE(85)
				durations[counter] = ::Std_obj::parseInt(f);
				HX_STACK_LINE(86)
				(counter)++;
			}
		}
	}
	HX_STACK_LINE(90)
	bool repeats = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("repeats")));		HX_STACK_VAR(repeats,"repeats");
	HX_STACK_LINE(92)
	if (((bool((scrollX != (int)0)) || bool((scrollY != (int)0))))){
		HX_STACK_LINE(93)
		return ::com::stencyl::models::background::ScrollingBackground_obj::__new(ID,atlasID,name,durations,parallaxX,parallaxY,repeats,scrollX,scrollY);
	}
	else{
		HX_STACK_LINE(98)
		return ::com::stencyl::models::background::ImageBackground_obj::__new(ID,atlasID,name,durations,parallaxX,parallaxY,repeats);
	}
	HX_STACK_LINE(92)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BackgroundReader_obj,read,return )

bool BackgroundReader_obj::accepts( ::String type){
	HX_STACK_PUSH("BackgroundReader::accepts","com/stencyl/io/BackgroundReader.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(19)
	return (type == HX_CSTRING("background"));
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundReader_obj,accepts,return )


BackgroundReader_obj::BackgroundReader_obj()
{
}

void BackgroundReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundReader);
	HX_MARK_END_CLASS();
}

void BackgroundReader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BackgroundReader_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BackgroundReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundReader_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(BackgroundReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackgroundReader_obj::__mClass,"__mClass");
};

Class BackgroundReader_obj::__mClass;

void BackgroundReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.BackgroundReader"), hx::TCanCast< BackgroundReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackgroundReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
