#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_native_Lib
#include <native/Lib.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControlHandler
#include <org/flixel/plugin/photonstorm/FlxControlHandler.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxVelocity
#include <org/flixel/plugin/photonstorm/FlxVelocity.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Input
#include <org/flixel/system/input/Input.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Keyboard
#include <org/flixel/system/input/Keyboard.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{

Void FlxControlHandler_obj::__construct(::org::flixel::FlxSprite source,int movementType,int stoppingType,hx::Null< bool >  __o_updateFacing,hx::Null< bool >  __o_enableArrowKeys)
{
HX_STACK_PUSH("FlxControlHandler::new","org/flixel/plugin/photonstorm/FlxControlHandler.hx",208);
bool updateFacing = __o_updateFacing.Default(false);
bool enableArrowKeys = __o_enableArrowKeys.Default(true);
{
	HX_STACK_LINE(209)
	this->nextFireTime = (int)0;
	HX_STACK_LINE(211)
	this->isPressedUp = false;
	HX_STACK_LINE(212)
	this->isPressedDown = false;
	HX_STACK_LINE(213)
	this->isPressedLeft = false;
	HX_STACK_LINE(214)
	this->isPressedRight = false;
	HX_STACK_LINE(216)
	this->enabled = false;
	HX_STACK_LINE(217)
	this->xSpeedAdjust = (int)0;
	HX_STACK_LINE(218)
	this->ySpeedAdjust = (int)0;
	HX_STACK_LINE(221)
	this->entity = source;
	HX_STACK_LINE(223)
	this->movement = movementType;
	HX_STACK_LINE(224)
	this->stopping = stoppingType;
	HX_STACK_LINE(226)
	this->xFacing = updateFacing;
	HX_STACK_LINE(227)
	this->yFacing = updateFacing;
	HX_STACK_LINE(229)
	this->up = false;
	HX_STACK_LINE(230)
	this->down = false;
	HX_STACK_LINE(231)
	this->left = false;
	HX_STACK_LINE(232)
	this->right = false;
	HX_STACK_LINE(234)
	this->thrustEnabled = false;
	HX_STACK_LINE(235)
	this->isRotating = false;
	HX_STACK_LINE(236)
	this->enforceAngleLimits = false;
	HX_STACK_LINE(237)
	this->rotation = (int)0;
	HX_STACK_LINE(238)
	this->rotationStopping = (int)0;
	HX_STACK_LINE(240)
	if ((enableArrowKeys)){
		HX_STACK_LINE(241)
		this->setCursorControl(null(),null(),null(),null());
	}
	HX_STACK_LINE(245)
	this->enabled = true;
}
;
	return null();
}

FlxControlHandler_obj::~FlxControlHandler_obj() { }

Dynamic FlxControlHandler_obj::__CreateEmpty() { return  new FlxControlHandler_obj; }
hx::ObjectPtr< FlxControlHandler_obj > FlxControlHandler_obj::__new(::org::flixel::FlxSprite source,int movementType,int stoppingType,hx::Null< bool >  __o_updateFacing,hx::Null< bool >  __o_enableArrowKeys)
{  hx::ObjectPtr< FlxControlHandler_obj > result = new FlxControlHandler_obj();
	result->__construct(source,movementType,stoppingType,__o_updateFacing,__o_enableArrowKeys);
	return result;}

Dynamic FlxControlHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxControlHandler_obj > result = new FlxControlHandler_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxControlHandler_obj::setNumpadControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setNumpadControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1428);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1429)
		this->up = allowUp;
		HX_STACK_LINE(1430)
		this->down = allowDown;
		HX_STACK_LINE(1431)
		this->left = allowLeft;
		HX_STACK_LINE(1432)
		this->right = allowRight;
		HX_STACK_LINE(1434)
		this->upKey = HX_CSTRING("NUMPADEIGHT");
		HX_STACK_LINE(1435)
		this->downKey = HX_CSTRING("NUMPADTWO");
		HX_STACK_LINE(1436)
		this->leftKey = HX_CSTRING("NUMPADFOUR");
		HX_STACK_LINE(1437)
		this->rightKey = HX_CSTRING("NUMPADSIX");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setNumpadControl,(void))

Void FlxControlHandler_obj::setDvorakSimplifiedControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setDvorakSimplifiedControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1406);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1407)
		this->up = allowUp;
		HX_STACK_LINE(1408)
		this->down = allowDown;
		HX_STACK_LINE(1409)
		this->left = allowLeft;
		HX_STACK_LINE(1410)
		this->right = allowRight;
		HX_STACK_LINE(1412)
		this->upKey = HX_CSTRING("COMMA");
		HX_STACK_LINE(1413)
		this->downKey = HX_CSTRING("O");
		HX_STACK_LINE(1414)
		this->leftKey = HX_CSTRING("A");
		HX_STACK_LINE(1415)
		this->rightKey = HX_CSTRING("E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setDvorakSimplifiedControl,(void))

Void FlxControlHandler_obj::setZQSDControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setZQSDControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1384);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1385)
		this->up = allowUp;
		HX_STACK_LINE(1386)
		this->down = allowDown;
		HX_STACK_LINE(1387)
		this->left = allowLeft;
		HX_STACK_LINE(1388)
		this->right = allowRight;
		HX_STACK_LINE(1390)
		this->upKey = HX_CSTRING("Z");
		HX_STACK_LINE(1391)
		this->downKey = HX_CSTRING("S");
		HX_STACK_LINE(1392)
		this->leftKey = HX_CSTRING("Q");
		HX_STACK_LINE(1393)
		this->rightKey = HX_CSTRING("D");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setZQSDControl,(void))

Void FlxControlHandler_obj::setHJKLControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setHJKLControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1362);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1363)
		this->up = allowUp;
		HX_STACK_LINE(1364)
		this->down = allowDown;
		HX_STACK_LINE(1365)
		this->left = allowLeft;
		HX_STACK_LINE(1366)
		this->right = allowRight;
		HX_STACK_LINE(1368)
		this->upKey = HX_CSTRING("K");
		HX_STACK_LINE(1369)
		this->downKey = HX_CSTRING("J");
		HX_STACK_LINE(1370)
		this->leftKey = HX_CSTRING("H");
		HX_STACK_LINE(1371)
		this->rightKey = HX_CSTRING("L");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setHJKLControl,(void))

Void FlxControlHandler_obj::setIJKLControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setIJKLControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1340);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1341)
		this->up = allowUp;
		HX_STACK_LINE(1342)
		this->down = allowDown;
		HX_STACK_LINE(1343)
		this->left = allowLeft;
		HX_STACK_LINE(1344)
		this->right = allowRight;
		HX_STACK_LINE(1346)
		this->upKey = HX_CSTRING("I");
		HX_STACK_LINE(1347)
		this->downKey = HX_CSTRING("K");
		HX_STACK_LINE(1348)
		this->leftKey = HX_CSTRING("J");
		HX_STACK_LINE(1349)
		this->rightKey = HX_CSTRING("L");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setIJKLControl,(void))

Void FlxControlHandler_obj::setESDFControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setESDFControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1319)
		this->up = allowUp;
		HX_STACK_LINE(1320)
		this->down = allowDown;
		HX_STACK_LINE(1321)
		this->left = allowLeft;
		HX_STACK_LINE(1322)
		this->right = allowRight;
		HX_STACK_LINE(1324)
		this->upKey = HX_CSTRING("E");
		HX_STACK_LINE(1325)
		this->downKey = HX_CSTRING("D");
		HX_STACK_LINE(1326)
		this->leftKey = HX_CSTRING("S");
		HX_STACK_LINE(1327)
		this->rightKey = HX_CSTRING("F");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setESDFControl,(void))

Void FlxControlHandler_obj::setWASDControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setWASDControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1296);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1297)
		this->up = allowUp;
		HX_STACK_LINE(1298)
		this->down = allowDown;
		HX_STACK_LINE(1299)
		this->left = allowLeft;
		HX_STACK_LINE(1300)
		this->right = allowRight;
		HX_STACK_LINE(1302)
		this->upKey = HX_CSTRING("W");
		HX_STACK_LINE(1303)
		this->downKey = HX_CSTRING("S");
		HX_STACK_LINE(1304)
		this->leftKey = HX_CSTRING("A");
		HX_STACK_LINE(1305)
		this->rightKey = HX_CSTRING("D");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setWASDControl,(void))

Void FlxControlHandler_obj::setCursorControl( hx::Null< bool >  __o_allowUp,hx::Null< bool >  __o_allowDown,hx::Null< bool >  __o_allowLeft,hx::Null< bool >  __o_allowRight){
bool allowUp = __o_allowUp.Default(true);
bool allowDown = __o_allowDown.Default(true);
bool allowLeft = __o_allowLeft.Default(true);
bool allowRight = __o_allowRight.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setCursorControl","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1274);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowUp,"allowUp");
	HX_STACK_ARG(allowDown,"allowDown");
	HX_STACK_ARG(allowLeft,"allowLeft");
	HX_STACK_ARG(allowRight,"allowRight");
{
		HX_STACK_LINE(1275)
		this->up = allowUp;
		HX_STACK_LINE(1276)
		this->down = allowDown;
		HX_STACK_LINE(1277)
		this->left = allowLeft;
		HX_STACK_LINE(1278)
		this->right = allowRight;
		HX_STACK_LINE(1280)
		this->upKey = HX_CSTRING("UP");
		HX_STACK_LINE(1281)
		this->downKey = HX_CSTRING("DOWN");
		HX_STACK_LINE(1282)
		this->leftKey = HX_CSTRING("LEFT");
		HX_STACK_LINE(1283)
		this->rightKey = HX_CSTRING("RIGHT");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setCursorControl,(void))

Void FlxControlHandler_obj::setCustomKeys( ::String customUpKey,::String customDownKey,::String customLeftKey,::String customRightKey){
{
		HX_STACK_PUSH("FlxControlHandler::setCustomKeys","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(customUpKey,"customUpKey");
		HX_STACK_ARG(customDownKey,"customDownKey");
		HX_STACK_ARG(customLeftKey,"customLeftKey");
		HX_STACK_ARG(customRightKey,"customRightKey");
		HX_STACK_LINE(1239)
		if (((customUpKey != HX_CSTRING("")))){
			HX_STACK_LINE(1241)
			this->up = true;
			HX_STACK_LINE(1242)
			this->upKey = customUpKey;
		}
		HX_STACK_LINE(1245)
		if (((customDownKey != HX_CSTRING("")))){
			HX_STACK_LINE(1247)
			this->down = true;
			HX_STACK_LINE(1248)
			this->downKey = customDownKey;
		}
		HX_STACK_LINE(1251)
		if (((customLeftKey != HX_CSTRING("")))){
			HX_STACK_LINE(1253)
			this->left = true;
			HX_STACK_LINE(1254)
			this->leftKey = customLeftKey;
		}
		HX_STACK_LINE(1257)
		if (((customRightKey != HX_CSTRING("")))){
			HX_STACK_LINE(1259)
			this->right = true;
			HX_STACK_LINE(1260)
			this->rightKey = customRightKey;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setCustomKeys,(void))

Void FlxControlHandler_obj::update( ){
{
		HX_STACK_PUSH("FlxControlHandler::update","org/flixel/plugin/photonstorm/FlxControlHandler.hx",1063);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1064)
		if (((this->entity == null()))){
			HX_STACK_LINE(1065)
			return null();
		}
		HX_STACK_LINE(1070)
		this->isPressedUp = false;
		HX_STACK_LINE(1071)
		this->isPressedDown = false;
		HX_STACK_LINE(1072)
		this->isPressedLeft = false;
		HX_STACK_LINE(1073)
		this->isPressedRight = false;
		HX_STACK_LINE(1075)
		if (((this->stopping == (int)0))){
			HX_STACK_LINE(1076)
			if (((this->movement == (int)0))){
				HX_STACK_LINE(1079)
				this->entity->velocity->x = (int)0;
				HX_STACK_LINE(1080)
				this->entity->velocity->y = (int)0;
			}
			else{
				HX_STACK_LINE(1082)
				if (((this->movement == (int)1))){
					HX_STACK_LINE(1084)
					this->entity->acceleration->x = (int)0;
					HX_STACK_LINE(1085)
					this->entity->acceleration->y = (int)0;
				}
			}
		}
		else{
			HX_STACK_LINE(1088)
			if (((this->stopping == (int)1))){
				HX_STACK_LINE(1089)
				if (((this->movement == (int)0))){
					HX_STACK_LINE(1092)
					this->entity->velocity->x = (int)0;
					HX_STACK_LINE(1093)
					this->entity->velocity->y = (int)0;
				}
				else{
					HX_STACK_LINE(1095)
					if (((this->movement == (int)1))){
						HX_STACK_LINE(1098)
						this->entity->acceleration->x = this->gravityX;
						HX_STACK_LINE(1099)
						this->entity->acceleration->y = this->gravityY;
					}
				}
			}
		}
		HX_STACK_LINE(1104)
		if ((this->isRotating)){
			HX_STACK_LINE(1106)
			if (((this->rotationStopping == (int)0))){
				HX_STACK_LINE(1107)
				if (((this->rotation == (int)0))){
					HX_STACK_LINE(1109)
					this->entity->angularVelocity = (int)0;
				}
				else{
					HX_STACK_LINE(1112)
					if (((this->rotation == (int)1))){
						HX_STACK_LINE(1113)
						this->entity->angularAcceleration = (int)0;
					}
				}
			}
			else{
				HX_STACK_LINE(1117)
				if (((this->rotationStopping == (int)1))){
					HX_STACK_LINE(1118)
					if (((this->rotation == (int)0))){
						HX_STACK_LINE(1120)
						this->entity->angularVelocity = (int)0;
					}
				}
			}
			HX_STACK_LINE(1125)
			bool hasRotatedAntiClockwise = false;		HX_STACK_VAR(hasRotatedAntiClockwise,"hasRotatedAntiClockwise");
			HX_STACK_LINE(1126)
			bool hasRotatedClockwise = false;		HX_STACK_VAR(hasRotatedClockwise,"hasRotatedClockwise");
			HX_STACK_LINE(1128)
			hasRotatedAntiClockwise = this->moveAntiClockwise();
			HX_STACK_LINE(1130)
			if (((hasRotatedAntiClockwise == false))){
				HX_STACK_LINE(1131)
				hasRotatedClockwise = this->moveClockwise();
			}
			HX_STACK_LINE(1135)
			if (((this->rotationStopping == (int)1))){
				HX_STACK_LINE(1136)
				if (((bool((bool((this->rotation == (int)1)) && bool((hasRotatedAntiClockwise == false)))) && bool((hasRotatedClockwise == false))))){
					HX_STACK_LINE(1138)
					this->entity->angularAcceleration = (int)0;
				}
			}
			HX_STACK_LINE(1144)
			if (((bool((bool((bool((this->rotationStopping == (int)0)) && bool((this->rotation == (int)1)))) && bool((hasRotatedAntiClockwise == false)))) && bool((hasRotatedClockwise == false))))){
				HX_STACK_LINE(1146)
				this->entity->angularVelocity = (int)0;
				HX_STACK_LINE(1147)
				this->entity->angularAcceleration = (int)0;
			}
		}
		HX_STACK_LINE(1152)
		if (((bool(this->thrustEnabled) || bool(this->reverseEnabled)))){
			HX_STACK_LINE(1154)
			bool moved = false;		HX_STACK_VAR(moved,"moved");
			HX_STACK_LINE(1156)
			if ((this->thrustEnabled)){
				HX_STACK_LINE(1157)
				moved = this->moveThrust();
			}
			HX_STACK_LINE(1161)
			if (((bool((moved == false)) && bool(this->reverseEnabled)))){
				HX_STACK_LINE(1162)
				moved = this->moveReverse();
			}
		}
		else{
			HX_STACK_LINE(1168)
			bool movedX = false;		HX_STACK_VAR(movedX,"movedX");
			HX_STACK_LINE(1169)
			bool movedY = false;		HX_STACK_VAR(movedY,"movedY");
			HX_STACK_LINE(1171)
			if ((this->up)){
				HX_STACK_LINE(1172)
				movedY = this->moveUp();
			}
			HX_STACK_LINE(1176)
			if (((bool(this->down) && bool((movedY == false))))){
				HX_STACK_LINE(1177)
				movedY = this->moveDown();
			}
			HX_STACK_LINE(1181)
			if ((this->left)){
				HX_STACK_LINE(1182)
				movedX = this->moveLeft();
			}
			HX_STACK_LINE(1186)
			if (((bool(this->right) && bool((movedX == false))))){
				HX_STACK_LINE(1187)
				movedX = this->moveRight();
			}
		}
		HX_STACK_LINE(1192)
		if ((this->fire)){
			HX_STACK_LINE(1193)
			this->runFire();
		}
		HX_STACK_LINE(1197)
		if ((this->jump)){
			HX_STACK_LINE(1198)
			this->runJump();
		}
		HX_STACK_LINE(1202)
		if ((this->capVelocity)){
			HX_STACK_LINE(1204)
			if (((this->entity->velocity->x > this->entity->maxVelocity->x))){
				HX_STACK_LINE(1205)
				this->entity->velocity->x = this->entity->maxVelocity->x;
			}
			HX_STACK_LINE(1209)
			if (((this->entity->velocity->y > this->entity->maxVelocity->y))){
				HX_STACK_LINE(1210)
				this->entity->velocity->y = this->entity->maxVelocity->y;
			}
		}
		HX_STACK_LINE(1215)
		if (((this->walkSound != null()))){
			HX_STACK_LINE(1216)
			if (((bool((bool((this->movement == (int)0)) && bool((this->entity->velocity->x != (int)0)))) || bool((bool((this->movement == (int)1)) && bool((this->entity->acceleration->x != (int)0))))))){
				HX_STACK_LINE(1218)
				this->walkSound->play(false);
			}
			else{
				HX_STACK_LINE(1222)
				this->walkSound->stop();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,update,(void))

bool FlxControlHandler_obj::runJump( ){
	HX_STACK_PUSH("FlxControlHandler::runJump","org/flixel/plugin/photonstorm/FlxControlHandler.hx",985);
	HX_STACK_THIS(this);
	HX_STACK_LINE(986)
	bool jumped = false;		HX_STACK_VAR(jumped,"jumped");
	HX_STACK_LINE(989)
	if (((((int(this->entity->touching) & int(this->jumpSurface))) > (int)0))){
		HX_STACK_LINE(990)
		this->extraSurfaceTime = (::native::Lib_obj::getTimer() + this->jumpFromFallTime);
	}
	HX_STACK_LINE(994)
	if (((bool((bool((bool((this->jumpKeyMode == (int)0)) && bool(::org::flixel::FlxG_obj::keys->pressed(this->jumpKey)))) || bool((bool((this->jumpKeyMode == (int)1)) && bool(::org::flixel::FlxG_obj::keys->justPressed(this->jumpKey)))))) || bool((bool((this->jumpKeyMode == (int)2)) && bool(::org::flixel::FlxG_obj::keys->justReleased(this->jumpKey))))))){
		HX_STACK_LINE(997)
		if ((((((int(this->entity->touching) & int(this->jumpSurface))) > (int)0) == false))){
			HX_STACK_LINE(1000)
			if (((::native::Lib_obj::getTimer() > this->extraSurfaceTime))){
				HX_STACK_LINE(1001)
				return jumped;
			}
			else{
				HX_STACK_LINE(1005)
				if (((this->lastJumpTime > (this->extraSurfaceTime - this->jumpFromFallTime)))){
					HX_STACK_LINE(1008)
					return jumped;
				}
			}
			HX_STACK_LINE(1014)
			if (((::native::Lib_obj::getTimer() < this->nextJumpTime))){
				HX_STACK_LINE(1015)
				return jumped;
			}
		}
		else{
			HX_STACK_LINE(1020)
			if (((::native::Lib_obj::getTimer() < this->nextJumpTime))){
				HX_STACK_LINE(1023)
				return jumped;
			}
		}
		HX_STACK_LINE(1028)
		if (((this->gravityY > (int)0))){
			HX_STACK_LINE(1029)
			this->entity->velocity->y = -(this->jumpHeight);
		}
		else{
			HX_STACK_LINE(1034)
			this->entity->velocity->y = this->jumpHeight;
		}
		HX_STACK_LINE(1039)
		if (((this->jumpCallback_dyn() != null()))){
			HX_STACK_LINE(1040)
			::Reflect_obj::callMethod(hx::ObjectPtr<OBJ_>(this),this->__Field(HX_CSTRING("jumpCallback"),true),Dynamic( Array_obj<Dynamic>::__new()));
		}
		HX_STACK_LINE(1045)
		this->lastJumpTime = ::native::Lib_obj::getTimer();
		HX_STACK_LINE(1046)
		this->nextJumpTime = (this->lastJumpTime + this->jumpRate);
		HX_STACK_LINE(1048)
		jumped = true;
	}
	HX_STACK_LINE(1051)
	if (((bool(jumped) && bool((this->jumpSound != null()))))){
		HX_STACK_LINE(1052)
		this->jumpSound->play(true);
	}
	HX_STACK_LINE(1056)
	return jumped;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,runJump,return )

bool FlxControlHandler_obj::runFire( ){
	HX_STACK_PUSH("FlxControlHandler::runFire","org/flixel/plugin/photonstorm/FlxControlHandler.hx",943);
	HX_STACK_THIS(this);
	HX_STACK_LINE(944)
	bool fired = false;		HX_STACK_VAR(fired,"fired");
	HX_STACK_LINE(949)
	if (((bool((bool((bool((this->fireKeyMode == (int)0)) && bool(::org::flixel::FlxG_obj::keys->pressed(this->fireKey)))) || bool((bool((this->fireKeyMode == (int)1)) && bool(::org::flixel::FlxG_obj::keys->justPressed(this->fireKey)))))) || bool((bool((this->fireKeyMode == (int)2)) && bool(::org::flixel::FlxG_obj::keys->justReleased(this->fireKey))))))){
		HX_STACK_LINE(950)
		if (((this->fireRate > (int)0))){
			HX_STACK_LINE(952)
			if (((::native::Lib_obj::getTimer() > this->nextFireTime))){
				HX_STACK_LINE(955)
				this->lastFiredTime = ::native::Lib_obj::getTimer();
				HX_STACK_LINE(958)
				::Reflect_obj::callMethod(hx::ObjectPtr<OBJ_>(this),this->__Field(HX_CSTRING("fireCallback"),true),Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(960)
				fired = true;
				HX_STACK_LINE(962)
				this->nextFireTime = (this->lastFiredTime + this->fireRate);
			}
		}
		else{
			HX_STACK_LINE(967)
			this->lastFiredTime = ::native::Lib_obj::getTimer();
			HX_STACK_LINE(970)
			::Reflect_obj::callMethod(hx::ObjectPtr<OBJ_>(this),this->__Field(HX_CSTRING("fireCallback"),true),Dynamic( Array_obj<Dynamic>::__new()));
			HX_STACK_LINE(972)
			fired = true;
		}
	}
	HX_STACK_LINE(976)
	if (((bool(fired) && bool((this->fireSound != null()))))){
		HX_STACK_LINE(977)
		this->fireSound->play(true);
	}
	HX_STACK_LINE(981)
	return fired;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,runFire,return )

bool FlxControlHandler_obj::moveReverse( ){
	HX_STACK_PUSH("FlxControlHandler::moveReverse","org/flixel/plugin/photonstorm/FlxControlHandler.hx",913);
	HX_STACK_THIS(this);
	HX_STACK_LINE(914)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(916)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->reverseKey))){
		HX_STACK_LINE(918)
		move = true;
		HX_STACK_LINE(920)
		::org::flixel::FlxPoint motion = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::velocityFromAngle(::Math_obj::floor(this->entity->angle),this->reverseSpeed);		HX_STACK_VAR(motion,"motion");
		HX_STACK_LINE(922)
		if (((this->movement == (int)0))){
			HX_STACK_LINE(924)
			this->entity->velocity->x = -(motion->x);
			HX_STACK_LINE(925)
			this->entity->velocity->y = -(motion->y);
		}
		else{
			HX_STACK_LINE(927)
			if (((this->movement == (int)1))){
				HX_STACK_LINE(929)
				this->entity->acceleration->x = -(motion->x);
				HX_STACK_LINE(930)
				this->entity->acceleration->y = -(motion->y);
			}
		}
		HX_STACK_LINE(933)
		if (((bool((this->bounds != null())) && bool((this->entity->x < this->bounds->x))))){
			HX_STACK_LINE(934)
			this->entity->x = this->bounds->x;
		}
	}
	HX_STACK_LINE(939)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveReverse,return )

bool FlxControlHandler_obj::moveThrust( ){
	HX_STACK_PUSH("FlxControlHandler::moveThrust","org/flixel/plugin/photonstorm/FlxControlHandler.hx",878);
	HX_STACK_THIS(this);
	HX_STACK_LINE(879)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(881)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->thrustKey))){
		HX_STACK_LINE(883)
		move = true;
		HX_STACK_LINE(885)
		::org::flixel::FlxPoint motion = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::velocityFromAngle(::Math_obj::floor(this->entity->angle),this->thrustSpeed);		HX_STACK_VAR(motion,"motion");
		HX_STACK_LINE(887)
		if (((this->movement == (int)0))){
			HX_STACK_LINE(889)
			this->entity->velocity->x = motion->x;
			HX_STACK_LINE(890)
			this->entity->velocity->y = motion->y;
		}
		else{
			HX_STACK_LINE(892)
			if (((this->movement == (int)1))){
				HX_STACK_LINE(894)
				this->entity->acceleration->x = motion->x;
				HX_STACK_LINE(895)
				this->entity->acceleration->y = motion->y;
			}
		}
		HX_STACK_LINE(898)
		if (((bool((this->bounds != null())) && bool((this->entity->x < this->bounds->x))))){
			HX_STACK_LINE(899)
			this->entity->x = this->bounds->x;
		}
	}
	HX_STACK_LINE(904)
	if (((bool(move) && bool((this->thrustSound != null()))))){
		HX_STACK_LINE(905)
		this->thrustSound->play(false);
	}
	HX_STACK_LINE(909)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveThrust,return )

bool FlxControlHandler_obj::moveClockwise( ){
	HX_STACK_PUSH("FlxControlHandler::moveClockwise","org/flixel/plugin/photonstorm/FlxControlHandler.hx",851);
	HX_STACK_THIS(this);
	HX_STACK_LINE(852)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(854)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->clockwiseKey))){
		HX_STACK_LINE(856)
		move = true;
		HX_STACK_LINE(858)
		if (((this->rotation == (int)0))){
			HX_STACK_LINE(859)
			this->entity->angularVelocity = this->clockwiseRotationSpeed;
		}
		else{
			HX_STACK_LINE(862)
			if (((this->rotation == (int)1))){
				HX_STACK_LINE(863)
				this->entity->angularAcceleration = this->clockwiseRotationSpeed;
			}
		}
		HX_STACK_LINE(868)
		if ((this->enforceAngleLimits)){
		}
	}
	HX_STACK_LINE(874)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveClockwise,return )

bool FlxControlHandler_obj::moveAntiClockwise( ){
	HX_STACK_PUSH("FlxControlHandler::moveAntiClockwise","org/flixel/plugin/photonstorm/FlxControlHandler.hx",824);
	HX_STACK_THIS(this);
	HX_STACK_LINE(825)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(827)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->antiClockwiseKey))){
		HX_STACK_LINE(829)
		move = true;
		HX_STACK_LINE(831)
		if (((this->rotation == (int)0))){
			HX_STACK_LINE(832)
			this->entity->angularVelocity = this->antiClockwiseRotationSpeed;
		}
		else{
			HX_STACK_LINE(835)
			if (((this->rotation == (int)1))){
				HX_STACK_LINE(836)
				this->entity->angularAcceleration = this->antiClockwiseRotationSpeed;
			}
		}
		HX_STACK_LINE(841)
		if ((this->enforceAngleLimits)){
		}
	}
	HX_STACK_LINE(847)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveAntiClockwise,return )

bool FlxControlHandler_obj::moveRight( ){
	HX_STACK_PUSH("FlxControlHandler::moveRight","org/flixel/plugin/photonstorm/FlxControlHandler.hx",792);
	HX_STACK_THIS(this);
	HX_STACK_LINE(793)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(795)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->rightKey))){
		HX_STACK_LINE(797)
		move = true;
		HX_STACK_LINE(798)
		this->isPressedRight = true;
		HX_STACK_LINE(800)
		if ((this->xFacing)){
			HX_STACK_LINE(801)
			this->entity->setFacing((int)16);
		}
		HX_STACK_LINE(805)
		if (((this->movement == (int)0))){
			HX_STACK_LINE(806)
			this->entity->velocity->x = this->rightMoveSpeed;
		}
		else{
			HX_STACK_LINE(809)
			if (((this->movement == (int)1))){
				HX_STACK_LINE(810)
				this->entity->acceleration->x = this->rightMoveSpeed;
			}
		}
		HX_STACK_LINE(814)
		if (((bool((this->bounds != null())) && bool((this->entity->x > this->bounds->get_right()))))){
			HX_STACK_LINE(815)
			this->entity->x = this->bounds->get_right();
		}
	}
	HX_STACK_LINE(820)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveRight,return )

bool FlxControlHandler_obj::moveLeft( ){
	HX_STACK_PUSH("FlxControlHandler::moveLeft","org/flixel/plugin/photonstorm/FlxControlHandler.hx",760);
	HX_STACK_THIS(this);
	HX_STACK_LINE(761)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(763)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->leftKey))){
		HX_STACK_LINE(765)
		move = true;
		HX_STACK_LINE(766)
		this->isPressedLeft = true;
		HX_STACK_LINE(768)
		if ((this->xFacing)){
			HX_STACK_LINE(769)
			this->entity->setFacing((int)1);
		}
		HX_STACK_LINE(773)
		if (((this->movement == (int)0))){
			HX_STACK_LINE(774)
			this->entity->velocity->x = this->leftMoveSpeed;
		}
		else{
			HX_STACK_LINE(777)
			if (((this->movement == (int)1))){
				HX_STACK_LINE(778)
				this->entity->acceleration->x = this->leftMoveSpeed;
			}
		}
		HX_STACK_LINE(782)
		if (((bool((this->bounds != null())) && bool((this->entity->x < this->bounds->x))))){
			HX_STACK_LINE(783)
			this->entity->x = this->bounds->x;
		}
	}
	HX_STACK_LINE(788)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveLeft,return )

bool FlxControlHandler_obj::moveDown( ){
	HX_STACK_PUSH("FlxControlHandler::moveDown","org/flixel/plugin/photonstorm/FlxControlHandler.hx",727);
	HX_STACK_THIS(this);
	HX_STACK_LINE(728)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(730)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->downKey))){
		HX_STACK_LINE(732)
		move = true;
		HX_STACK_LINE(733)
		this->isPressedDown = true;
		HX_STACK_LINE(735)
		if ((this->yFacing)){
			HX_STACK_LINE(736)
			this->entity->setFacing((int)4096);
		}
		HX_STACK_LINE(740)
		if (((this->movement == (int)0))){
			HX_STACK_LINE(741)
			this->entity->velocity->y = this->downMoveSpeed;
		}
		else{
			HX_STACK_LINE(744)
			if (((this->movement == (int)1))){
				HX_STACK_LINE(745)
				this->entity->acceleration->y = this->downMoveSpeed;
			}
		}
		HX_STACK_LINE(749)
		if (((bool((this->bounds != null())) && bool((this->entity->y > this->bounds->get_bottom()))))){
			HX_STACK_LINE(750)
			this->entity->y = this->bounds->get_bottom();
		}
	}
	HX_STACK_LINE(756)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveDown,return )

bool FlxControlHandler_obj::moveUp( ){
	HX_STACK_PUSH("FlxControlHandler::moveUp","org/flixel/plugin/photonstorm/FlxControlHandler.hx",695);
	HX_STACK_THIS(this);
	HX_STACK_LINE(696)
	bool move = false;		HX_STACK_VAR(move,"move");
	HX_STACK_LINE(698)
	if ((::org::flixel::FlxG_obj::keys->pressed(this->upKey))){
		HX_STACK_LINE(700)
		move = true;
		HX_STACK_LINE(701)
		this->isPressedUp = true;
		HX_STACK_LINE(703)
		if ((this->yFacing)){
			HX_STACK_LINE(704)
			this->entity->setFacing((int)256);
		}
		HX_STACK_LINE(708)
		if (((this->movement == (int)0))){
			HX_STACK_LINE(709)
			this->entity->velocity->y = this->upMoveSpeed;
		}
		else{
			HX_STACK_LINE(712)
			if (((this->movement == (int)1))){
				HX_STACK_LINE(713)
				this->entity->acceleration->y = this->upMoveSpeed;
			}
		}
		HX_STACK_LINE(717)
		if (((bool((this->bounds != null())) && bool((this->entity->y < this->bounds->get_top()))))){
			HX_STACK_LINE(718)
			this->entity->y = this->bounds->get_top();
		}
	}
	HX_STACK_LINE(723)
	return move;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,moveUp,return )

Void FlxControlHandler_obj::removeBounds( ){
{
		HX_STACK_PUSH("FlxControlHandler::removeBounds","org/flixel/plugin/photonstorm/FlxControlHandler.hx",690);
		HX_STACK_THIS(this);
		HX_STACK_LINE(690)
		this->bounds = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,removeBounds,(void))

Void FlxControlHandler_obj::setBounds( int x,int y,int width,int height){
{
		HX_STACK_PUSH("FlxControlHandler::setBounds","org/flixel/plugin/photonstorm/FlxControlHandler.hx",682);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(682)
		this->bounds = ::native::geom::Rectangle_obj::__new(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setBounds,(void))

Void FlxControlHandler_obj::setJumpButton( ::String key,int keymode,int height,int surface,hx::Null< int >  __o_repeatDelay,hx::Null< int >  __o_jumpFromFall,Dynamic callbackFunc,::String __o_altKey){
int repeatDelay = __o_repeatDelay.Default(250);
int jumpFromFall = __o_jumpFromFall.Default(0);
::String altKey = __o_altKey.Default(HX_CSTRING(""));
	HX_STACK_PUSH("FlxControlHandler::setJumpButton","org/flixel/plugin/photonstorm/FlxControlHandler.hx",655);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(keymode,"keymode");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(surface,"surface");
	HX_STACK_ARG(repeatDelay,"repeatDelay");
	HX_STACK_ARG(jumpFromFall,"jumpFromFall");
	HX_STACK_ARG(callbackFunc,"callbackFunc");
	HX_STACK_ARG(altKey,"altKey");
{
		HX_STACK_LINE(656)
		this->jumpKey = key;
		HX_STACK_LINE(657)
		this->jumpKeyMode = keymode;
		HX_STACK_LINE(658)
		this->jumpHeight = height;
		HX_STACK_LINE(659)
		this->jumpSurface = surface;
		HX_STACK_LINE(660)
		this->jumpRate = repeatDelay;
		HX_STACK_LINE(661)
		this->jumpFromFallTime = jumpFromFall;
		HX_STACK_LINE(662)
		this->jumpCallback = callbackFunc;
		HX_STACK_LINE(664)
		if (((altKey != HX_CSTRING("")))){
			HX_STACK_LINE(665)
			this->altJumpKey = altKey;
		}
		HX_STACK_LINE(669)
		this->jump = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxControlHandler_obj,setJumpButton,(void))

Void FlxControlHandler_obj::setFireButton( ::String key,int keymode,int repeatDelay,Dynamic callbackFunc,::String __o_altKey){
::String altKey = __o_altKey.Default(HX_CSTRING(""));
	HX_STACK_PUSH("FlxControlHandler::setFireButton","org/flixel/plugin/photonstorm/FlxControlHandler.hx",628);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(keymode,"keymode");
	HX_STACK_ARG(repeatDelay,"repeatDelay");
	HX_STACK_ARG(callbackFunc,"callbackFunc");
	HX_STACK_ARG(altKey,"altKey");
{
		HX_STACK_LINE(629)
		this->fireKey = key;
		HX_STACK_LINE(630)
		this->fireKeyMode = keymode;
		HX_STACK_LINE(631)
		this->fireRate = repeatDelay;
		HX_STACK_LINE(632)
		this->fireCallback = callbackFunc;
		HX_STACK_LINE(634)
		if (((altKey != HX_CSTRING("")))){
			HX_STACK_LINE(635)
			this->altFireKey = altKey;
		}
		HX_STACK_LINE(639)
		this->fire = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxControlHandler_obj,setFireButton,(void))

Void FlxControlHandler_obj::setSounds( ::org::flixel::FlxSound jump,::org::flixel::FlxSound fire,::org::flixel::FlxSound walk,::org::flixel::FlxSound thrust){
{
		HX_STACK_PUSH("FlxControlHandler::setSounds","org/flixel/plugin/photonstorm/FlxControlHandler.hx",596);
		HX_STACK_THIS(this);
		HX_STACK_ARG(jump,"jump");
		HX_STACK_ARG(fire,"fire");
		HX_STACK_ARG(walk,"walk");
		HX_STACK_ARG(thrust,"thrust");
		HX_STACK_LINE(597)
		if (((jump != null()))){
			HX_STACK_LINE(598)
			this->jumpSound = jump;
		}
		HX_STACK_LINE(602)
		if (((fire != null()))){
			HX_STACK_LINE(603)
			this->fireSound = fire;
		}
		HX_STACK_LINE(607)
		if (((walk != null()))){
			HX_STACK_LINE(608)
			this->walkSound = walk;
		}
		HX_STACK_LINE(612)
		if (((thrust != null()))){
			HX_STACK_LINE(613)
			this->thrustSound = thrust;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setSounds,(void))

bool FlxControlHandler_obj::removeHotKey( ::String key){
	HX_STACK_PUSH("FlxControlHandler::removeHotKey","org/flixel/plugin/photonstorm/FlxControlHandler.hx",583);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(583)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxControlHandler_obj,removeHotKey,return )

Void FlxControlHandler_obj::addHotKey( ::String key,Dynamic callbackFunc,int keymode){
{
		HX_STACK_PUSH("FlxControlHandler::addHotKey","org/flixel/plugin/photonstorm/FlxControlHandler.hx",572);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_ARG(callbackFunc,"callbackFunc");
		HX_STACK_ARG(keymode,"keymode");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxControlHandler_obj,addHotKey,(void))

Void FlxControlHandler_obj::resetSpeeds( hx::Null< bool >  __o_resetX,hx::Null< bool >  __o_resetY){
bool resetX = __o_resetX.Default(true);
bool resetY = __o_resetY.Default(true);
	HX_STACK_PUSH("FlxControlHandler::resetSpeeds","org/flixel/plugin/photonstorm/FlxControlHandler.hx",552);
	HX_STACK_THIS(this);
	HX_STACK_ARG(resetX,"resetX");
	HX_STACK_ARG(resetY,"resetY");
{
		HX_STACK_LINE(553)
		if ((resetX)){
			HX_STACK_LINE(554)
			this->xSpeedAdjust = (int)0;
		}
		HX_STACK_LINE(558)
		if ((resetY)){
			HX_STACK_LINE(559)
			this->ySpeedAdjust = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,resetSpeeds,(void))

Void FlxControlHandler_obj::slowDown( Float xFactor,Float yFactor){
{
		HX_STACK_PUSH("FlxControlHandler::slowDown","org/flixel/plugin/photonstorm/FlxControlHandler.hx",542);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xFactor,"xFactor");
		HX_STACK_ARG(yFactor,"yFactor");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,slowDown,(void))

Void FlxControlHandler_obj::speedUp( Float xFactor,Float yFactor){
{
		HX_STACK_PUSH("FlxControlHandler::speedUp","org/flixel/plugin/photonstorm/FlxControlHandler.hx",532);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xFactor,"xFactor");
		HX_STACK_ARG(yFactor,"yFactor");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,speedUp,(void))

Void FlxControlHandler_obj::flipGravity( ){
{
		HX_STACK_PUSH("FlxControlHandler::flipGravity","org/flixel/plugin/photonstorm/FlxControlHandler.hx",511);
		HX_STACK_THIS(this);
		HX_STACK_LINE(512)
		if (((bool(!(::Math_obj::isNaN(this->gravityX))) && bool((this->gravityX != (int)0))))){
			HX_STACK_LINE(514)
			this->gravityX = -(this->gravityX);
			HX_STACK_LINE(515)
			this->entity->acceleration->x = this->gravityX;
		}
		HX_STACK_LINE(518)
		if (((bool(!(::Math_obj::isNaN(this->gravityY))) && bool((this->gravityY != (int)0))))){
			HX_STACK_LINE(520)
			this->gravityY = -(this->gravityY);
			HX_STACK_LINE(521)
			this->entity->acceleration->y = this->gravityY;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,flipGravity,(void))

Void FlxControlHandler_obj::setGravity( int xForce,int yForce){
{
		HX_STACK_PUSH("FlxControlHandler::setGravity","org/flixel/plugin/photonstorm/FlxControlHandler.hx",498);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xForce,"xForce");
		HX_STACK_ARG(yForce,"yForce");
		HX_STACK_LINE(499)
		this->gravityX = xForce;
		HX_STACK_LINE(500)
		this->gravityY = yForce;
		HX_STACK_LINE(502)
		this->entity->acceleration->x = this->gravityX;
		HX_STACK_LINE(503)
		this->entity->acceleration->y = this->gravityY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,setGravity,(void))

Void FlxControlHandler_obj::setDeceleration( int xSpeed,int ySpeed){
{
		HX_STACK_PUSH("FlxControlHandler::setDeceleration","org/flixel/plugin/photonstorm/FlxControlHandler.hx",484);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xSpeed,"xSpeed");
		HX_STACK_ARG(ySpeed,"ySpeed");
		HX_STACK_LINE(485)
		this->entity->drag->x = xSpeed;
		HX_STACK_LINE(486)
		this->entity->drag->y = ySpeed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,setDeceleration,(void))

Void FlxControlHandler_obj::setMaximumSpeed( int xSpeed,int ySpeed,hx::Null< bool >  __o_limitVelocity){
bool limitVelocity = __o_limitVelocity.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setMaximumSpeed","org/flixel/plugin/photonstorm/FlxControlHandler.hx",469);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xSpeed,"xSpeed");
	HX_STACK_ARG(ySpeed,"ySpeed");
	HX_STACK_ARG(limitVelocity,"limitVelocity");
{
		HX_STACK_LINE(470)
		this->entity->maxVelocity->x = xSpeed;
		HX_STACK_LINE(471)
		this->entity->maxVelocity->y = ySpeed;
		HX_STACK_LINE(473)
		this->capVelocity = limitVelocity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxControlHandler_obj,setMaximumSpeed,(void))

Void FlxControlHandler_obj::setThrust( ::String thrustKey,Float thrustSpeed,::String reverseKey,hx::Null< Float >  __o_reverseSpeed){
Float reverseSpeed = __o_reverseSpeed.Default(0);
	HX_STACK_PUSH("FlxControlHandler::setThrust","org/flixel/plugin/photonstorm/FlxControlHandler.hx",440);
	HX_STACK_THIS(this);
	HX_STACK_ARG(thrustKey,"thrustKey");
	HX_STACK_ARG(thrustSpeed,"thrustSpeed");
	HX_STACK_ARG(reverseKey,"reverseKey");
	HX_STACK_ARG(reverseSpeed,"reverseSpeed");
{
		HX_STACK_LINE(441)
		this->thrustEnabled = false;
		HX_STACK_LINE(442)
		this->reverseEnabled = false;
		HX_STACK_LINE(444)
		if (((thrustKey != HX_CSTRING("")))){
			HX_STACK_LINE(446)
			this->thrustKey = thrustKey;
			HX_STACK_LINE(447)
			this->thrustSpeed = ::Math_obj::floor(thrustSpeed);
			HX_STACK_LINE(448)
			this->thrustEnabled = true;
		}
		HX_STACK_LINE(451)
		if (((reverseKey != null()))){
			HX_STACK_LINE(453)
			this->reverseKey = reverseKey;
			HX_STACK_LINE(454)
			this->reverseSpeed = ::Math_obj::floor(reverseSpeed);
			HX_STACK_LINE(455)
			this->reverseEnabled = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setThrust,(void))

Void FlxControlHandler_obj::setRotationKeys( hx::Null< bool >  __o_leftRight,hx::Null< bool >  __o_upDown,::String __o_customAntiClockwise,::String __o_customClockwise){
bool leftRight = __o_leftRight.Default(true);
bool upDown = __o_upDown.Default(false);
::String customAntiClockwise = __o_customAntiClockwise.Default(HX_CSTRING(""));
::String customClockwise = __o_customClockwise.Default(HX_CSTRING(""));
	HX_STACK_PUSH("FlxControlHandler::setRotationKeys","org/flixel/plugin/photonstorm/FlxControlHandler.hx",410);
	HX_STACK_THIS(this);
	HX_STACK_ARG(leftRight,"leftRight");
	HX_STACK_ARG(upDown,"upDown");
	HX_STACK_ARG(customAntiClockwise,"customAntiClockwise");
	HX_STACK_ARG(customClockwise,"customClockwise");
{
		HX_STACK_LINE(411)
		this->isRotating = true;
		HX_STACK_LINE(412)
		this->rotateAntiClockwise = true;
		HX_STACK_LINE(413)
		this->rotateClockwise = true;
		HX_STACK_LINE(414)
		this->antiClockwiseKey = HX_CSTRING("LEFT");
		HX_STACK_LINE(415)
		this->clockwiseKey = HX_CSTRING("RIGHT");
		HX_STACK_LINE(417)
		if (((upDown == true))){
			HX_STACK_LINE(419)
			this->antiClockwiseKey = HX_CSTRING("UP");
			HX_STACK_LINE(420)
			this->clockwiseKey = HX_CSTRING("DOWN");
		}
		HX_STACK_LINE(423)
		if (((bool((customAntiClockwise != HX_CSTRING(""))) && bool((customClockwise != HX_CSTRING("")))))){
			HX_STACK_LINE(425)
			this->antiClockwiseKey = customAntiClockwise;
			HX_STACK_LINE(426)
			this->clockwiseKey = customClockwise;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setRotationKeys,(void))

Void FlxControlHandler_obj::disableRotationLimits( ){
{
		HX_STACK_PUSH("FlxControlHandler::disableRotationLimits","org/flixel/plugin/photonstorm/FlxControlHandler.hx",397);
		HX_STACK_THIS(this);
		HX_STACK_LINE(397)
		this->enforceAngleLimits = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxControlHandler_obj,disableRotationLimits,(void))

Void FlxControlHandler_obj::setRotationLimits( int minimumAngle,int maximumAngle){
{
		HX_STACK_PUSH("FlxControlHandler::setRotationLimits","org/flixel/plugin/photonstorm/FlxControlHandler.hx",380);
		HX_STACK_THIS(this);
		HX_STACK_ARG(minimumAngle,"minimumAngle");
		HX_STACK_ARG(maximumAngle,"maximumAngle");
		HX_STACK_LINE(380)
		if (((bool((bool((minimumAngle > maximumAngle)) || bool((minimumAngle < (int)-180)))) || bool((maximumAngle > (int)180))))){
			HX_STACK_LINE(382)
			hx::Throw (HX_CSTRING("FlxControlHandler setRotationLimits: Invalid Minimum / Maximum angle"));
		}
		else{
			HX_STACK_LINE(387)
			this->enforceAngleLimits = true;
			HX_STACK_LINE(388)
			this->minAngle = minimumAngle;
			HX_STACK_LINE(389)
			this->maxAngle = maximumAngle;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,setRotationLimits,(void))

Void FlxControlHandler_obj::setRotationDeceleration( Float speed){
{
		HX_STACK_PUSH("FlxControlHandler::setRotationDeceleration","org/flixel/plugin/photonstorm/FlxControlHandler.hx",368);
		HX_STACK_THIS(this);
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(368)
		this->entity->angularDrag = speed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxControlHandler_obj,setRotationDeceleration,(void))

Void FlxControlHandler_obj::setMaximumRotationSpeed( Float speed,hx::Null< bool >  __o_limitVelocity){
bool limitVelocity = __o_limitVelocity.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setMaximumRotationSpeed","org/flixel/plugin/photonstorm/FlxControlHandler.hx",355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(speed,"speed");
	HX_STACK_ARG(limitVelocity,"limitVelocity");
{
		HX_STACK_LINE(356)
		this->entity->maxAngular = speed;
		HX_STACK_LINE(358)
		this->capAngularVelocity = limitVelocity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,setMaximumRotationSpeed,(void))

Void FlxControlHandler_obj::setRotationType( int rotationType,int stoppingType){
{
		HX_STACK_PUSH("FlxControlHandler::setRotationType","org/flixel/plugin/photonstorm/FlxControlHandler.hx",341);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rotationType,"rotationType");
		HX_STACK_ARG(stoppingType,"stoppingType");
		HX_STACK_LINE(342)
		this->rotation = rotationType;
		HX_STACK_LINE(343)
		this->rotationStopping = stoppingType;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,setRotationType,(void))

Void FlxControlHandler_obj::setRotationSpeed( Float antiClockwiseSpeed,Float clockwiseSpeed,Float speedMax,Float deceleration){
{
		HX_STACK_PUSH("FlxControlHandler::setRotationSpeed","org/flixel/plugin/photonstorm/FlxControlHandler.hx",325);
		HX_STACK_THIS(this);
		HX_STACK_ARG(antiClockwiseSpeed,"antiClockwiseSpeed");
		HX_STACK_ARG(clockwiseSpeed,"clockwiseSpeed");
		HX_STACK_ARG(speedMax,"speedMax");
		HX_STACK_ARG(deceleration,"deceleration");
		HX_STACK_LINE(326)
		this->antiClockwiseRotationSpeed = -(antiClockwiseSpeed);
		HX_STACK_LINE(327)
		this->clockwiseRotationSpeed = clockwiseSpeed;
		HX_STACK_LINE(329)
		this->setRotationKeys(null(),null(),null(),null());
		HX_STACK_LINE(330)
		this->setMaximumRotationSpeed(speedMax,null());
		HX_STACK_LINE(331)
		this->setRotationDeceleration(deceleration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxControlHandler_obj,setRotationSpeed,(void))

Void FlxControlHandler_obj::setAdvancedMovementSpeed( int leftSpeed,int rightSpeed,int upSpeed,int downSpeed,int xSpeedMax,int ySpeedMax,hx::Null< int >  __o_xDeceleration,hx::Null< int >  __o_yDeceleration){
int xDeceleration = __o_xDeceleration.Default(0);
int yDeceleration = __o_yDeceleration.Default(0);
	HX_STACK_PUSH("FlxControlHandler::setAdvancedMovementSpeed","org/flixel/plugin/photonstorm/FlxControlHandler.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_ARG(leftSpeed,"leftSpeed");
	HX_STACK_ARG(rightSpeed,"rightSpeed");
	HX_STACK_ARG(upSpeed,"upSpeed");
	HX_STACK_ARG(downSpeed,"downSpeed");
	HX_STACK_ARG(xSpeedMax,"xSpeedMax");
	HX_STACK_ARG(ySpeedMax,"ySpeedMax");
	HX_STACK_ARG(xDeceleration,"xDeceleration");
	HX_STACK_ARG(yDeceleration,"yDeceleration");
{
		HX_STACK_LINE(309)
		this->leftMoveSpeed = -(leftSpeed);
		HX_STACK_LINE(310)
		this->rightMoveSpeed = rightSpeed;
		HX_STACK_LINE(311)
		this->upMoveSpeed = -(upSpeed);
		HX_STACK_LINE(312)
		this->downMoveSpeed = downSpeed;
		HX_STACK_LINE(314)
		this->setMaximumSpeed(xSpeedMax,ySpeedMax,null());
		HX_STACK_LINE(315)
		this->setDeceleration(xDeceleration,yDeceleration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxControlHandler_obj,setAdvancedMovementSpeed,(void))

Void FlxControlHandler_obj::setStandardSpeed( int speed,hx::Null< bool >  __o_acceleration){
bool acceleration = __o_acceleration.Default(true);
	HX_STACK_PUSH("FlxControlHandler::setStandardSpeed","org/flixel/plugin/photonstorm/FlxControlHandler.hx",280);
	HX_STACK_THIS(this);
	HX_STACK_ARG(speed,"speed");
	HX_STACK_ARG(acceleration,"acceleration");
{
		HX_STACK_LINE(280)
		if ((acceleration)){
			HX_STACK_LINE(282)
			this->setMovementSpeed(speed,speed,speed,speed,speed,speed);
		}
		else{
			HX_STACK_LINE(286)
			this->setMovementSpeed(speed,speed,speed,speed,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxControlHandler_obj,setStandardSpeed,(void))

Void FlxControlHandler_obj::setMovementSpeed( int xSpeed,int ySpeed,int xSpeedMax,int ySpeedMax,hx::Null< int >  __o_xDeceleration,hx::Null< int >  __o_yDeceleration){
int xDeceleration = __o_xDeceleration.Default(0);
int yDeceleration = __o_yDeceleration.Default(0);
	HX_STACK_PUSH("FlxControlHandler::setMovementSpeed","org/flixel/plugin/photonstorm/FlxControlHandler.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xSpeed,"xSpeed");
	HX_STACK_ARG(ySpeed,"ySpeed");
	HX_STACK_ARG(xSpeedMax,"xSpeedMax");
	HX_STACK_ARG(ySpeedMax,"ySpeedMax");
	HX_STACK_ARG(xDeceleration,"xDeceleration");
	HX_STACK_ARG(yDeceleration,"yDeceleration");
{
		HX_STACK_LINE(264)
		this->leftMoveSpeed = -(xSpeed);
		HX_STACK_LINE(265)
		this->rightMoveSpeed = xSpeed;
		HX_STACK_LINE(266)
		this->upMoveSpeed = -(ySpeed);
		HX_STACK_LINE(267)
		this->downMoveSpeed = ySpeed;
		HX_STACK_LINE(269)
		this->setMaximumSpeed(xSpeedMax,ySpeedMax,null());
		HX_STACK_LINE(270)
		this->setDeceleration(xDeceleration,yDeceleration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxControlHandler_obj,setMovementSpeed,(void))

int FlxControlHandler_obj::MOVEMENT_INSTANT;

int FlxControlHandler_obj::MOVEMENT_ACCELERATES;

int FlxControlHandler_obj::STOPPING_INSTANT;

int FlxControlHandler_obj::STOPPING_DECELERATES;

int FlxControlHandler_obj::STOPPING_NEVER;

int FlxControlHandler_obj::ROTATION_INSTANT;

int FlxControlHandler_obj::ROTATION_ACCELERATES;

int FlxControlHandler_obj::ROTATION_STOPPING_INSTANT;

int FlxControlHandler_obj::ROTATION_STOPPING_DECELERATES;

int FlxControlHandler_obj::ROTATION_STOPPING_NEVER;

int FlxControlHandler_obj::KEYMODE_PRESSED;

int FlxControlHandler_obj::KEYMODE_JUST_DOWN;

int FlxControlHandler_obj::KEYMODE_RELEASED;


FlxControlHandler_obj::FlxControlHandler_obj()
{
}

void FlxControlHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxControlHandler);
	HX_MARK_MEMBER_NAME(isPressedRight,"isPressedRight");
	HX_MARK_MEMBER_NAME(isPressedLeft,"isPressedLeft");
	HX_MARK_MEMBER_NAME(isPressedDown,"isPressedDown");
	HX_MARK_MEMBER_NAME(isPressedUp,"isPressedUp");
	HX_MARK_MEMBER_NAME(thrustSound,"thrustSound");
	HX_MARK_MEMBER_NAME(walkSound,"walkSound");
	HX_MARK_MEMBER_NAME(fireSound,"fireSound");
	HX_MARK_MEMBER_NAME(jumpSound,"jumpSound");
	HX_MARK_MEMBER_NAME(reverseKey,"reverseKey");
	HX_MARK_MEMBER_NAME(thrustKey,"thrustKey");
	HX_MARK_MEMBER_NAME(clockwiseKey,"clockwiseKey");
	HX_MARK_MEMBER_NAME(antiClockwiseKey,"antiClockwiseKey");
	HX_MARK_MEMBER_NAME(altJumpKey,"altJumpKey");
	HX_MARK_MEMBER_NAME(jumpKey,"jumpKey");
	HX_MARK_MEMBER_NAME(altFireKey,"altFireKey");
	HX_MARK_MEMBER_NAME(fireKey,"fireKey");
	HX_MARK_MEMBER_NAME(rightKey,"rightKey");
	HX_MARK_MEMBER_NAME(leftKey,"leftKey");
	HX_MARK_MEMBER_NAME(downKey,"downKey");
	HX_MARK_MEMBER_NAME(upKey,"upKey");
	HX_MARK_MEMBER_NAME(hotkeys,"hotkeys");
	HX_MARK_MEMBER_NAME(capVelocity,"capVelocity");
	HX_MARK_MEMBER_NAME(rotationStopping,"rotationStopping");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(stopping,"stopping");
	HX_MARK_MEMBER_NAME(movement,"movement");
	HX_MARK_MEMBER_NAME(jumpCallback,"jumpCallback");
	HX_MARK_MEMBER_NAME(jumpSurface,"jumpSurface");
	HX_MARK_MEMBER_NAME(extraSurfaceTime,"extraSurfaceTime");
	HX_MARK_MEMBER_NAME(jumpFromFallTime,"jumpFromFallTime");
	HX_MARK_MEMBER_NAME(lastJumpTime,"lastJumpTime");
	HX_MARK_MEMBER_NAME(nextJumpTime,"nextJumpTime");
	HX_MARK_MEMBER_NAME(jumpKeyMode,"jumpKeyMode");
	HX_MARK_MEMBER_NAME(jumpRate,"jumpRate");
	HX_MARK_MEMBER_NAME(jumpHeight,"jumpHeight");
	HX_MARK_MEMBER_NAME(fireCallback,"fireCallback");
	HX_MARK_MEMBER_NAME(fireKeyMode,"fireKeyMode");
	HX_MARK_MEMBER_NAME(lastFiredTime,"lastFiredTime");
	HX_MARK_MEMBER_NAME(nextFireTime,"nextFireTime");
	HX_MARK_MEMBER_NAME(fireRate,"fireRate");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(ySpeedAdjust,"ySpeedAdjust");
	HX_MARK_MEMBER_NAME(xSpeedAdjust,"xSpeedAdjust");
	HX_MARK_MEMBER_NAME(capAngularVelocity,"capAngularVelocity");
	HX_MARK_MEMBER_NAME(maxAngle,"maxAngle");
	HX_MARK_MEMBER_NAME(minAngle,"minAngle");
	HX_MARK_MEMBER_NAME(enforceAngleLimits,"enforceAngleLimits");
	HX_MARK_MEMBER_NAME(clockwiseRotationSpeed,"clockwiseRotationSpeed");
	HX_MARK_MEMBER_NAME(antiClockwiseRotationSpeed,"antiClockwiseRotationSpeed");
	HX_MARK_MEMBER_NAME(isRotating,"isRotating");
	HX_MARK_MEMBER_NAME(reverseEnabled,"reverseEnabled");
	HX_MARK_MEMBER_NAME(thrustEnabled,"thrustEnabled");
	HX_MARK_MEMBER_NAME(reverseSpeed,"reverseSpeed");
	HX_MARK_MEMBER_NAME(thrustSpeed,"thrustSpeed");
	HX_MARK_MEMBER_NAME(rightMoveSpeed,"rightMoveSpeed");
	HX_MARK_MEMBER_NAME(leftMoveSpeed,"leftMoveSpeed");
	HX_MARK_MEMBER_NAME(downMoveSpeed,"downMoveSpeed");
	HX_MARK_MEMBER_NAME(upMoveSpeed,"upMoveSpeed");
	HX_MARK_MEMBER_NAME(rotateClockwise,"rotateClockwise");
	HX_MARK_MEMBER_NAME(rotateAntiClockwise,"rotateAntiClockwise");
	HX_MARK_MEMBER_NAME(yFacing,"yFacing");
	HX_MARK_MEMBER_NAME(xFacing,"xFacing");
	HX_MARK_MEMBER_NAME(altJump,"altJump");
	HX_MARK_MEMBER_NAME(jump,"jump");
	HX_MARK_MEMBER_NAME(altFire,"altFire");
	HX_MARK_MEMBER_NAME(fire,"fire");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(down,"down");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_END_CLASS();
}

void FlxControlHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isPressedRight,"isPressedRight");
	HX_VISIT_MEMBER_NAME(isPressedLeft,"isPressedLeft");
	HX_VISIT_MEMBER_NAME(isPressedDown,"isPressedDown");
	HX_VISIT_MEMBER_NAME(isPressedUp,"isPressedUp");
	HX_VISIT_MEMBER_NAME(thrustSound,"thrustSound");
	HX_VISIT_MEMBER_NAME(walkSound,"walkSound");
	HX_VISIT_MEMBER_NAME(fireSound,"fireSound");
	HX_VISIT_MEMBER_NAME(jumpSound,"jumpSound");
	HX_VISIT_MEMBER_NAME(reverseKey,"reverseKey");
	HX_VISIT_MEMBER_NAME(thrustKey,"thrustKey");
	HX_VISIT_MEMBER_NAME(clockwiseKey,"clockwiseKey");
	HX_VISIT_MEMBER_NAME(antiClockwiseKey,"antiClockwiseKey");
	HX_VISIT_MEMBER_NAME(altJumpKey,"altJumpKey");
	HX_VISIT_MEMBER_NAME(jumpKey,"jumpKey");
	HX_VISIT_MEMBER_NAME(altFireKey,"altFireKey");
	HX_VISIT_MEMBER_NAME(fireKey,"fireKey");
	HX_VISIT_MEMBER_NAME(rightKey,"rightKey");
	HX_VISIT_MEMBER_NAME(leftKey,"leftKey");
	HX_VISIT_MEMBER_NAME(downKey,"downKey");
	HX_VISIT_MEMBER_NAME(upKey,"upKey");
	HX_VISIT_MEMBER_NAME(hotkeys,"hotkeys");
	HX_VISIT_MEMBER_NAME(capVelocity,"capVelocity");
	HX_VISIT_MEMBER_NAME(rotationStopping,"rotationStopping");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(stopping,"stopping");
	HX_VISIT_MEMBER_NAME(movement,"movement");
	HX_VISIT_MEMBER_NAME(jumpCallback,"jumpCallback");
	HX_VISIT_MEMBER_NAME(jumpSurface,"jumpSurface");
	HX_VISIT_MEMBER_NAME(extraSurfaceTime,"extraSurfaceTime");
	HX_VISIT_MEMBER_NAME(jumpFromFallTime,"jumpFromFallTime");
	HX_VISIT_MEMBER_NAME(lastJumpTime,"lastJumpTime");
	HX_VISIT_MEMBER_NAME(nextJumpTime,"nextJumpTime");
	HX_VISIT_MEMBER_NAME(jumpKeyMode,"jumpKeyMode");
	HX_VISIT_MEMBER_NAME(jumpRate,"jumpRate");
	HX_VISIT_MEMBER_NAME(jumpHeight,"jumpHeight");
	HX_VISIT_MEMBER_NAME(fireCallback,"fireCallback");
	HX_VISIT_MEMBER_NAME(fireKeyMode,"fireKeyMode");
	HX_VISIT_MEMBER_NAME(lastFiredTime,"lastFiredTime");
	HX_VISIT_MEMBER_NAME(nextFireTime,"nextFireTime");
	HX_VISIT_MEMBER_NAME(fireRate,"fireRate");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(ySpeedAdjust,"ySpeedAdjust");
	HX_VISIT_MEMBER_NAME(xSpeedAdjust,"xSpeedAdjust");
	HX_VISIT_MEMBER_NAME(capAngularVelocity,"capAngularVelocity");
	HX_VISIT_MEMBER_NAME(maxAngle,"maxAngle");
	HX_VISIT_MEMBER_NAME(minAngle,"minAngle");
	HX_VISIT_MEMBER_NAME(enforceAngleLimits,"enforceAngleLimits");
	HX_VISIT_MEMBER_NAME(clockwiseRotationSpeed,"clockwiseRotationSpeed");
	HX_VISIT_MEMBER_NAME(antiClockwiseRotationSpeed,"antiClockwiseRotationSpeed");
	HX_VISIT_MEMBER_NAME(isRotating,"isRotating");
	HX_VISIT_MEMBER_NAME(reverseEnabled,"reverseEnabled");
	HX_VISIT_MEMBER_NAME(thrustEnabled,"thrustEnabled");
	HX_VISIT_MEMBER_NAME(reverseSpeed,"reverseSpeed");
	HX_VISIT_MEMBER_NAME(thrustSpeed,"thrustSpeed");
	HX_VISIT_MEMBER_NAME(rightMoveSpeed,"rightMoveSpeed");
	HX_VISIT_MEMBER_NAME(leftMoveSpeed,"leftMoveSpeed");
	HX_VISIT_MEMBER_NAME(downMoveSpeed,"downMoveSpeed");
	HX_VISIT_MEMBER_NAME(upMoveSpeed,"upMoveSpeed");
	HX_VISIT_MEMBER_NAME(rotateClockwise,"rotateClockwise");
	HX_VISIT_MEMBER_NAME(rotateAntiClockwise,"rotateAntiClockwise");
	HX_VISIT_MEMBER_NAME(yFacing,"yFacing");
	HX_VISIT_MEMBER_NAME(xFacing,"xFacing");
	HX_VISIT_MEMBER_NAME(altJump,"altJump");
	HX_VISIT_MEMBER_NAME(jump,"jump");
	HX_VISIT_MEMBER_NAME(altFire,"altFire");
	HX_VISIT_MEMBER_NAME(fire,"fire");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(down,"down");
	HX_VISIT_MEMBER_NAME(up,"up");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(entity,"entity");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
}

Dynamic FlxControlHandler_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump; }
		if (HX_FIELD_EQ(inName,"fire") ) { return fire; }
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"down") ) { return down; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"upKey") ) { return upKey; }
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"moveUp") ) { return moveUp_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runJump") ) { return runJump_dyn(); }
		if (HX_FIELD_EQ(inName,"runFire") ) { return runFire_dyn(); }
		if (HX_FIELD_EQ(inName,"speedUp") ) { return speedUp_dyn(); }
		if (HX_FIELD_EQ(inName,"jumpKey") ) { return jumpKey; }
		if (HX_FIELD_EQ(inName,"fireKey") ) { return fireKey; }
		if (HX_FIELD_EQ(inName,"leftKey") ) { return leftKey; }
		if (HX_FIELD_EQ(inName,"downKey") ) { return downKey; }
		if (HX_FIELD_EQ(inName,"hotkeys") ) { return hotkeys; }
		if (HX_FIELD_EQ(inName,"yFacing") ) { return yFacing; }
		if (HX_FIELD_EQ(inName,"xFacing") ) { return xFacing; }
		if (HX_FIELD_EQ(inName,"altJump") ) { return altJump; }
		if (HX_FIELD_EQ(inName,"altFire") ) { return altFire; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return moveLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"moveDown") ) { return moveDown_dyn(); }
		if (HX_FIELD_EQ(inName,"slowDown") ) { return slowDown_dyn(); }
		if (HX_FIELD_EQ(inName,"rightKey") ) { return rightKey; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"stopping") ) { return stopping; }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement; }
		if (HX_FIELD_EQ(inName,"jumpRate") ) { return jumpRate; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { return gravityY; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { return gravityX; }
		if (HX_FIELD_EQ(inName,"maxAngle") ) { return maxAngle; }
		if (HX_FIELD_EQ(inName,"minAngle") ) { return minAngle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setSounds") ) { return setSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"addHotKey") ) { return addHotKey_dyn(); }
		if (HX_FIELD_EQ(inName,"setThrust") ) { return setThrust_dyn(); }
		if (HX_FIELD_EQ(inName,"walkSound") ) { return walkSound; }
		if (HX_FIELD_EQ(inName,"fireSound") ) { return fireSound; }
		if (HX_FIELD_EQ(inName,"jumpSound") ) { return jumpSound; }
		if (HX_FIELD_EQ(inName,"thrustKey") ) { return thrustKey; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"moveThrust") ) { return moveThrust_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"reverseKey") ) { return reverseKey; }
		if (HX_FIELD_EQ(inName,"altJumpKey") ) { return altJumpKey; }
		if (HX_FIELD_EQ(inName,"altFireKey") ) { return altFireKey; }
		if (HX_FIELD_EQ(inName,"jumpHeight") ) { return jumpHeight; }
		if (HX_FIELD_EQ(inName,"isRotating") ) { return isRotating; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveReverse") ) { return moveReverse_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSpeeds") ) { return resetSpeeds_dyn(); }
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return flipGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"isPressedUp") ) { return isPressedUp; }
		if (HX_FIELD_EQ(inName,"thrustSound") ) { return thrustSound; }
		if (HX_FIELD_EQ(inName,"capVelocity") ) { return capVelocity; }
		if (HX_FIELD_EQ(inName,"jumpSurface") ) { return jumpSurface; }
		if (HX_FIELD_EQ(inName,"jumpKeyMode") ) { return jumpKeyMode; }
		if (HX_FIELD_EQ(inName,"fireKeyMode") ) { return fireKeyMode; }
		if (HX_FIELD_EQ(inName,"thrustSpeed") ) { return thrustSpeed; }
		if (HX_FIELD_EQ(inName,"upMoveSpeed") ) { return upMoveSpeed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeBounds") ) { return removeBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"removeHotKey") ) { return removeHotKey_dyn(); }
		if (HX_FIELD_EQ(inName,"clockwiseKey") ) { return clockwiseKey; }
		if (HX_FIELD_EQ(inName,"jumpCallback") ) { return jumpCallback; }
		if (HX_FIELD_EQ(inName,"lastJumpTime") ) { return lastJumpTime; }
		if (HX_FIELD_EQ(inName,"nextJumpTime") ) { return nextJumpTime; }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { return fireCallback; }
		if (HX_FIELD_EQ(inName,"nextFireTime") ) { return nextFireTime; }
		if (HX_FIELD_EQ(inName,"ySpeedAdjust") ) { return ySpeedAdjust; }
		if (HX_FIELD_EQ(inName,"xSpeedAdjust") ) { return xSpeedAdjust; }
		if (HX_FIELD_EQ(inName,"reverseSpeed") ) { return reverseSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setCustomKeys") ) { return setCustomKeys_dyn(); }
		if (HX_FIELD_EQ(inName,"moveClockwise") ) { return moveClockwise_dyn(); }
		if (HX_FIELD_EQ(inName,"setJumpButton") ) { return setJumpButton_dyn(); }
		if (HX_FIELD_EQ(inName,"setFireButton") ) { return setFireButton_dyn(); }
		if (HX_FIELD_EQ(inName,"isPressedLeft") ) { return isPressedLeft; }
		if (HX_FIELD_EQ(inName,"isPressedDown") ) { return isPressedDown; }
		if (HX_FIELD_EQ(inName,"lastFiredTime") ) { return lastFiredTime; }
		if (HX_FIELD_EQ(inName,"thrustEnabled") ) { return thrustEnabled; }
		if (HX_FIELD_EQ(inName,"leftMoveSpeed") ) { return leftMoveSpeed; }
		if (HX_FIELD_EQ(inName,"downMoveSpeed") ) { return downMoveSpeed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STOPPING_NEVER") ) { return STOPPING_NEVER; }
		if (HX_FIELD_EQ(inName,"setZQSDControl") ) { return setZQSDControl_dyn(); }
		if (HX_FIELD_EQ(inName,"setHJKLControl") ) { return setHJKLControl_dyn(); }
		if (HX_FIELD_EQ(inName,"setIJKLControl") ) { return setIJKLControl_dyn(); }
		if (HX_FIELD_EQ(inName,"setESDFControl") ) { return setESDFControl_dyn(); }
		if (HX_FIELD_EQ(inName,"setWASDControl") ) { return setWASDControl_dyn(); }
		if (HX_FIELD_EQ(inName,"isPressedRight") ) { return isPressedRight; }
		if (HX_FIELD_EQ(inName,"reverseEnabled") ) { return reverseEnabled; }
		if (HX_FIELD_EQ(inName,"rightMoveSpeed") ) { return rightMoveSpeed; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"KEYMODE_PRESSED") ) { return KEYMODE_PRESSED; }
		if (HX_FIELD_EQ(inName,"setDeceleration") ) { return setDeceleration_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaximumSpeed") ) { return setMaximumSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotationKeys") ) { return setRotationKeys_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotationType") ) { return setRotationType_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateClockwise") ) { return rotateClockwise; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MOVEMENT_INSTANT") ) { return MOVEMENT_INSTANT; }
		if (HX_FIELD_EQ(inName,"STOPPING_INSTANT") ) { return STOPPING_INSTANT; }
		if (HX_FIELD_EQ(inName,"ROTATION_INSTANT") ) { return ROTATION_INSTANT; }
		if (HX_FIELD_EQ(inName,"KEYMODE_RELEASED") ) { return KEYMODE_RELEASED; }
		if (HX_FIELD_EQ(inName,"setNumpadControl") ) { return setNumpadControl_dyn(); }
		if (HX_FIELD_EQ(inName,"setCursorControl") ) { return setCursorControl_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotationSpeed") ) { return setRotationSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setStandardSpeed") ) { return setStandardSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setMovementSpeed") ) { return setMovementSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"antiClockwiseKey") ) { return antiClockwiseKey; }
		if (HX_FIELD_EQ(inName,"rotationStopping") ) { return rotationStopping; }
		if (HX_FIELD_EQ(inName,"extraSurfaceTime") ) { return extraSurfaceTime; }
		if (HX_FIELD_EQ(inName,"jumpFromFallTime") ) { return jumpFromFallTime; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"KEYMODE_JUST_DOWN") ) { return KEYMODE_JUST_DOWN; }
		if (HX_FIELD_EQ(inName,"moveAntiClockwise") ) { return moveAntiClockwise_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotationLimits") ) { return setRotationLimits_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"capAngularVelocity") ) { return capAngularVelocity; }
		if (HX_FIELD_EQ(inName,"enforceAngleLimits") ) { return enforceAngleLimits; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"rotateAntiClockwise") ) { return rotateAntiClockwise; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"MOVEMENT_ACCELERATES") ) { return MOVEMENT_ACCELERATES; }
		if (HX_FIELD_EQ(inName,"STOPPING_DECELERATES") ) { return STOPPING_DECELERATES; }
		if (HX_FIELD_EQ(inName,"ROTATION_ACCELERATES") ) { return ROTATION_ACCELERATES; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"disableRotationLimits") ) { return disableRotationLimits_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"clockwiseRotationSpeed") ) { return clockwiseRotationSpeed; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ROTATION_STOPPING_NEVER") ) { return ROTATION_STOPPING_NEVER; }
		if (HX_FIELD_EQ(inName,"setRotationDeceleration") ) { return setRotationDeceleration_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaximumRotationSpeed") ) { return setMaximumRotationSpeed_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setAdvancedMovementSpeed") ) { return setAdvancedMovementSpeed_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"ROTATION_STOPPING_INSTANT") ) { return ROTATION_STOPPING_INSTANT; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setDvorakSimplifiedControl") ) { return setDvorakSimplifiedControl_dyn(); }
		if (HX_FIELD_EQ(inName,"antiClockwiseRotationSpeed") ) { return antiClockwiseRotationSpeed; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"ROTATION_STOPPING_DECELERATES") ) { return ROTATION_STOPPING_DECELERATES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxControlHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { jump=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fire") ) { fire=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"upKey") ) { upKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::org::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"jumpKey") ) { jumpKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireKey") ) { fireKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftKey") ) { leftKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"downKey") ) { downKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hotkeys") ) { hotkeys=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yFacing") ) { yFacing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xFacing") ) { xFacing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altJump") ) { altJump=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altFire") ) { altFire=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rightKey") ) { rightKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stopping") ) { stopping=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movement") ) { movement=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpRate") ) { jumpRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngle") ) { maxAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minAngle") ) { minAngle=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"walkSound") ) { walkSound=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireSound") ) { fireSound=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpSound") ) { jumpSound=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thrustKey") ) { thrustKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"reverseKey") ) { reverseKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altJumpKey") ) { altJumpKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altFireKey") ) { altFireKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpHeight") ) { jumpHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isRotating") ) { isRotating=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isPressedUp") ) { isPressedUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thrustSound") ) { thrustSound=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"capVelocity") ) { capVelocity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpSurface") ) { jumpSurface=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpKeyMode") ) { jumpKeyMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireKeyMode") ) { fireKeyMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thrustSpeed") ) { thrustSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upMoveSpeed") ) { upMoveSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clockwiseKey") ) { clockwiseKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpCallback") ) { jumpCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastJumpTime") ) { lastJumpTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextJumpTime") ) { nextJumpTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { fireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextFireTime") ) { nextFireTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ySpeedAdjust") ) { ySpeedAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xSpeedAdjust") ) { xSpeedAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverseSpeed") ) { reverseSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isPressedLeft") ) { isPressedLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isPressedDown") ) { isPressedDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastFiredTime") ) { lastFiredTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thrustEnabled") ) { thrustEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftMoveSpeed") ) { leftMoveSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"downMoveSpeed") ) { downMoveSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STOPPING_NEVER") ) { STOPPING_NEVER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isPressedRight") ) { isPressedRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverseEnabled") ) { reverseEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMoveSpeed") ) { rightMoveSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"KEYMODE_PRESSED") ) { KEYMODE_PRESSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotateClockwise") ) { rotateClockwise=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MOVEMENT_INSTANT") ) { MOVEMENT_INSTANT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOPPING_INSTANT") ) { STOPPING_INSTANT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROTATION_INSTANT") ) { ROTATION_INSTANT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEYMODE_RELEASED") ) { KEYMODE_RELEASED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antiClockwiseKey") ) { antiClockwiseKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationStopping") ) { rotationStopping=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extraSurfaceTime") ) { extraSurfaceTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpFromFallTime") ) { jumpFromFallTime=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"KEYMODE_JUST_DOWN") ) { KEYMODE_JUST_DOWN=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"capAngularVelocity") ) { capAngularVelocity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enforceAngleLimits") ) { enforceAngleLimits=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"rotateAntiClockwise") ) { rotateAntiClockwise=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"MOVEMENT_ACCELERATES") ) { MOVEMENT_ACCELERATES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOPPING_DECELERATES") ) { STOPPING_DECELERATES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROTATION_ACCELERATES") ) { ROTATION_ACCELERATES=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"clockwiseRotationSpeed") ) { clockwiseRotationSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"ROTATION_STOPPING_NEVER") ) { ROTATION_STOPPING_NEVER=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"ROTATION_STOPPING_INSTANT") ) { ROTATION_STOPPING_INSTANT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"antiClockwiseRotationSpeed") ) { antiClockwiseRotationSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"ROTATION_STOPPING_DECELERATES") ) { ROTATION_STOPPING_DECELERATES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxControlHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isPressedRight"));
	outFields->push(HX_CSTRING("isPressedLeft"));
	outFields->push(HX_CSTRING("isPressedDown"));
	outFields->push(HX_CSTRING("isPressedUp"));
	outFields->push(HX_CSTRING("thrustSound"));
	outFields->push(HX_CSTRING("walkSound"));
	outFields->push(HX_CSTRING("fireSound"));
	outFields->push(HX_CSTRING("jumpSound"));
	outFields->push(HX_CSTRING("reverseKey"));
	outFields->push(HX_CSTRING("thrustKey"));
	outFields->push(HX_CSTRING("clockwiseKey"));
	outFields->push(HX_CSTRING("antiClockwiseKey"));
	outFields->push(HX_CSTRING("altJumpKey"));
	outFields->push(HX_CSTRING("jumpKey"));
	outFields->push(HX_CSTRING("altFireKey"));
	outFields->push(HX_CSTRING("fireKey"));
	outFields->push(HX_CSTRING("rightKey"));
	outFields->push(HX_CSTRING("leftKey"));
	outFields->push(HX_CSTRING("downKey"));
	outFields->push(HX_CSTRING("upKey"));
	outFields->push(HX_CSTRING("hotkeys"));
	outFields->push(HX_CSTRING("capVelocity"));
	outFields->push(HX_CSTRING("rotationStopping"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("stopping"));
	outFields->push(HX_CSTRING("movement"));
	outFields->push(HX_CSTRING("jumpSurface"));
	outFields->push(HX_CSTRING("extraSurfaceTime"));
	outFields->push(HX_CSTRING("jumpFromFallTime"));
	outFields->push(HX_CSTRING("lastJumpTime"));
	outFields->push(HX_CSTRING("nextJumpTime"));
	outFields->push(HX_CSTRING("jumpKeyMode"));
	outFields->push(HX_CSTRING("jumpRate"));
	outFields->push(HX_CSTRING("jumpHeight"));
	outFields->push(HX_CSTRING("fireKeyMode"));
	outFields->push(HX_CSTRING("lastFiredTime"));
	outFields->push(HX_CSTRING("nextFireTime"));
	outFields->push(HX_CSTRING("fireRate"));
	outFields->push(HX_CSTRING("gravityY"));
	outFields->push(HX_CSTRING("gravityX"));
	outFields->push(HX_CSTRING("ySpeedAdjust"));
	outFields->push(HX_CSTRING("xSpeedAdjust"));
	outFields->push(HX_CSTRING("capAngularVelocity"));
	outFields->push(HX_CSTRING("maxAngle"));
	outFields->push(HX_CSTRING("minAngle"));
	outFields->push(HX_CSTRING("enforceAngleLimits"));
	outFields->push(HX_CSTRING("clockwiseRotationSpeed"));
	outFields->push(HX_CSTRING("antiClockwiseRotationSpeed"));
	outFields->push(HX_CSTRING("isRotating"));
	outFields->push(HX_CSTRING("reverseEnabled"));
	outFields->push(HX_CSTRING("thrustEnabled"));
	outFields->push(HX_CSTRING("reverseSpeed"));
	outFields->push(HX_CSTRING("thrustSpeed"));
	outFields->push(HX_CSTRING("rightMoveSpeed"));
	outFields->push(HX_CSTRING("leftMoveSpeed"));
	outFields->push(HX_CSTRING("downMoveSpeed"));
	outFields->push(HX_CSTRING("upMoveSpeed"));
	outFields->push(HX_CSTRING("rotateClockwise"));
	outFields->push(HX_CSTRING("rotateAntiClockwise"));
	outFields->push(HX_CSTRING("yFacing"));
	outFields->push(HX_CSTRING("xFacing"));
	outFields->push(HX_CSTRING("altJump"));
	outFields->push(HX_CSTRING("jump"));
	outFields->push(HX_CSTRING("altFire"));
	outFields->push(HX_CSTRING("fire"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("down"));
	outFields->push(HX_CSTRING("up"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("entity"));
	outFields->push(HX_CSTRING("enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MOVEMENT_INSTANT"),
	HX_CSTRING("MOVEMENT_ACCELERATES"),
	HX_CSTRING("STOPPING_INSTANT"),
	HX_CSTRING("STOPPING_DECELERATES"),
	HX_CSTRING("STOPPING_NEVER"),
	HX_CSTRING("ROTATION_INSTANT"),
	HX_CSTRING("ROTATION_ACCELERATES"),
	HX_CSTRING("ROTATION_STOPPING_INSTANT"),
	HX_CSTRING("ROTATION_STOPPING_DECELERATES"),
	HX_CSTRING("ROTATION_STOPPING_NEVER"),
	HX_CSTRING("KEYMODE_PRESSED"),
	HX_CSTRING("KEYMODE_JUST_DOWN"),
	HX_CSTRING("KEYMODE_RELEASED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setNumpadControl"),
	HX_CSTRING("setDvorakSimplifiedControl"),
	HX_CSTRING("setZQSDControl"),
	HX_CSTRING("setHJKLControl"),
	HX_CSTRING("setIJKLControl"),
	HX_CSTRING("setESDFControl"),
	HX_CSTRING("setWASDControl"),
	HX_CSTRING("setCursorControl"),
	HX_CSTRING("setCustomKeys"),
	HX_CSTRING("update"),
	HX_CSTRING("runJump"),
	HX_CSTRING("runFire"),
	HX_CSTRING("moveReverse"),
	HX_CSTRING("moveThrust"),
	HX_CSTRING("moveClockwise"),
	HX_CSTRING("moveAntiClockwise"),
	HX_CSTRING("moveRight"),
	HX_CSTRING("moveLeft"),
	HX_CSTRING("moveDown"),
	HX_CSTRING("moveUp"),
	HX_CSTRING("removeBounds"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("setJumpButton"),
	HX_CSTRING("setFireButton"),
	HX_CSTRING("setSounds"),
	HX_CSTRING("removeHotKey"),
	HX_CSTRING("addHotKey"),
	HX_CSTRING("resetSpeeds"),
	HX_CSTRING("slowDown"),
	HX_CSTRING("speedUp"),
	HX_CSTRING("flipGravity"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("setDeceleration"),
	HX_CSTRING("setMaximumSpeed"),
	HX_CSTRING("setThrust"),
	HX_CSTRING("setRotationKeys"),
	HX_CSTRING("disableRotationLimits"),
	HX_CSTRING("setRotationLimits"),
	HX_CSTRING("setRotationDeceleration"),
	HX_CSTRING("setMaximumRotationSpeed"),
	HX_CSTRING("setRotationType"),
	HX_CSTRING("setRotationSpeed"),
	HX_CSTRING("setAdvancedMovementSpeed"),
	HX_CSTRING("setStandardSpeed"),
	HX_CSTRING("setMovementSpeed"),
	HX_CSTRING("isPressedRight"),
	HX_CSTRING("isPressedLeft"),
	HX_CSTRING("isPressedDown"),
	HX_CSTRING("isPressedUp"),
	HX_CSTRING("thrustSound"),
	HX_CSTRING("walkSound"),
	HX_CSTRING("fireSound"),
	HX_CSTRING("jumpSound"),
	HX_CSTRING("reverseKey"),
	HX_CSTRING("thrustKey"),
	HX_CSTRING("clockwiseKey"),
	HX_CSTRING("antiClockwiseKey"),
	HX_CSTRING("altJumpKey"),
	HX_CSTRING("jumpKey"),
	HX_CSTRING("altFireKey"),
	HX_CSTRING("fireKey"),
	HX_CSTRING("rightKey"),
	HX_CSTRING("leftKey"),
	HX_CSTRING("downKey"),
	HX_CSTRING("upKey"),
	HX_CSTRING("hotkeys"),
	HX_CSTRING("capVelocity"),
	HX_CSTRING("rotationStopping"),
	HX_CSTRING("rotation"),
	HX_CSTRING("stopping"),
	HX_CSTRING("movement"),
	HX_CSTRING("jumpCallback"),
	HX_CSTRING("jumpSurface"),
	HX_CSTRING("extraSurfaceTime"),
	HX_CSTRING("jumpFromFallTime"),
	HX_CSTRING("lastJumpTime"),
	HX_CSTRING("nextJumpTime"),
	HX_CSTRING("jumpKeyMode"),
	HX_CSTRING("jumpRate"),
	HX_CSTRING("jumpHeight"),
	HX_CSTRING("fireCallback"),
	HX_CSTRING("fireKeyMode"),
	HX_CSTRING("lastFiredTime"),
	HX_CSTRING("nextFireTime"),
	HX_CSTRING("fireRate"),
	HX_CSTRING("gravityY"),
	HX_CSTRING("gravityX"),
	HX_CSTRING("ySpeedAdjust"),
	HX_CSTRING("xSpeedAdjust"),
	HX_CSTRING("capAngularVelocity"),
	HX_CSTRING("maxAngle"),
	HX_CSTRING("minAngle"),
	HX_CSTRING("enforceAngleLimits"),
	HX_CSTRING("clockwiseRotationSpeed"),
	HX_CSTRING("antiClockwiseRotationSpeed"),
	HX_CSTRING("isRotating"),
	HX_CSTRING("reverseEnabled"),
	HX_CSTRING("thrustEnabled"),
	HX_CSTRING("reverseSpeed"),
	HX_CSTRING("thrustSpeed"),
	HX_CSTRING("rightMoveSpeed"),
	HX_CSTRING("leftMoveSpeed"),
	HX_CSTRING("downMoveSpeed"),
	HX_CSTRING("upMoveSpeed"),
	HX_CSTRING("rotateClockwise"),
	HX_CSTRING("rotateAntiClockwise"),
	HX_CSTRING("yFacing"),
	HX_CSTRING("xFacing"),
	HX_CSTRING("altJump"),
	HX_CSTRING("jump"),
	HX_CSTRING("altFire"),
	HX_CSTRING("fire"),
	HX_CSTRING("right"),
	HX_CSTRING("left"),
	HX_CSTRING("down"),
	HX_CSTRING("up"),
	HX_CSTRING("bounds"),
	HX_CSTRING("entity"),
	HX_CSTRING("enabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::MOVEMENT_INSTANT,"MOVEMENT_INSTANT");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::MOVEMENT_ACCELERATES,"MOVEMENT_ACCELERATES");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::STOPPING_INSTANT,"STOPPING_INSTANT");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::STOPPING_DECELERATES,"STOPPING_DECELERATES");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::STOPPING_NEVER,"STOPPING_NEVER");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::ROTATION_INSTANT,"ROTATION_INSTANT");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::ROTATION_ACCELERATES,"ROTATION_ACCELERATES");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::ROTATION_STOPPING_INSTANT,"ROTATION_STOPPING_INSTANT");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::ROTATION_STOPPING_DECELERATES,"ROTATION_STOPPING_DECELERATES");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::ROTATION_STOPPING_NEVER,"ROTATION_STOPPING_NEVER");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::KEYMODE_PRESSED,"KEYMODE_PRESSED");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::KEYMODE_JUST_DOWN,"KEYMODE_JUST_DOWN");
	HX_MARK_MEMBER_NAME(FlxControlHandler_obj::KEYMODE_RELEASED,"KEYMODE_RELEASED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::MOVEMENT_INSTANT,"MOVEMENT_INSTANT");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::MOVEMENT_ACCELERATES,"MOVEMENT_ACCELERATES");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::STOPPING_INSTANT,"STOPPING_INSTANT");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::STOPPING_DECELERATES,"STOPPING_DECELERATES");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::STOPPING_NEVER,"STOPPING_NEVER");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::ROTATION_INSTANT,"ROTATION_INSTANT");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::ROTATION_ACCELERATES,"ROTATION_ACCELERATES");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::ROTATION_STOPPING_INSTANT,"ROTATION_STOPPING_INSTANT");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::ROTATION_STOPPING_DECELERATES,"ROTATION_STOPPING_DECELERATES");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::ROTATION_STOPPING_NEVER,"ROTATION_STOPPING_NEVER");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::KEYMODE_PRESSED,"KEYMODE_PRESSED");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::KEYMODE_JUST_DOWN,"KEYMODE_JUST_DOWN");
	HX_VISIT_MEMBER_NAME(FlxControlHandler_obj::KEYMODE_RELEASED,"KEYMODE_RELEASED");
};

Class FlxControlHandler_obj::__mClass;

void FlxControlHandler_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.photonstorm.FlxControlHandler"), hx::TCanCast< FlxControlHandler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxControlHandler_obj::__boot()
{
	MOVEMENT_INSTANT= (int)0;
	MOVEMENT_ACCELERATES= (int)1;
	STOPPING_INSTANT= (int)0;
	STOPPING_DECELERATES= (int)1;
	STOPPING_NEVER= (int)2;
	ROTATION_INSTANT= (int)0;
	ROTATION_ACCELERATES= (int)1;
	ROTATION_STOPPING_INSTANT= (int)0;
	ROTATION_STOPPING_DECELERATES= (int)1;
	ROTATION_STOPPING_NEVER= (int)2;
	KEYMODE_PRESSED= (int)0;
	KEYMODE_JUST_DOWN= (int)1;
	KEYMODE_RELEASED= (int)2;
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm
