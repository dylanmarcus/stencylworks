#ifndef INCLUDED_com_stencyl_utils_PolyDecompBayazit
#define INCLUDED_com_stencyl_utils_PolyDecompBayazit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,PolyDecompBayazit)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  PolyDecompBayazit_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PolyDecompBayazit_obj OBJ_;
		PolyDecompBayazit_obj();
		Void __construct(Array< ::Dynamic > points);

	public:
		static hx::ObjectPtr< PolyDecompBayazit_obj > __new(Array< ::Dynamic > points);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PolyDecompBayazit_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PolyDecompBayazit"); }

		virtual Void makeCCW( );
		Dynamic makeCCW_dyn();

		virtual Void decompose( Dynamic cb);
		Dynamic decompose_dyn();

		virtual ::com::stencyl::utils::PolyDecompBayazit polyFromRange( int lower,int upper);
		Dynamic polyFromRange_dyn();

		virtual bool isReflex( int i);
		Dynamic isReflex_dyn();

		virtual ::flash::geom::Point at( int i);
		Dynamic at_dyn();

		virtual Void combineClosePoints( );
		Dynamic combineClosePoints_dyn();

		Array< ::Dynamic > points;
		virtual Void combineColinearPoints( );
		Dynamic combineColinearPoints_dyn();

		static Float area( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c);
		static Dynamic area_dyn();

		static bool right( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c);
		static Dynamic right_dyn();

		static bool rightOn( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c);
		static Dynamic rightOn_dyn();

		static bool left( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c);
		static Dynamic left_dyn();

		static bool leftOn( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c);
		static Dynamic leftOn_dyn();

		static Float sqdist( ::flash::geom::Point a,::flash::geom::Point b);
		static Dynamic sqdist_dyn();

		static ::flash::geom::Point getIntersection( ::flash::geom::Point start1,::flash::geom::Point end1,::flash::geom::Point start2,::flash::geom::Point end2);
		static Dynamic getIntersection_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_PolyDecompBayazit */ 
