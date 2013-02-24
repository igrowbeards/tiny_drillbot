#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControl
#define INCLUDED_org_flixel_plugin_photonstorm_FlxControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxBasic.h>
HX_DECLARE_CLASS1(nme,ObjectHash)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS4(org,flixel,plugin,photonstorm,FlxControl)
HX_DECLARE_CLASS4(org,flixel,plugin,photonstorm,FlxControlHandler)
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{


class FlxControl_obj : public ::org::flixel::FlxBasic_obj{
	public:
		typedef ::org::flixel::FlxBasic_obj super;
		typedef FlxControl_obj OBJ_;
		FlxControl_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxControl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxControl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxControl"); }

		virtual Void destroy( );

		virtual Void draw( );

		static ::org::flixel::plugin::photonstorm::FlxControlHandler player1; /* REM */ 
		static ::org::flixel::plugin::photonstorm::FlxControlHandler player2; /* REM */ 
		static ::org::flixel::plugin::photonstorm::FlxControlHandler player3; /* REM */ 
		static ::org::flixel::plugin::photonstorm::FlxControlHandler player4; /* REM */ 
		static ::nme::ObjectHash members; /* REM */ 
		static ::org::flixel::plugin::photonstorm::FlxControlHandler create( ::org::flixel::FlxSprite source,int movementType,int stoppingType,hx::Null< int >  player,hx::Null< bool >  updateFacing,hx::Null< bool >  enableArrowKeys);
		static Dynamic create_dyn();

		static bool remove( ::org::flixel::plugin::photonstorm::FlxControlHandler source);
		static Dynamic remove_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

		static Void start( ::org::flixel::plugin::photonstorm::FlxControlHandler source);
		static Dynamic start_dyn();

		static Void stop( ::org::flixel::plugin::photonstorm::FlxControlHandler source);
		static Dynamic stop_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm

#endif /* INCLUDED_org_flixel_plugin_photonstorm_FlxControl */ 
