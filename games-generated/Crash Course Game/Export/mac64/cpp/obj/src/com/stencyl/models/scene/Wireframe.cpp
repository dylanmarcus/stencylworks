#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Wireframe
#include <com/stencyl/models/scene/Wireframe.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void Wireframe_obj::__construct(Float x,Float y,Float width,Float height,Dynamic shape,::com::stencyl::models::collision::Mask shape2)
{
HX_STACK_PUSH("Wireframe::new","com/stencyl/models/scene/Wireframe.hx",18);
{
	HX_STACK_LINE(19)
	this->x = x;
	HX_STACK_LINE(20)
	this->y = y;
	HX_STACK_LINE(21)
	this->width = width;
	HX_STACK_LINE(22)
	this->height = height;
	HX_STACK_LINE(23)
	this->shape = shape;
	HX_STACK_LINE(24)
	this->shape2 = shape2;
}
;
	return null();
}

Wireframe_obj::~Wireframe_obj() { }

Dynamic Wireframe_obj::__CreateEmpty() { return  new Wireframe_obj; }
hx::ObjectPtr< Wireframe_obj > Wireframe_obj::__new(Float x,Float y,Float width,Float height,Dynamic shape,::com::stencyl::models::collision::Mask shape2)
{  hx::ObjectPtr< Wireframe_obj > result = new Wireframe_obj();
	result->__construct(x,y,width,height,shape,shape2);
	return result;}

Dynamic Wireframe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Wireframe_obj > result = new Wireframe_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}


Wireframe_obj::Wireframe_obj()
{
}

void Wireframe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Wireframe);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(shape2,"shape2");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Wireframe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(shape2,"shape2");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Wireframe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"shape2") ) { return shape2; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Wireframe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape2") ) { shape2=inValue.Cast< ::com::stencyl::models::collision::Mask >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Wireframe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("shape2"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("shape2"),
	HX_CSTRING("shape"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Wireframe_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wireframe_obj::__mClass,"__mClass");
};

Class Wireframe_obj::__mClass;

void Wireframe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.Wireframe"), hx::TCanCast< Wireframe_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Wireframe_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
