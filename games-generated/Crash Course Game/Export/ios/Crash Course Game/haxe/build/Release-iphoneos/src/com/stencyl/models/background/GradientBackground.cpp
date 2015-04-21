#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_GradientBackground
#include <com/stencyl/models/background/GradientBackground.h>
#endif
#ifndef INCLUDED_flash_display_GradientType
#include <flash/display/GradientType.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_InterpolationMethod
#include <flash/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_flash_display_SpreadMethod
#include <flash/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace background{

Void GradientBackground_obj::__construct(int topColor,int bottomColor)
{
HX_STACK_PUSH("GradientBackground::new","com/stencyl/models/background/GradientBackground.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct((int)0,HX_CSTRING("Gradient Background"),(int)-1);
	HX_STACK_LINE(17)
	this->topColor = topColor;
	HX_STACK_LINE(18)
	this->bottomColor = bottomColor;
}
;
	return null();
}

GradientBackground_obj::~GradientBackground_obj() { }

Dynamic GradientBackground_obj::__CreateEmpty() { return  new GradientBackground_obj; }
hx::ObjectPtr< GradientBackground_obj > GradientBackground_obj::__new(int topColor,int bottomColor)
{  hx::ObjectPtr< GradientBackground_obj > result = new GradientBackground_obj();
	result->__construct(topColor,bottomColor);
	return result;}

Dynamic GradientBackground_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GradientBackground_obj > result = new GradientBackground_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *GradientBackground_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::models::Background_obj)) return operator ::com::stencyl::models::Background_obj *();
	return super::__ToInterface(inType);
}

Void GradientBackground_obj::draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight){
{
		HX_STACK_PUSH("GradientBackground::draw","com/stencyl/models/background/GradientBackground.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(cameraX,"cameraX");
		HX_STACK_ARG(cameraY,"cameraY");
		HX_STACK_ARG(screenWidth,"screenWidth");
		HX_STACK_ARG(screenHeight,"screenHeight");
		HX_STACK_LINE(27)
		Array< int > colors = Array_obj< int >::__new().Add(this->topColor).Add(this->bottomColor);		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(28)
		Array< int > alphas = Array_obj< int >::__new().Add((int)100).Add((int)100);		HX_STACK_VAR(alphas,"alphas");
		HX_STACK_LINE(29)
		Array< int > ratios = Array_obj< int >::__new().Add((int)0).Add((int)255);		HX_STACK_VAR(ratios,"ratios");
		HX_STACK_LINE(30)
		::flash::geom::Matrix matr = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matr,"matr");
		HX_STACK_LINE(31)
		matr->createGradientBox(screenWidth,screenHeight,(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
		HX_STACK_LINE(32)
		::flash::display::SpreadMethod sprMethod = ::flash::display::SpreadMethod_obj::PAD;		HX_STACK_VAR(sprMethod,"sprMethod");
		HX_STACK_LINE(34)
		g->beginGradientFill(::flash::display::GradientType_obj::LINEAR,colors,alphas,ratios,matr,sprMethod,null(),null());
		HX_STACK_LINE(35)
		g->drawRect((int)0,(int)0,screenWidth,screenHeight);
		HX_STACK_LINE(36)
		g->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GradientBackground_obj,draw,(void))

Void GradientBackground_obj::update( ){
{
		HX_STACK_PUSH("GradientBackground::update","com/stencyl/models/background/GradientBackground.hx",22);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GradientBackground_obj,update,(void))


GradientBackground_obj::GradientBackground_obj()
{
}

void GradientBackground_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GradientBackground);
	HX_MARK_MEMBER_NAME(bottomColor,"bottomColor");
	HX_MARK_MEMBER_NAME(topColor,"topColor");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GradientBackground_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottomColor,"bottomColor");
	HX_VISIT_MEMBER_NAME(topColor,"topColor");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GradientBackground_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"topColor") ) { return topColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomColor") ) { return bottomColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GradientBackground_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"topColor") ) { topColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomColor") ) { bottomColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GradientBackground_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottomColor"));
	outFields->push(HX_CSTRING("topColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("bottomColor"),
	HX_CSTRING("topColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GradientBackground_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GradientBackground_obj::__mClass,"__mClass");
};

Class GradientBackground_obj::__mClass;

void GradientBackground_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.background.GradientBackground"), hx::TCanCast< GradientBackground_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GradientBackground_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background
