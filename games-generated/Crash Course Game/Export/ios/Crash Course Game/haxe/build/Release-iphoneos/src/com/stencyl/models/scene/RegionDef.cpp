#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_RegionDef
#include <com/stencyl/models/scene/RegionDef.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void RegionDef_obj::__construct(Array< ::Dynamic > shapes,int ID,::String name,Float x,Float y,hx::Null< int >  __o_shapeID,::flash::geom::Rectangle simpleBounds)
{
HX_STACK_PUSH("RegionDef::new","com/stencyl/models/scene/RegionDef.hx",19);
int shapeID = __o_shapeID.Default(0);
{
	HX_STACK_LINE(20)
	this->x = x;
	HX_STACK_LINE(21)
	this->y = y;
	HX_STACK_LINE(23)
	this->shapes = shapes;
	HX_STACK_LINE(24)
	this->shape = this->shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >();
	HX_STACK_LINE(25)
	this->ID = ID;
	HX_STACK_LINE(26)
	this->name = name;
	HX_STACK_LINE(27)
	this->shapeID = shapeID;
	HX_STACK_LINE(28)
	this->simpleBounds = simpleBounds;
}
;
	return null();
}

RegionDef_obj::~RegionDef_obj() { }

Dynamic RegionDef_obj::__CreateEmpty() { return  new RegionDef_obj; }
hx::ObjectPtr< RegionDef_obj > RegionDef_obj::__new(Array< ::Dynamic > shapes,int ID,::String name,Float x,Float y,hx::Null< int >  __o_shapeID,::flash::geom::Rectangle simpleBounds)
{  hx::ObjectPtr< RegionDef_obj > result = new RegionDef_obj();
	result->__construct(shapes,ID,name,x,y,__o_shapeID,simpleBounds);
	return result;}

Dynamic RegionDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegionDef_obj > result = new RegionDef_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}


RegionDef_obj::RegionDef_obj()
{
}

void RegionDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegionDef);
	HX_MARK_MEMBER_NAME(simpleBounds,"simpleBounds");
	HX_MARK_MEMBER_NAME(shapeID,"shapeID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void RegionDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(simpleBounds,"simpleBounds");
	HX_VISIT_MEMBER_NAME(shapeID,"shapeID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic RegionDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shapeID") ) { return shapeID; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleBounds") ) { return simpleBounds; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegionDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::box2D::collision::shapes::B2Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shapeID") ) { shapeID=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleBounds") ) { simpleBounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegionDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("simpleBounds"));
	outFields->push(HX_CSTRING("shapeID"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("simpleBounds"),
	HX_CSTRING("shapeID"),
	HX_CSTRING("name"),
	HX_CSTRING("ID"),
	HX_CSTRING("shapes"),
	HX_CSTRING("shape"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegionDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegionDef_obj::__mClass,"__mClass");
};

Class RegionDef_obj::__mClass;

void RegionDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.RegionDef"), hx::TCanCast< RegionDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RegionDef_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
