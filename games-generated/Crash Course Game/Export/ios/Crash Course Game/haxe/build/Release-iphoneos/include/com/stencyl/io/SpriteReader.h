#ifndef INCLUDED_com_stencyl_io_SpriteReader
#define INCLUDED_com_stencyl_io_SpriteReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/io/AbstractReader.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(com,stencyl,io,AbstractReader)
HX_DECLARE_CLASS3(com,stencyl,io,SpriteReader)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Animation)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Sprite)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  SpriteReader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SpriteReader_obj OBJ_;
		SpriteReader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SpriteReader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SpriteReader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::io::AbstractReader_obj *()
			{ return new ::com::stencyl::io::AbstractReader_delegate_< SpriteReader_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SpriteReader"); }

		virtual ::haxe::ds::IntMap readShapes( ::haxe::xml::Fast xml,Float imgWidth,Float imgHeight);
		Dynamic readShapes_dyn();

		virtual ::haxe::ds::IntMap readSimpleShapes( ::haxe::xml::Fast xml,Float imgWidth,Float imgHeight);
		Dynamic readSimpleShapes_dyn();

		virtual ::com::stencyl::models::actor::Animation readAnimation( ::haxe::xml::Fast xml,::com::stencyl::models::actor::Sprite parent);
		Dynamic readAnimation_dyn();

		virtual ::com::stencyl::models::Resource read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml);
		Dynamic read_dyn();

		virtual bool accepts( ::String type);
		Dynamic accepts_dyn();

		static Dynamic createShape( ::String type,Array< ::String > params,hx::Null< Float >  xOffset,hx::Null< Float >  yOffset,hx::Null< Float >  imgWidth,hx::Null< Float >  imgHeight);
		static Dynamic createShape_dyn();

		static bool CheckVertexDirection( Array< ::Dynamic > v);
		static Dynamic CheckVertexDirection_dyn();

		static bool EnsureCorrectVertexDirection( Array< ::Dynamic > v);
		static Dynamic EnsureCorrectVertexDirection_dyn();

		static Void ReverseVertices( Array< ::Dynamic > v);
		static Dynamic ReverseVertices_dyn();

		static Float getWidth( Array< ::Dynamic > vertices);
		static Dynamic getWidth_dyn();

		static Float getHeight( Array< ::Dynamic > vertices);
		static Dynamic getHeight_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io

#endif /* INCLUDED_com_stencyl_io_SpriteReader */ 
