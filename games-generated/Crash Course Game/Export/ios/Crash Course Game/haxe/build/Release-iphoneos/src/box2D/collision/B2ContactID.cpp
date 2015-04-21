#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_Features
#include <box2D/collision/Features.h>
#endif
namespace box2D{
namespace collision{

Void B2ContactID_obj::__construct()
{
HX_STACK_PUSH("B2ContactID::new","box2D/collision/B2ContactID.hx",28);
{
	HX_STACK_LINE(29)
	this->features = ::box2D::collision::Features_obj::__new();
	HX_STACK_LINE(30)
	this->features->_m_id = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

B2ContactID_obj::~B2ContactID_obj() { }

Dynamic B2ContactID_obj::__CreateEmpty() { return  new B2ContactID_obj; }
hx::ObjectPtr< B2ContactID_obj > B2ContactID_obj::__new()
{  hx::ObjectPtr< B2ContactID_obj > result = new B2ContactID_obj();
	result->__construct();
	return result;}

Dynamic B2ContactID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2ContactID_obj > result = new B2ContactID_obj();
	result->__construct();
	return result;}

int B2ContactID_obj::set_key( int value){
	HX_STACK_PUSH("B2ContactID::set_key","box2D/collision/B2ContactID.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(47)
	this->_key = value;
	HX_STACK_LINE(48)
	this->features->_referenceEdge = (int(this->_key) & int((int)255));
	HX_STACK_LINE(49)
	this->features->_incidentEdge = (int((int(((int(this->_key) & int((int)65280)))) >> int((int)8))) & int((int)255));
	HX_STACK_LINE(50)
	this->features->_incidentVertex = (int((int(((int(this->_key) & int((int)16711680)))) >> int((int)16))) & int((int)255));
	HX_STACK_LINE(51)
	this->features->_flip = (int((int(((int(this->_key) & int((int)-16777216)))) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(52)
	return this->_key;
}


HX_DEFINE_DYNAMIC_FUNC1(B2ContactID_obj,set_key,return )

int B2ContactID_obj::get_key( ){
	HX_STACK_PUSH("B2ContactID::get_key","box2D/collision/B2ContactID.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_LINE(43)
	return this->_key;
}


HX_DEFINE_DYNAMIC_FUNC0(B2ContactID_obj,get_key,return )

::box2D::collision::B2ContactID B2ContactID_obj::copy( ){
	HX_STACK_PUSH("B2ContactID::copy","box2D/collision/B2ContactID.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	::box2D::collision::B2ContactID id = ::box2D::collision::B2ContactID_obj::__new();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(37)
	id->set_key(this->get_key());
	HX_STACK_LINE(38)
	return id;
}


HX_DEFINE_DYNAMIC_FUNC0(B2ContactID_obj,copy,return )

Void B2ContactID_obj::set( ::box2D::collision::B2ContactID id){
{
		HX_STACK_PUSH("B2ContactID::set","box2D/collision/B2ContactID.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id,"id");
		HX_STACK_LINE(32)
		this->set_key(id->_key);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2ContactID_obj,set,(void))

int B2ContactID_obj::VERTEX;

int B2ContactID_obj::FACE;


B2ContactID_obj::B2ContactID_obj()
{
}

void B2ContactID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactID);
	HX_MARK_MEMBER_NAME(typeB,"typeB");
	HX_MARK_MEMBER_NAME(typeA,"typeA");
	HX_MARK_MEMBER_NAME(indexB,"indexB");
	HX_MARK_MEMBER_NAME(indexA,"indexA");
	HX_MARK_MEMBER_NAME(_key,"_key");
	HX_MARK_MEMBER_NAME(features,"features");
	HX_MARK_END_CLASS();
}

void B2ContactID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(typeB,"typeB");
	HX_VISIT_MEMBER_NAME(typeA,"typeA");
	HX_VISIT_MEMBER_NAME(indexB,"indexB");
	HX_VISIT_MEMBER_NAME(indexA,"indexA");
	HX_VISIT_MEMBER_NAME(_key,"_key");
	HX_VISIT_MEMBER_NAME(features,"features");
}

Dynamic B2ContactID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return get_key(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"FACE") ) { return FACE; }
		if (HX_FIELD_EQ(inName,"_key") ) { return _key; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"typeB") ) { return typeB; }
		if (HX_FIELD_EQ(inName,"typeA") ) { return typeA; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"VERTEX") ) { return VERTEX; }
		if (HX_FIELD_EQ(inName,"indexB") ) { return indexB; }
		if (HX_FIELD_EQ(inName,"indexA") ) { return indexA; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_key") ) { return set_key_dyn(); }
		if (HX_FIELD_EQ(inName,"get_key") ) { return get_key_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"features") ) { return features; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2ContactID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return set_key(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"FACE") ) { FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_key") ) { _key=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"typeB") ) { typeB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeA") ) { typeA=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"VERTEX") ) { VERTEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexB") ) { indexB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexA") ) { indexA=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"features") ) { features=inValue.Cast< ::box2D::collision::Features >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactID_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("typeB"));
	outFields->push(HX_CSTRING("typeA"));
	outFields->push(HX_CSTRING("indexB"));
	outFields->push(HX_CSTRING("indexA"));
	outFields->push(HX_CSTRING("_key"));
	outFields->push(HX_CSTRING("features"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERTEX"),
	HX_CSTRING("FACE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("typeB"),
	HX_CSTRING("typeA"),
	HX_CSTRING("indexB"),
	HX_CSTRING("indexA"),
	HX_CSTRING("_key"),
	HX_CSTRING("features"),
	HX_CSTRING("set_key"),
	HX_CSTRING("get_key"),
	HX_CSTRING("copy"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2ContactID_obj::VERTEX,"VERTEX");
	HX_MARK_MEMBER_NAME(B2ContactID_obj::FACE,"FACE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2ContactID_obj::VERTEX,"VERTEX");
	HX_VISIT_MEMBER_NAME(B2ContactID_obj::FACE,"FACE");
};

Class B2ContactID_obj::__mClass;

void B2ContactID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2ContactID"), hx::TCanCast< B2ContactID_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2ContactID_obj::__boot()
{
	VERTEX= (int)0;
	FACE= (int)1;
}

} // end namespace box2D
} // end namespace collision
