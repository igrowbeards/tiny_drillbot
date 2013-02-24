#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxMath
#define INCLUDED_org_flixel_plugin_photonstorm_FlxMath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxRect)
HX_DECLARE_CLASS4(org,flixel,plugin,photonstorm,FlxMath)
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{


class FlxMath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMath_obj OBJ_;
		FlxMath_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxMath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxMath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxMath"); }

		static int getrandmax; /* REM */ 
		static int mr; /* REM */ 
		static Array< Float > cosTable; /* REM */ 
		static Array< Float > sinTable; /* REM */ 
		static Float coefficient1; /* REM */ 
		static Float RADTODEG; /* REM */ 
		static Float DEGTORAD; /* REM */ 
		static bool pointInCoordinates( int pointX,int pointY,int rectX,int rectY,int rectWidth,int rectHeight);
		static Dynamic pointInCoordinates_dyn();

		static bool pointInFlxRect( int pointX,int pointY,::org::flixel::FlxRect rect);
		static Dynamic pointInFlxRect_dyn();

		static bool mouseInFlxRect( bool useWorldCoords,::org::flixel::FlxRect rect);
		static Dynamic mouseInFlxRect_dyn();

		static bool pointInRectangle( int pointX,int pointY,::native::geom::Rectangle rect);
		static Dynamic pointInRectangle_dyn();

		static Float atan2( Float y,Float x);
		static Dynamic atan2_dyn();

		static Array< Float > sinCosGenerator( int length,hx::Null< Float >  sinAmplitude,hx::Null< Float >  cosAmplitude,hx::Null< Float >  frequency);
		static Dynamic sinCosGenerator_dyn();

		static Array< Float > getSinTable( );
		static Dynamic getSinTable_dyn();

		static Array< Float > getCosTable( );
		static Dynamic getCosTable_dyn();

		static Float sqrt( Float val);
		static Dynamic sqrt_dyn();

		static int miniRand( );
		static Dynamic miniRand_dyn();

		static int rand( Dynamic min,Dynamic max,Array< Float > excludes);
		static Dynamic rand_dyn();

		static int numericComparison( Float int1,Float int2);
		static Dynamic numericComparison_dyn();

		static Float randFloat( Dynamic min,Dynamic max);
		static Dynamic randFloat_dyn();

		static bool chanceRoll( hx::Null< int >  chance);
		static Dynamic chanceRoll_dyn();

		static int maxAdd( int value,int amount,int max);
		static Dynamic maxAdd_dyn();

		static int wrapValue( int value,int amount,int max);
		static Dynamic wrapValue_dyn();

		static Float vectorLength( Float dx,Float dy);
		static Dynamic vectorLength_dyn();

		static Float dotProduct( Float ax,Float ay,Float bx,Float by);
		static Dynamic dotProduct_dyn();

		static Float randomSign( );
		static Dynamic randomSign_dyn();

		static bool isOdd( Float n);
		static Dynamic isOdd_dyn();

		static bool isEven( Float n);
		static Dynamic isEven_dyn();

		static int wrapAngle( Float angle);
		static Dynamic wrapAngle_dyn();

		static int angleLimit( int angle,int min,int max);
		static Dynamic angleLimit_dyn();

		static Float asDegrees( Float radians);
		static Dynamic asDegrees_dyn();

		static Float asRadians( Float degrees);
		static Dynamic asRadians_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm

#endif /* INCLUDED_org_flixel_plugin_photonstorm_FlxMath */ 
