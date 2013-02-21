#ifndef INCLUDED_Goombas
#define INCLUDED_Goombas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGroup.h>
HX_DECLARE_CLASS0(Goombas)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)


class Goombas_obj : public ::org::flixel::FlxGroup_obj{
	public:
		typedef ::org::flixel::FlxGroup_obj super;
		typedef Goombas_obj OBJ_;
		Goombas_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Goombas_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Goombas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Goombas"); }

		virtual Void update( );

		virtual Void addGoomba( int x,int y);
		Dynamic addGoomba_dyn();

};


#endif /* INCLUDED_Goombas */ 
