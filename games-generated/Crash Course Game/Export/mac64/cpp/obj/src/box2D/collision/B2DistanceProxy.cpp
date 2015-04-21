#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2DistanceProxy
#include <box2D/collision/B2DistanceProxy.h>
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
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
namespace box2D{
namespace collision{

Void B2DistanceProxy_obj::__construct()
{
HX_STACK_PUSH("B2DistanceProxy::new","box2D/collision/B2DistanceProxy.hx",131);
{
	HX_STACK_LINE(131)
	this->m_vertices = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

B2DistanceProxy_obj::~B2DistanceProxy_obj() { }

Dynamic B2DistanceProxy_obj::__CreateEmpty() { return  new B2DistanceProxy_obj; }
hx::ObjectPtr< B2DistanceProxy_obj > B2DistanceProxy_obj::__new()
{  hx::ObjectPtr< B2DistanceProxy_obj > result = new B2DistanceProxy_obj();
	result->__construct();
	return result;}

Dynamic B2DistanceProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2DistanceProxy_obj > result = new B2DistanceProxy_obj();
	result->__construct();
	return result;}

::box2D::common::math::B2Vec2 B2DistanceProxy_obj::getVertex( int index){
	HX_STACK_PUSH("B2DistanceProxy::getVertex","box2D/collision/B2DistanceProxy.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(126)
	::box2D::common::B2Settings_obj::b2Assert((bool(((int)0 <= index)) && bool((index < this->m_count))));
	HX_STACK_LINE(127)
	return this->m_vertices->__get(index).StaticCast< ::box2D::common::math::B2Vec2 >();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DistanceProxy_obj,getVertex,return )

int B2DistanceProxy_obj::getVertexCount( ){
	HX_STACK_PUSH("B2DistanceProxy::getVertexCount","box2D/collision/B2DistanceProxy.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	return this->m_count;
}


HX_DEFINE_DYNAMIC_FUNC0(B2DistanceProxy_obj,getVertexCount,return )

::box2D::common::math::B2Vec2 B2DistanceProxy_obj::getSupportVertex( ::box2D::common::math::B2Vec2 d){
	HX_STACK_PUSH("B2DistanceProxy::getSupportVertex","box2D/collision/B2DistanceProxy.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(100)
	int bestIndex = (int)0;		HX_STACK_VAR(bestIndex,"bestIndex");
	HX_STACK_LINE(101)
	Float bestValue = ((this->m_vertices->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x * d->x) + (this->m_vertices->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y * d->y));		HX_STACK_VAR(bestValue,"bestValue");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->m_count;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		while(((_g1 < _g))){
			HX_STACK_LINE(102)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(104)
			Float value = ((this->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x * d->x) + (this->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y * d->y));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(105)
			if (((value > bestValue))){
				HX_STACK_LINE(107)
				bestIndex = i;
				HX_STACK_LINE(108)
				bestValue = value;
			}
		}
	}
	HX_STACK_LINE(111)
	return this->m_vertices->__get(bestIndex).StaticCast< ::box2D::common::math::B2Vec2 >();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DistanceProxy_obj,getSupportVertex,return )

Float B2DistanceProxy_obj::getSupport( ::box2D::common::math::B2Vec2 d){
	HX_STACK_PUSH("B2DistanceProxy::getSupport","box2D/collision/B2DistanceProxy.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(81)
	int bestIndex = (int)0;		HX_STACK_VAR(bestIndex,"bestIndex");
	HX_STACK_LINE(82)
	Float bestValue = ((this->m_vertices->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x * d->x) + (this->m_vertices->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y * d->y));		HX_STACK_VAR(bestValue,"bestValue");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->m_count;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while(((_g1 < _g))){
			HX_STACK_LINE(83)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			Float value = ((this->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x * d->x) + (this->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y * d->y));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(86)
			if (((value > bestValue))){
				HX_STACK_LINE(88)
				bestIndex = i;
				HX_STACK_LINE(89)
				bestValue = value;
			}
		}
	}
	HX_STACK_LINE(92)
	return bestIndex;
}


HX_DEFINE_DYNAMIC_FUNC1(B2DistanceProxy_obj,getSupport,return )

Void B2DistanceProxy_obj::set( ::box2D::collision::shapes::B2Shape shape){
{
		HX_STACK_PUSH("B2DistanceProxy::set","box2D/collision/B2DistanceProxy.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(42)
		int _g = shape->getType();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		int _switch_1 = (_g);
		if (  ( _switch_1==::box2D::collision::shapes::B2Shape_obj::e_circleShape)){
			HX_STACK_LINE(46)
			::box2D::collision::shapes::B2CircleShape circle = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(shape);		HX_STACK_VAR(circle,"circle");
			HX_STACK_LINE(47)
			this->m_vertices = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(48)
			this->m_vertices[(int)0] = circle->m_p;
			HX_STACK_LINE(49)
			this->m_count = (int)1;
			HX_STACK_LINE(50)
			this->m_radius = circle->m_radius;
		}
		else if (  ( _switch_1==::box2D::collision::shapes::B2Shape_obj::e_polygonShape)){
			HX_STACK_LINE(55)
			::box2D::collision::shapes::B2PolygonShape polygon = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(shape);		HX_STACK_VAR(polygon,"polygon");
			HX_STACK_LINE(56)
			this->m_vertices = polygon->m_vertices;
			HX_STACK_LINE(57)
			this->m_count = polygon->m_vertexCount;
			HX_STACK_LINE(58)
			this->m_radius = polygon->m_radius;
		}
		else if (  ( _switch_1==::box2D::collision::shapes::B2Shape_obj::e_edgeShape)){
			HX_STACK_LINE(63)
			::box2D::collision::shapes::B2EdgeShape edge = hx::TCast< box2D::collision::shapes::B2EdgeShape >::cast(shape);		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(64)
			this->m_vertices = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(65)
			this->m_vertices[(int)0] = edge->m_v1;
			HX_STACK_LINE(66)
			this->m_vertices[(int)1] = edge->m_v2;
			HX_STACK_LINE(67)
			this->m_count = (int)2;
			HX_STACK_LINE(68)
			this->m_radius = edge->m_radius;
		}
		else  {
			HX_STACK_LINE(71)
			::box2D::common::B2Settings_obj::b2Assert(false);
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DistanceProxy_obj,set,(void))


B2DistanceProxy_obj::B2DistanceProxy_obj()
{
}

void B2DistanceProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2DistanceProxy);
	HX_MARK_MEMBER_NAME(m_radius,"m_radius");
	HX_MARK_MEMBER_NAME(m_count,"m_count");
	HX_MARK_MEMBER_NAME(m_vertices,"m_vertices");
	HX_MARK_END_CLASS();
}

void B2DistanceProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_radius,"m_radius");
	HX_VISIT_MEMBER_NAME(m_count,"m_count");
	HX_VISIT_MEMBER_NAME(m_vertices,"m_vertices");
}

Dynamic B2DistanceProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_count") ) { return m_count; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_radius") ) { return m_radius; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getVertex") ) { return getVertex_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_vertices") ) { return m_vertices; }
		if (HX_FIELD_EQ(inName,"getSupport") ) { return getSupport_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getVertexCount") ) { return getVertexCount_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getSupportVertex") ) { return getSupportVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2DistanceProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_count") ) { m_count=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_radius") ) { m_radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_vertices") ) { m_vertices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2DistanceProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_radius"));
	outFields->push(HX_CSTRING("m_count"));
	outFields->push(HX_CSTRING("m_vertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_radius"),
	HX_CSTRING("m_count"),
	HX_CSTRING("m_vertices"),
	HX_CSTRING("getVertex"),
	HX_CSTRING("getVertexCount"),
	HX_CSTRING("getSupportVertex"),
	HX_CSTRING("getSupport"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2DistanceProxy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2DistanceProxy_obj::__mClass,"__mClass");
};

Class B2DistanceProxy_obj::__mClass;

void B2DistanceProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2DistanceProxy"), hx::TCanCast< B2DistanceProxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2DistanceProxy_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
