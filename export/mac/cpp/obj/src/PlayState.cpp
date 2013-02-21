#include <hxcpp.h>

#ifndef INCLUDED_Elevator
#include <Elevator.h>
#endif
#ifndef INCLUDED_Fuel
#include <Fuel.h>
#endif
#ifndef INCLUDED_Goombas
#include <Goombas.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Registry
#include <Registry.h>
#endif
#ifndef INCLUDED_Spike
#include <Spike.h>
#endif
#ifndef INCLUDED_Spring
#include <Spring.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_addons_FlxBackdrop
#include <addons/FlxBackdrop.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControl
#include <org/flixel/plugin/photonstorm/FlxControl.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#include <org/flixel/system/FlxQuadTree.h>
#endif

Void PlayState_obj::__construct()
{
HX_STACK_PUSH("PlayState::new","PlayState.hx",23);
{
	HX_STACK_LINE(23)
	super::__construct();
}
;
	return null();
}

PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new()
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Void PlayState_obj::parseSprings( ){
{
		HX_STACK_PUSH("PlayState::parseSprings","PlayState.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_LINE(224)
		::org::flixel::FlxTilemap springMap = ::org::flixel::FlxTilemap_obj::__new();		HX_STACK_VAR(springMap,"springMap");
		HX_STACK_LINE(226)
		springMap->loadMap(::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map6.csv")),HX_CSTRING("assets/fuel.png"),(int)16,(int)16,null(),null(),null(),null());
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = springMap->heightInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(228)
			while(((_g1 < _g))){
				HX_STACK_LINE(228)
				int ty = (_g1)++;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = springMap->widthInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(230)
					while(((_g3 < _g2))){
						HX_STACK_LINE(230)
						int tx = (_g3)++;		HX_STACK_VAR(tx,"tx");
						HX_STACK_LINE(232)
						if (((springMap->getTile(tx,ty) == (int)1))){
							HX_STACK_LINE(233)
							this->springs->add(::Spring_obj::__new(tx,ty));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,parseSprings,(void))

Void PlayState_obj::parseEnemies( ){
{
		HX_STACK_PUSH("PlayState::parseEnemies","PlayState.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(206)
		::org::flixel::FlxTilemap enemyMap = ::org::flixel::FlxTilemap_obj::__new();		HX_STACK_VAR(enemyMap,"enemyMap");
		HX_STACK_LINE(208)
		enemyMap->loadMap(::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map4.csv")),HX_CSTRING("assets/fuel.png"),(int)16,(int)16,null(),null(),null(),null());
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = enemyMap->heightInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			while(((_g1 < _g))){
				HX_STACK_LINE(210)
				int ty = (_g1)++;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = enemyMap->widthInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(212)
					while(((_g3 < _g2))){
						HX_STACK_LINE(212)
						int tx = (_g3)++;		HX_STACK_VAR(tx,"tx");
						HX_STACK_LINE(214)
						if (((enemyMap->getTile(tx,ty) == (int)1))){
							HX_STACK_LINE(215)
							this->goombas->addGoomba(tx,ty);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,parseEnemies,(void))

Void PlayState_obj::parseFuel( ){
{
		HX_STACK_PUSH("PlayState::parseFuel","PlayState.hx",184);
		HX_STACK_THIS(this);
		HX_STACK_LINE(185)
		::org::flixel::FlxTilemap fuelMap = ::org::flixel::FlxTilemap_obj::__new();		HX_STACK_VAR(fuelMap,"fuelMap");
		HX_STACK_LINE(187)
		fuelMap->loadMap(::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map3.csv")),HX_CSTRING("assets/fuel.png"),(int)16,(int)16,null(),null(),null(),null());
		HX_STACK_LINE(189)
		this->fuelGroup = ::org::flixel::FlxGroup_obj::__new(null());
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = fuelMap->heightInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while(((_g1 < _g))){
				HX_STACK_LINE(191)
				int ty = (_g1)++;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(193)
				{
					HX_STACK_LINE(193)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = fuelMap->widthInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(193)
					while(((_g3 < _g2))){
						HX_STACK_LINE(193)
						int tx = (_g3)++;		HX_STACK_VAR(tx,"tx");
						HX_STACK_LINE(195)
						if (((fuelMap->getTile(tx,ty) == (int)1))){
							HX_STACK_LINE(197)
							this->fuelGroup->add(::Fuel_obj::__new(tx,ty));
							HX_STACK_LINE(198)
							(this->totalFuel)++;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,parseFuel,(void))

Void PlayState_obj::parseSpikes( ){
{
		HX_STACK_PUSH("PlayState::parseSpikes","PlayState.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		::org::flixel::FlxTilemap spikeMap = ::org::flixel::FlxTilemap_obj::__new();		HX_STACK_VAR(spikeMap,"spikeMap");
		HX_STACK_LINE(167)
		spikeMap->loadMap(::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map2.csv")),HX_CSTRING("assets/spikes.png"),(int)16,(int)16,null(),null(),null(),null());
		HX_STACK_LINE(169)
		this->spikes = ::org::flixel::FlxGroup_obj::__new(null());
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = spikeMap->heightInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			while(((_g1 < _g))){
				HX_STACK_LINE(171)
				int ty = (_g1)++;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(173)
				{
					HX_STACK_LINE(173)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = spikeMap->widthInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(173)
					while(((_g3 < _g2))){
						HX_STACK_LINE(173)
						int tx = (_g3)++;		HX_STACK_VAR(tx,"tx");
						HX_STACK_LINE(175)
						if (((spikeMap->getTile(tx,ty) == (int)1))){
							HX_STACK_LINE(176)
							this->spikes->add(::Spike_obj::__new(tx,ty));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,parseSpikes,(void))

Void PlayState_obj::hitEnemy( ::org::flixel::FlxObject PlayerRef,::org::flixel::FlxObject EnemyRef){
{
		HX_STACK_PUSH("PlayState::hitEnemy","PlayState.hx",149);
		HX_STACK_THIS(this);
		HX_STACK_ARG(PlayerRef,"PlayerRef");
		HX_STACK_ARG(EnemyRef,"EnemyRef");
		HX_STACK_LINE(149)
		if (((bool((((int(PlayerRef->touching) & int((int)4096))) > (int)0)) && bool((((int(PlayerRef->wasTouching) & int((int)4096))) <= (int)0))))){
			HX_STACK_LINE(152)
			EnemyRef->kill();
			HX_STACK_LINE(153)
			PlayerRef->velocity->y = (int)-50;
			HX_STACK_LINE(154)
			PlayerRef->acceleration->y = (int)-50;
		}
		else{
			HX_STACK_LINE(157)
			this->player->reset(((Float(::org::flixel::FlxG_obj::width) / Float((int)2)) - (int)4),(int)12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hitEnemy,(void))

Void PlayState_obj::hitFuel( ::org::flixel::FlxObject Player,::org::flixel::FlxObject fuel){
{
		HX_STACK_PUSH("PlayState::hitFuel","PlayState.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Player,"Player");
		HX_STACK_ARG(fuel,"fuel");
		HX_STACK_LINE(142)
		fuel->kill();
		HX_STACK_LINE(143)
		(this->totalFuel)--;
		HX_STACK_LINE(144)
		(::org::flixel::FlxG_obj::score)++;
		HX_STACK_LINE(145)
		this->fuelCollected->setText(((::org::flixel::FlxG_obj::score + HX_CSTRING("/")) + this->maxFuel));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hitFuel,(void))

Void PlayState_obj::hitSpikes( ::org::flixel::FlxObject Player,::org::flixel::FlxObject spikes){
{
		HX_STACK_PUSH("PlayState::hitSpikes","PlayState.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Player,"Player");
		HX_STACK_ARG(spikes,"spikes");
		HX_STACK_LINE(136)
		this->player->reset(((Float(::org::flixel::FlxG_obj::width) / Float((int)2)) - (int)4),(int)12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hitSpikes,(void))

Void PlayState_obj::changeLevel( ::org::flixel::FlxObject Player,::org::flixel::FlxObject Exit){
{
		HX_STACK_PUSH("PlayState::changeLevel","PlayState.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Player,"Player");
		HX_STACK_ARG(Exit,"Exit");
		HX_STACK_LINE(130)
		::org::flixel::FlxG_obj::resetState();
		HX_STACK_LINE(131)
		::org::flixel::plugin::photonstorm::FlxControl_obj::clear();
		HX_STACK_LINE(132)
		::org::flixel::FlxG_obj::score = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,changeLevel,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		this->super::update();
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			Dynamic NotifyCallback = null();		HX_STACK_VAR(NotifyCallback,"NotifyCallback");
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				::org::flixel::FlxBasic ObjectOrGroup1 = this->player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
				::org::flixel::FlxBasic ObjectOrGroup2 = this->level;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
				HX_STACK_LINE(107)
				if (((ObjectOrGroup1 == null()))){
					HX_STACK_LINE(107)
					ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
				}
				HX_STACK_LINE(107)
				if (((ObjectOrGroup2 == ObjectOrGroup1))){
					HX_STACK_LINE(107)
					ObjectOrGroup2 = null();
				}
				HX_STACK_LINE(107)
				::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
				HX_STACK_LINE(107)
				::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
				HX_STACK_LINE(107)
				quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::org::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(107)
				bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(107)
				quadTree->destroy();
				HX_STACK_LINE(107)
				result;
			}
		}
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			Dynamic NotifyCallback = null();		HX_STACK_VAR(NotifyCallback,"NotifyCallback");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				::org::flixel::FlxBasic ObjectOrGroup1 = this->player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
				::org::flixel::FlxBasic ObjectOrGroup2 = this->elevators;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
				HX_STACK_LINE(108)
				if (((ObjectOrGroup1 == null()))){
					HX_STACK_LINE(108)
					ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
				}
				HX_STACK_LINE(108)
				if (((ObjectOrGroup2 == ObjectOrGroup1))){
					HX_STACK_LINE(108)
					ObjectOrGroup2 = null();
				}
				HX_STACK_LINE(108)
				::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
				HX_STACK_LINE(108)
				::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
				HX_STACK_LINE(108)
				quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::org::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(108)
				bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(108)
				quadTree->destroy();
				HX_STACK_LINE(108)
				result;
			}
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Dynamic NotifyCallback = null();		HX_STACK_VAR(NotifyCallback,"NotifyCallback");
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				::org::flixel::FlxBasic ObjectOrGroup1 = this->goombas;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
				::org::flixel::FlxBasic ObjectOrGroup2 = this->level;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
				HX_STACK_LINE(109)
				if (((ObjectOrGroup1 == null()))){
					HX_STACK_LINE(109)
					ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
				}
				HX_STACK_LINE(109)
				if (((ObjectOrGroup2 == ObjectOrGroup1))){
					HX_STACK_LINE(109)
					ObjectOrGroup2 = null();
				}
				HX_STACK_LINE(109)
				::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
				HX_STACK_LINE(109)
				::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
				HX_STACK_LINE(109)
				quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::org::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(109)
				bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(109)
				quadTree->destroy();
				HX_STACK_LINE(109)
				result;
			}
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			Dynamic NotifyCallback = null();		HX_STACK_VAR(NotifyCallback,"NotifyCallback");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				::org::flixel::FlxBasic ObjectOrGroup1 = this->goombas;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
				::org::flixel::FlxBasic ObjectOrGroup2 = this->spikes;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
				HX_STACK_LINE(110)
				if (((ObjectOrGroup1 == null()))){
					HX_STACK_LINE(110)
					ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
				}
				HX_STACK_LINE(110)
				if (((ObjectOrGroup2 == ObjectOrGroup1))){
					HX_STACK_LINE(110)
					ObjectOrGroup2 = null();
				}
				HX_STACK_LINE(110)
				::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
				HX_STACK_LINE(110)
				::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
				HX_STACK_LINE(110)
				quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::org::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(110)
				bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(110)
				quadTree->destroy();
				HX_STACK_LINE(110)
				result;
			}
		}
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = this->spikes;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			Dynamic ProcessCallback = null();		HX_STACK_VAR(ProcessCallback,"ProcessCallback");
			HX_STACK_LINE(111)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(111)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
			}
			HX_STACK_LINE(111)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(111)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(111)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(111)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(111)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->hitSpikes_dyn(),ProcessCallback);
			HX_STACK_LINE(111)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(111)
			quadTree->destroy();
			HX_STACK_LINE(111)
			result;
		}
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = this->fuelGroup;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			Dynamic ProcessCallback = null();		HX_STACK_VAR(ProcessCallback,"ProcessCallback");
			HX_STACK_LINE(112)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(112)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
			}
			HX_STACK_LINE(112)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(112)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(112)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(112)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(112)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->hitFuel_dyn(),ProcessCallback);
			HX_STACK_LINE(112)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(112)
			quadTree->destroy();
			HX_STACK_LINE(112)
			result;
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = this->exit;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			Dynamic ProcessCallback = null();		HX_STACK_VAR(ProcessCallback,"ProcessCallback");
			HX_STACK_LINE(113)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(113)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
			}
			HX_STACK_LINE(113)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(113)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(113)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(113)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(113)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->changeLevel_dyn(),ProcessCallback);
			HX_STACK_LINE(113)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(113)
			quadTree->destroy();
			HX_STACK_LINE(113)
			result;
		}
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = this->goombas;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			HX_STACK_LINE(114)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(114)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
			}
			HX_STACK_LINE(114)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(114)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(114)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(114)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(114)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->hitEnemy_dyn(),::org::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(114)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(114)
			quadTree->destroy();
			HX_STACK_LINE(114)
			result;
		}
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = this->springs;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			HX_STACK_LINE(115)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(115)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
			}
			HX_STACK_LINE(115)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(115)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(115)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(115)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(115)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->player->hitSpring_dyn(),::org::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(115)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(115)
			quadTree->destroy();
			HX_STACK_LINE(115)
			result;
		}
		HX_STACK_LINE(117)
		if (((this->player->y > this->level->height))){
			HX_STACK_LINE(118)
			this->player->reset(((Float(::org::flixel::FlxG_obj::width) / Float((int)2)) - (int)4),(int)12);
		}
		HX_STACK_LINE(122)
		if (((this->totalFuel == (int)0))){
			HX_STACK_LINE(122)
			this->exit->exists = true;
		}
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_PUSH("PlayState::destroy","PlayState.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_LINE(99)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::create( ){
{
		HX_STACK_PUSH("PlayState::create","PlayState.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		::org::flixel::FlxG_obj::setBgColor((int)-16777198);
		HX_STACK_LINE(43)
		this->add(::addons::FlxBackdrop_obj::__new(HX_CSTRING("assets/backdrop.png"),0.8,0.6,true,true));
		HX_STACK_LINE(45)
		this->level = ::org::flixel::FlxTilemap_obj::__new();
		HX_STACK_LINE(46)
		this->level->loadMap(::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map1.csv")),HX_CSTRING("assets/rock_tiles.png"),(int)8,(int)8,(int)0,(int)0,(int)1,(int)8);
		HX_STACK_LINE(47)
		::Registry_obj::level = this->level;
		HX_STACK_LINE(48)
		::Registry_obj::player = this->player;
		HX_STACK_LINE(51)
		this->player = ::Player_obj::__new();
		HX_STACK_LINE(53)
		this->goombas = ::Goombas_obj::__new();
		HX_STACK_LINE(56)
		this->elevators = ::org::flixel::FlxGroup_obj::__new(null());
		HX_STACK_LINE(57)
		this->springs = ::org::flixel::FlxGroup_obj::__new(null());
		HX_STACK_LINE(59)
		::Elevator ele1 = ::Elevator_obj::__new((int)1,(int)4,(int)0,(int)24,(int)60);		HX_STACK_VAR(ele1,"ele1");
		HX_STACK_LINE(60)
		::Elevator ele2 = ::Elevator_obj::__new((int)37,(int)3,(int)0,(int)25,(int)60);		HX_STACK_VAR(ele2,"ele2");
		HX_STACK_LINE(61)
		this->elevators->add(ele1);
		HX_STACK_LINE(62)
		this->elevators->add(ele2);
		HX_STACK_LINE(66)
		this->exit = ::org::flixel::FlxSprite_obj::__new((int)280,(int)208,null());
		HX_STACK_LINE(67)
		this->exit->makeGraphic((int)16,(int)16,(int)-10066330,null(),null());
		HX_STACK_LINE(68)
		this->exit->exists = false;
		HX_STACK_LINE(70)
		this->parseSpikes();
		HX_STACK_LINE(71)
		this->parseFuel();
		HX_STACK_LINE(72)
		this->parseEnemies();
		HX_STACK_LINE(73)
		this->parseSprings();
		HX_STACK_LINE(75)
		::org::flixel::FlxG_obj::worldBounds = ::org::flixel::FlxRect_obj::__new((int)0,(int)0,::Std_obj::_int(this->level->width),::Std_obj::_int(this->level->height));
		HX_STACK_LINE(76)
		::org::flixel::FlxG_obj::camera->setBounds((int)0,(int)0,::Std_obj::_int(this->level->width),::Std_obj::_int(this->level->height),null());
		HX_STACK_LINE(77)
		::org::flixel::FlxG_obj::camera->follow(this->player,(int)1,null());
		HX_STACK_LINE(79)
		this->maxFuel = this->totalFuel;
		HX_STACK_LINE(81)
		this->fuelCollected = ::org::flixel::FlxText_obj::__new((int)0,(int)0,(int)100,null(),null());
		HX_STACK_LINE(82)
		this->fuelCollected->setText((HX_CSTRING("0 /") + this->maxFuel));
		HX_STACK_LINE(83)
		this->fuelCollected->scrollFactor->x = (int)0;
		HX_STACK_LINE(84)
		this->fuelCollected->scrollFactor->y = (int)0;
		HX_STACK_LINE(86)
		this->add(this->level);
		HX_STACK_LINE(87)
		this->add(this->spikes);
		HX_STACK_LINE(88)
		this->add(this->fuelGroup);
		HX_STACK_LINE(89)
		this->add(this->exit);
		HX_STACK_LINE(90)
		this->add(this->player);
		HX_STACK_LINE(91)
		this->add(this->goombas);
		HX_STACK_LINE(92)
		this->add(this->fuelCollected);
		HX_STACK_LINE(93)
		this->add(this->elevators);
		HX_STACK_LINE(94)
		this->add(this->springs);
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(springs,"springs");
	HX_MARK_MEMBER_NAME(elevators,"elevators");
	HX_MARK_MEMBER_NAME(maxFuel,"maxFuel");
	HX_MARK_MEMBER_NAME(fuelCollected,"fuelCollected");
	HX_MARK_MEMBER_NAME(goombas,"goombas");
	HX_MARK_MEMBER_NAME(totalFuel,"totalFuel");
	HX_MARK_MEMBER_NAME(exit,"exit");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(fuelGroup,"fuelGroup");
	HX_MARK_MEMBER_NAME(spikes,"spikes");
	HX_MARK_MEMBER_NAME(level,"level");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(springs,"springs");
	HX_VISIT_MEMBER_NAME(elevators,"elevators");
	HX_VISIT_MEMBER_NAME(maxFuel,"maxFuel");
	HX_VISIT_MEMBER_NAME(fuelCollected,"fuelCollected");
	HX_VISIT_MEMBER_NAME(goombas,"goombas");
	HX_VISIT_MEMBER_NAME(totalFuel,"totalFuel");
	HX_VISIT_MEMBER_NAME(exit,"exit");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(fuelGroup,"fuelGroup");
	HX_VISIT_MEMBER_NAME(spikes,"spikes");
	HX_VISIT_MEMBER_NAME(level,"level");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"spikes") ) { return spikes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitFuel") ) { return hitFuel_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"springs") ) { return springs; }
		if (HX_FIELD_EQ(inName,"maxFuel") ) { return maxFuel; }
		if (HX_FIELD_EQ(inName,"goombas") ) { return goombas; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitEnemy") ) { return hitEnemy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseFuel") ) { return parseFuel_dyn(); }
		if (HX_FIELD_EQ(inName,"hitSpikes") ) { return hitSpikes_dyn(); }
		if (HX_FIELD_EQ(inName,"elevators") ) { return elevators; }
		if (HX_FIELD_EQ(inName,"totalFuel") ) { return totalFuel; }
		if (HX_FIELD_EQ(inName,"fuelGroup") ) { return fuelGroup; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseSpikes") ) { return parseSpikes_dyn(); }
		if (HX_FIELD_EQ(inName,"changeLevel") ) { return changeLevel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parseSprings") ) { return parseSprings_dyn(); }
		if (HX_FIELD_EQ(inName,"parseEnemies") ) { return parseEnemies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fuelCollected") ) { return fuelCollected; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { exit=inValue.Cast< ::org::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< ::org::flixel::FlxTilemap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spikes") ) { spikes=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"springs") ) { springs=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxFuel") ) { maxFuel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"goombas") ) { goombas=inValue.Cast< ::Goombas >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"elevators") ) { elevators=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalFuel") ) { totalFuel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fuelGroup") ) { fuelGroup=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fuelCollected") ) { fuelCollected=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("springs"));
	outFields->push(HX_CSTRING("elevators"));
	outFields->push(HX_CSTRING("maxFuel"));
	outFields->push(HX_CSTRING("fuelCollected"));
	outFields->push(HX_CSTRING("goombas"));
	outFields->push(HX_CSTRING("totalFuel"));
	outFields->push(HX_CSTRING("exit"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("fuelGroup"));
	outFields->push(HX_CSTRING("spikes"));
	outFields->push(HX_CSTRING("level"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("parseSprings"),
	HX_CSTRING("parseEnemies"),
	HX_CSTRING("parseFuel"),
	HX_CSTRING("parseSpikes"),
	HX_CSTRING("hitEnemy"),
	HX_CSTRING("hitFuel"),
	HX_CSTRING("hitSpikes"),
	HX_CSTRING("changeLevel"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("springs"),
	HX_CSTRING("elevators"),
	HX_CSTRING("maxFuel"),
	HX_CSTRING("fuelCollected"),
	HX_CSTRING("goombas"),
	HX_CSTRING("totalFuel"),
	HX_CSTRING("exit"),
	HX_CSTRING("player"),
	HX_CSTRING("fuelGroup"),
	HX_CSTRING("spikes"),
	HX_CSTRING("level"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayState_obj::__boot()
{
}

