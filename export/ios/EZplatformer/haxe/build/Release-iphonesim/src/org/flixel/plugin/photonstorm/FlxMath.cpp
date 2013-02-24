#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxMath
#include <org/flixel/plugin/photonstorm/FlxMath.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{

Void FlxMath_obj::__construct()
{
HX_STACK_PUSH("FlxMath::new","org/flixel/plugin/photonstorm/FlxMath.hx",39);
{
}
;
	return null();
}

FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

int FlxMath_obj::getrandmax;

int FlxMath_obj::mr;

Array< Float > FlxMath_obj::cosTable;

Array< Float > FlxMath_obj::sinTable;

Float FlxMath_obj::coefficient1;

Float FlxMath_obj::RADTODEG;

Float FlxMath_obj::DEGTORAD;

bool FlxMath_obj::pointInCoordinates( int pointX,int pointY,int rectX,int rectY,int rectWidth,int rectHeight){
	HX_STACK_PUSH("FlxMath::pointInCoordinates","org/flixel/plugin/photonstorm/FlxMath.hx",54);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rectX,"rectX");
	HX_STACK_ARG(rectY,"rectY");
	HX_STACK_ARG(rectWidth,"rectWidth");
	HX_STACK_ARG(rectHeight,"rectHeight");
	HX_STACK_LINE(55)
	if (((bool((pointX >= rectX)) && bool((pointX <= (rectX + rectWidth)))))){
		HX_STACK_LINE(56)
		if (((bool((pointY >= rectY)) && bool((pointY <= (rectY + rectHeight)))))){
			HX_STACK_LINE(58)
			return true;
		}
	}
	HX_STACK_LINE(63)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( int pointX,int pointY,::org::flixel::FlxRect rect){
	HX_STACK_PUSH("FlxMath::pointInFlxRect","org/flixel/plugin/photonstorm/FlxMath.hx",75);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(76)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->getRight())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->getBottom()))))){
		HX_STACK_LINE(77)
		return true;
	}
	HX_STACK_LINE(81)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::org::flixel::FlxRect rect){
	HX_STACK_PUSH("FlxMath::mouseInFlxRect","org/flixel/plugin/photonstorm/FlxMath.hx",93);
	HX_STACK_ARG(useWorldCoords,"useWorldCoords");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(94)
	if (((rect == null()))){
		HX_STACK_LINE(95)
		return true;
	}
	HX_STACK_LINE(99)
	if ((useWorldCoords)){
		HX_STACK_LINE(100)
		return ::org::flixel::plugin::photonstorm::FlxMath_obj::pointInFlxRect(::Math_obj::floor(::org::flixel::FlxG_obj::mouse->x),::Math_obj::floor(::org::flixel::FlxG_obj::mouse->y),rect);
	}
	else{
		HX_STACK_LINE(104)
		return ::org::flixel::plugin::photonstorm::FlxMath_obj::pointInFlxRect(::org::flixel::FlxG_obj::mouse->screenX,::org::flixel::FlxG_obj::mouse->screenY,rect);
	}
	HX_STACK_LINE(99)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( int pointX,int pointY,::native::geom::Rectangle rect){
	HX_STACK_PUSH("FlxMath::pointInRectangle","org/flixel/plugin/photonstorm/FlxMath.hx",118);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(119)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->get_right())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->get_bottom()))))){
		HX_STACK_LINE(120)
		return true;
	}
	HX_STACK_LINE(124)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

Float FlxMath_obj::atan2( Float y,Float x){
	HX_STACK_PUSH("FlxMath::atan2","org/flixel/plugin/photonstorm/FlxMath.hx",141);
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(142)
	Float absY = y;		HX_STACK_VAR(absY,"absY");
	HX_STACK_LINE(143)
	Float coefficient2 = ((int)3 * ::org::flixel::plugin::photonstorm::FlxMath_obj::coefficient1);		HX_STACK_VAR(coefficient2,"coefficient2");
	HX_STACK_LINE(144)
	Float r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(145)
	Float angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(147)
	if (((absY < (int)0))){
		HX_STACK_LINE(148)
		absY = -(absY);
	}
	HX_STACK_LINE(152)
	if (((x >= (int)0))){
		HX_STACK_LINE(154)
		r = (Float(((x - absY))) / Float(((x + absY))));
		HX_STACK_LINE(155)
		angle = (::org::flixel::plugin::photonstorm::FlxMath_obj::coefficient1 - (::org::flixel::plugin::photonstorm::FlxMath_obj::coefficient1 * r));
	}
	else{
		HX_STACK_LINE(159)
		r = (Float(((x + absY))) / Float(((absY - x))));
		HX_STACK_LINE(160)
		angle = (coefficient2 - (::org::flixel::plugin::photonstorm::FlxMath_obj::coefficient1 * r));
	}
	HX_STACK_LINE(163)
	return (  (((y < (int)0))) ? Float(-(angle)) : Float(angle) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,atan2,return )

Array< Float > FlxMath_obj::sinCosGenerator( int length,hx::Null< Float >  __o_sinAmplitude,hx::Null< Float >  __o_cosAmplitude,hx::Null< Float >  __o_frequency){
Float sinAmplitude = __o_sinAmplitude.Default(1.0);
Float cosAmplitude = __o_cosAmplitude.Default(1.0);
Float frequency = __o_frequency.Default(1.0);
	HX_STACK_PUSH("FlxMath::sinCosGenerator","org/flixel/plugin/photonstorm/FlxMath.hx",181);
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(sinAmplitude,"sinAmplitude");
	HX_STACK_ARG(cosAmplitude,"cosAmplitude");
	HX_STACK_ARG(frequency,"frequency");
{
		HX_STACK_LINE(182)
		Float sin = sinAmplitude;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(183)
		Float cos = cosAmplitude;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(184)
		Float frq = (Float((frequency * ::Math_obj::PI)) / Float(length));		HX_STACK_VAR(frq,"frq");
		HX_STACK_LINE(186)
		::org::flixel::plugin::photonstorm::FlxMath_obj::cosTable = Array_obj< Float >::__new();
		HX_STACK_LINE(187)
		::org::flixel::plugin::photonstorm::FlxMath_obj::sinTable = Array_obj< Float >::__new();
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(189)
			while(((_g < length))){
				HX_STACK_LINE(189)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(191)
				hx::SubEq(cos,(sin * frq));
				HX_STACK_LINE(192)
				hx::AddEq(sin,(cos * frq));
				HX_STACK_LINE(194)
				::org::flixel::plugin::photonstorm::FlxMath_obj::cosTable[c] = cos;
				HX_STACK_LINE(195)
				::org::flixel::plugin::photonstorm::FlxMath_obj::sinTable[c] = sin;
			}
		}
		HX_STACK_LINE(198)
		return ::org::flixel::plugin::photonstorm::FlxMath_obj::sinTable;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,sinCosGenerator,return )

Array< Float > FlxMath_obj::getSinTable( ){
	HX_STACK_PUSH("FlxMath::getSinTable","org/flixel/plugin/photonstorm/FlxMath.hx",207);
	HX_STACK_LINE(207)
	return ::org::flixel::plugin::photonstorm::FlxMath_obj::sinTable;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMath_obj,getSinTable,return )

Array< Float > FlxMath_obj::getCosTable( ){
	HX_STACK_PUSH("FlxMath::getCosTable","org/flixel/plugin/photonstorm/FlxMath.hx",217);
	HX_STACK_LINE(217)
	return ::org::flixel::plugin::photonstorm::FlxMath_obj::cosTable;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMath_obj,getCosTable,return )

Float FlxMath_obj::sqrt( Float val){
	HX_STACK_PUSH("FlxMath::sqrt","org/flixel/plugin/photonstorm/FlxMath.hx",231);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(232)
	if ((::Math_obj::isNaN(val))){
		HX_STACK_LINE(233)
		return ::Math_obj::NaN;
	}
	HX_STACK_LINE(237)
	Float thresh = 0.002;		HX_STACK_VAR(thresh,"thresh");
	HX_STACK_LINE(238)
	Float b = (val * 0.25);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(239)
	Float a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(240)
	Float c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(242)
	if (((val == (int)0))){
		HX_STACK_LINE(243)
		return (int)0;
	}
	HX_STACK_LINE(247)
	do{
		HX_STACK_LINE(248)
		c = (Float(val) / Float(b));
		HX_STACK_LINE(249)
		b = (((b + c)) * 0.5);
		HX_STACK_LINE(250)
		a = (b - c);
		HX_STACK_LINE(251)
		if (((a < (int)0))){
			HX_STACK_LINE(251)
			a = -(a);
		}
	}
while(((a > thresh)));
	HX_STACK_LINE(255)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,sqrt,return )

int FlxMath_obj::miniRand( ){
	HX_STACK_PUSH("FlxMath::miniRand","org/flixel/plugin/photonstorm/FlxMath.hx",267);
	HX_STACK_LINE(268)
	int result = ::Std_obj::_int(::org::flixel::plugin::photonstorm::FlxMath_obj::mr);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(270)
	(result)++;
	HX_STACK_LINE(271)
	hx::MultEq(result,(int)75);
	HX_STACK_LINE(272)
	hx::ModEq(result,(int)65537);
	HX_STACK_LINE(273)
	(result)--;
	HX_STACK_LINE(275)
	(::org::flixel::plugin::photonstorm::FlxMath_obj::mr)++;
	HX_STACK_LINE(277)
	if (((::org::flixel::plugin::photonstorm::FlxMath_obj::mr == (int)65536))){
		HX_STACK_LINE(278)
		::org::flixel::plugin::photonstorm::FlxMath_obj::mr = (int)0;
	}
	HX_STACK_LINE(282)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMath_obj,miniRand,return )

int FlxMath_obj::rand( Dynamic min,Dynamic max,Array< Float > excludes){
	HX_STACK_PUSH("FlxMath::rand","org/flixel/plugin/photonstorm/FlxMath.hx",298);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(excludes,"excludes");
	HX_STACK_LINE(299)
	if (((min == null()))){
		HX_STACK_LINE(300)
		min = (int)0;
	}
	HX_STACK_LINE(304)
	if (((max == null()))){
		HX_STACK_LINE(305)
		max = (int)16777215;
	}
	HX_STACK_LINE(309)
	if (((min == max))){
		HX_STACK_LINE(310)
		return ::Math_obj::floor(min);
	}
	HX_STACK_LINE(314)
	if (((excludes != null()))){
		HX_STACK_LINE(318)
		excludes->sort(::org::flixel::plugin::photonstorm::FlxMath_obj::numericComparison_dyn());
		HX_STACK_LINE(320)
		int result;		HX_STACK_VAR(result,"result");
		struct _Function_2_1{
			inline static int Block( Array< Float > &excludes,int &result){
				HX_STACK_PUSH("*::closure","org/flixel/plugin/photonstorm/FlxMath.hx",332);
				{
					HX_STACK_LINE(332)
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(332)
					int len = excludes->length;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(332)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(332)
					{
						HX_STACK_LINE(332)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(332)
						while(((_g < len))){
							HX_STACK_LINE(332)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(332)
							if (((excludes->__get(i) == result))){
								HX_STACK_LINE(332)
								index = i;
							}
						}
					}
					HX_STACK_LINE(332)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(322)
		do{
			HX_STACK_LINE(322)
			if (((min < max))){
				HX_STACK_LINE(324)
				result = ::Math_obj::floor((min + (::Math_obj::random() * (((max + (int)1) - min)))));
			}
			else{
				HX_STACK_LINE(328)
				result = ::Math_obj::floor((max + (::Math_obj::random() * (((min + (int)1) - max)))));
			}
		}
while(((_Function_2_1::Block(excludes,result) >= (int)0)));
		HX_STACK_LINE(334)
		return result;
	}
	else{
		HX_STACK_LINE(337)
		if (((min < max))){
			HX_STACK_LINE(340)
			return ::Math_obj::floor((min + (::Math_obj::random() * (((max + (int)1) - min)))));
		}
		else{
			HX_STACK_LINE(344)
			return ::Math_obj::floor((max + (::Math_obj::random() * (((min + (int)1) - max)))));
		}
	}
	HX_STACK_LINE(314)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,rand,return )

int FlxMath_obj::numericComparison( Float int1,Float int2){
	HX_STACK_PUSH("FlxMath::numericComparison","org/flixel/plugin/photonstorm/FlxMath.hx",351);
	HX_STACK_ARG(int1,"int1");
	HX_STACK_ARG(int2,"int2");
	HX_STACK_LINE(352)
	if (((int2 > int1))){
		HX_STACK_LINE(353)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(356)
		if (((int1 > int2))){
			HX_STACK_LINE(357)
			return (int)1;
		}
	}
	HX_STACK_LINE(360)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

Float FlxMath_obj::randFloat( Dynamic min,Dynamic max){
	HX_STACK_PUSH("FlxMath::randFloat","org/flixel/plugin/photonstorm/FlxMath.hx",375);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(376)
	if (((min == null()))){
		HX_STACK_LINE(377)
		min = (int)0;
	}
	HX_STACK_LINE(381)
	if (((max == null()))){
		HX_STACK_LINE(382)
		max = (int)16777215;
	}
	HX_STACK_LINE(386)
	if (((min == max))){
		HX_STACK_LINE(387)
		return min;
	}
	else{
		HX_STACK_LINE(390)
		if (((min < max))){
			HX_STACK_LINE(391)
			return (min + (::Math_obj::random() * (((max - min) + (int)1))));
		}
		else{
			HX_STACK_LINE(395)
			return (max + (::Math_obj::random() * (((min - max) + (int)1))));
		}
	}
	HX_STACK_LINE(386)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,randFloat,return )

bool FlxMath_obj::chanceRoll( hx::Null< int >  __o_chance){
int chance = __o_chance.Default(50);
	HX_STACK_PUSH("FlxMath::chanceRoll","org/flixel/plugin/photonstorm/FlxMath.hx",410);
	HX_STACK_ARG(chance,"chance");
{
		HX_STACK_LINE(410)
		if (((chance <= (int)0))){
			HX_STACK_LINE(412)
			return false;
		}
		else{
			HX_STACK_LINE(415)
			if (((chance >= (int)100))){
				HX_STACK_LINE(416)
				return true;
			}
			else{
				HX_STACK_LINE(420)
				if ((((::Math_obj::random() * (int)100) >= chance))){
					HX_STACK_LINE(422)
					return false;
				}
				else{
					HX_STACK_LINE(426)
					return true;
				}
			}
		}
		HX_STACK_LINE(410)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,chanceRoll,return )

int FlxMath_obj::maxAdd( int value,int amount,int max){
	HX_STACK_PUSH("FlxMath::maxAdd","org/flixel/plugin/photonstorm/FlxMath.hx",441);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(442)
	hx::AddEq(value,amount);
	HX_STACK_LINE(444)
	if (((value > max))){
		HX_STACK_LINE(445)
		value = max;
	}
	HX_STACK_LINE(449)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrapValue( int value,int amount,int max){
	HX_STACK_PUSH("FlxMath::wrapValue","org/flixel/plugin/photonstorm/FlxMath.hx",462);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(463)
	int diff;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(465)
	value = ::Math_obj::floor(::Math_obj::abs(value));
	HX_STACK_LINE(466)
	amount = ::Math_obj::floor(::Math_obj::abs(amount));
	HX_STACK_LINE(467)
	max = ::Math_obj::floor(::Math_obj::abs(max));
	HX_STACK_LINE(469)
	diff = hx::Mod(((value + amount)),max);
	HX_STACK_LINE(471)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrapValue,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_PUSH("FlxMath::vectorLength","org/flixel/plugin/photonstorm/FlxMath.hx",483);
	HX_STACK_ARG(dx,"dx");
	HX_STACK_ARG(dy,"dy");
	HX_STACK_LINE(483)
	return ::org::flixel::plugin::photonstorm::FlxMath_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_PUSH("FlxMath::dotProduct","org/flixel/plugin/photonstorm/FlxMath.hx",498);
	HX_STACK_ARG(ax,"ax");
	HX_STACK_ARG(ay,"ay");
	HX_STACK_ARG(bx,"bx");
	HX_STACK_ARG(by,"by");
	HX_STACK_LINE(498)
	return ((ax * bx) + (ay * by));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::randomSign( ){
	HX_STACK_PUSH("FlxMath::randomSign","org/flixel/plugin/photonstorm/FlxMath.hx",508);
	HX_STACK_LINE(508)
	return (  (((::Math_obj::random() > 0.5))) ? int((int)1) : int((int)-1) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMath_obj,randomSign,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_PUSH("FlxMath::isOdd","org/flixel/plugin/photonstorm/FlxMath.hx",520);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(520)
	if (((((int(::Math_obj::floor(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(522)
		return true;
	}
	else{
		HX_STACK_LINE(526)
		return false;
	}
	HX_STACK_LINE(520)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_PUSH("FlxMath::isEven","org/flixel/plugin/photonstorm/FlxMath.hx",539);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(539)
	if (((((int(::Math_obj::floor(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(541)
		return false;
	}
	else{
		HX_STACK_LINE(545)
		return true;
	}
	HX_STACK_LINE(539)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::wrapAngle( Float angle){
	HX_STACK_PUSH("FlxMath::wrapAngle","org/flixel/plugin/photonstorm/FlxMath.hx",559);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(560)
	int result = ::Std_obj::_int(angle);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(562)
	if (((angle > (int)180))){
		HX_STACK_LINE(563)
		result = (int)-180;
	}
	else{
		HX_STACK_LINE(566)
		if (((angle < (int)-180))){
			HX_STACK_LINE(567)
			result = (int)180;
		}
	}
	HX_STACK_LINE(571)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,wrapAngle,return )

int FlxMath_obj::angleLimit( int angle,int min,int max){
	HX_STACK_PUSH("FlxMath::angleLimit","org/flixel/plugin/photonstorm/FlxMath.hx",584);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(585)
	int result = angle;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(587)
	if (((angle > max))){
		HX_STACK_LINE(588)
		result = max;
	}
	else{
		HX_STACK_LINE(591)
		if (((angle < min))){
			HX_STACK_LINE(592)
			result = min;
		}
	}
	HX_STACK_LINE(596)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,angleLimit,return )

Float FlxMath_obj::asDegrees( Float radians){
	HX_STACK_PUSH("FlxMath::asDegrees","org/flixel/plugin/photonstorm/FlxMath.hx",608);
	HX_STACK_ARG(radians,"radians");
	HX_STACK_LINE(608)
	return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,asDegrees,return )

Float FlxMath_obj::asRadians( Float degrees){
	HX_STACK_PUSH("FlxMath::asRadians","org/flixel/plugin/photonstorm/FlxMath.hx",621);
	HX_STACK_ARG(degrees,"degrees");
	HX_STACK_LINE(621)
	return (degrees * ((Float(::Math_obj::PI) / Float((int)180))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,asRadians,return )


FlxMath_obj::FlxMath_obj()
{
}

void FlxMath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMath);
	HX_MARK_END_CLASS();
}

void FlxMath_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxMath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mr") ) { return mr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sqrt") ) { return sqrt_dyn(); }
		if (HX_FIELD_EQ(inName,"rand") ) { return rand_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"atan2") ) { return atan2_dyn(); }
		if (HX_FIELD_EQ(inName,"isOdd") ) { return isOdd_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"maxAdd") ) { return maxAdd_dyn(); }
		if (HX_FIELD_EQ(inName,"isEven") ) { return isEven_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { return cosTable; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { return sinTable; }
		if (HX_FIELD_EQ(inName,"RADTODEG") ) { return RADTODEG; }
		if (HX_FIELD_EQ(inName,"DEGTORAD") ) { return DEGTORAD; }
		if (HX_FIELD_EQ(inName,"miniRand") ) { return miniRand_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"randFloat") ) { return randFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapValue") ) { return wrapValue_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { return wrapAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { return asDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"asRadians") ) { return asRadians_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getrandmax") ) { return getrandmax; }
		if (HX_FIELD_EQ(inName,"chanceRoll") ) { return chanceRoll_dyn(); }
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"randomSign") ) { return randomSign_dyn(); }
		if (HX_FIELD_EQ(inName,"angleLimit") ) { return angleLimit_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSinTable") ) { return getSinTable_dyn(); }
		if (HX_FIELD_EQ(inName,"getCosTable") ) { return getCosTable_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coefficient1") ) { return coefficient1; }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { return vectorLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { return pointInFlxRect_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { return mouseInFlxRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sinCosGenerator") ) { return sinCosGenerator_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { return pointInRectangle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { return numericComparison_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { return pointInCoordinates_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mr") ) { mr=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { cosTable=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinTable") ) { sinTable=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RADTODEG") ) { RADTODEG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEGTORAD") ) { DEGTORAD=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getrandmax") ) { getrandmax=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"coefficient1") ) { coefficient1=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getrandmax"),
	HX_CSTRING("mr"),
	HX_CSTRING("cosTable"),
	HX_CSTRING("sinTable"),
	HX_CSTRING("coefficient1"),
	HX_CSTRING("RADTODEG"),
	HX_CSTRING("DEGTORAD"),
	HX_CSTRING("pointInCoordinates"),
	HX_CSTRING("pointInFlxRect"),
	HX_CSTRING("mouseInFlxRect"),
	HX_CSTRING("pointInRectangle"),
	HX_CSTRING("atan2"),
	HX_CSTRING("sinCosGenerator"),
	HX_CSTRING("getSinTable"),
	HX_CSTRING("getCosTable"),
	HX_CSTRING("sqrt"),
	HX_CSTRING("miniRand"),
	HX_CSTRING("rand"),
	HX_CSTRING("numericComparison"),
	HX_CSTRING("randFloat"),
	HX_CSTRING("chanceRoll"),
	HX_CSTRING("maxAdd"),
	HX_CSTRING("wrapValue"),
	HX_CSTRING("vectorLength"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("randomSign"),
	HX_CSTRING("isOdd"),
	HX_CSTRING("isEven"),
	HX_CSTRING("wrapAngle"),
	HX_CSTRING("angleLimit"),
	HX_CSTRING("asDegrees"),
	HX_CSTRING("asRadians"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMath_obj::getrandmax,"getrandmax");
	HX_MARK_MEMBER_NAME(FlxMath_obj::mr,"mr");
	HX_MARK_MEMBER_NAME(FlxMath_obj::cosTable,"cosTable");
	HX_MARK_MEMBER_NAME(FlxMath_obj::sinTable,"sinTable");
	HX_MARK_MEMBER_NAME(FlxMath_obj::coefficient1,"coefficient1");
	HX_MARK_MEMBER_NAME(FlxMath_obj::RADTODEG,"RADTODEG");
	HX_MARK_MEMBER_NAME(FlxMath_obj::DEGTORAD,"DEGTORAD");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::getrandmax,"getrandmax");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::mr,"mr");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::cosTable,"cosTable");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::sinTable,"sinTable");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::coefficient1,"coefficient1");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::RADTODEG,"RADTODEG");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::DEGTORAD,"DEGTORAD");
};

Class FlxMath_obj::__mClass;

void FlxMath_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.photonstorm.FlxMath"), hx::TCanCast< FlxMath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMath_obj::__boot()
{
	getrandmax= (int)16777215;
	mr= (int)0;
	cosTable= Array_obj< Float >::__new();
	sinTable= Array_obj< Float >::__new();
	coefficient1= (Float(::Math_obj::PI) / Float((int)4));
	RADTODEG= (Float((int)180) / Float(::Math_obj::PI));
	DEGTORAD= (Float(::Math_obj::PI) / Float((int)180));
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm
