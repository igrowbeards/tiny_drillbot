#ifndef INCLUDED_Registry
#define INCLUDED_Registry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Goombas)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Registry)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxTilemap)


class Registry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Registry_obj OBJ_;
		Registry_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Registry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Registry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Registry"); }

		virtual Void Registry( );
		Dynamic Registry_dyn();

		static ::org::flixel::FlxTilemap level; /* REM */ 
		static ::Goombas Goombas; /* REM */ 
		static ::Player player; /* REM */ 
};


#endif /* INCLUDED_Registry */ 
