#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_Features
#include <box2D/collision/Features.h>
#endif
namespace box2D{
namespace collision{

Void Features_obj::__construct()
{
HX_STACK_PUSH("Features::new","box2D/collision/Features.hx",29);
{
}
;
	return null();
}

Features_obj::~Features_obj() { }

Dynamic Features_obj::__CreateEmpty() { return  new Features_obj; }
hx::ObjectPtr< Features_obj > Features_obj::__new()
{  hx::ObjectPtr< Features_obj > result = new Features_obj();
	result->__construct();
	return result;}

Dynamic Features_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Features_obj > result = new Features_obj();
	result->__construct();
	return result;}

int Features_obj::set_flip( int value){
	HX_STACK_PUSH("Features::set_flip","box2D/collision/Features.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(88)
	this->_flip = value;
	HX_STACK_LINE(89)
	this->_m_id->_key = (int((int(this->_m_id->_key) & int((int)16777215))) | int((int((int(this->_flip) << int((int)24))) & int((int)-16777216))));
	HX_STACK_LINE(90)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Features_obj,set_flip,return )

int Features_obj::get_flip( ){
	HX_STACK_PUSH("Features::get_flip","box2D/collision/Features.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return this->_flip;
}


HX_DEFINE_DYNAMIC_FUNC0(Features_obj,get_flip,return )

int Features_obj::set_incidentVertex( int value){
	HX_STACK_PUSH("Features::set_incidentVertex","box2D/collision/Features.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(73)
	this->_incidentVertex = value;
	HX_STACK_LINE(74)
	this->_m_id->_key = (int((int(this->_m_id->_key) & int((int)-16711681))) | int((int((int(this->_incidentVertex) << int((int)16))) & int((int)16711680))));
	HX_STACK_LINE(75)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Features_obj,set_incidentVertex,return )

int Features_obj::get_incidentVertex( ){
	HX_STACK_PUSH("Features::get_incidentVertex","box2D/collision/Features.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->_incidentVertex;
}


HX_DEFINE_DYNAMIC_FUNC0(Features_obj,get_incidentVertex,return )

int Features_obj::set_incidentEdge( int value){
	HX_STACK_PUSH("Features::set_incidentEdge","box2D/collision/Features.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(58)
	this->_incidentEdge = value;
	HX_STACK_LINE(59)
	this->_m_id->_key = (int((int(this->_m_id->_key) & int((int)-65281))) | int((int((int(this->_incidentEdge) << int((int)8))) & int((int)65280))));
	HX_STACK_LINE(60)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Features_obj,set_incidentEdge,return )

int Features_obj::get_incidentEdge( ){
	HX_STACK_PUSH("Features::get_incidentEdge","box2D/collision/Features.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->_incidentEdge;
}


HX_DEFINE_DYNAMIC_FUNC0(Features_obj,get_incidentEdge,return )

int Features_obj::set_referenceEdge( int value){
	HX_STACK_PUSH("Features::set_referenceEdge","box2D/collision/Features.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(43)
	this->_referenceEdge = value;
	HX_STACK_LINE(44)
	this->_m_id->_key = (int((int(this->_m_id->_key) & int((int)-256))) | int((int(this->_referenceEdge) & int((int)255))));
	HX_STACK_LINE(45)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Features_obj,set_referenceEdge,return )

int Features_obj::get_referenceEdge( ){
	HX_STACK_PUSH("Features::get_referenceEdge","box2D/collision/Features.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->_referenceEdge;
}


HX_DEFINE_DYNAMIC_FUNC0(Features_obj,get_referenceEdge,return )


Features_obj::Features_obj()
{
}

void Features_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Features);
	HX_MARK_MEMBER_NAME(_m_id,"_m_id");
	HX_MARK_MEMBER_NAME(_flip,"_flip");
	HX_MARK_MEMBER_NAME(_incidentVertex,"_incidentVertex");
	HX_MARK_MEMBER_NAME(_incidentEdge,"_incidentEdge");
	HX_MARK_MEMBER_NAME(_referenceEdge,"_referenceEdge");
	HX_MARK_END_CLASS();
}

void Features_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_m_id,"_m_id");
	HX_VISIT_MEMBER_NAME(_flip,"_flip");
	HX_VISIT_MEMBER_NAME(_incidentVertex,"_incidentVertex");
	HX_VISIT_MEMBER_NAME(_incidentEdge,"_incidentEdge");
	HX_VISIT_MEMBER_NAME(_referenceEdge,"_referenceEdge");
}

Dynamic Features_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return get_flip(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_m_id") ) { return _m_id; }
		if (HX_FIELD_EQ(inName,"_flip") ) { return _flip; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_flip") ) { return set_flip_dyn(); }
		if (HX_FIELD_EQ(inName,"get_flip") ) { return get_flip_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"incidentEdge") ) { return get_incidentEdge(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_incidentEdge") ) { return _incidentEdge; }
		if (HX_FIELD_EQ(inName,"referenceEdge") ) { return get_referenceEdge(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"incidentVertex") ) { return get_incidentVertex(); }
		if (HX_FIELD_EQ(inName,"_referenceEdge") ) { return _referenceEdge; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_incidentVertex") ) { return _incidentVertex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_incidentEdge") ) { return set_incidentEdge_dyn(); }
		if (HX_FIELD_EQ(inName,"get_incidentEdge") ) { return get_incidentEdge_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_referenceEdge") ) { return set_referenceEdge_dyn(); }
		if (HX_FIELD_EQ(inName,"get_referenceEdge") ) { return get_referenceEdge_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_incidentVertex") ) { return set_incidentVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_incidentVertex") ) { return get_incidentVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Features_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return set_flip(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_m_id") ) { _m_id=inValue.Cast< ::box2D::collision::B2ContactID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flip") ) { _flip=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"incidentEdge") ) { return set_incidentEdge(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_incidentEdge") ) { _incidentEdge=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"referenceEdge") ) { return set_referenceEdge(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"incidentVertex") ) { return set_incidentVertex(inValue); }
		if (HX_FIELD_EQ(inName,"_referenceEdge") ) { _referenceEdge=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_incidentVertex") ) { _incidentVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Features_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_m_id"));
	outFields->push(HX_CSTRING("_flip"));
	outFields->push(HX_CSTRING("flip"));
	outFields->push(HX_CSTRING("_incidentVertex"));
	outFields->push(HX_CSTRING("incidentVertex"));
	outFields->push(HX_CSTRING("_incidentEdge"));
	outFields->push(HX_CSTRING("incidentEdge"));
	outFields->push(HX_CSTRING("_referenceEdge"));
	outFields->push(HX_CSTRING("referenceEdge"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_m_id"),
	HX_CSTRING("_flip"),
	HX_CSTRING("set_flip"),
	HX_CSTRING("get_flip"),
	HX_CSTRING("_incidentVertex"),
	HX_CSTRING("set_incidentVertex"),
	HX_CSTRING("get_incidentVertex"),
	HX_CSTRING("_incidentEdge"),
	HX_CSTRING("set_incidentEdge"),
	HX_CSTRING("get_incidentEdge"),
	HX_CSTRING("_referenceEdge"),
	HX_CSTRING("set_referenceEdge"),
	HX_CSTRING("get_referenceEdge"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Features_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Features_obj::__mClass,"__mClass");
};

Class Features_obj::__mClass;

void Features_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.Features"), hx::TCanCast< Features_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Features_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
