#ifndef INCLUDED_com_stencyl_models_collision_Grid
#define INCLUDED_com_stencyl_models_collision_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/collision/Hitbox.h>
HX_DECLARE_CLASS4(com,stencyl,models,collision,Grid)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Hitbox)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Pixelmask)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace stencyl{
namespace models{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  Grid_obj : public ::com::stencyl::models::collision::Hitbox_obj{
	public:
		typedef ::com::stencyl::models::collision::Hitbox_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();
		Void __construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		static hx::ObjectPtr< Grid_obj > __new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Grid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Grid"); }

		::flash::geom::Point _point2;
		::flash::geom::Point _point;
		::flash::geom::Rectangle _rect;
		::flash::geom::Rectangle _tile;
		virtual Void squareProjection( ::flash::geom::Point axis,::flash::geom::Point point);
		Dynamic squareProjection_dyn();

		virtual bool collidePixelmask( ::com::stencyl::models::collision::Pixelmask other);
		Dynamic collidePixelmask_dyn();

		virtual bool collideHitbox( ::com::stencyl::models::collision::Hitbox other);

		virtual bool collideMask( ::com::stencyl::models::collision::Mask other);

		Array< ::Dynamic > data;
		int rows;
		int columns;
		virtual int get_tileHeight( );
		Dynamic get_tileHeight_dyn();

		virtual int get_tileWidth( );
		Dynamic get_tileWidth_dyn();

		virtual Void clearRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height);
		Dynamic clearRect_dyn();

		virtual Void setRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height,hx::Null< bool >  solid);
		Dynamic setRect_dyn();

		virtual bool getTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic getTile_dyn();

		virtual bool checkTile( int column,int row);
		Dynamic checkTile_dyn();

		virtual Void clearTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic clearTile_dyn();

		virtual Void setTile( hx::Null< int >  column,hx::Null< int >  row,hx::Null< bool >  solid);
		Dynamic setTile_dyn();

		bool usePositions;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision

#endif /* INCLUDED_com_stencyl_models_collision_Grid */ 
