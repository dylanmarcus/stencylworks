#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_event_StencylEvent
#include <com/stencyl/event/StencylEvent.h>
#endif
namespace com{
namespace stencyl{
namespace event{

Void StencylEvent_obj::__construct(int type,::String __o_data1)
{
HX_STACK_PUSH("StencylEvent::new","com/stencyl/event/StencylEvent.hx",40);
::String data1 = __o_data1.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(41)
	this->type = type;
	HX_STACK_LINE(42)
	this->data1 = data1;
}
;
	return null();
}

StencylEvent_obj::~StencylEvent_obj() { }

Dynamic StencylEvent_obj::__CreateEmpty() { return  new StencylEvent_obj; }
hx::ObjectPtr< StencylEvent_obj > StencylEvent_obj::__new(int type,::String __o_data1)
{  hx::ObjectPtr< StencylEvent_obj > result = new StencylEvent_obj();
	result->__construct(type,__o_data1);
	return result;}

Dynamic StencylEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StencylEvent_obj > result = new StencylEvent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int StencylEvent_obj::AD_USER_OPEN;

int StencylEvent_obj::AD_USER_CLOSE;

int StencylEvent_obj::AD_LOADED;

int StencylEvent_obj::AD_FAILED;

int StencylEvent_obj::PURCHASE_READY;

int StencylEvent_obj::PURCHASE_SUCCESS;

int StencylEvent_obj::PURCHASE_FAIL;

int StencylEvent_obj::PURCHASE_RESTORE;

int StencylEvent_obj::PURCHASE_CANCEL;

int StencylEvent_obj::PURCHASE_PRODUCTS_VERIFIED;

int StencylEvent_obj::GAME_CENTER_READY;

int StencylEvent_obj::GAME_CENTER_SCORE;

int StencylEvent_obj::GAME_CENTER_ACHIEVEMENT;

int StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET;

int StencylEvent_obj::GAME_CENTER_READY_FAIL;

int StencylEvent_obj::GAME_CENTER_SCORE_FAIL;

int StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_FAIL;

int StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET_FAIL;

int StencylEvent_obj::KEYBOARD_EVENT;

int StencylEvent_obj::KEYBOARD_DONE;

int StencylEvent_obj::KEYBOARD_SHOW;

int StencylEvent_obj::KEYBOARD_HIDE;


StencylEvent_obj::StencylEvent_obj()
{
}

void StencylEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StencylEvent);
	HX_MARK_MEMBER_NAME(data1,"data1");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void StencylEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data1,"data1");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic StencylEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"data1") ) { return data1; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AD_LOADED") ) { return AD_LOADED; }
		if (HX_FIELD_EQ(inName,"AD_FAILED") ) { return AD_FAILED; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"AD_USER_OPEN") ) { return AD_USER_OPEN; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"AD_USER_CLOSE") ) { return AD_USER_CLOSE; }
		if (HX_FIELD_EQ(inName,"PURCHASE_FAIL") ) { return PURCHASE_FAIL; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_DONE") ) { return KEYBOARD_DONE; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_SHOW") ) { return KEYBOARD_SHOW; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_HIDE") ) { return KEYBOARD_HIDE; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PURCHASE_READY") ) { return PURCHASE_READY; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_EVENT") ) { return KEYBOARD_EVENT; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PURCHASE_CANCEL") ) { return PURCHASE_CANCEL; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PURCHASE_SUCCESS") ) { return PURCHASE_SUCCESS; }
		if (HX_FIELD_EQ(inName,"PURCHASE_RESTORE") ) { return PURCHASE_RESTORE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_READY") ) { return GAME_CENTER_READY; }
		if (HX_FIELD_EQ(inName,"GAME_CENTER_SCORE") ) { return GAME_CENTER_SCORE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_READY_FAIL") ) { return GAME_CENTER_READY_FAIL; }
		if (HX_FIELD_EQ(inName,"GAME_CENTER_SCORE_FAIL") ) { return GAME_CENTER_SCORE_FAIL; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT") ) { return GAME_CENTER_ACHIEVEMENT; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"PURCHASE_PRODUCTS_VERIFIED") ) { return PURCHASE_PRODUCTS_VERIFIED; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT_FAIL") ) { return GAME_CENTER_ACHIEVEMENT_FAIL; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT_RESET") ) { return GAME_CENTER_ACHIEVEMENT_RESET; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT_RESET_FAIL") ) { return GAME_CENTER_ACHIEVEMENT_RESET_FAIL; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StencylEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"data1") ) { data1=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"AD_LOADED") ) { AD_LOADED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"AD_FAILED") ) { AD_FAILED=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"AD_USER_OPEN") ) { AD_USER_OPEN=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"AD_USER_CLOSE") ) { AD_USER_CLOSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PURCHASE_FAIL") ) { PURCHASE_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_DONE") ) { KEYBOARD_DONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_SHOW") ) { KEYBOARD_SHOW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_HIDE") ) { KEYBOARD_HIDE=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PURCHASE_READY") ) { PURCHASE_READY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYBOARD_EVENT") ) { KEYBOARD_EVENT=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"PURCHASE_CANCEL") ) { PURCHASE_CANCEL=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"PURCHASE_SUCCESS") ) { PURCHASE_SUCCESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PURCHASE_RESTORE") ) { PURCHASE_RESTORE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_READY") ) { GAME_CENTER_READY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAME_CENTER_SCORE") ) { GAME_CENTER_SCORE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_READY_FAIL") ) { GAME_CENTER_READY_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAME_CENTER_SCORE_FAIL") ) { GAME_CENTER_SCORE_FAIL=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT") ) { GAME_CENTER_ACHIEVEMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"PURCHASE_PRODUCTS_VERIFIED") ) { PURCHASE_PRODUCTS_VERIFIED=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT_FAIL") ) { GAME_CENTER_ACHIEVEMENT_FAIL=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT_RESET") ) { GAME_CENTER_ACHIEVEMENT_RESET=inValue.Cast< int >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"GAME_CENTER_ACHIEVEMENT_RESET_FAIL") ) { GAME_CENTER_ACHIEVEMENT_RESET_FAIL=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StencylEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data1"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("AD_USER_OPEN"),
	HX_CSTRING("AD_USER_CLOSE"),
	HX_CSTRING("AD_LOADED"),
	HX_CSTRING("AD_FAILED"),
	HX_CSTRING("PURCHASE_READY"),
	HX_CSTRING("PURCHASE_SUCCESS"),
	HX_CSTRING("PURCHASE_FAIL"),
	HX_CSTRING("PURCHASE_RESTORE"),
	HX_CSTRING("PURCHASE_CANCEL"),
	HX_CSTRING("PURCHASE_PRODUCTS_VERIFIED"),
	HX_CSTRING("GAME_CENTER_READY"),
	HX_CSTRING("GAME_CENTER_SCORE"),
	HX_CSTRING("GAME_CENTER_ACHIEVEMENT"),
	HX_CSTRING("GAME_CENTER_ACHIEVEMENT_RESET"),
	HX_CSTRING("GAME_CENTER_READY_FAIL"),
	HX_CSTRING("GAME_CENTER_SCORE_FAIL"),
	HX_CSTRING("GAME_CENTER_ACHIEVEMENT_FAIL"),
	HX_CSTRING("GAME_CENTER_ACHIEVEMENT_RESET_FAIL"),
	HX_CSTRING("KEYBOARD_EVENT"),
	HX_CSTRING("KEYBOARD_DONE"),
	HX_CSTRING("KEYBOARD_SHOW"),
	HX_CSTRING("KEYBOARD_HIDE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("data1"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StencylEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::AD_USER_OPEN,"AD_USER_OPEN");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::AD_USER_CLOSE,"AD_USER_CLOSE");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::AD_LOADED,"AD_LOADED");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::AD_FAILED,"AD_FAILED");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::PURCHASE_READY,"PURCHASE_READY");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::PURCHASE_SUCCESS,"PURCHASE_SUCCESS");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::PURCHASE_FAIL,"PURCHASE_FAIL");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::PURCHASE_RESTORE,"PURCHASE_RESTORE");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::PURCHASE_CANCEL,"PURCHASE_CANCEL");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::PURCHASE_PRODUCTS_VERIFIED,"PURCHASE_PRODUCTS_VERIFIED");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_READY,"GAME_CENTER_READY");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_SCORE,"GAME_CENTER_SCORE");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT,"GAME_CENTER_ACHIEVEMENT");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET,"GAME_CENTER_ACHIEVEMENT_RESET");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_READY_FAIL,"GAME_CENTER_READY_FAIL");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_SCORE_FAIL,"GAME_CENTER_SCORE_FAIL");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_FAIL,"GAME_CENTER_ACHIEVEMENT_FAIL");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET_FAIL,"GAME_CENTER_ACHIEVEMENT_RESET_FAIL");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::KEYBOARD_EVENT,"KEYBOARD_EVENT");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::KEYBOARD_DONE,"KEYBOARD_DONE");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::KEYBOARD_SHOW,"KEYBOARD_SHOW");
	HX_MARK_MEMBER_NAME(StencylEvent_obj::KEYBOARD_HIDE,"KEYBOARD_HIDE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::AD_USER_OPEN,"AD_USER_OPEN");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::AD_USER_CLOSE,"AD_USER_CLOSE");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::AD_LOADED,"AD_LOADED");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::AD_FAILED,"AD_FAILED");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::PURCHASE_READY,"PURCHASE_READY");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::PURCHASE_SUCCESS,"PURCHASE_SUCCESS");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::PURCHASE_FAIL,"PURCHASE_FAIL");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::PURCHASE_RESTORE,"PURCHASE_RESTORE");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::PURCHASE_CANCEL,"PURCHASE_CANCEL");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::PURCHASE_PRODUCTS_VERIFIED,"PURCHASE_PRODUCTS_VERIFIED");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_READY,"GAME_CENTER_READY");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_SCORE,"GAME_CENTER_SCORE");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT,"GAME_CENTER_ACHIEVEMENT");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET,"GAME_CENTER_ACHIEVEMENT_RESET");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_READY_FAIL,"GAME_CENTER_READY_FAIL");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_SCORE_FAIL,"GAME_CENTER_SCORE_FAIL");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_FAIL,"GAME_CENTER_ACHIEVEMENT_FAIL");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::GAME_CENTER_ACHIEVEMENT_RESET_FAIL,"GAME_CENTER_ACHIEVEMENT_RESET_FAIL");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::KEYBOARD_EVENT,"KEYBOARD_EVENT");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::KEYBOARD_DONE,"KEYBOARD_DONE");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::KEYBOARD_SHOW,"KEYBOARD_SHOW");
	HX_VISIT_MEMBER_NAME(StencylEvent_obj::KEYBOARD_HIDE,"KEYBOARD_HIDE");
};

Class StencylEvent_obj::__mClass;

void StencylEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.event.StencylEvent"), hx::TCanCast< StencylEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StencylEvent_obj::__boot()
{
	AD_USER_OPEN= (int)100;
	AD_USER_CLOSE= (int)101;
	AD_LOADED= (int)102;
	AD_FAILED= (int)103;
	PURCHASE_READY= (int)200;
	PURCHASE_SUCCESS= (int)201;
	PURCHASE_FAIL= (int)202;
	PURCHASE_RESTORE= (int)203;
	PURCHASE_CANCEL= (int)204;
	PURCHASE_PRODUCTS_VERIFIED= (int)205;
	GAME_CENTER_READY= (int)300;
	GAME_CENTER_SCORE= (int)301;
	GAME_CENTER_ACHIEVEMENT= (int)302;
	GAME_CENTER_ACHIEVEMENT_RESET= (int)303;
	GAME_CENTER_READY_FAIL= (int)304;
	GAME_CENTER_SCORE_FAIL= (int)305;
	GAME_CENTER_ACHIEVEMENT_FAIL= (int)306;
	GAME_CENTER_ACHIEVEMENT_RESET_FAIL= (int)307;
	KEYBOARD_EVENT= (int)400;
	KEYBOARD_DONE= (int)401;
	KEYBOARD_SHOW= (int)402;
	KEYBOARD_HIDE= (int)403;
}

} // end namespace com
} // end namespace stencyl
} // end namespace event
