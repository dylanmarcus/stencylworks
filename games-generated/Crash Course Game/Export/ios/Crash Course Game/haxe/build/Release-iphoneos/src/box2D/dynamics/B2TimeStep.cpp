#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
namespace box2D{
namespace dynamics{

Void B2TimeStep_obj::__construct()
{
HX_STACK_PUSH("B2TimeStep::new","box2D/dynamics/B2TimeStep.hx",27);
{
}
;
	return null();
}

B2TimeStep_obj::~B2TimeStep_obj() { }

Dynamic B2TimeStep_obj::__CreateEmpty() { return  new B2TimeStep_obj; }
hx::ObjectPtr< B2TimeStep_obj > B2TimeStep_obj::__new()
{  hx::ObjectPtr< B2TimeStep_obj > result = new B2TimeStep_obj();
	result->__construct();
	return result;}

Dynamic B2TimeStep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2TimeStep_obj > result = new B2TimeStep_obj();
	result->__construct();
	return result;}

Void B2TimeStep_obj::set( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2TimeStep::set","box2D/dynamics/B2TimeStep.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(30)
		this->dt = step->dt;
		HX_STACK_LINE(31)
		this->inv_dt = step->inv_dt;
		HX_STACK_LINE(32)
		this->positionIterations = step->positionIterations;
		HX_STACK_LINE(33)
		this->velocityIterations = step->velocityIterations;
		HX_STACK_LINE(34)
		this->warmStarting = step->warmStarting;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2TimeStep_obj,set,(void))


B2TimeStep_obj::B2TimeStep_obj()
{
}

void B2TimeStep_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2TimeStep);
	HX_MARK_MEMBER_NAME(warmStarting,"warmStarting");
	HX_MARK_MEMBER_NAME(positionIterations,"positionIterations");
	HX_MARK_MEMBER_NAME(velocityIterations,"velocityIterations");
	HX_MARK_MEMBER_NAME(dtRatio,"dtRatio");
	HX_MARK_MEMBER_NAME(inv_dt,"inv_dt");
	HX_MARK_MEMBER_NAME(dt,"dt");
	HX_MARK_END_CLASS();
}

void B2TimeStep_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(warmStarting,"warmStarting");
	HX_VISIT_MEMBER_NAME(positionIterations,"positionIterations");
	HX_VISIT_MEMBER_NAME(velocityIterations,"velocityIterations");
	HX_VISIT_MEMBER_NAME(dtRatio,"dtRatio");
	HX_VISIT_MEMBER_NAME(inv_dt,"inv_dt");
	HX_VISIT_MEMBER_NAME(dt,"dt");
}

Dynamic B2TimeStep_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dt") ) { return dt; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inv_dt") ) { return inv_dt; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtRatio") ) { return dtRatio; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warmStarting") ) { return warmStarting; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"positionIterations") ) { return positionIterations; }
		if (HX_FIELD_EQ(inName,"velocityIterations") ) { return velocityIterations; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2TimeStep_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dt") ) { dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inv_dt") ) { inv_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtRatio") ) { dtRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warmStarting") ) { warmStarting=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"positionIterations") ) { positionIterations=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocityIterations") ) { velocityIterations=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2TimeStep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("warmStarting"));
	outFields->push(HX_CSTRING("positionIterations"));
	outFields->push(HX_CSTRING("velocityIterations"));
	outFields->push(HX_CSTRING("dtRatio"));
	outFields->push(HX_CSTRING("inv_dt"));
	outFields->push(HX_CSTRING("dt"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("warmStarting"),
	HX_CSTRING("positionIterations"),
	HX_CSTRING("velocityIterations"),
	HX_CSTRING("dtRatio"),
	HX_CSTRING("inv_dt"),
	HX_CSTRING("dt"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2TimeStep_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2TimeStep_obj::__mClass,"__mClass");
};

Class B2TimeStep_obj::__mClass;

void B2TimeStep_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2TimeStep"), hx::TCanCast< B2TimeStep_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2TimeStep_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
