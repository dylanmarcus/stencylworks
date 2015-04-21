#ifndef INCLUDED_sys_FileSystem
#define INCLUDED_sys_FileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sys,FileSystem)
namespace sys{


class HXCPP_CLASS_ATTRIBUTES  FileSystem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FileSystem_obj OBJ_;
		FileSystem_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FileSystem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FileSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FileSystem"); }

		static Void createDirectory( ::String path);
		static Dynamic createDirectory_dyn();

		static Void deleteFile( ::String path);
		static Dynamic deleteFile_dyn();

		static Dynamic sys_exists;
		static Dynamic &sys_exists_dyn() { return sys_exists;}
		static Dynamic file_delete;
		static Dynamic &file_delete_dyn() { return file_delete;}
		static Dynamic sys_create_dir;
		static Dynamic &sys_create_dir_dyn() { return sys_create_dir;}
};

} // end namespace sys

#endif /* INCLUDED_sys_FileSystem */ 