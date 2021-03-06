#ifndef INCLUDED_flash_filesystem_File
#define INCLUDED_flash_filesystem_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,filesystem,File)
namespace flash{
namespace filesystem{


class HXCPP_CLASS_ATTRIBUTES  File_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef File_obj OBJ_;
		File_obj();
		Void __construct(::String path);

	public:
		static hx::ObjectPtr< File_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~File_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("File"); }

		virtual ::String set_url( ::String value);
		Dynamic set_url_dyn();

		virtual ::String set_nativePath( ::String value);
		Dynamic set_nativePath_dyn();

		::String url;
		::String nativePath;
		static ::flash::filesystem::File applicationDirectory;
		static ::flash::filesystem::File applicationStorageDirectory;
		static ::flash::filesystem::File desktopDirectory;
		static ::flash::filesystem::File documentsDirectory;
		static ::flash::filesystem::File userDirectory;
		static int APP;
		static int STORAGE;
		static int DESKTOP;
		static int DOCS;
		static int USER;
		static ::flash::filesystem::File get_applicationDirectory( );
		static Dynamic get_applicationDirectory_dyn();

		static ::flash::filesystem::File get_applicationStorageDirectory( );
		static Dynamic get_applicationStorageDirectory_dyn();

		static ::flash::filesystem::File get_desktopDirectory( );
		static Dynamic get_desktopDirectory_dyn();

		static ::flash::filesystem::File get_documentsDirectory( );
		static Dynamic get_documentsDirectory_dyn();

		static ::flash::filesystem::File get_userDirectory( );
		static Dynamic get_userDirectory_dyn();

		static Dynamic nme_get_resource_path;
		static Dynamic &nme_get_resource_path_dyn() { return nme_get_resource_path;}
		static Dynamic nme_filesystem_get_special_dir;
		static Dynamic &nme_filesystem_get_special_dir_dyn() { return nme_filesystem_get_special_dir;}
};

} // end namespace flash
} // end namespace filesystem

#endif /* INCLUDED_flash_filesystem_File */ 
