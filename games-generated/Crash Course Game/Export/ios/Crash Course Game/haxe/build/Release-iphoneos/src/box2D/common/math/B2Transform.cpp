#include <hxcpp.h>

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
namespace common{
namespace math{

Void B2Transform_obj::__construct(::box2D::common::math::B2Vec2 pos,::box2D::common::math::B2Mat22 r)
{
HX_STACK_PUSH("B2Transform::new","box2D/common/math/B2Transform.hx",32);
{
	HX_STACK_LINE(34)
	this->position = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(35)
	this->R = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(37)
	if (((pos != null()))){
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::box2D::common::math::B2Vec2 _this = this->position;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(39)
			_this->x = pos->x;
			HX_STACK_LINE(39)
			_this->y = pos->y;
		}
		HX_STACK_LINE(40)
		this->R->setM(r);
	}
}
;
	return null();
}

B2Transform_obj::~B2Transform_obj() { }

Dynamic B2Transform_obj::__CreateEmpty() { return  new B2Transform_obj; }
hx::ObjectPtr< B2Transform_obj > B2Transform_obj::__new(::box2D::common::math::B2Vec2 pos,::box2D::common::math::B2Mat22 r)
{  hx::ObjectPtr< B2Transform_obj > result = new B2Transform_obj();
	result->__construct(pos,r);
	return result;}

Dynamic B2Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Transform_obj > result = new B2Transform_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::box2D::common::math::B2Vec2 B2Transform_obj::multiply( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("B2Transform::multiply","box2D/common/math/B2Transform.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(81)
	::box2D::common::math::B2Vec2 v2 = this->R->multiplyV(v);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(82)
	v2->add(this->position);
	HX_STACK_LINE(83)
	return v2;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Transform_obj,multiply,return )

Float B2Transform_obj::getAngle( ){
	HX_STACK_PUSH("B2Transform::getAngle","box2D/common/math/B2Transform.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	return ::Math_obj::atan2(this->R->col1->y,this->R->col1->x);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Transform_obj,getAngle,return )

Void B2Transform_obj::set( ::box2D::common::math::B2Transform x){
{
		HX_STACK_PUSH("B2Transform::set","box2D/common/math/B2Transform.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::box2D::common::math::B2Vec2 _this = this->position;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = x->position;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(65)
			_this->x = v->x;
			HX_STACK_LINE(65)
			_this->y = v->y;
		}
		HX_STACK_LINE(67)
		this->R->setM(x->R);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Transform_obj,set,(void))

Void B2Transform_obj::setIdentity( ){
{
		HX_STACK_PUSH("B2Transform::setIdentity","box2D/common/math/B2Transform.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::box2D::common::math::B2Vec2 _this = this->position;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(59)
			_this->x = 0.0;
			HX_STACK_LINE(59)
			_this->y = 0.0;
		}
		HX_STACK_LINE(60)
		this->R->setIdentity();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Transform_obj,setIdentity,(void))

Void B2Transform_obj::initialize( ::box2D::common::math::B2Vec2 pos,::box2D::common::math::B2Mat22 r){
{
		HX_STACK_PUSH("B2Transform::initialize","box2D/common/math/B2Transform.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pos,"pos");
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::box2D::common::math::B2Vec2 _this = this->position;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(50)
			_this->x = pos->x;
			HX_STACK_LINE(50)
			_this->y = pos->y;
		}
		HX_STACK_LINE(51)
		this->R->setM(r);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Transform_obj,initialize,(void))


B2Transform_obj::B2Transform_obj()
{
}

void B2Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Transform);
	HX_MARK_MEMBER_NAME(R,"R");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_END_CLASS();
}

void B2Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(R,"R");
	HX_VISIT_MEMBER_NAME(position,"position");
}

Dynamic B2Transform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"R") ) { return R; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setIdentity") ) { return setIdentity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"R") ) { R=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("R"));
	outFields->push(HX_CSTRING("position"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("R"),
	HX_CSTRING("position"),
	HX_CSTRING("multiply"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("set"),
	HX_CSTRING("setIdentity"),
	HX_CSTRING("initialize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Transform_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Transform_obj::__mClass,"__mClass");
};

Class B2Transform_obj::__mClass;

void B2Transform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.common.math.B2Transform"), hx::TCanCast< B2Transform_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Transform_obj::__boot()
{
}

} // end namespace box2D
} // end namespace common
} // end namespace math
