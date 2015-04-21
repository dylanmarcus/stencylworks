#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_collision_B2WorldManifold
#include <box2D/collision/B2WorldManifold.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace collision{

Void B2WorldManifold_obj::__construct()
{
HX_STACK_PUSH("B2WorldManifold::new","box2D/collision/B2WorldManifold.hx",35);
{
	HX_STACK_LINE(36)
	this->m_normal = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(38)
	this->m_points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		while(((_g1 < _g))){
			HX_STACK_LINE(39)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(41)
			this->m_points[i] = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
		}
	}
}
;
	return null();
}

B2WorldManifold_obj::~B2WorldManifold_obj() { }

Dynamic B2WorldManifold_obj::__CreateEmpty() { return  new B2WorldManifold_obj; }
hx::ObjectPtr< B2WorldManifold_obj > B2WorldManifold_obj::__new()
{  hx::ObjectPtr< B2WorldManifold_obj > result = new B2WorldManifold_obj();
	result->__construct();
	return result;}

Dynamic B2WorldManifold_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2WorldManifold_obj > result = new B2WorldManifold_obj();
	result->__construct();
	return result;}

::box2D::common::math::B2Vec2 B2WorldManifold_obj::getPoint( ){
	HX_STACK_PUSH("B2WorldManifold::getPoint","box2D/collision/B2WorldManifold.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(200)
	if (((this->m_points->length == (int)0))){
		HX_STACK_LINE(200)
		return null();
	}
	HX_STACK_LINE(203)
	if (((this->m_points->length == (int)1))){
		HX_STACK_LINE(203)
		return this->m_points->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >();
	}
	HX_STACK_LINE(206)
	return ::box2D::common::math::B2Vec2_obj::__new((Float(((this->m_points->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x + this->m_points->__get((int)1).StaticCast< ::box2D::common::math::B2Vec2 >()->x))) / Float((int)2)),(Float(((this->m_points->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y + this->m_points->__get((int)1).StaticCast< ::box2D::common::math::B2Vec2 >()->y))) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(B2WorldManifold_obj,getPoint,return )

Void B2WorldManifold_obj::initialize( ::box2D::collision::B2Manifold manifold,::box2D::common::math::B2Transform xfA,Float radiusA,::box2D::common::math::B2Transform xfB,Float radiusB){
{
		HX_STACK_PUSH("B2WorldManifold::initialize","box2D/collision/B2WorldManifold.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(manifold,"manifold");
		HX_STACK_ARG(xfA,"xfA");
		HX_STACK_ARG(radiusA,"radiusA");
		HX_STACK_ARG(xfB,"xfB");
		HX_STACK_ARG(radiusB,"radiusB");
		HX_STACK_LINE(66)
		if (((manifold->m_pointCount == (int)0))){
			HX_STACK_LINE(67)
			return null();
		}
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			this->m_normal = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
			HX_STACK_LINE(71)
			this->m_points = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(71)
				while(((_g1 < _g))){
					HX_STACK_LINE(71)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(71)
					this->m_points[i] = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
				}
			}
		}
		HX_STACK_LINE(73)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(74)
		::box2D::common::math::B2Vec2 tVec;		HX_STACK_VAR(tVec,"tVec");
		HX_STACK_LINE(75)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(76)
		Float normalX;		HX_STACK_VAR(normalX,"normalX");
		HX_STACK_LINE(77)
		Float normalY;		HX_STACK_VAR(normalY,"normalY");
		HX_STACK_LINE(78)
		Float planePointX;		HX_STACK_VAR(planePointX,"planePointX");
		HX_STACK_LINE(79)
		Float planePointY;		HX_STACK_VAR(planePointY,"planePointY");
		HX_STACK_LINE(80)
		Float clipPointX;		HX_STACK_VAR(clipPointX,"clipPointX");
		HX_STACK_LINE(81)
		Float clipPointY;		HX_STACK_VAR(clipPointY,"clipPointY");
		HX_STACK_LINE(83)
		int _switch_1 = (manifold->m_type);
		if (  ( _switch_1==::box2D::collision::B2Manifold_obj::e_circles)){
			HX_STACK_LINE(88)
			tMat = xfA->R;
			HX_STACK_LINE(89)
			tVec = manifold->m_localPoint;
			HX_STACK_LINE(90)
			Float pointAX = ((xfA->position->x + (tMat->col1->x * tVec->x)) + (tMat->col2->x * tVec->y));		HX_STACK_VAR(pointAX,"pointAX");
			HX_STACK_LINE(91)
			Float pointAY = ((xfA->position->y + (tMat->col1->y * tVec->x)) + (tMat->col2->y * tVec->y));		HX_STACK_VAR(pointAY,"pointAY");
			HX_STACK_LINE(93)
			tMat = xfB->R;
			HX_STACK_LINE(94)
			tVec = manifold->m_points->__get((int)0).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_localPoint;
			HX_STACK_LINE(95)
			Float pointBX = ((xfB->position->x + (tMat->col1->x * tVec->x)) + (tMat->col2->x * tVec->y));		HX_STACK_VAR(pointBX,"pointBX");
			HX_STACK_LINE(96)
			Float pointBY = ((xfB->position->y + (tMat->col1->y * tVec->x)) + (tMat->col2->y * tVec->y));		HX_STACK_VAR(pointBY,"pointBY");
			HX_STACK_LINE(98)
			Float dX = (pointBX - pointAX);		HX_STACK_VAR(dX,"dX");
			HX_STACK_LINE(99)
			Float dY = (pointBY - pointAY);		HX_STACK_VAR(dY,"dY");
			HX_STACK_LINE(100)
			Float d2 = ((dX * dX) + (dY * dY));		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(101)
			if (((d2 > 0.))){
				HX_STACK_LINE(103)
				Float d = ::Math_obj::sqrt(d2);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(104)
				this->m_normal->x = (Float(dX) / Float(d));
				HX_STACK_LINE(105)
				this->m_normal->y = (Float(dY) / Float(d));
			}
			else{
				HX_STACK_LINE(107)
				this->m_normal->x = (int)1;
				HX_STACK_LINE(108)
				this->m_normal->y = (int)0;
			}
			HX_STACK_LINE(112)
			Float cAX = (pointAX + (radiusA * this->m_normal->x));		HX_STACK_VAR(cAX,"cAX");
			HX_STACK_LINE(113)
			Float cAY = (pointAY + (radiusA * this->m_normal->y));		HX_STACK_VAR(cAY,"cAY");
			HX_STACK_LINE(115)
			Float cBX = (pointBX - (radiusB * this->m_normal->x));		HX_STACK_VAR(cBX,"cBX");
			HX_STACK_LINE(116)
			Float cBY = (pointBY - (radiusB * this->m_normal->y));		HX_STACK_VAR(cBY,"cBY");
			HX_STACK_LINE(117)
			this->m_points->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x = (0.5 * ((cAX + cBX)));
			HX_STACK_LINE(118)
			this->m_points->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y = (0.5 * ((cAY + cBY)));
		}
		else if (  ( _switch_1==::box2D::collision::B2Manifold_obj::e_faceA)){
			HX_STACK_LINE(128)
			tMat = xfA->R;
			HX_STACK_LINE(129)
			tVec = manifold->m_localPlaneNormal;
			HX_STACK_LINE(130)
			normalX = ((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y));
			HX_STACK_LINE(131)
			normalY = ((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y));
			HX_STACK_LINE(134)
			tMat = xfA->R;
			HX_STACK_LINE(135)
			tVec = manifold->m_localPoint;
			HX_STACK_LINE(136)
			planePointX = ((xfA->position->x + (tMat->col1->x * tVec->x)) + (tMat->col2->x * tVec->y));
			HX_STACK_LINE(137)
			planePointY = ((xfA->position->y + (tMat->col1->y * tVec->x)) + (tMat->col2->y * tVec->y));
			HX_STACK_LINE(140)
			this->m_normal->x = normalX;
			HX_STACK_LINE(141)
			this->m_normal->y = normalY;
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = manifold->m_pointCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(142)
				while(((_g1 < _g))){
					HX_STACK_LINE(142)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(145)
					tMat = xfB->R;
					HX_STACK_LINE(146)
					tVec = manifold->m_points->__get(i1).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_localPoint;
					HX_STACK_LINE(147)
					clipPointX = ((xfB->position->x + (tMat->col1->x * tVec->x)) + (tMat->col2->x * tVec->y));
					HX_STACK_LINE(148)
					clipPointY = ((xfB->position->y + (tMat->col1->y * tVec->x)) + (tMat->col2->y * tVec->y));
					HX_STACK_LINE(153)
					this->m_points->__get(i1).StaticCast< ::box2D::common::math::B2Vec2 >()->x = (clipPointX + ((0.5 * ((((radiusA - (((clipPointX - planePointX)) * normalX)) - (((clipPointY - planePointY)) * normalY)) - radiusB))) * normalX));
					HX_STACK_LINE(154)
					this->m_points->__get(i1).StaticCast< ::box2D::common::math::B2Vec2 >()->y = (clipPointY + ((0.5 * ((((radiusA - (((clipPointX - planePointX)) * normalX)) - (((clipPointY - planePointY)) * normalY)) - radiusB))) * normalY));
				}
			}
		}
		else if (  ( _switch_1==::box2D::collision::B2Manifold_obj::e_faceB)){
			HX_STACK_LINE(162)
			tMat = xfB->R;
			HX_STACK_LINE(163)
			tVec = manifold->m_localPlaneNormal;
			HX_STACK_LINE(164)
			normalX = ((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y));
			HX_STACK_LINE(165)
			normalY = ((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y));
			HX_STACK_LINE(168)
			tMat = xfB->R;
			HX_STACK_LINE(169)
			tVec = manifold->m_localPoint;
			HX_STACK_LINE(170)
			planePointX = ((xfB->position->x + (tMat->col1->x * tVec->x)) + (tMat->col2->x * tVec->y));
			HX_STACK_LINE(171)
			planePointY = ((xfB->position->y + (tMat->col1->y * tVec->x)) + (tMat->col2->y * tVec->y));
			HX_STACK_LINE(174)
			this->m_normal->x = -(normalX);
			HX_STACK_LINE(175)
			this->m_normal->y = -(normalY);
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = manifold->m_pointCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(176)
				while(((_g1 < _g))){
					HX_STACK_LINE(176)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(179)
					tMat = xfA->R;
					HX_STACK_LINE(180)
					tVec = manifold->m_points->__get(i1).StaticCast< ::box2D::collision::B2ManifoldPoint >()->m_localPoint;
					HX_STACK_LINE(181)
					clipPointX = ((xfA->position->x + (tMat->col1->x * tVec->x)) + (tMat->col2->x * tVec->y));
					HX_STACK_LINE(182)
					clipPointY = ((xfA->position->y + (tMat->col1->y * tVec->x)) + (tMat->col2->y * tVec->y));
					HX_STACK_LINE(187)
					this->m_points->__get(i1).StaticCast< ::box2D::common::math::B2Vec2 >()->x = (clipPointX + ((0.5 * ((((radiusB - (((clipPointX - planePointX)) * normalX)) - (((clipPointY - planePointY)) * normalY)) - radiusA))) * normalX));
					HX_STACK_LINE(188)
					this->m_points->__get(i1).StaticCast< ::box2D::common::math::B2Vec2 >()->y = (clipPointY + ((0.5 * ((((radiusB - (((clipPointX - planePointX)) * normalX)) - (((clipPointY - planePointY)) * normalY)) - radiusA))) * normalY));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(B2WorldManifold_obj,initialize,(void))

Void B2WorldManifold_obj::reset( ){
{
		HX_STACK_PUSH("B2WorldManifold::reset","box2D/collision/B2WorldManifold.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(47)
		this->m_normal = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
		HX_STACK_LINE(49)
		this->m_points = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while(((_g1 < _g))){
				HX_STACK_LINE(50)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(52)
				this->m_points[i] = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2WorldManifold_obj,reset,(void))


B2WorldManifold_obj::B2WorldManifold_obj()
{
}

void B2WorldManifold_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2WorldManifold);
	HX_MARK_MEMBER_NAME(m_points,"m_points");
	HX_MARK_MEMBER_NAME(m_normal,"m_normal");
	HX_MARK_END_CLASS();
}

void B2WorldManifold_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_points,"m_points");
	HX_VISIT_MEMBER_NAME(m_normal,"m_normal");
}

Dynamic B2WorldManifold_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_points") ) { return m_points; }
		if (HX_FIELD_EQ(inName,"m_normal") ) { return m_normal; }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return getPoint_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2WorldManifold_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_points") ) { m_points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_normal") ) { m_normal=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2WorldManifold_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_points"));
	outFields->push(HX_CSTRING("m_normal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_points"),
	HX_CSTRING("m_normal"),
	HX_CSTRING("getPoint"),
	HX_CSTRING("initialize"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2WorldManifold_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2WorldManifold_obj::__mClass,"__mClass");
};

Class B2WorldManifold_obj::__mClass;

void B2WorldManifold_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2WorldManifold"), hx::TCanCast< B2WorldManifold_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2WorldManifold_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
