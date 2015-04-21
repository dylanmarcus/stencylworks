#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastInput
#include <box2D/collision/B2RayCastInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastOutput
#include <box2D/collision/B2RayCastOutput.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2MassData
#include <box2D/collision/shapes/B2MassData.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace collision{
namespace shapes{

Void B2CircleShape_obj::__construct(hx::Null< Float >  __o_radius)
{
HX_STACK_PUSH("B2CircleShape::new","box2D/collision/shapes/B2CircleShape.hx",218);
Float radius = __o_radius.Default(0);
{
	HX_STACK_LINE(219)
	super::__construct();
	HX_STACK_LINE(220)
	this->m_p = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(221)
	this->m_type = ::box2D::collision::shapes::B2Shape_obj::e_circleShape;
	HX_STACK_LINE(222)
	this->m_radius = radius;
}
;
	return null();
}

B2CircleShape_obj::~B2CircleShape_obj() { }

Dynamic B2CircleShape_obj::__CreateEmpty() { return  new B2CircleShape_obj; }
hx::ObjectPtr< B2CircleShape_obj > B2CircleShape_obj::__new(hx::Null< Float >  __o_radius)
{  hx::ObjectPtr< B2CircleShape_obj > result = new B2CircleShape_obj();
	result->__construct(__o_radius);
	return result;}

Dynamic B2CircleShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2CircleShape_obj > result = new B2CircleShape_obj();
	result->__construct(inArgs[0]);
	return result;}

Void B2CircleShape_obj::setRadius( Float radius){
{
		HX_STACK_PUSH("B2CircleShape::setRadius","box2D/collision/shapes/B2CircleShape.hx",214);
		HX_STACK_THIS(this);
		HX_STACK_ARG(radius,"radius");
		HX_STACK_LINE(214)
		this->m_radius = radius;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2CircleShape_obj,setRadius,(void))

Float B2CircleShape_obj::getRadius( ){
	HX_STACK_PUSH("B2CircleShape::getRadius","box2D/collision/shapes/B2CircleShape.hx",206);
	HX_STACK_THIS(this);
	HX_STACK_LINE(206)
	return this->m_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(B2CircleShape_obj,getRadius,return )

Void B2CircleShape_obj::setLocalPosition( ::box2D::common::math::B2Vec2 position){
{
		HX_STACK_PUSH("B2CircleShape::setLocalPosition","box2D/collision/shapes/B2CircleShape.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_LINE(199)
		::box2D::common::math::B2Vec2 _this = this->m_p;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(199)
		_this->x = position->x;
		HX_STACK_LINE(199)
		_this->y = position->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2CircleShape_obj,setLocalPosition,(void))

::box2D::common::math::B2Vec2 B2CircleShape_obj::getLocalPosition( ){
	HX_STACK_PUSH("B2CircleShape::getLocalPosition","box2D/collision/shapes/B2CircleShape.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_LINE(191)
	return this->m_p;
}


HX_DEFINE_DYNAMIC_FUNC0(B2CircleShape_obj,getLocalPosition,return )

Float B2CircleShape_obj::computeSubmergedArea( ::box2D::common::math::B2Vec2 normal,Float offset,::box2D::common::math::B2Transform xf,::box2D::common::math::B2Vec2 c){
	HX_STACK_PUSH("B2CircleShape::computeSubmergedArea","box2D/collision/shapes/B2CircleShape.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(normal,"normal");
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(xf,"xf");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(161)
	::box2D::common::math::B2Vec2 p = ::box2D::common::math::B2Math_obj::mulX(xf,this->m_p,true);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(162)
	Float l = -(((::box2D::common::math::B2Math_obj::dot(normal,p) - offset)));		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(164)
	if (((l < (-(this->m_radius) + 2.2250738585072014e-308)))){
		HX_STACK_LINE(165)
		return (int)0;
	}
	HX_STACK_LINE(169)
	if (((l > this->m_radius))){
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			c->x = p->x;
			HX_STACK_LINE(172)
			c->y = p->y;
		}
		HX_STACK_LINE(173)
		return ((::Math_obj::PI * this->m_radius) * this->m_radius);
	}
	HX_STACK_LINE(177)
	Float r2 = (this->m_radius * this->m_radius);		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(178)
	Float l2 = (l * l);		HX_STACK_VAR(l2,"l2");
	HX_STACK_LINE(179)
	Float area = ((r2 * ((::Math_obj::asin((Float(l) / Float(this->m_radius))) + (Float(::Math_obj::PI) / Float((int)2))))) + (l * ::Math_obj::sqrt((r2 - l2))));		HX_STACK_VAR(area,"area");
	HX_STACK_LINE(180)
	Float com = (Float(((Float((int)-2) / Float((int)3)) * ::Math_obj::pow((r2 - l2),1.5))) / Float(area));		HX_STACK_VAR(com,"com");
	HX_STACK_LINE(182)
	c->x = (p->x + (normal->x * com));
	HX_STACK_LINE(183)
	c->y = (p->y + (normal->y * com));
	HX_STACK_LINE(185)
	return area;
}


Void B2CircleShape_obj::computeMass( ::box2D::collision::shapes::B2MassData massData,Float density){
{
		HX_STACK_PUSH("B2CircleShape::computeMass","box2D/collision/shapes/B2CircleShape.hx",143);
		HX_STACK_THIS(this);
		HX_STACK_ARG(massData,"massData");
		HX_STACK_ARG(density,"density");
		HX_STACK_LINE(144)
		massData->mass = (((density * ::box2D::common::B2Settings_obj::b2_pi) * this->m_radius) * this->m_radius);
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			::box2D::common::math::B2Vec2 _this = massData->center;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_p;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(145)
			_this->x = v->x;
			HX_STACK_LINE(145)
			_this->y = v->y;
		}
		HX_STACK_LINE(149)
		massData->I = (massData->mass * ((((0.5 * this->m_radius) * this->m_radius) + (((this->m_p->x * this->m_p->x) + (this->m_p->y * this->m_p->y))))));
	}
return null();
}


Void B2CircleShape_obj::computeAABB( ::box2D::collision::B2AABB aabb,::box2D::common::math::B2Transform transform){
{
		HX_STACK_PUSH("B2CircleShape::computeAABB","box2D/collision/shapes/B2CircleShape.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(aabb,"aabb");
		HX_STACK_ARG(transform,"transform");
		HX_STACK_LINE(133)
		::box2D::common::math::B2Mat22 tMat = transform->R;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(134)
		Float pX = (transform->position->x + (((tMat->col1->x * this->m_p->x) + (tMat->col2->x * this->m_p->y))));		HX_STACK_VAR(pX,"pX");
		HX_STACK_LINE(135)
		Float pY = (transform->position->y + (((tMat->col1->y * this->m_p->x) + (tMat->col2->y * this->m_p->y))));		HX_STACK_VAR(pY,"pY");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::box2D::common::math::B2Vec2 _this = aabb->lowerBound;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(136)
			_this->x = (pX - this->m_radius);
			HX_STACK_LINE(136)
			_this->y = (pY - this->m_radius);
		}
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::box2D::common::math::B2Vec2 _this = aabb->upperBound;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(137)
			_this->x = (pX + this->m_radius);
			HX_STACK_LINE(137)
			_this->y = (pY + this->m_radius);
		}
	}
return null();
}


bool B2CircleShape_obj::rayCast( ::box2D::collision::B2RayCastOutput output,::box2D::collision::B2RayCastInput input,::box2D::common::math::B2Transform transform){
	HX_STACK_PUSH("B2CircleShape::rayCast","box2D/collision/shapes/B2CircleShape.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(output,"output");
	HX_STACK_ARG(input,"input");
	HX_STACK_ARG(transform,"transform");
	HX_STACK_LINE(76)
	::box2D::common::math::B2Mat22 tMat = transform->R;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(77)
	Float positionX = (transform->position->x + (((tMat->col1->x * this->m_p->x) + (tMat->col2->x * this->m_p->y))));		HX_STACK_VAR(positionX,"positionX");
	HX_STACK_LINE(78)
	Float positionY = (transform->position->y + (((tMat->col1->y * this->m_p->x) + (tMat->col2->y * this->m_p->y))));		HX_STACK_VAR(positionY,"positionY");
	HX_STACK_LINE(81)
	Float sX = (input->p1->x - positionX);		HX_STACK_VAR(sX,"sX");
	HX_STACK_LINE(82)
	Float sY = (input->p1->y - positionY);		HX_STACK_VAR(sY,"sY");
	HX_STACK_LINE(84)
	Float b = (((sX * sX) + (sY * sY)) - (this->m_radius * this->m_radius));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(96)
	Float rX = (input->p2->x - input->p1->x);		HX_STACK_VAR(rX,"rX");
	HX_STACK_LINE(97)
	Float rY = (input->p2->y - input->p1->y);		HX_STACK_VAR(rY,"rY");
	HX_STACK_LINE(99)
	Float c = ((sX * rX) + (sY * rY));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(101)
	Float rr = ((rX * rX) + (rY * rY));		HX_STACK_VAR(rr,"rr");
	HX_STACK_LINE(102)
	Float sigma = ((c * c) - (rr * b));		HX_STACK_VAR(sigma,"sigma");
	HX_STACK_LINE(105)
	if (((bool((sigma < 0.0)) || bool((rr < 2.2250738585072014e-308))))){
		HX_STACK_LINE(106)
		return false;
	}
	HX_STACK_LINE(111)
	Float a = -(((c + ::Math_obj::sqrt(sigma))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(114)
	if (((bool((0.0 <= a)) && bool((a <= (input->maxFraction * rr)))))){
		HX_STACK_LINE(116)
		hx::DivEq(a,rr);
		HX_STACK_LINE(117)
		output->fraction = a;
		HX_STACK_LINE(119)
		output->normal->x = (sX + (a * rX));
		HX_STACK_LINE(120)
		output->normal->y = (sY + (a * rY));
		HX_STACK_LINE(121)
		output->normal->normalize();
		HX_STACK_LINE(122)
		return true;
	}
	HX_STACK_LINE(125)
	return false;
}


bool B2CircleShape_obj::testPoint( ::box2D::common::math::B2Transform transform,::box2D::common::math::B2Vec2 p){
	HX_STACK_PUSH("B2CircleShape::testPoint","box2D/collision/shapes/B2CircleShape.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(transform,"transform");
	HX_STACK_ARG(p,"p");
	HX_STACK_LINE(60)
	::box2D::common::math::B2Mat22 tMat = transform->R;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(61)
	Float dX = (transform->position->x + (((tMat->col1->x * this->m_p->x) + (tMat->col2->x * this->m_p->y))));		HX_STACK_VAR(dX,"dX");
	HX_STACK_LINE(62)
	Float dY = (transform->position->y + (((tMat->col1->y * this->m_p->x) + (tMat->col2->y * this->m_p->y))));		HX_STACK_VAR(dY,"dY");
	HX_STACK_LINE(64)
	dX = (p->x - dX);
	HX_STACK_LINE(65)
	dY = (p->y - dY);
	HX_STACK_LINE(67)
	return (((dX * dX) + (dY * dY)) <= (this->m_radius * this->m_radius));
}


Void B2CircleShape_obj::set( ::box2D::collision::shapes::B2Shape other){
{
		HX_STACK_PUSH("B2CircleShape::set","box2D/collision/shapes/B2CircleShape.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(other,"other");
		HX_STACK_LINE(47)
		this->super::set(other);
		HX_STACK_LINE(48)
		if ((::Std_obj::is(other,hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
			HX_STACK_LINE(50)
			::box2D::collision::shapes::B2CircleShape other2 = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(other);		HX_STACK_VAR(other2,"other2");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				::box2D::common::math::B2Vec2 _this = this->m_p;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = other2->m_p;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(51)
				_this->x = v->x;
				HX_STACK_LINE(51)
				_this->y = v->y;
			}
		}
	}
return null();
}


::box2D::collision::shapes::B2Shape B2CircleShape_obj::copy( ){
	HX_STACK_PUSH("B2CircleShape::copy","box2D/collision/shapes/B2CircleShape.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	::box2D::collision::shapes::B2Shape s = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(41)
	s->set(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(42)
	return s;
}



B2CircleShape_obj::B2CircleShape_obj()
{
}

void B2CircleShape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2CircleShape);
	HX_MARK_MEMBER_NAME(m_p,"m_p");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2CircleShape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_p,"m_p");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2CircleShape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_p") ) { return m_p; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setRadius") ) { return setRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"getRadius") ) { return getRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"testPoint") ) { return testPoint_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"computeMass") ) { return computeMass_dyn(); }
		if (HX_FIELD_EQ(inName,"computeAABB") ) { return computeAABB_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setLocalPosition") ) { return setLocalPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocalPosition") ) { return getLocalPosition_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"computeSubmergedArea") ) { return computeSubmergedArea_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2CircleShape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_p") ) { m_p=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2CircleShape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_p"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_p"),
	HX_CSTRING("setRadius"),
	HX_CSTRING("getRadius"),
	HX_CSTRING("setLocalPosition"),
	HX_CSTRING("getLocalPosition"),
	HX_CSTRING("computeSubmergedArea"),
	HX_CSTRING("computeMass"),
	HX_CSTRING("computeAABB"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("testPoint"),
	HX_CSTRING("set"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2CircleShape_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2CircleShape_obj::__mClass,"__mClass");
};

Class B2CircleShape_obj::__mClass;

void B2CircleShape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.shapes.B2CircleShape"), hx::TCanCast< B2CircleShape_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2CircleShape_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
} // end namespace shapes
