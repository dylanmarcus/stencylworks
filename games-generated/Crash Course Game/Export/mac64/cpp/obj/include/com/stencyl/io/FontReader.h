#ifndef INCLUDED_com_stencyl_io_FontReader
#define INCLUDED_com_stencyl_io_FontReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/io/AbstractReader.h>
HX_DECLARE_CLASS3(com,stencyl,io,AbstractReader)
HX_DECLARE_CLASS3(com,stencyl,io,FontReader)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  FontReader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FontReader_obj OBJ_;
		FontReader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FontReader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FontReader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::io::AbstractReader_obj *()
			{ return new ::com::stencyl::io::AbstractReader_delegate_< FontReader_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FontReader"); }

		virtual ::com::stencyl::models::Resource read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml);
		Dynamic read_dyn();

		virtual bool accepts( ::String type);
		Dynamic accepts_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io

#endif /* INCLUDED_com_stencyl_io_FontReader */ 
