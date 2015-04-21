#ifndef INCLUDED_com_stencyl_models_Sound
#define INCLUDED_com_stencyl_models_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Sound)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flash,media,SoundChannel)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(int ID,::String name,bool streaming,bool looping,Float panning,Float volume,::String ext);

	public:
		static hx::ObjectPtr< Sound_obj > __new(int ID,::String name,bool streaming,bool looping,Float panning,Float volume,::String ext);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sound"); }

		virtual Void stopInstances( );
		Dynamic stopInstances_dyn();

		virtual ::flash::media::SoundChannel loop( hx::Null< int >  channelNum,hx::Null< Float >  position);
		Dynamic loop_dyn();

		virtual ::flash::media::SoundChannel play( hx::Null< int >  channelNum,hx::Null< Float >  position);
		Dynamic play_dyn();

		virtual Void unloadGraphics( );

		virtual Void loadGraphics( );

		::flash::media::Sound src;
		::String ext;
		Float volume;
		Float panning;
		bool looping;
		bool streaming;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Sound */ 
