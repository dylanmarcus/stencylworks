#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_FontReader
#include <com/stencyl/io/FontReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
namespace com{
namespace stencyl{
namespace io{

Void FontReader_obj::__construct()
{
HX_STACK_PUSH("FontReader::new","com/stencyl/io/FontReader.hx",10);
{
}
;
	return null();
}

FontReader_obj::~FontReader_obj() { }

Dynamic FontReader_obj::__CreateEmpty() { return  new FontReader_obj; }
hx::ObjectPtr< FontReader_obj > FontReader_obj::__new()
{  hx::ObjectPtr< FontReader_obj > result = new FontReader_obj();
	result->__construct();
	return result;}

Dynamic FontReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontReader_obj > result = new FontReader_obj();
	result->__construct();
	return result;}

hx::Object *FontReader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::io::AbstractReader_obj)) return operator ::com::stencyl::io::AbstractReader_obj *();
	return super::__ToInterface(inType);
}

::com::stencyl::models::Resource FontReader_obj::read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("FontReader::read","com/stencyl/io/FontReader.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(19)
	return ::com::stencyl::models::Font_obj::__new(ID,atlasID,name,false);
}


HX_DEFINE_DYNAMIC_FUNC5(FontReader_obj,read,return )

bool FontReader_obj::accepts( ::String type){
	HX_STACK_PUSH("FontReader::accepts","com/stencyl/io/FontReader.hx",14);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(14)
	return (type == HX_CSTRING("font"));
}


HX_DEFINE_DYNAMIC_FUNC1(FontReader_obj,accepts,return )


FontReader_obj::FontReader_obj()
{
}

void FontReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontReader);
	HX_MARK_END_CLASS();
}

void FontReader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FontReader_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic FontReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FontReader_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(FontReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontReader_obj::__mClass,"__mClass");
};

Class FontReader_obj::__mClass;

void FontReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.FontReader"), hx::TCanCast< FontReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FontReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
