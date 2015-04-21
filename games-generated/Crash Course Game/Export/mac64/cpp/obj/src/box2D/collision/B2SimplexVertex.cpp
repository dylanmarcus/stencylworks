#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2SimplexVertex
#include <box2D/collision/B2SimplexVertex.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
namespace box2D{
namespace collision{

Void B2SimplexVertex_obj::__construct()
{
HX_STACK_PUSH("B2SimplexVertex::new","box2D/collision/B2SimplexVertex.hx",27);
{
}
;
	return null();
}

B2SimplexVertex_obj::~B2SimplexVertex_obj() { }

Dynamic B2SimplexVertex_obj::__CreateEmpty() { return  new B2SimplexVertex_obj; }
hx::ObjectPtr< B2SimplexVertex_obj > B2SimplexVertex_obj::__new()
{  hx::ObjectPtr< B2SimplexVertex_obj > result = new B2SimplexVertex_obj();
	result->__construct();
	return result;}

Dynamic B2SimplexVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2SimplexVertex_obj > result = new B2SimplexVertex_obj();
	result->__construct();
	return result;}

Void B2SimplexVertex_obj::set( ::box2D::collision::B2SimplexVertex other){
{
		HX_STACK_PUSH("B2SimplexVertex::set","box2D/collision/B2SimplexVertex.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(other,"other");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			::box2D::common::math::B2Vec2 _this = this->wA;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = other->wA;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(30)
			_this->x = v->x;
			HX_STACK_LINE(30)
			_this->y = v->y;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::box2D::common::math::B2Vec2 _this = this->wB;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = other->wB;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(31)
			_this->x = v->x;
			HX_STACK_LINE(31)
			_this->y = v->y;
		}
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			::box2D::common::math::B2Vec2 _this = this->w;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = other->w;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(32)
			_this->x = v->x;
			HX_STACK_LINE(32)
			_this->y = v->y;
		}
		HX_STACK_LINE(33)
		this->a = other->a;
		HX_STACK_LINE(34)
		this->indexA = other->indexA;
		HX_STACK_LINE(35)
		this->indexB = other->indexB;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2SimplexVertex_obj,set,(void))


B2SimplexVertex_obj::B2SimplexVertex_obj()
{
}

void B2SimplexVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2SimplexVertex);
	HX_MARK_MEMBER_NAME(indexB,"indexB");
	HX_MARK_MEMBER_NAME(indexA,"indexA");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(wB,"wB");
	HX_MARK_MEMBER_NAME(wA,"wA");
	HX_MARK_END_CLASS();
}

void B2SimplexVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(indexB,"indexB");
	HX_VISIT_MEMBER_NAME(indexA,"indexA");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(wB,"wB");
	HX_VISIT_MEMBER_NAME(wA,"wA");
}

Dynamic B2SimplexVertex_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"wB") ) { return wB; }
		if (HX_FIELD_EQ(inName,"wA") ) { return wA; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indexB") ) { return indexB; }
		if (HX_FIELD_EQ(inName,"indexA") ) { return indexA; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2SimplexVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"wB") ) { wB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wA") ) { wA=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indexB") ) { indexB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexA") ) { indexA=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2SimplexVertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("indexB"));
	outFields->push(HX_CSTRING("indexA"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("wB"));
	outFields->push(HX_CSTRING("wA"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("indexB"),
	HX_CSTRING("indexA"),
	HX_CSTRING("a"),
	HX_CSTRING("w"),
	HX_CSTRING("wB"),
	HX_CSTRING("wA"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2SimplexVertex_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2SimplexVertex_obj::__mClass,"__mClass");
};

Class B2SimplexVertex_obj::__mClass;

void B2SimplexVertex_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2SimplexVertex"), hx::TCanCast< B2SimplexVertex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2SimplexVertex_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
