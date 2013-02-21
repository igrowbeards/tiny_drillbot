#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControlHandler
#define INCLUDED_org_flixel_plugin_photonstorm_FlxControlHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,geom,Rectangle)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSound)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS4(org,flixel,plugin,photonstorm,FlxControlHandler)
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{


class FlxControlHandler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxControlHandler_obj OBJ_;
		FlxControlHandler_obj();
		Void __construct(::org::flixel::FlxSprite source,int movementType,int stoppingType,hx::Null< bool >  __o_updateFacing,hx::Null< bool >  __o_enableArrowKeys);

	public:
		static hx::ObjectPtr< FlxControlHandler_obj > __new(::org::flixel::FlxSprite source,int movementType,int stoppingType,hx::Null< bool >  __o_updateFacing,hx::Null< bool >  __o_enableArrowKeys);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxControlHandler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxControlHandler"); }

		virtual Void setNumpadControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setNumpadControl_dyn();

		virtual Void setDvorakSimplifiedControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setDvorakSimplifiedControl_dyn();

		virtual Void setZQSDControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setZQSDControl_dyn();

		virtual Void setHJKLControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setHJKLControl_dyn();

		virtual Void setIJKLControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setIJKLControl_dyn();

		virtual Void setESDFControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setESDFControl_dyn();

		virtual Void setWASDControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setWASDControl_dyn();

		virtual Void setCursorControl( hx::Null< bool >  allowUp,hx::Null< bool >  allowDown,hx::Null< bool >  allowLeft,hx::Null< bool >  allowRight);
		Dynamic setCursorControl_dyn();

		virtual Void setCustomKeys( ::String customUpKey,::String customDownKey,::String customLeftKey,::String customRightKey);
		Dynamic setCustomKeys_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool runJump( );
		Dynamic runJump_dyn();

		virtual bool runFire( );
		Dynamic runFire_dyn();

		virtual bool moveReverse( );
		Dynamic moveReverse_dyn();

		virtual bool moveThrust( );
		Dynamic moveThrust_dyn();

		virtual bool moveClockwise( );
		Dynamic moveClockwise_dyn();

		virtual bool moveAntiClockwise( );
		Dynamic moveAntiClockwise_dyn();

		virtual bool moveRight( );
		Dynamic moveRight_dyn();

		virtual bool moveLeft( );
		Dynamic moveLeft_dyn();

		virtual bool moveDown( );
		Dynamic moveDown_dyn();

		virtual bool moveUp( );
		Dynamic moveUp_dyn();

		virtual Void removeBounds( );
		Dynamic removeBounds_dyn();

		virtual Void setBounds( int x,int y,int width,int height);
		Dynamic setBounds_dyn();

		virtual Void setJumpButton( ::String key,int keymode,int height,int surface,hx::Null< int >  repeatDelay,hx::Null< int >  jumpFromFall,Dynamic callbackFunc,::String altKey);
		Dynamic setJumpButton_dyn();

		virtual Void setFireButton( ::String key,int keymode,int repeatDelay,Dynamic callbackFunc,::String altKey);
		Dynamic setFireButton_dyn();

		virtual Void setSounds( ::org::flixel::FlxSound jump,::org::flixel::FlxSound fire,::org::flixel::FlxSound walk,::org::flixel::FlxSound thrust);
		Dynamic setSounds_dyn();

		virtual bool removeHotKey( ::String key);
		Dynamic removeHotKey_dyn();

		virtual Void addHotKey( ::String key,Dynamic callbackFunc,int keymode);
		Dynamic addHotKey_dyn();

		virtual Void resetSpeeds( hx::Null< bool >  resetX,hx::Null< bool >  resetY);
		Dynamic resetSpeeds_dyn();

		virtual Void slowDown( Float xFactor,Float yFactor);
		Dynamic slowDown_dyn();

		virtual Void speedUp( Float xFactor,Float yFactor);
		Dynamic speedUp_dyn();

		virtual Void flipGravity( );
		Dynamic flipGravity_dyn();

		virtual Void setGravity( int xForce,int yForce);
		Dynamic setGravity_dyn();

		virtual Void setDeceleration( int xSpeed,int ySpeed);
		Dynamic setDeceleration_dyn();

		virtual Void setMaximumSpeed( int xSpeed,int ySpeed,hx::Null< bool >  limitVelocity);
		Dynamic setMaximumSpeed_dyn();

		virtual Void setThrust( ::String thrustKey,Float thrustSpeed,::String reverseKey,hx::Null< Float >  reverseSpeed);
		Dynamic setThrust_dyn();

		virtual Void setRotationKeys( hx::Null< bool >  leftRight,hx::Null< bool >  upDown,::String customAntiClockwise,::String customClockwise);
		Dynamic setRotationKeys_dyn();

		virtual Void disableRotationLimits( );
		Dynamic disableRotationLimits_dyn();

		virtual Void setRotationLimits( int minimumAngle,int maximumAngle);
		Dynamic setRotationLimits_dyn();

		virtual Void setRotationDeceleration( Float speed);
		Dynamic setRotationDeceleration_dyn();

		virtual Void setMaximumRotationSpeed( Float speed,hx::Null< bool >  limitVelocity);
		Dynamic setMaximumRotationSpeed_dyn();

		virtual Void setRotationType( int rotationType,int stoppingType);
		Dynamic setRotationType_dyn();

		virtual Void setRotationSpeed( Float antiClockwiseSpeed,Float clockwiseSpeed,Float speedMax,Float deceleration);
		Dynamic setRotationSpeed_dyn();

		virtual Void setAdvancedMovementSpeed( int leftSpeed,int rightSpeed,int upSpeed,int downSpeed,int xSpeedMax,int ySpeedMax,hx::Null< int >  xDeceleration,hx::Null< int >  yDeceleration);
		Dynamic setAdvancedMovementSpeed_dyn();

		virtual Void setStandardSpeed( int speed,hx::Null< bool >  acceleration);
		Dynamic setStandardSpeed_dyn();

		virtual Void setMovementSpeed( int xSpeed,int ySpeed,int xSpeedMax,int ySpeedMax,hx::Null< int >  xDeceleration,hx::Null< int >  yDeceleration);
		Dynamic setMovementSpeed_dyn();

		bool isPressedRight; /* REM */ 
		bool isPressedLeft; /* REM */ 
		bool isPressedDown; /* REM */ 
		bool isPressedUp; /* REM */ 
		::org::flixel::FlxSound thrustSound; /* REM */ 
		::org::flixel::FlxSound walkSound; /* REM */ 
		::org::flixel::FlxSound fireSound; /* REM */ 
		::org::flixel::FlxSound jumpSound; /* REM */ 
		::String reverseKey; /* REM */ 
		::String thrustKey; /* REM */ 
		::String clockwiseKey; /* REM */ 
		::String antiClockwiseKey; /* REM */ 
		::String altJumpKey; /* REM */ 
		::String jumpKey; /* REM */ 
		::String altFireKey; /* REM */ 
		::String fireKey; /* REM */ 
		::String rightKey; /* REM */ 
		::String leftKey; /* REM */ 
		::String downKey; /* REM */ 
		::String upKey; /* REM */ 
		Array< ::String > hotkeys; /* REM */ 
		bool capVelocity; /* REM */ 
		int rotationStopping; /* REM */ 
		int rotation; /* REM */ 
		int stopping; /* REM */ 
		int movement; /* REM */ 
		Dynamic jumpCallback; /* REM */ 
		Dynamic &jumpCallback_dyn() { return jumpCallback;}
		int jumpSurface; /* REM */ 
		int extraSurfaceTime; /* REM */ 
		int jumpFromFallTime; /* REM */ 
		int lastJumpTime; /* REM */ 
		int nextJumpTime; /* REM */ 
		int jumpKeyMode; /* REM */ 
		int jumpRate; /* REM */ 
		int jumpHeight; /* REM */ 
		Dynamic fireCallback; /* REM */ 
		Dynamic &fireCallback_dyn() { return fireCallback;}
		int fireKeyMode; /* REM */ 
		int lastFiredTime; /* REM */ 
		int nextFireTime; /* REM */ 
		int fireRate; /* REM */ 
		int gravityY; /* REM */ 
		int gravityX; /* REM */ 
		Float ySpeedAdjust; /* REM */ 
		Float xSpeedAdjust; /* REM */ 
		bool capAngularVelocity; /* REM */ 
		int maxAngle; /* REM */ 
		int minAngle; /* REM */ 
		bool enforceAngleLimits; /* REM */ 
		Float clockwiseRotationSpeed; /* REM */ 
		Float antiClockwiseRotationSpeed; /* REM */ 
		bool isRotating; /* REM */ 
		bool reverseEnabled; /* REM */ 
		bool thrustEnabled; /* REM */ 
		int reverseSpeed; /* REM */ 
		int thrustSpeed; /* REM */ 
		int rightMoveSpeed; /* REM */ 
		int leftMoveSpeed; /* REM */ 
		int downMoveSpeed; /* REM */ 
		int upMoveSpeed; /* REM */ 
		bool rotateClockwise; /* REM */ 
		bool rotateAntiClockwise; /* REM */ 
		bool yFacing; /* REM */ 
		bool xFacing; /* REM */ 
		bool altJump; /* REM */ 
		bool jump; /* REM */ 
		bool altFire; /* REM */ 
		bool fire; /* REM */ 
		bool right; /* REM */ 
		bool left; /* REM */ 
		bool down; /* REM */ 
		bool up; /* REM */ 
		::native::geom::Rectangle bounds; /* REM */ 
		::org::flixel::FlxSprite entity; /* REM */ 
		bool enabled; /* REM */ 
		static int MOVEMENT_INSTANT; /* REM */ 
		static int MOVEMENT_ACCELERATES; /* REM */ 
		static int STOPPING_INSTANT; /* REM */ 
		static int STOPPING_DECELERATES; /* REM */ 
		static int STOPPING_NEVER; /* REM */ 
		static int ROTATION_INSTANT; /* REM */ 
		static int ROTATION_ACCELERATES; /* REM */ 
		static int ROTATION_STOPPING_INSTANT; /* REM */ 
		static int ROTATION_STOPPING_DECELERATES; /* REM */ 
		static int ROTATION_STOPPING_NEVER; /* REM */ 
		static int KEYMODE_PRESSED; /* REM */ 
		static int KEYMODE_JUST_DOWN; /* REM */ 
		static int KEYMODE_RELEASED; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm

#endif /* INCLUDED_org_flixel_plugin_photonstorm_FlxControlHandler */ 
