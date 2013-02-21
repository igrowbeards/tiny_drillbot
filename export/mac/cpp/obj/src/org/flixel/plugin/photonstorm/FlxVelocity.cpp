#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxMath
#include <org/flixel/plugin/photonstorm/FlxMath.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxVelocity
#include <org/flixel/plugin/photonstorm/FlxVelocity.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{

Void FlxVelocity_obj::__construct()
{
HX_STACK_PUSH("FlxVelocity::new","org/flixel/plugin/photonstorm/FlxVelocity.hx",26);
{
}
;
	return null();
}

FlxVelocity_obj::~FlxVelocity_obj() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return  new FlxVelocity_obj; }
hx::ObjectPtr< FlxVelocity_obj > FlxVelocity_obj::__new()
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Dynamic FlxVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Void FlxVelocity_obj::moveTowardsObject( ::org::flixel::FlxSprite source,::org::flixel::FlxSprite dest,hx::Null< int >  __o_speed,hx::Null< int >  __o_maxTime){
int speed = __o_speed.Default(60);
int maxTime = __o_maxTime.Default(0);
	HX_STACK_PUSH("FlxVelocity::moveTowardsObject","org/flixel/plugin/photonstorm/FlxVelocity.hx",42);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(dest,"dest");
	HX_STACK_ARG(speed,"speed");
	HX_STACK_ARG(maxTime,"maxTime");
{
		HX_STACK_LINE(43)
		Float a = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::angleBetween(source,dest,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(45)
		if (((maxTime > (int)0))){
			HX_STACK_LINE(47)
			int d = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::distanceBetween(source,dest);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(50)
			speed = ::Std_obj::_int((Float(d) / Float(((Float(maxTime) / Float((int)1000))))));
		}
		HX_STACK_LINE(53)
		source->velocity->x = (::Math_obj::cos(a) * speed);
		HX_STACK_LINE(54)
		source->velocity->y = (::Math_obj::sin(a) * speed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

Void FlxVelocity_obj::accelerateTowardsObject( ::org::flixel::FlxSprite source,::org::flixel::FlxSprite dest,int speed,int xSpeedMax,int ySpeedMax){
{
		HX_STACK_PUSH("FlxVelocity::accelerateTowardsObject","org/flixel/plugin/photonstorm/FlxVelocity.hx",69);
		HX_STACK_ARG(source,"source");
		HX_STACK_ARG(dest,"dest");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_ARG(xSpeedMax,"xSpeedMax");
		HX_STACK_ARG(ySpeedMax,"ySpeedMax");
		HX_STACK_LINE(70)
		Float a = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::angleBetween(source,dest,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(72)
		source->velocity->x = (int)0;
		HX_STACK_LINE(73)
		source->velocity->y = (int)0;
		HX_STACK_LINE(75)
		source->acceleration->x = ::Std_obj::_int((::Math_obj::cos(a) * speed));
		HX_STACK_LINE(76)
		source->acceleration->y = ::Std_obj::_int((::Math_obj::sin(a) * speed));
		HX_STACK_LINE(78)
		source->maxVelocity->x = xSpeedMax;
		HX_STACK_LINE(79)
		source->maxVelocity->y = ySpeedMax;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsObject,(void))

Void FlxVelocity_obj::moveTowardsMouse( ::org::flixel::FlxSprite source,hx::Null< int >  __o_speed,hx::Null< int >  __o_maxTime){
int speed = __o_speed.Default(60);
int maxTime = __o_maxTime.Default(0);
	HX_STACK_PUSH("FlxVelocity::moveTowardsMouse","org/flixel/plugin/photonstorm/FlxVelocity.hx",93);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(speed,"speed");
	HX_STACK_ARG(maxTime,"maxTime");
{
		HX_STACK_LINE(94)
		Float a = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::angleBetweenMouse(source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(96)
		if (((maxTime > (int)0))){
			HX_STACK_LINE(98)
			int d = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::distanceToMouse(source);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(101)
			speed = ::Std_obj::_int((Float(d) / Float(((Float(maxTime) / Float((int)1000))))));
		}
		HX_STACK_LINE(104)
		source->velocity->x = (::Math_obj::cos(a) * speed);
		HX_STACK_LINE(105)
		source->velocity->y = (::Math_obj::sin(a) * speed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

Void FlxVelocity_obj::accelerateTowardsMouse( ::org::flixel::FlxSprite source,int speed,int xSpeedMax,int ySpeedMax){
{
		HX_STACK_PUSH("FlxVelocity::accelerateTowardsMouse","org/flixel/plugin/photonstorm/FlxVelocity.hx",119);
		HX_STACK_ARG(source,"source");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_ARG(xSpeedMax,"xSpeedMax");
		HX_STACK_ARG(ySpeedMax,"ySpeedMax");
		HX_STACK_LINE(120)
		Float a = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::angleBetweenMouse(source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(122)
		source->velocity->x = (int)0;
		HX_STACK_LINE(123)
		source->velocity->y = (int)0;
		HX_STACK_LINE(125)
		source->acceleration->x = ::Std_obj::_int((::Math_obj::cos(a) * speed));
		HX_STACK_LINE(126)
		source->acceleration->y = ::Std_obj::_int((::Math_obj::sin(a) * speed));
		HX_STACK_LINE(128)
		source->maxVelocity->x = xSpeedMax;
		HX_STACK_LINE(129)
		source->maxVelocity->y = ySpeedMax;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsMouse,(void))

Void FlxVelocity_obj::moveTowardsPoint( ::org::flixel::FlxSprite source,::org::flixel::FlxPoint target,hx::Null< int >  __o_speed,hx::Null< int >  __o_maxTime){
int speed = __o_speed.Default(60);
int maxTime = __o_maxTime.Default(0);
	HX_STACK_PUSH("FlxVelocity::moveTowardsPoint","org/flixel/plugin/photonstorm/FlxVelocity.hx",144);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(speed,"speed");
	HX_STACK_ARG(maxTime,"maxTime");
{
		HX_STACK_LINE(145)
		Float a = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::angleBetweenPoint(source,target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(147)
		if (((maxTime > (int)0))){
			HX_STACK_LINE(149)
			int d = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::distanceToPoint(source,target);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(152)
			speed = ::Std_obj::_int((Float(d) / Float(((Float(maxTime) / Float((int)1000))))));
		}
		HX_STACK_LINE(155)
		source->velocity->x = (::Math_obj::cos(a) * speed);
		HX_STACK_LINE(156)
		source->velocity->y = (::Math_obj::sin(a) * speed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

Void FlxVelocity_obj::accelerateTowardsPoint( ::org::flixel::FlxSprite source,::org::flixel::FlxPoint target,int speed,int xSpeedMax,int ySpeedMax){
{
		HX_STACK_PUSH("FlxVelocity::accelerateTowardsPoint","org/flixel/plugin/photonstorm/FlxVelocity.hx",171);
		HX_STACK_ARG(source,"source");
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_ARG(xSpeedMax,"xSpeedMax");
		HX_STACK_ARG(ySpeedMax,"ySpeedMax");
		HX_STACK_LINE(172)
		Float a = ::org::flixel::plugin::photonstorm::FlxVelocity_obj::angleBetweenPoint(source,target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(174)
		source->velocity->x = (int)0;
		HX_STACK_LINE(175)
		source->velocity->y = (int)0;
		HX_STACK_LINE(177)
		source->acceleration->x = ::Std_obj::_int((::Math_obj::cos(a) * speed));
		HX_STACK_LINE(178)
		source->acceleration->y = ::Std_obj::_int((::Math_obj::sin(a) * speed));
		HX_STACK_LINE(180)
		source->maxVelocity->x = xSpeedMax;
		HX_STACK_LINE(181)
		source->maxVelocity->y = ySpeedMax;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsPoint,(void))

int FlxVelocity_obj::distanceBetween( ::org::flixel::FlxSprite a,::org::flixel::FlxSprite b){
	HX_STACK_PUSH("FlxVelocity::distanceBetween","org/flixel/plugin/photonstorm/FlxVelocity.hx",192);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(193)
	Float dx = ((a->x + a->origin->x) - ((b->x + b->origin->x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(194)
	Float dy = ((a->y + a->origin->y) - ((b->y + b->origin->y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(196)
	return ::Std_obj::_int(::org::flixel::plugin::photonstorm::FlxMath_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,distanceBetween,return )

int FlxVelocity_obj::distanceToPoint( ::org::flixel::FlxSprite a,::org::flixel::FlxPoint target){
	HX_STACK_PUSH("FlxVelocity::distanceToPoint","org/flixel/plugin/photonstorm/FlxVelocity.hx",207);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(208)
	Float dx = ((a->x + a->origin->x) - target->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(209)
	Float dy = ((a->y + a->origin->y) - target->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(211)
	return ::Std_obj::_int(::org::flixel::plugin::photonstorm::FlxMath_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,distanceToPoint,return )

int FlxVelocity_obj::distanceToMouse( ::org::flixel::FlxSprite a){
	HX_STACK_PUSH("FlxVelocity::distanceToMouse","org/flixel/plugin/photonstorm/FlxVelocity.hx",221);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(222)
	Float dx = ((a->x + a->origin->x) - ::org::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(223)
	Float dy = ((a->y + a->origin->y) - ::org::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(225)
	return ::Std_obj::_int(::org::flixel::plugin::photonstorm::FlxMath_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxVelocity_obj,distanceToMouse,return )

Float FlxVelocity_obj::angleBetweenPoint( ::org::flixel::FlxSprite a,::org::flixel::FlxPoint target,hx::Null< bool >  __o_asDegrees){
bool asDegrees = __o_asDegrees.Default(false);
	HX_STACK_PUSH("FlxVelocity::angleBetweenPoint","org/flixel/plugin/photonstorm/FlxVelocity.hx",239);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(asDegrees,"asDegrees");
{
		HX_STACK_LINE(240)
		Float dx = (target->x - ((a->x + a->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(241)
		Float dy = (target->y - ((a->y + a->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(243)
		if ((asDegrees)){
			HX_STACK_LINE(244)
			return (::Math_obj::atan2(dy,dx) * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(248)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(243)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,angleBetweenPoint,return )

Float FlxVelocity_obj::angleBetween( ::org::flixel::FlxSprite a,::org::flixel::FlxSprite b,hx::Null< bool >  __o_asDegrees){
bool asDegrees = __o_asDegrees.Default(false);
	HX_STACK_PUSH("FlxVelocity::angleBetween","org/flixel/plugin/photonstorm/FlxVelocity.hx",264);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(asDegrees,"asDegrees");
{
		HX_STACK_LINE(265)
		Float dx = ((b->x + b->origin->x) - ((a->x + a->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(266)
		Float dy = ((b->y + b->origin->y) - ((a->y + a->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(268)
		if ((asDegrees)){
			HX_STACK_LINE(269)
			return (::Math_obj::atan2(dy,dx) * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(273)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(268)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,angleBetween,return )

::org::flixel::FlxPoint FlxVelocity_obj::velocityFromAngle( int angle,int speed){
	HX_STACK_PUSH("FlxVelocity::velocityFromAngle","org/flixel/plugin/photonstorm/FlxVelocity.hx",287);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(speed,"speed");
	HX_STACK_LINE(288)
	Float a = (angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(290)
	::org::flixel::FlxPoint result = ::org::flixel::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(292)
	result->x = ::Std_obj::_int((::Math_obj::cos(a) * speed));
	HX_STACK_LINE(293)
	result->y = ::Std_obj::_int((::Math_obj::sin(a) * speed));
	HX_STACK_LINE(295)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

::org::flixel::FlxPoint FlxVelocity_obj::velocityFromFacing( ::org::flixel::FlxSprite parent,int speed){
	HX_STACK_PUSH("FlxVelocity::velocityFromFacing","org/flixel/plugin/photonstorm/FlxVelocity.hx",307);
	HX_STACK_ARG(parent,"parent");
	HX_STACK_ARG(speed,"speed");
	HX_STACK_LINE(308)
	Float a = (int)0;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(310)
	if (((parent->facing == (int)1))){
		HX_STACK_LINE(311)
		a = ((int)180 * ((Float(::Math_obj::PI) / Float((int)180))));
	}
	else{
		HX_STACK_LINE(314)
		if (((parent->facing == (int)16))){
			HX_STACK_LINE(315)
			a = ((int)0 * ((Float(::Math_obj::PI) / Float((int)180))));
		}
		else{
			HX_STACK_LINE(318)
			if (((parent->facing == (int)256))){
				HX_STACK_LINE(319)
				a = ((int)-90 * ((Float(::Math_obj::PI) / Float((int)180))));
			}
			else{
				HX_STACK_LINE(322)
				if (((parent->facing == (int)4096))){
					HX_STACK_LINE(323)
					a = ((int)90 * ((Float(::Math_obj::PI) / Float((int)180))));
				}
			}
		}
	}
	HX_STACK_LINE(327)
	::org::flixel::FlxPoint result = ::org::flixel::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(329)
	result->x = ::Std_obj::_int((::Math_obj::cos(a) * speed));
	HX_STACK_LINE(330)
	result->y = ::Std_obj::_int((::Math_obj::sin(a) * speed));
	HX_STACK_LINE(332)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::angleBetweenMouse( ::org::flixel::FlxSprite a,hx::Null< bool >  __o_asDegrees){
bool asDegrees = __o_asDegrees.Default(false);
	HX_STACK_PUSH("FlxVelocity::angleBetweenMouse","org/flixel/plugin/photonstorm/FlxVelocity.hx",346);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(asDegrees,"asDegrees");
{
		struct _Function_1_1{
			inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxSprite &a){
				HX_STACK_PUSH("*::closure","org/flixel/plugin/photonstorm/FlxVelocity.hx",348);
				{
					HX_STACK_LINE(348)
					::org::flixel::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera = null();		HX_STACK_VAR(Camera,"Camera");
					HX_STACK_LINE(348)
					if (((point == null()))){
						HX_STACK_LINE(348)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(348)
					if (((Camera == null()))){
						HX_STACK_LINE(348)
						Camera = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(348)
					point->x = (a->x - ::Math_obj::floor((Camera->scroll->x * a->scrollFactor->x)));
					HX_STACK_LINE(348)
					point->y = (a->y - ::Math_obj::floor((Camera->scroll->y * a->scrollFactor->y)));
					HX_STACK_LINE(348)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(348)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(348)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(348)
		::org::flixel::FlxPoint p = _Function_1_1::Block(a);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(350)
		Float dx = (::org::flixel::FlxG_obj::mouse->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(351)
		Float dy = (::org::flixel::FlxG_obj::mouse->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(353)
		if ((asDegrees)){
			HX_STACK_LINE(354)
			return (::Math_obj::atan2(dy,dx) * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(358)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(353)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,angleBetweenMouse,return )


FlxVelocity_obj::FlxVelocity_obj()
{
}

void FlxVelocity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVelocity);
	HX_MARK_END_CLASS();
}

void FlxVelocity_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxVelocity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { return distanceBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { return distanceToMouse_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { return moveTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { return moveTowardsPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { return moveTowardsObject_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { return angleBetweenPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { return velocityFromAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { return angleBetweenMouse_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { return velocityFromFacing_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { return accelerateTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { return accelerateTowardsPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { return accelerateTowardsObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVelocity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVelocity_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("moveTowardsObject"),
	HX_CSTRING("accelerateTowardsObject"),
	HX_CSTRING("moveTowardsMouse"),
	HX_CSTRING("accelerateTowardsMouse"),
	HX_CSTRING("moveTowardsPoint"),
	HX_CSTRING("accelerateTowardsPoint"),
	HX_CSTRING("distanceBetween"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("distanceToMouse"),
	HX_CSTRING("angleBetweenPoint"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("velocityFromAngle"),
	HX_CSTRING("velocityFromFacing"),
	HX_CSTRING("angleBetweenMouse"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

Class FlxVelocity_obj::__mClass;

void FlxVelocity_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.photonstorm.FlxVelocity"), hx::TCanCast< FlxVelocity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxVelocity_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm
