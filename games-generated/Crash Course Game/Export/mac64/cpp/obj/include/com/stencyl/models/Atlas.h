#ifndef INCLUDED_com_stencyl_models_Atlas
#define INCLUDED_com_stencyl_models_Atlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Atlas)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Atlas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Atlas_obj OBJ_;
		Atlas_obj();
		Void __construct(int ID,::String name,Array< int > members,bool active);

	public:
		static hx::ObjectPtr< Atlas_obj > __new(int ID,::String name,Array< int > members,bool active);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Atlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Atlas"); }

		Array< int > members;
		bool active;
		::String name;
		int ID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Atlas */ 
