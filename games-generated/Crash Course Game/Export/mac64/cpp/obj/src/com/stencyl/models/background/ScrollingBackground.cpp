#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ImageBackground
#include <com/stencyl/models/background/ImageBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ScrollingBackground
#include <com/stencyl/models/background/ScrollingBackground.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace background{

Void ScrollingBackground_obj::__construct(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats,Float xVelocity,Float yVelocity)
{
HX_STACK_PUSH("ScrollingBackground::new","com/stencyl/models/background/ScrollingBackground.hx",23);
{
	HX_STACK_LINE(24)
	super::__construct(ID,atlasID,name,durations,parallaxX,parallaxY,repeats);
	HX_STACK_LINE(26)
	this->xVelocity = xVelocity;
	HX_STACK_LINE(27)
	this->yVelocity = yVelocity;
}
;
	return null();
}

ScrollingBackground_obj::~ScrollingBackground_obj() { }

Dynamic ScrollingBackground_obj::__CreateEmpty() { return  new ScrollingBackground_obj; }
hx::ObjectPtr< ScrollingBackground_obj > ScrollingBackground_obj::__new(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats,Float xVelocity,Float yVelocity)
{  hx::ObjectPtr< ScrollingBackground_obj > result = new ScrollingBackground_obj();
	result->__construct(ID,atlasID,name,durations,parallaxX,parallaxY,repeats,xVelocity,yVelocity);
	return result;}

Dynamic ScrollingBackground_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollingBackground_obj > result = new ScrollingBackground_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

hx::Object *ScrollingBackground_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::models::Background_obj)) return operator ::com::stencyl::models::Background_obj *();
	return super::__ToInterface(inType);
}

Void ScrollingBackground_obj::draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight){
{
		HX_STACK_PUSH("ScrollingBackground::draw","com/stencyl/models/background/ScrollingBackground.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(cameraX,"cameraX");
		HX_STACK_ARG(cameraY,"cameraY");
		HX_STACK_ARG(screenWidth,"screenWidth");
		HX_STACK_ARG(screenHeight,"screenHeight");
	}
return null();
}


Void ScrollingBackground_obj::update( ){
{
		HX_STACK_PUSH("ScrollingBackground::update","com/stencyl/models/background/ScrollingBackground.hx",31);
		HX_STACK_THIS(this);
	}
return null();
}



ScrollingBackground_obj::ScrollingBackground_obj()
{
}

void ScrollingBackground_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollingBackground);
	HX_MARK_MEMBER_NAME(yVelocity,"yVelocity");
	HX_MARK_MEMBER_NAME(xVelocity,"xVelocity");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollingBackground_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(yVelocity,"yVelocity");
	HX_VISIT_MEMBER_NAME(xVelocity,"xVelocity");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ScrollingBackground_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"yVelocity") ) { return yVelocity; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { return xVelocity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScrollingBackground_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"yVelocity") ) { yVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { xVelocity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollingBackground_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("yVelocity"));
	outFields->push(HX_CSTRING("xVelocity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("yVelocity"),
	HX_CSTRING("xVelocity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollingBackground_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollingBackground_obj::__mClass,"__mClass");
};

Class ScrollingBackground_obj::__mClass;

void ScrollingBackground_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.background.ScrollingBackground"), hx::TCanCast< ScrollingBackground_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ScrollingBackground_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background
