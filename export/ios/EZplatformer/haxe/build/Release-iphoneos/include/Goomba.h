#ifndef INCLUDED_Goomba
#define INCLUDED_Goomba

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Goomba)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)


class Goomba_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef Goomba_obj OBJ_;
		Goomba_obj();
		Void __construct(Float x,Float y);

	public:
		static hx::ObjectPtr< Goomba_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Goomba_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Goomba"); }

		virtual Void update( );

		virtual Void destroy( );

		int speed; /* REM */ 
		::org::flixel::FlxPoint start; /* REM */ 
};


#endif /* INCLUDED_Goomba */ 
