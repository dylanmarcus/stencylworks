#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ColorBackground
#include <com/stencyl/models/background/ColorBackground.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace background{

Void ColorBackground_obj::__construct(int bgColor)
{
HX_STACK_PUSH("ColorBackground::new","com/stencyl/models/background/ColorBackground.hx",13);
{
	HX_STACK_LINE(14)
	super::__construct((int)0,HX_CSTRING("Color Background"),(int)-1);
	HX_STACK_LINE(16)
	this->bgColor = bgColor;
	HX_STACK_LINE(20)
	if (((bgColor == ::com::stencyl::models::background::ColorBackground_obj::WHITE))){
		HX_STACK_LINE(21)
		this->bgColor = (int)16777215;
	}
}
;
	return null();
}

ColorBackground_obj::~ColorBackground_obj() { }

Dynamic ColorBackground_obj::__CreateEmpty() { return  new ColorBackground_obj; }
hx::ObjectPtr< ColorBackground_obj > ColorBackground_obj::__new(int bgColor)
{  hx::ObjectPtr< ColorBackground_obj > result = new ColorBackground_obj();
	result->__construct(bgColor);
	return result;}

Dynamic ColorBackground_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorBackground_obj > result = new ColorBackground_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ColorBackground_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::models::Background_obj)) return operator ::com::stencyl::models::Background_obj *();
	return super::__ToInterface(inType);
}

Void ColorBackground_obj::draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight){
{
		HX_STACK_PUSH("ColorBackground::draw","com/stencyl/models/background/ColorBackground.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(cameraX,"cameraX");
		HX_STACK_ARG(cameraY,"cameraY");
		HX_STACK_ARG(screenWidth,"screenWidth");
		HX_STACK_ARG(screenHeight,"screenHeight");
		HX_STACK_LINE(31)
		if (((this->bgColor != ::com::stencyl::models::background::ColorBackground_obj::TRANSPARENT))){
			HX_STACK_LINE(34)
			g->beginFill(this->bgColor,null());
			HX_STACK_LINE(35)
			g->drawRect((int)0,(int)0,screenWidth,screenHeight);
			HX_STACK_LINE(36)
			g->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ColorBackground_obj,draw,(void))

Void ColorBackground_obj::update( ){
{
		HX_STACK_PUSH("ColorBackground::update","com/stencyl/models/background/ColorBackground.hx",27);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColorBackground_obj,update,(void))

int ColorBackground_obj::WHITE;

int ColorBackground_obj::TRANSPARENT;


ColorBackground_obj::ColorBackground_obj()
{
}

void ColorBackground_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorBackground);
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorBackground_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ColorBackground_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"WHITE") ) { return WHITE; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { return TRANSPARENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorBackground_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"WHITE") ) { WHITE=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { TRANSPARENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorBackground_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bgColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WHITE"),
	HX_CSTRING("TRANSPARENT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("bgColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorBackground_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorBackground_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(ColorBackground_obj::TRANSPARENT,"TRANSPARENT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorBackground_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorBackground_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(ColorBackground_obj::TRANSPARENT,"TRANSPARENT");
};

Class ColorBackground_obj::__mClass;

void ColorBackground_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.background.ColorBackground"), hx::TCanCast< ColorBackground_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorBackground_obj::__boot()
{
	WHITE= (int)-1;
	TRANSPARENT= (int)-2;
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background
