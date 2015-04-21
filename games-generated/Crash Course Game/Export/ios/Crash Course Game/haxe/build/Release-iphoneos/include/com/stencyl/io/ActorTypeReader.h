#ifndef INCLUDED_com_stencyl_io_ActorTypeReader
#define INCLUDED_com_stencyl_io_ActorTypeReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/io/AbstractReader.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,behavior,BehaviorInstance)
HX_DECLARE_CLASS3(com,stencyl,io,AbstractReader)
HX_DECLARE_CLASS3(com,stencyl,io,ActorTypeReader)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  ActorTypeReader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ActorTypeReader_obj OBJ_;
		ActorTypeReader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ActorTypeReader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ActorTypeReader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::io::AbstractReader_obj *()
			{ return new ::com::stencyl::io::AbstractReader_delegate_< ActorTypeReader_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ActorTypeReader"); }

		virtual ::com::stencyl::models::Resource read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml);
		Dynamic read_dyn();

		virtual bool accepts( ::String type);
		Dynamic accepts_dyn();

		static ::haxe::ds::StringMap readBehaviors( ::haxe::xml::Fast xml);
		static Dynamic readBehaviors_dyn();

		static ::com::stencyl::behavior::BehaviorInstance readBehavior( ::haxe::xml::Fast xml);
		static Dynamic readBehavior_dyn();

		static Dynamic readList( ::haxe::xml::Fast list);
		static Dynamic readList_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io

#endif /* INCLUDED_com_stencyl_io_ActorTypeReader */ 
