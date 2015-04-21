#ifndef INCLUDED_com_stencyl_models_SoundChannel
#define INCLUDED_com_stencyl_models_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Sound)
HX_DECLARE_CLASS3(com,stencyl,models,SoundChannel)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flash,media,SoundChannel)
HX_DECLARE_CLASS2(flash,media,SoundTransform)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  SoundChannel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();
		Void __construct(::com::stencyl::Engine engine,int channelNum);

	public:
		static hx::ObjectPtr< SoundChannel_obj > __new(::com::stencyl::Engine engine,int channelNum);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SoundChannel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundChannel"); }

		virtual Void setVolume( Float volume);
		Dynamic setVolume_dyn();

		virtual Void onUpdate( );
		Dynamic onUpdate_dyn();

		virtual Void fadeOutSound( Float time);
		Dynamic fadeOutSound_dyn();

		virtual Void fadeInSound( Float time);
		Dynamic fadeInSound_dyn();

		virtual Void stopSound( );
		Dynamic stopSound_dyn();

		virtual Void stopped( ::flash::events::Event event);
		Dynamic stopped_dyn();

		virtual Void looped( ::flash::events::Event event);
		Dynamic looped_dyn();

		virtual Void setPause( bool pause);
		Dynamic setPause_dyn();

		virtual ::flash::media::SoundChannel loopSound( ::com::stencyl::models::Sound clip);
		Dynamic loopSound_dyn();

		virtual ::flash::media::SoundChannel playSound( ::com::stencyl::models::Sound clip);
		Dynamic playSound_dyn();

		::flash::media::SoundTransform transform;
		::com::stencyl::Engine engine;
		Float position;
		bool looping;
		int channelNum;
		Float volume;
		::com::stencyl::models::Sound currentClip;
		::flash::media::SoundChannel currentSound;
		::flash::media::Sound currentSource;
		static bool muted;
		static Float masterVolume;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_SoundChannel */ 
