#ifndef INCLUDED_Elevator
#define INCLUDED_Elevator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Elevator)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)


class Elevator_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef Elevator_obj OBJ_;
		Elevator_obj();
		Void __construct(int X,int Y,int Width,int Height,hx::Null< int >  __o_Speed);

	public:
		static hx::ObjectPtr< Elevator_obj > __new(int X,int Y,int Width,int Height,hx::Null< int >  __o_Speed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Elevator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Elevator"); }

		virtual Void update( );

		::org::flixel::FlxPoint endPoint; /* REM */ 
		::org::flixel::FlxPoint startPoint; /* REM */ 
		bool moveY; /* REM */ 
		bool moveX; /* REM */ 
};


#endif /* INCLUDED_Elevator */ 
