#ifndef INCLUDED_org_flixel_FlxParticle
#define INCLUDED_org_flixel_FlxParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxParticle)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace org{
namespace flixel{


class FlxParticle_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef FlxParticle_obj OBJ_;
		FlxParticle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxParticle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxParticle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxParticle"); }

		virtual Void onEmit( );
		Dynamic onEmit_dyn();

		virtual Void update( );

		Float friction; /* REM */ 
		Float lifespan; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxParticle */ 
