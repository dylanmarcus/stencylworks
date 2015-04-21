#ifndef INCLUDED_com_stencyl_io_AbstractReader
#define INCLUDED_com_stencyl_io_AbstractReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,io,AbstractReader)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  AbstractReader_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AbstractReader_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::com::stencyl::models::Resource read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml)=0;
		Dynamic read_dyn();
virtual bool accepts( ::String type)=0;
		Dynamic accepts_dyn();
};

#define DELEGATE_com_stencyl_io_AbstractReader \
virtual ::com::stencyl::models::Resource read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml) { return mDelegate->read(ID,atlasID,type,name,xml);}  \
virtual Dynamic read_dyn() { return mDelegate->read_dyn();}  \
virtual bool accepts( ::String type) { return mDelegate->accepts(type);}  \
virtual Dynamic accepts_dyn() { return mDelegate->accepts_dyn();}  \


template<typename IMPL>
class AbstractReader_delegate_ : public AbstractReader_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AbstractReader_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_stencyl_io_AbstractReader
};

} // end namespace com
} // end namespace stencyl
} // end namespace io

#endif /* INCLUDED_com_stencyl_io_AbstractReader */ 
