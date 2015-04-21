#ifndef INCLUDED_com_stencyl_Key
#define INCLUDED_com_stencyl_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,stencyl,Key)
namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES  Key_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Key_obj OBJ_;
		Key_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Key_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Key_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Key"); }

		static int ANY;
		static int LEFT;
		static int UP;
		static int RIGHT;
		static int DOWN;
		static int ENTER;
		static int CONTROL;
		static int SPACE;
		static int SHIFT;
		static int BACKSPACE;
		static int CAPS_LOCK;
		static int DELETE;
		static int END;
		static int ESCAPE;
		static int HOME;
		static int INSERT;
		static int TAB;
		static int PAGE_DOWN;
		static int PAGE_UP;
		static int LEFT_SQUARE_BRACKET;
		static int RIGHT_SQUARE_BRACKET;
		static int A;
		static int B;
		static int C;
		static int D;
		static int E;
		static int F;
		static int G;
		static int H;
		static int I;
		static int J;
		static int K;
		static int L;
		static int M;
		static int N;
		static int O;
		static int P;
		static int Q;
		static int R;
		static int S;
		static int T;
		static int U;
		static int V;
		static int W;
		static int X;
		static int Y;
		static int Z;
		static int F1;
		static int F2;
		static int F3;
		static int F4;
		static int F5;
		static int F6;
		static int F7;
		static int F8;
		static int F9;
		static int F10;
		static int F11;
		static int F12;
		static int F13;
		static int F14;
		static int F15;
		static int DIGIT_0;
		static int DIGIT_1;
		static int DIGIT_2;
		static int DIGIT_3;
		static int DIGIT_4;
		static int DIGIT_5;
		static int DIGIT_6;
		static int DIGIT_7;
		static int DIGIT_8;
		static int DIGIT_9;
		static int NUMPAD_0;
		static int NUMPAD_1;
		static int NUMPAD_2;
		static int NUMPAD_3;
		static int NUMPAD_4;
		static int NUMPAD_5;
		static int NUMPAD_6;
		static int NUMPAD_7;
		static int NUMPAD_8;
		static int NUMPAD_9;
		static int NUMPAD_ADD;
		static int NUMPAD_DECIMAL;
		static int NUMPAD_DIVIDE;
		static int NUMPAD_ENTER;
		static int NUMPAD_MULTIPLY;
		static int NUMPAD_SUBTRACT;
		static ::String nameOfKey( int _char);
		static Dynamic nameOfKey_dyn();

};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_Key */ 
