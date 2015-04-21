#ifndef INCLUDED_com_stencyl_models_GroupDef
#define INCLUDED_com_stencyl_models_GroupDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,GroupDef)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  GroupDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GroupDef_obj OBJ_;
		GroupDef_obj();
		Void __construct(int ID,::String name);

	public:
		static hx::ObjectPtr< GroupDef_obj > __new(int ID,::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GroupDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GroupDef"); }

		::String name;
		int ID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_GroupDef */ 
