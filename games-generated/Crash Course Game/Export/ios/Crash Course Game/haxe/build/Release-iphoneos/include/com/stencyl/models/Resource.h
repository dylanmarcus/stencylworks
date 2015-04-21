#ifndef INCLUDED_com_stencyl_models_Resource
#define INCLUDED_com_stencyl_models_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Resource)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Resource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();
		Void __construct(int ID,::String name,int atlasID);

	public:
		static hx::ObjectPtr< Resource_obj > __new(int ID,::String name,int atlasID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Resource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Resource"); }

		virtual Void unloadGraphics( );
		Dynamic unloadGraphics_dyn();

		virtual Void loadGraphics( );
		Dynamic loadGraphics_dyn();

		virtual bool isAtlasActive( );
		Dynamic isAtlasActive_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		::String sID;
		::String name;
		int atlasID;
		int ID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Resource */ 
