#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
namespace box2D{
namespace collision{

Void B2ManifoldPoint_obj::__construct()
{
HX_STACK_PUSH("B2ManifoldPoint::new","box2D/collision/B2ManifoldPoint.hx",40);
{
	HX_STACK_LINE(41)
	this->m_localPoint = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(42)
	this->m_id = ::box2D::collision::B2ContactID_obj::__new();
	HX_STACK_LINE(43)
	this->reset();
}
;
	return null();
}

B2ManifoldPoint_obj::~B2ManifoldPoint_obj() { }

Dynamic B2ManifoldPoint_obj::__CreateEmpty() { return  new B2ManifoldPoint_obj; }
hx::ObjectPtr< B2ManifoldPoint_obj > B2ManifoldPoint_obj::__new()
{  hx::ObjectPtr< B2ManifoldPoint_obj > result = new B2ManifoldPoint_obj();
	result->__construct();
	return result;}

Dynamic B2ManifoldPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2ManifoldPoint_obj > result = new B2ManifoldPoint_obj();
	result->__construct();
	return result;}

Void B2ManifoldPoint_obj::set( ::box2D::collision::B2ManifoldPoint m){
{
		HX_STACK_PUSH("B2ManifoldPoint::set","box2D/collision/B2ManifoldPoint.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::box2D::common::math::B2Vec2 _this = this->m_localPoint;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = m->m_localPoint;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(52)
			_this->x = v->x;
			HX_STACK_LINE(52)
			_this->y = v->y;
		}
		HX_STACK_LINE(53)
		this->m_normalImpulse = m->m_normalImpulse;
		HX_STACK_LINE(54)
		this->m_tangentImpulse = m->m_tangentImpulse;
		HX_STACK_LINE(55)
		this->m_id->set(m->m_id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2ManifoldPoint_obj,set,(void))

Void B2ManifoldPoint_obj::reset( ){
{
		HX_STACK_PUSH("B2ManifoldPoint::reset","box2D/collision/B2ManifoldPoint.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::box2D::common::math::B2Vec2 _this = this->m_localPoint;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			_this->x = 0.0;
			HX_STACK_LINE(46)
			_this->y = 0.0;
		}
		HX_STACK_LINE(47)
		this->m_normalImpulse = 0.0;
		HX_STACK_LINE(48)
		this->m_tangentImpulse = 0.0;
		HX_STACK_LINE(49)
		this->m_id->set_key((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2ManifoldPoint_obj,reset,(void))


B2ManifoldPoint_obj::B2ManifoldPoint_obj()
{
}

void B2ManifoldPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ManifoldPoint);
	HX_MARK_MEMBER_NAME(m_id,"m_id");
	HX_MARK_MEMBER_NAME(m_tangentImpulse,"m_tangentImpulse");
	HX_MARK_MEMBER_NAME(m_normalImpulse,"m_normalImpulse");
	HX_MARK_MEMBER_NAME(m_localPoint,"m_localPoint");
	HX_MARK_END_CLASS();
}

void B2ManifoldPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_id,"m_id");
	HX_VISIT_MEMBER_NAME(m_tangentImpulse,"m_tangentImpulse");
	HX_VISIT_MEMBER_NAME(m_normalImpulse,"m_normalImpulse");
	HX_VISIT_MEMBER_NAME(m_localPoint,"m_localPoint");
}

Dynamic B2ManifoldPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_id") ) { return m_id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_localPoint") ) { return m_localPoint; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_normalImpulse") ) { return m_normalImpulse; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_tangentImpulse") ) { return m_tangentImpulse; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2ManifoldPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_id") ) { m_id=inValue.Cast< ::box2D::collision::B2ContactID >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_localPoint") ) { m_localPoint=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_normalImpulse") ) { m_normalImpulse=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_tangentImpulse") ) { m_tangentImpulse=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ManifoldPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_id"));
	outFields->push(HX_CSTRING("m_tangentImpulse"));
	outFields->push(HX_CSTRING("m_normalImpulse"));
	outFields->push(HX_CSTRING("m_localPoint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_id"),
	HX_CSTRING("m_tangentImpulse"),
	HX_CSTRING("m_normalImpulse"),
	HX_CSTRING("m_localPoint"),
	HX_CSTRING("set"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ManifoldPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ManifoldPoint_obj::__mClass,"__mClass");
};

Class B2ManifoldPoint_obj::__mClass;

void B2ManifoldPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2ManifoldPoint"), hx::TCanCast< B2ManifoldPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2ManifoldPoint_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
