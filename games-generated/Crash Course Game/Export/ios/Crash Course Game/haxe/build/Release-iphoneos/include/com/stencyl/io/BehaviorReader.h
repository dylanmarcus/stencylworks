#ifndef INCLUDED_com_stencyl_io_BehaviorReader
#define INCLUDED_com_stencyl_io_BehaviorReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,behavior,Attribute)
HX_DECLARE_CLASS3(com,stencyl,behavior,Behavior)
HX_DECLARE_CLASS3(com,stencyl,io,BehaviorReader)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  BehaviorReader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BehaviorReader_obj OBJ_;
		BehaviorReader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BehaviorReader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BehaviorReader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BehaviorReader"); }

		static ::com::stencyl::behavior::Behavior readBehavior( ::haxe::xml::Fast xml);
		static Dynamic readBehavior_dyn();

		static ::com::stencyl::behavior::Attribute readAttribute( ::haxe::xml::Fast xml);
		static Dynamic readAttribute_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io

#endif /* INCLUDED_com_stencyl_io_BehaviorReader */ 
