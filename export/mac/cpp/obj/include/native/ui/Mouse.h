#ifndef INCLUDED_native_ui_Mouse
#define INCLUDED_native_ui_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,ui,Mouse)
namespace native{
namespace ui{


class Mouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mouse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mouse"); }

		static Void hide( );
		static Dynamic hide_dyn();

		static Void show( );
		static Dynamic show_dyn();

};

} // end namespace native
} // end namespace ui

#endif /* INCLUDED_native_ui_Mouse */ 
