#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
namespace box2D{
namespace collision{

Void B2Manifold_obj::__construct()
{
HX_STACK_PUSH("B2Manifold::new","box2D/collision/B2Manifold.hx",46);
{
	HX_STACK_LINE(47)
	this->m_pointCount = (int)0;
	HX_STACK_LINE(48)
	this->m_points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		while(((_g1 < _g))){
			HX_STACK_LINE(49)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(50)
			this->m_points[i] = ::box2D::collision::B2ManifoldPoint_obj::__new();
		}
	}
	HX_STACK_LINE(52)
	this->m_localPlaneNormal = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(53)
	this->m_localPoint = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
}
;
	return null();
}

B2Manifold_obj::~B2Manifold_obj() { }

Dynamic B2Manifold_obj::__CreateEmpty() { return  new B2Manifold_obj; }
hx::ObjectPtr< B2Manifold_obj > B2Manifold_obj::__new()
{  hx::ObjectPtr< B2Manifold_obj > result = new B2Manifold_obj();
	result->__construct();
	return result;}

Dynamic B2Manifold_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Manifold_obj > result = new B2Manifold_obj();
	result->__construct();
	return result;}

::box2D::collision::B2Manifold B2Manifold_obj::copy( ){
	HX_STACK_PUSH("B2Manifold::copy","box2D/collision/B2Manifold.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	::box2D::collision::B2Manifold copy = ::box2D::collision::B2Manifold_obj::__new();		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(76)
	copy->set(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(77)
	return copy;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Manifold_obj,copy,return )

Void B2Manifold_obj::set( ::box2D::collision::B2Manifold m){
{
		HX_STACK_PUSH("B2Manifold::set","box2D/collision/B2Manifold.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(65)
		this->m_pointCount = m->m_pointCount;
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			while(((_g1 < _g))){
				HX_STACK_LINE(66)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(67)
				this->m_points->__get(i).StaticCast< ::box2D::collision::B2ManifoldPoint >()->set(m->m_points->__get(i).StaticCast< ::box2D::collision::B2ManifoldPoint >());
			}
		}
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::box2D::common::math::B2Vec2 _this = this->m_localPlaneNormal;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = m->m_localPlaneNormal;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(69)
			_this->x = v->x;
			HX_STACK_LINE(69)
			_this->y = v->y;
		}
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::box2D::common::math::B2Vec2 _this = this->m_localPoint;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = m->m_localPoint;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(70)
			_this->x = v->x;
			HX_STACK_LINE(70)
			_this->y = v->y;
		}
		HX_STACK_LINE(71)
		this->m_type = m->m_type;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Manifold_obj,set,(void))

Void B2Manifold_obj::reset( ){
{
		HX_STACK_PUSH("B2Manifold::reset","box2D/collision/B2Manifold.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while(((_g1 < _g))){
				HX_STACK_LINE(56)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				this->m_points->__get(i).StaticCast< ::box2D::collision::B2ManifoldPoint >()->reset();
			}
		}
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::box2D::common::math::B2Vec2 _this = this->m_localPlaneNormal;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(59)
			_this->x = 0.0;
			HX_STACK_LINE(59)
			_this->y = 0.0;
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::box2D::common::math::B2Vec2 _this = this->m_localPoint;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(60)
			_this->x = 0.0;
			HX_STACK_LINE(60)
			_this->y = 0.0;
		}
		HX_STACK_LINE(61)
		this->m_type = (int)0;
		HX_STACK_LINE(62)
		this->m_pointCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Manifold_obj,reset,(void))

int B2Manifold_obj::e_circles;

int B2Manifold_obj::e_faceA;

int B2Manifold_obj::e_faceB;


B2Manifold_obj::B2Manifold_obj()
{
}

void B2Manifold_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Manifold);
	HX_MARK_MEMBER_NAME(m_pointCount,"m_pointCount");
	HX_MARK_MEMBER_NAME(m_type,"m_type");
	HX_MARK_MEMBER_NAME(m_localPoint,"m_localPoint");
	HX_MARK_MEMBER_NAME(m_localPlaneNormal,"m_localPlaneNormal");
	HX_MARK_MEMBER_NAME(m_points,"m_points");
	HX_MARK_END_CLASS();
}

void B2Manifold_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_pointCount,"m_pointCount");
	HX_VISIT_MEMBER_NAME(m_type,"m_type");
	HX_VISIT_MEMBER_NAME(m_localPoint,"m_localPoint");
	HX_VISIT_MEMBER_NAME(m_localPlaneNormal,"m_localPlaneNormal");
	HX_VISIT_MEMBER_NAME(m_points,"m_points");
}

Dynamic B2Manifold_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_type") ) { return m_type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"e_faceA") ) { return e_faceA; }
		if (HX_FIELD_EQ(inName,"e_faceB") ) { return e_faceB; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_points") ) { return m_points; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"e_circles") ) { return e_circles; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_pointCount") ) { return m_pointCount; }
		if (HX_FIELD_EQ(inName,"m_localPoint") ) { return m_localPoint; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_localPlaneNormal") ) { return m_localPlaneNormal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Manifold_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_type") ) { m_type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"e_faceA") ) { e_faceA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_faceB") ) { e_faceB=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_points") ) { m_points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"e_circles") ) { e_circles=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_pointCount") ) { m_pointCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localPoint") ) { m_localPoint=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_localPlaneNormal") ) { m_localPlaneNormal=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Manifold_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_pointCount"));
	outFields->push(HX_CSTRING("m_type"));
	outFields->push(HX_CSTRING("m_localPoint"));
	outFields->push(HX_CSTRING("m_localPlaneNormal"));
	outFields->push(HX_CSTRING("m_points"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("e_circles"),
	HX_CSTRING("e_faceA"),
	HX_CSTRING("e_faceB"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_pointCount"),
	HX_CSTRING("m_type"),
	HX_CSTRING("m_localPoint"),
	HX_CSTRING("m_localPlaneNormal"),
	HX_CSTRING("m_points"),
	HX_CSTRING("copy"),
	HX_CSTRING("set"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Manifold_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Manifold_obj::e_circles,"e_circles");
	HX_MARK_MEMBER_NAME(B2Manifold_obj::e_faceA,"e_faceA");
	HX_MARK_MEMBER_NAME(B2Manifold_obj::e_faceB,"e_faceB");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Manifold_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Manifold_obj::e_circles,"e_circles");
	HX_VISIT_MEMBER_NAME(B2Manifold_obj::e_faceA,"e_faceA");
	HX_VISIT_MEMBER_NAME(B2Manifold_obj::e_faceB,"e_faceB");
};

Class B2Manifold_obj::__mClass;

void B2Manifold_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2Manifold"), hx::TCanCast< B2Manifold_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Manifold_obj::__boot()
{
	e_circles= (int)1;
	e_faceA= (int)2;
	e_faceB= (int)4;
}

} // end namespace box2D
} // end namespace collision
