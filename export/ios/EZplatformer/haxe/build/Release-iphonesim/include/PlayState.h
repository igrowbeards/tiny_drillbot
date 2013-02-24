#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS0(Goombas)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxText)
HX_DECLARE_CLASS2(org,flixel,FlxTilemap)


class PlayState_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PlayState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		virtual Void parseSprings( );
		Dynamic parseSprings_dyn();

		virtual Void parseEnemies( );
		Dynamic parseEnemies_dyn();

		virtual Void parseFuel( );
		Dynamic parseFuel_dyn();

		virtual Void parseSpikes( );
		Dynamic parseSpikes_dyn();

		virtual Void hitEnemy( ::org::flixel::FlxObject PlayerRef,::org::flixel::FlxObject EnemyRef);
		Dynamic hitEnemy_dyn();

		virtual Void hitFuel( ::org::flixel::FlxObject Player,::org::flixel::FlxObject fuel);
		Dynamic hitFuel_dyn();

		virtual Void hitSpring( ::org::flixel::FlxObject PlayerRef,::org::flixel::FlxObject SpringRef);
		Dynamic hitSpring_dyn();

		virtual Void hitSpikes( ::org::flixel::FlxObject playerRef,::org::flixel::FlxObject spikes);
		Dynamic hitSpikes_dyn();

		virtual Void changeLevel( );
		Dynamic changeLevel_dyn();

		virtual Void fadeOutLevel( ::org::flixel::FlxObject playerRef,::org::flixel::FlxObject exitRef);
		Dynamic fadeOutLevel_dyn();

		virtual Void exit_appear( );
		Dynamic exit_appear_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void create( );

		::org::flixel::FlxGroup springs; /* REM */ 
		::org::flixel::FlxGroup elevators; /* REM */ 
		int maxFuel; /* REM */ 
		::org::flixel::FlxText fuelCollected; /* REM */ 
		::Goombas goombas; /* REM */ 
		int totalFuel; /* REM */ 
		::org::flixel::FlxSprite exit; /* REM */ 
		::Player player; /* REM */ 
		::org::flixel::FlxGroup fuelGroup; /* REM */ 
		::org::flixel::FlxGroup spikes; /* REM */ 
		::org::flixel::FlxTilemap level; /* REM */ 
};


#endif /* INCLUDED_PlayState */ 
