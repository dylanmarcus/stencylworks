#ifndef INCLUDED_com_stencyl_behavior_Attribute
#define INCLUDED_com_stencyl_behavior_Attribute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,behavior,Attribute)
namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES  Attribute_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Attribute_obj OBJ_;
		Attribute_obj();
		Void __construct(int ID,::String fieldName,::String fullName,Dynamic value,::String type,Dynamic parent,bool hidden);

	public:
		static hx::ObjectPtr< Attribute_obj > __new(int ID,::String fieldName,::String fullName,Dynamic value,::String type,Dynamic parent,bool hidden);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Attribute_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Attribute"); }

		virtual Dynamic getRealValue( );
		Dynamic getRealValue_dyn();

		bool hidden;
		Dynamic parent;
		Dynamic realValue;
		Dynamic value;
		::String defaultValue;
		::String type;
		::String fullName;
		::String fieldName;
		int ID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_Attribute */ 
