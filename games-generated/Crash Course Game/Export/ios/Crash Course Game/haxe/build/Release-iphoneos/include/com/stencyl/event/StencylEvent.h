#ifndef INCLUDED_com_stencyl_event_StencylEvent
#define INCLUDED_com_stencyl_event_StencylEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,event,StencylEvent)
namespace com{
namespace stencyl{
namespace event{


class HXCPP_CLASS_ATTRIBUTES  StencylEvent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StencylEvent_obj OBJ_;
		StencylEvent_obj();
		Void __construct(int type,::String __o_data1);

	public:
		static hx::ObjectPtr< StencylEvent_obj > __new(int type,::String __o_data1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StencylEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StencylEvent"); }

		::String data1;
		int type;
		static int AD_USER_OPEN;
		static int AD_USER_CLOSE;
		static int AD_LOADED;
		static int AD_FAILED;
		static int PURCHASE_READY;
		static int PURCHASE_SUCCESS;
		static int PURCHASE_FAIL;
		static int PURCHASE_RESTORE;
		static int PURCHASE_CANCEL;
		static int PURCHASE_PRODUCTS_VERIFIED;
		static int GAME_CENTER_READY;
		static int GAME_CENTER_SCORE;
		static int GAME_CENTER_ACHIEVEMENT;
		static int GAME_CENTER_ACHIEVEMENT_RESET;
		static int GAME_CENTER_READY_FAIL;
		static int GAME_CENTER_SCORE_FAIL;
		static int GAME_CENTER_ACHIEVEMENT_FAIL;
		static int GAME_CENTER_ACHIEVEMENT_RESET_FAIL;
		static int KEYBOARD_EVENT;
		static int KEYBOARD_DONE;
		static int KEYBOARD_SHOW;
		static int KEYBOARD_HIDE;
};

} // end namespace com
} // end namespace stencyl
} // end namespace event

#endif /* INCLUDED_com_stencyl_event_StencylEvent */ 
