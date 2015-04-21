#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2EdgeShape
#include <box2D/collision/shapes/B2EdgeShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#include <box2D/dynamics/B2FixtureDef.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SpriteReader
#include <com/stencyl/io/SpriteReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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

Void SpriteReader_obj::__construct()
{
HX_STACK_PUSH("SpriteReader::new","com/stencyl/io/SpriteReader.hx",23);
{
}
;
	return null();
}

SpriteReader_obj::~SpriteReader_obj() { }

Dynamic SpriteReader_obj::__CreateEmpty() { return  new SpriteReader_obj; }
hx::ObjectPtr< SpriteReader_obj > SpriteReader_obj::__new()
{  hx::ObjectPtr< SpriteReader_obj > result = new SpriteReader_obj();
	result->__construct();
	return result;}

Dynamic SpriteReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteReader_obj > result = new SpriteReader_obj();
	result->__construct();
	return result;}

hx::Object *SpriteReader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::io::AbstractReader_obj)) return operator ::com::stencyl::io::AbstractReader_obj *();
	return super::__ToInterface(inType);
}

::haxe::ds::IntMap SpriteReader_obj::readShapes( ::haxe::xml::Fast xml,Float imgWidth,Float imgHeight){
	HX_STACK_PUSH("SpriteReader::readShapes","com/stencyl/io/SpriteReader.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_ARG(imgWidth,"imgWidth");
	HX_STACK_ARG(imgHeight,"imgHeight");
	HX_STACK_LINE(164)
	::haxe::ds::IntMap shapes = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(shapes,"shapes");
	HX_STACK_LINE(169)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(171)
			Dynamic shapeID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(shapeID,"shapeID");
			HX_STACK_LINE(172)
			Dynamic groupID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("gid")));		HX_STACK_VAR(groupID,"groupID");
			HX_STACK_LINE(173)
			bool sensor = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("sensor")));		HX_STACK_VAR(sensor,"sensor");
			HX_STACK_LINE(175)
			::String shapeType = e->get_name();		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(176)
			Array< ::String > shapeParams = e->att->resolve(HX_CSTRING("data")).split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(177)
			::box2D::collision::shapes::B2Shape shape = ::com::stencyl::io::SpriteReader_obj::createShape(shapeType,shapeParams,(int)0,(int)0,imgWidth,imgHeight);		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(179)
			::box2D::dynamics::B2FixtureDef fixtureDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixtureDef,"fixtureDef");
			HX_STACK_LINE(180)
			fixtureDef->shape = shape;
			HX_STACK_LINE(182)
			fixtureDef->density = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("density")));
			HX_STACK_LINE(185)
			fixtureDef->friction = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("fric")));
			HX_STACK_LINE(186)
			fixtureDef->restitution = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("rest")));
			HX_STACK_LINE(188)
			fixtureDef->isSensor = sensor;
			HX_STACK_LINE(189)
			fixtureDef->groupID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("gid")));
			HX_STACK_LINE(191)
			shapes->set(shapeID,fixtureDef);
		}
;
	}
	HX_STACK_LINE(194)
	return shapes;
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteReader_obj,readShapes,return )

::haxe::ds::IntMap SpriteReader_obj::readSimpleShapes( ::haxe::xml::Fast xml,Float imgWidth,Float imgHeight){
	HX_STACK_PUSH("SpriteReader::readSimpleShapes","com/stencyl/io/SpriteReader.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_ARG(imgWidth,"imgWidth");
	HX_STACK_ARG(imgHeight,"imgHeight");
	HX_STACK_LINE(117)
	::haxe::ds::IntMap shapes = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(shapes,"shapes");
	HX_STACK_LINE(119)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(121)
			Dynamic shapeID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(shapeID,"shapeID");
			HX_STACK_LINE(122)
			Dynamic groupID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("gid")));		HX_STACK_VAR(groupID,"groupID");
			HX_STACK_LINE(123)
			bool sensor = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("sensor")));		HX_STACK_VAR(sensor,"sensor");
			HX_STACK_LINE(125)
			::String shapeType = e->get_name();		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(126)
			Array< ::String > shapeParams = e->att->resolve(HX_CSTRING("data")).split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(128)
			int numVertices = ::Std_obj::parseInt(shapeParams->__get((int)0));		HX_STACK_VAR(numVertices,"numVertices");
			HX_STACK_LINE(130)
			if (((bool((shapeType == HX_CSTRING("poly"))) && bool((numVertices == (int)4))))){
				HX_STACK_LINE(132)
				int vIndex = (int)0;		HX_STACK_VAR(vIndex,"vIndex");
				HX_STACK_LINE(133)
				int i = (int)1;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(134)
				int x0 = (int)10000000;		HX_STACK_VAR(x0,"x0");
				HX_STACK_LINE(135)
				int y0 = (int)10000000;		HX_STACK_VAR(y0,"y0");
				HX_STACK_LINE(136)
				int x1 = (int)0;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(137)
				int y1 = (int)0;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(138)
				int x = ::Std_obj::parseInt(shapeParams->__get((int)1));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(139)
				int y = ::Std_obj::parseInt(shapeParams->__get((int)2));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(141)
				while(((vIndex < numVertices))){
					HX_STACK_LINE(143)
					x0 = ::Std_obj::_int(::Math_obj::min(x0,::Std_obj::parseInt(shapeParams->__get(i))));
					HX_STACK_LINE(144)
					y0 = ::Std_obj::_int(::Math_obj::min(y0,::Std_obj::parseInt(shapeParams->__get((i + (int)1)))));
					HX_STACK_LINE(145)
					x1 = ::Std_obj::_int(::Math_obj::max(x1,::Std_obj::parseInt(shapeParams->__get(i))));
					HX_STACK_LINE(146)
					y1 = ::Std_obj::_int(::Math_obj::max(y1,::Std_obj::parseInt(shapeParams->__get((i + (int)1)))));
					HX_STACK_LINE(148)
					(vIndex)++;
					HX_STACK_LINE(149)
					hx::AddEq(i,(int)2);
				}
				HX_STACK_LINE(152)
				int w = (x1 - x0);		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(153)
				int h = (y1 - y0);		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(155)
				shapes->set(shapeID,::com::stencyl::models::collision::Hitbox_obj::__new(w,h,x,y,!(sensor)));
			}
		}
;
	}
	HX_STACK_LINE(159)
	return shapes;
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteReader_obj,readSimpleShapes,return )

::com::stencyl::models::actor::Animation SpriteReader_obj::readAnimation( ::haxe::xml::Fast xml,::com::stencyl::models::actor::Sprite parent){
	HX_STACK_PUSH("SpriteReader::readAnimation","com/stencyl/io/SpriteReader.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_ARG(parent,"parent");
	HX_STACK_LINE(61)
	int animID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(animID,"animID");
	HX_STACK_LINE(62)
	::String animName = xml->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(animName,"animName");
	HX_STACK_LINE(64)
	int imgWidth = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("width")));		HX_STACK_VAR(imgWidth,"imgWidth");
	HX_STACK_LINE(65)
	int imgHeight = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("height")));		HX_STACK_VAR(imgHeight,"imgHeight");
	HX_STACK_LINE(67)
	Float originX = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("originx")));		HX_STACK_VAR(originX,"originX");
	HX_STACK_LINE(68)
	Float originY = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("originy")));		HX_STACK_VAR(originY,"originY");
	HX_STACK_LINE(70)
	int framesAcross = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("across")));		HX_STACK_VAR(framesAcross,"framesAcross");
	HX_STACK_LINE(71)
	int framesDown = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("down")));		HX_STACK_VAR(framesDown,"framesDown");
	HX_STACK_LINE(73)
	int parentID = parent->ID;		HX_STACK_VAR(parentID,"parentID");
	HX_STACK_LINE(74)
	::haxe::ds::IntMap simpleShapes = this->readSimpleShapes(xml,(Float(imgWidth) / Float(framesAcross)),(Float(imgHeight) / Float(framesDown)));		HX_STACK_VAR(simpleShapes,"simpleShapes");
	HX_STACK_LINE(75)
	::haxe::ds::IntMap physicsShapes = this->readShapes(xml,(Float(imgWidth) / Float(framesAcross)),(Float(imgHeight) / Float(framesDown)));		HX_STACK_VAR(physicsShapes,"physicsShapes");
	HX_STACK_LINE(76)
	bool looping = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("loop")));		HX_STACK_VAR(looping,"looping");
	HX_STACK_LINE(77)
	bool sync = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("sync")));		HX_STACK_VAR(sync,"sync");
	HX_STACK_LINE(78)
	Array< int > durations = Array_obj< int >::__new();		HX_STACK_VAR(durations,"durations");
	HX_STACK_LINE(79)
	int counter = (int)0;		HX_STACK_VAR(counter,"counter");
	HX_STACK_LINE(81)
	::String s = xml->att->resolve(HX_CSTRING("durations"));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(82)
	Array< ::String > frames = s.split(HX_CSTRING(","));		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		while(((_g < frames->length))){
			HX_STACK_LINE(84)
			::String f = frames->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(84)
			++(_g);
			HX_STACK_LINE(87)
			durations[counter] = ::Std_obj::parseInt(f);
			HX_STACK_LINE(89)
			durations[counter] = ::Math_obj::floor((Float(durations->__get(counter)) / Float((int)10)));
			HX_STACK_LINE(90)
			hx::MultEq(durations[counter],(int)10);
			HX_STACK_LINE(92)
			(counter)++;
		}
	}
	HX_STACK_LINE(95)
	return ::com::stencyl::models::actor::Animation_obj::__new(animID,animName,parentID,simpleShapes,physicsShapes,looping,sync,imgWidth,imgHeight,originX,originY,durations,framesAcross,framesDown,parent->atlasID);
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteReader_obj,readAnimation,return )

::com::stencyl::models::Resource SpriteReader_obj::read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("SpriteReader::read","com/stencyl/io/SpriteReader.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(35)
	int width = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("width")));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(36)
	int height = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("height")));		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(37)
	int defaultAnimation = (int)0;		HX_STACK_VAR(defaultAnimation,"defaultAnimation");
	HX_STACK_LINE(39)
	try{
		HX_STACK_LINE(40)
		defaultAnimation = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("defaultAnimation")));
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(48)
	Array< ::Dynamic > animations = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animations,"animations");
	HX_STACK_LINE(49)
	::com::stencyl::models::actor::Sprite sprite = ::com::stencyl::models::actor::Sprite_obj::__new(ID,atlasID,name,width,height,defaultAnimation);		HX_STACK_VAR(sprite,"sprite");
	HX_STACK_LINE(51)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		sprite->animations->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),this->readAnimation(e,sprite));
	}
	HX_STACK_LINE(56)
	return sprite;
}


HX_DEFINE_DYNAMIC_FUNC5(SpriteReader_obj,read,return )

bool SpriteReader_obj::accepts( ::String type){
	HX_STACK_PUSH("SpriteReader::accepts","com/stencyl/io/SpriteReader.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(27)
	return (type == HX_CSTRING("sprite"));
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteReader_obj,accepts,return )

Dynamic SpriteReader_obj::createShape( ::String type,Array< ::String > params,hx::Null< Float >  __o_xOffset,hx::Null< Float >  __o_yOffset,hx::Null< Float >  __o_imgWidth,hx::Null< Float >  __o_imgHeight){
Float xOffset = __o_xOffset.Default(0);
Float yOffset = __o_yOffset.Default(0);
Float imgWidth = __o_imgWidth.Default(-1);
Float imgHeight = __o_imgHeight.Default(-1);
	HX_STACK_PUSH("SpriteReader::createShape","com/stencyl/io/SpriteReader.hx",198);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(params,"params");
	HX_STACK_ARG(xOffset,"xOffset");
	HX_STACK_ARG(yOffset,"yOffset");
	HX_STACK_ARG(imgWidth,"imgWidth");
	HX_STACK_ARG(imgHeight,"imgHeight");
{
		HX_STACK_LINE(199)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(200)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(201)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(202)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(204)
		if (((type == HX_CSTRING("circle")))){
			HX_STACK_LINE(206)
			Float radius = ::Std_obj::parseFloat(params->__get((int)0));		HX_STACK_VAR(radius,"radius");
			HX_STACK_LINE(207)
			x = ::Std_obj::parseFloat(params->__get((int)1));
			HX_STACK_LINE(208)
			y = ::Std_obj::parseFloat(params->__get((int)2));
			HX_STACK_LINE(210)
			Float diameter = (radius * (int)2);		HX_STACK_VAR(diameter,"diameter");
			HX_STACK_LINE(212)
			::box2D::collision::shapes::B2CircleShape c = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(213)
			c->m_radius = ::com::stencyl::Engine_obj::toPhysicalUnits(radius);
			HX_STACK_LINE(214)
			c->m_p->x = ::com::stencyl::Engine_obj::toPhysicalUnits((x - (Float(((imgWidth - diameter))) / Float((int)2))));
			HX_STACK_LINE(215)
			c->m_p->y = ::com::stencyl::Engine_obj::toPhysicalUnits((y - (Float(((imgHeight - diameter))) / Float((int)2))));
			HX_STACK_LINE(217)
			return c;
		}
		else{
			HX_STACK_LINE(220)
			if (((bool((type == HX_CSTRING("poly"))) || bool((type == HX_CSTRING("polyregion")))))){
				HX_STACK_LINE(222)
				Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
				HX_STACK_LINE(224)
				int numVertices = ::Std_obj::parseInt(params->__get((int)0));		HX_STACK_VAR(numVertices,"numVertices");
				HX_STACK_LINE(225)
				int vIndex = (int)0;		HX_STACK_VAR(vIndex,"vIndex");
				HX_STACK_LINE(226)
				int i = (int)1;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(229)
				Float x0 = (int)0;		HX_STACK_VAR(x0,"x0");
				HX_STACK_LINE(230)
				Float y0 = (int)0;		HX_STACK_VAR(y0,"y0");
				HX_STACK_LINE(232)
				if (((type == HX_CSTRING("polyregion")))){
					HX_STACK_LINE(234)
					x0 = (int)10000000;
					HX_STACK_LINE(235)
					y0 = (int)10000000;
				}
				HX_STACK_LINE(238)
				Float x1 = (int)0;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(239)
				Float y1 = (int)0;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(241)
				while(((vIndex < numVertices))){
					HX_STACK_LINE(243)
					x = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(params->__get(i)));
					HX_STACK_LINE(244)
					y = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(params->__get((i + (int)1))));
					HX_STACK_LINE(246)
					x0 = ::Math_obj::min(x0,::Std_obj::parseFloat(params->__get(i)));
					HX_STACK_LINE(247)
					y0 = ::Math_obj::min(y0,::Std_obj::parseFloat(params->__get((i + (int)1))));
					HX_STACK_LINE(248)
					x1 = ::Math_obj::max(x1,::Std_obj::parseFloat(params->__get(i)));
					HX_STACK_LINE(249)
					y1 = ::Math_obj::max(y1,::Std_obj::parseFloat(params->__get((i + (int)1))));
					HX_STACK_LINE(251)
					vertices[vIndex] = ::box2D::common::math::B2Vec2_obj::__new(x,y);
					HX_STACK_LINE(252)
					(vIndex)++;
					HX_STACK_LINE(253)
					hx::AddEq(i,(int)2);
				}
				HX_STACK_LINE(256)
				::com::stencyl::io::SpriteReader_obj::EnsureCorrectVertexDirection(vertices);
				HX_STACK_LINE(258)
				w = (x1 - x0);
				HX_STACK_LINE(259)
				h = (y1 - y0);
				HX_STACK_LINE(261)
				Float xDiff = (x0 - ::com::stencyl::Engine_obj::toPixelUnits(xOffset));		HX_STACK_VAR(xDiff,"xDiff");
				HX_STACK_LINE(262)
				Float yDiff = (y0 - ::com::stencyl::Engine_obj::toPixelUnits(yOffset));		HX_STACK_VAR(yDiff,"yDiff");
				HX_STACK_LINE(264)
				Float hw = (Float(w) / Float((int)2));		HX_STACK_VAR(hw,"hw");
				HX_STACK_LINE(265)
				Float hh = (Float(h) / Float((int)2));		HX_STACK_VAR(hh,"hh");
				HX_STACK_LINE(268)
				::box2D::collision::shapes::B2PolygonShape s = ::box2D::collision::shapes::B2PolygonShape_obj::asArray(vertices,vertices->length);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(269)
				::box2D::collision::B2AABB aabb = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(aabb,"aabb");
				HX_STACK_LINE(270)
				::box2D::common::math::B2Transform t = ::box2D::common::math::B2Transform_obj::__new(null(),null());		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(271)
				t->setIdentity();
				HX_STACK_LINE(272)
				s->computeAABB(aabb,t);
				HX_STACK_LINE(275)
				if (((w < imgWidth))){
					HX_STACK_LINE(276)
					if (((type == HX_CSTRING("polyregion")))){
						HX_STACK_LINE(277)
						hx::AddEq(x0,(Float(::Math_obj::abs((imgWidth - w))) / Float((int)2)));
					}
					else{
						HX_STACK_LINE(278)
						hx::AddEq(x0,::com::stencyl::Engine_obj::toPhysicalUnits((Float(::Math_obj::abs((imgWidth - w))) / Float((int)2))));
					}
				}
				HX_STACK_LINE(281)
				if (((h < imgHeight))){
					HX_STACK_LINE(282)
					if (((type == HX_CSTRING("polyregion")))){
						HX_STACK_LINE(283)
						hx::AddEq(y0,(Float(::Math_obj::abs((imgHeight - h))) / Float((int)2)));
					}
					else{
						HX_STACK_LINE(284)
						hx::AddEq(y0,::com::stencyl::Engine_obj::toPhysicalUnits((Float(::Math_obj::abs((imgHeight - h))) / Float((int)2))));
					}
				}
				HX_STACK_LINE(288)
				vIndex = (int)0;
				HX_STACK_LINE(289)
				i = (int)1;
				HX_STACK_LINE(291)
				while(((vIndex < numVertices))){
					HX_STACK_LINE(293)
					if (((type == HX_CSTRING("polyregion")))){
						HX_STACK_LINE(295)
						Float vX = ::com::stencyl::Engine_obj::toPhysicalUnits((((::Std_obj::parseFloat(params->__get(i)) - hw) - x0) + xDiff));		HX_STACK_VAR(vX,"vX");
						HX_STACK_LINE(296)
						Float vY = ::com::stencyl::Engine_obj::toPhysicalUnits((((::Std_obj::parseFloat(params->__get((i + (int)1))) - hh) - y0) + yDiff));		HX_STACK_VAR(vY,"vY");
						HX_STACK_LINE(297)
						vertices[vIndex] = ::box2D::common::math::B2Vec2_obj::__new(vX,vY);
					}
					else{
						HX_STACK_LINE(301)
						vertices[vIndex] = ::box2D::common::math::B2Vec2_obj::__new((::com::stencyl::Engine_obj::toPhysicalUnits((::Std_obj::parseFloat(params->__get(i)) - hw)) - x0),(::com::stencyl::Engine_obj::toPhysicalUnits((::Std_obj::parseFloat(params->__get((i + (int)1))) - hh)) - y0));
					}
					HX_STACK_LINE(306)
					(vIndex)++;
					HX_STACK_LINE(307)
					hx::AddEq(i,(int)2);
				}
				HX_STACK_LINE(310)
				::com::stencyl::io::SpriteReader_obj::EnsureCorrectVertexDirection(vertices);
				HX_STACK_LINE(312)
				return ::box2D::collision::shapes::B2PolygonShape_obj::asArray(vertices,vertices->length);
			}
			else{
				HX_STACK_LINE(315)
				if (((type == HX_CSTRING("wireframe")))){
					HX_STACK_LINE(317)
					Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
					HX_STACK_LINE(319)
					Float numVertices2 = ::Std_obj::parseFloat(params->__get((int)0));		HX_STACK_VAR(numVertices2,"numVertices2");
					HX_STACK_LINE(320)
					int vIndex2 = (int)0;		HX_STACK_VAR(vIndex2,"vIndex2");
					HX_STACK_LINE(321)
					int i2 = (int)1;		HX_STACK_VAR(i2,"i2");
					HX_STACK_LINE(323)
					while(((vIndex2 < numVertices2))){
						HX_STACK_LINE(325)
						vertices->push(::box2D::common::math::B2Vec2_obj::__new(::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(params->__get(i2))),::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(params->__get((i2 + (int)1))))));
						HX_STACK_LINE(326)
						(vIndex2)++;
						HX_STACK_LINE(327)
						hx::AddEq(i2,(int)2);
					}
					HX_STACK_LINE(330)
					w = ::com::stencyl::io::SpriteReader_obj::getWidth(vertices);
					HX_STACK_LINE(331)
					h = ::com::stencyl::io::SpriteReader_obj::getHeight(vertices);
					HX_STACK_LINE(333)
					Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (vertices->length + (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(335)
						while(((_g1 < _g))){
							HX_STACK_LINE(335)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(337)
							::box2D::collision::shapes::B2EdgeShape edge = ::box2D::collision::shapes::B2EdgeShape_obj::__new(vertices->__get(hx::Mod(i,vertices->length)).StaticCast< ::box2D::common::math::B2Vec2 >(),vertices->__get(hx::Mod(((i + (int)1)),vertices->length)).StaticCast< ::box2D::common::math::B2Vec2 >());		HX_STACK_VAR(edge,"edge");
							HX_STACK_LINE(338)
							arr->__Field(HX_CSTRING("push"),true)(edge);
							HX_STACK_LINE(340)
							edge->m_hasVertex0 = true;
							HX_STACK_LINE(341)
							edge->m_hasVertex3 = true;
							HX_STACK_LINE(343)
							::box2D::common::math::B2Vec2 v0 = vertices->__get(hx::Mod(((i - (int)1)),vertices->length)).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(344)
							::box2D::common::math::B2Vec2 v3 = vertices->__get(hx::Mod(((i + (int)2)),vertices->length)).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v3,"v3");
							HX_STACK_LINE(346)
							if (((v0 == null()))){
								HX_STACK_LINE(347)
								v0 = vertices->__get((vertices->length - (int)1)).StaticCast< ::box2D::common::math::B2Vec2 >();
							}
							HX_STACK_LINE(351)
							if (((v3 == null()))){
								HX_STACK_LINE(352)
								v3 = vertices->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >();
							}
							HX_STACK_LINE(356)
							edge->m_v0 = v0;
							HX_STACK_LINE(357)
							edge->m_v3 = v3;
						}
					}
					HX_STACK_LINE(371)
					::haxe::ds::IntMap toReturn = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(toReturn,"toReturn");
					HX_STACK_LINE(372)
					toReturn->set((int)0,arr);
					HX_STACK_LINE(373)
					toReturn->set((int)1,w);
					HX_STACK_LINE(374)
					toReturn->set((int)2,h);
					HX_STACK_LINE(376)
					return toReturn;
				}
			}
		}
		HX_STACK_LINE(379)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(SpriteReader_obj,createShape,return )

bool SpriteReader_obj::CheckVertexDirection( Array< ::Dynamic > v){
	HX_STACK_PUSH("SpriteReader::CheckVertexDirection","com/stencyl/io/SpriteReader.hx",402);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(403)
	if (((v->length > (int)2))){
		HX_STACK_LINE(405)
		Float wind = (int)0;		HX_STACK_VAR(wind,"wind");
		HX_STACK_LINE(406)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(408)
		while(((bool((wind == (int)0)) && bool((i < (v->length - (int)2)))))){
			HX_STACK_LINE(410)
			wind = v->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->winding(v->__get((i + (int)1)).StaticCast< ::box2D::common::math::B2Vec2 >(),v->__get((i + (int)2)).StaticCast< ::box2D::common::math::B2Vec2 >());
			HX_STACK_LINE(411)
			++(i);
		}
		HX_STACK_LINE(414)
		if (((wind < (int)0))){
			HX_STACK_LINE(415)
			return false;
		}
	}
	HX_STACK_LINE(420)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpriteReader_obj,CheckVertexDirection,return )

bool SpriteReader_obj::EnsureCorrectVertexDirection( Array< ::Dynamic > v){
	HX_STACK_PUSH("SpriteReader::EnsureCorrectVertexDirection","com/stencyl/io/SpriteReader.hx",425);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(426)
	if ((!(::com::stencyl::io::SpriteReader_obj::CheckVertexDirection(v)))){
		HX_STACK_LINE(428)
		::com::stencyl::io::SpriteReader_obj::ReverseVertices(v);
		HX_STACK_LINE(429)
		return false;
	}
	HX_STACK_LINE(432)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpriteReader_obj,EnsureCorrectVertexDirection,return )

Void SpriteReader_obj::ReverseVertices( Array< ::Dynamic > v){
{
		HX_STACK_PUSH("SpriteReader::ReverseVertices","com/stencyl/io/SpriteReader.hx",437);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(438)
		int low = (int)0;		HX_STACK_VAR(low,"low");
		HX_STACK_LINE(439)
		int high = (v->length - (int)1);		HX_STACK_VAR(high,"high");
		HX_STACK_LINE(440)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		while(((high > low))){
			HX_STACK_LINE(444)
			tmp = v->__get(low).StaticCast< ::box2D::common::math::B2Vec2 >()->x;
			HX_STACK_LINE(445)
			v->__get(low).StaticCast< ::box2D::common::math::B2Vec2 >()->x = v->__get(high).StaticCast< ::box2D::common::math::B2Vec2 >()->x;
			HX_STACK_LINE(446)
			v->__get(high).StaticCast< ::box2D::common::math::B2Vec2 >()->x = tmp;
			HX_STACK_LINE(447)
			tmp = v->__get(low).StaticCast< ::box2D::common::math::B2Vec2 >()->y;
			HX_STACK_LINE(448)
			v->__get(low).StaticCast< ::box2D::common::math::B2Vec2 >()->y = v->__get(high).StaticCast< ::box2D::common::math::B2Vec2 >()->y;
			HX_STACK_LINE(449)
			v->__get(high).StaticCast< ::box2D::common::math::B2Vec2 >()->y = tmp;
			HX_STACK_LINE(450)
			++(low);
			HX_STACK_LINE(451)
			--(high);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpriteReader_obj,ReverseVertices,(void))

Float SpriteReader_obj::getWidth( Array< ::Dynamic > vertices){
	HX_STACK_PUSH("SpriteReader::getWidth","com/stencyl/io/SpriteReader.hx",456);
	HX_STACK_ARG(vertices,"vertices");
	HX_STACK_LINE(457)
	Float minX = (int)10000000;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(458)
	Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(460)
	{
		HX_STACK_LINE(460)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(460)
		while(((_g < vertices->length))){
			HX_STACK_LINE(460)
			::box2D::common::math::B2Vec2 v = vertices->__get(_g).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(460)
			++(_g);
			HX_STACK_LINE(462)
			minX = ::Math_obj::min(minX,v->x);
			HX_STACK_LINE(463)
			maxX = ::Math_obj::max(maxX,v->x);
		}
	}
	HX_STACK_LINE(466)
	return (maxX - minX);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpriteReader_obj,getWidth,return )

Float SpriteReader_obj::getHeight( Array< ::Dynamic > vertices){
	HX_STACK_PUSH("SpriteReader::getHeight","com/stencyl/io/SpriteReader.hx",470);
	HX_STACK_ARG(vertices,"vertices");
	HX_STACK_LINE(471)
	Float minY = (int)10000000;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(472)
	Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(474)
	{
		HX_STACK_LINE(474)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(474)
		while(((_g < vertices->length))){
			HX_STACK_LINE(474)
			::box2D::common::math::B2Vec2 v = vertices->__get(_g).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(474)
			++(_g);
			HX_STACK_LINE(476)
			minY = ::Math_obj::min(minY,v->y);
			HX_STACK_LINE(477)
			maxY = ::Math_obj::max(maxY,v->y);
		}
	}
	HX_STACK_LINE(480)
	return (maxY - minY);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpriteReader_obj,getHeight,return )


SpriteReader_obj::SpriteReader_obj()
{
}

void SpriteReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteReader);
	HX_MARK_END_CLASS();
}

void SpriteReader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SpriteReader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"accepts") ) { return accepts_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readShapes") ) { return readShapes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createShape") ) { return createShape_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readAnimation") ) { return readAnimation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ReverseVertices") ) { return ReverseVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readSimpleShapes") ) { return readSimpleShapes_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CheckVertexDirection") ) { return CheckVertexDirection_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"EnsureCorrectVertexDirection") ) { return EnsureCorrectVertexDirection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteReader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createShape"),
	HX_CSTRING("CheckVertexDirection"),
	HX_CSTRING("EnsureCorrectVertexDirection"),
	HX_CSTRING("ReverseVertices"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("getHeight"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readShapes"),
	HX_CSTRING("readSimpleShapes"),
	HX_CSTRING("readAnimation"),
	HX_CSTRING("read"),
	HX_CSTRING("accepts"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteReader_obj::__mClass,"__mClass");
};

Class SpriteReader_obj::__mClass;

void SpriteReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.SpriteReader"), hx::TCanCast< SpriteReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SpriteReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
