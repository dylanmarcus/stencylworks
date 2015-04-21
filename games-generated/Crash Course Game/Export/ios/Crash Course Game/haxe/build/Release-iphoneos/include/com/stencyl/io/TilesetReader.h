#ifndef INCLUDED_com_stencyl_io_TilesetReader
#define INCLUDED_com_stencyl_io_TilesetReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/io/AbstractReader.h>
HX_DECLARE_CLASS3(com,stencyl,io,AbstractReader)
HX_DECLARE_CLASS3(com,stencyl,io,TilesetReader)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tileset)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  TilesetReader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TilesetReader_obj OBJ_;
		TilesetReader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TilesetReader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TilesetReader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::io::AbstractReader_obj *()
			{ return new ::com::stencyl::io::AbstractReader_delegate_< TilesetReader_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TilesetReader"); }

		virtual ::com::stencyl::models::scene::Tile readTile( ::haxe::xml::Fast xml,::com::stencyl::models::scene::Tileset parent);
		Dynamic readTile_dyn();

		virtual ::com::stencyl::models::Resource read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml);
		Dynamic read_dyn();

		virtual bool accepts( ::String type);
		Dynamic accepts_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io

#endif /* INCLUDED_com_stencyl_io_TilesetReader */ 
