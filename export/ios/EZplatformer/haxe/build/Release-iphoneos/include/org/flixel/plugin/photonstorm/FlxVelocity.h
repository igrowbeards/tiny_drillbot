#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxVelocity
#define INCLUDED_org_flixel_plugin_photonstorm_FlxVelocity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS4(org,flixel,plugin,photonstorm,FlxVelocity)
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{


class FlxVelocity_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxVelocity_obj OBJ_;
		FlxVelocity_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxVelocity_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxVelocity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxVelocity"); }

		static Void moveTowardsObject( ::org::flixel::FlxSprite source,::org::flixel::FlxSprite dest,hx::Null< int >  speed,hx::Null< int >  maxTime);
		static Dynamic moveTowardsObject_dyn();

		static Void accelerateTowardsObject( ::org::flixel::FlxSprite source,::org::flixel::FlxSprite dest,int speed,int xSpeedMax,int ySpeedMax);
		static Dynamic accelerateTowardsObject_dyn();

		static Void moveTowardsMouse( ::org::flixel::FlxSprite source,hx::Null< int >  speed,hx::Null< int >  maxTime);
		static Dynamic moveTowardsMouse_dyn();

		static Void accelerateTowardsMouse( ::org::flixel::FlxSprite source,int speed,int xSpeedMax,int ySpeedMax);
		static Dynamic accelerateTowardsMouse_dyn();

		static Void moveTowardsPoint( ::org::flixel::FlxSprite source,::org::flixel::FlxPoint target,hx::Null< int >  speed,hx::Null< int >  maxTime);
		static Dynamic moveTowardsPoint_dyn();

		static Void accelerateTowardsPoint( ::org::flixel::FlxSprite source,::org::flixel::FlxPoint target,int speed,int xSpeedMax,int ySpeedMax);
		static Dynamic accelerateTowardsPoint_dyn();

		static int distanceBetween( ::org::flixel::FlxSprite a,::org::flixel::FlxSprite b);
		static Dynamic distanceBetween_dyn();

		static int distanceToPoint( ::org::flixel::FlxSprite a,::org::flixel::FlxPoint target);
		static Dynamic distanceToPoint_dyn();

		static int distanceToMouse( ::org::flixel::FlxSprite a);
		static Dynamic distanceToMouse_dyn();

		static Float angleBetweenPoint( ::org::flixel::FlxSprite a,::org::flixel::FlxPoint target,hx::Null< bool >  asDegrees);
		static Dynamic angleBetweenPoint_dyn();

		static Float angleBetween( ::org::flixel::FlxSprite a,::org::flixel::FlxSprite b,hx::Null< bool >  asDegrees);
		static Dynamic angleBetween_dyn();

		static ::org::flixel::FlxPoint velocityFromAngle( int angle,int speed);
		static Dynamic velocityFromAngle_dyn();

		static ::org::flixel::FlxPoint velocityFromFacing( ::org::flixel::FlxSprite parent,int speed);
		static Dynamic velocityFromFacing_dyn();

		static Float angleBetweenMouse( ::org::flixel::FlxSprite a,hx::Null< bool >  asDegrees);
		static Dynamic angleBetweenMouse_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm

#endif /* INCLUDED_org_flixel_plugin_photonstorm_FlxVelocity */ 
