#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControl
#include <org/flixel/plugin/photonstorm/FlxControl.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControlHandler
#include <org/flixel/plugin/photonstorm/FlxControlHandler.h>
#endif

Void Player_obj::__construct()
{
HX_STACK_PUSH("Player::new","Player.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(16)
	this->x = (int)32;
	HX_STACK_LINE(17)
	this->y = (int)8;
	HX_STACK_LINE(18)
	this->loadGraphic(HX_CSTRING("assets/driller.png"),true,true,(int)8,(int)8,true,null());
	HX_STACK_LINE(19)
	this->addAnimation(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)10,true);
	HX_STACK_LINE(20)
	this->addAnimation(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)10,true);
	HX_STACK_LINE(23)
	this->width = (int)3;
	HX_STACK_LINE(24)
	this->offset->x = (int)2;
	HX_STACK_LINE(26)
	if (((::org::flixel::FlxG_obj::getPlugin(hx::ClassOf< ::org::flixel::plugin::photonstorm::FlxControl >()) == null()))){
		HX_STACK_LINE(26)
		::org::flixel::FlxG_obj::addPlugin(::org::flixel::plugin::photonstorm::FlxControl_obj::__new());
	}
	HX_STACK_LINE(32)
	::org::flixel::plugin::photonstorm::FlxControl_obj::create(hx::ObjectPtr<OBJ_>(this),(int)1,(int)1,(int)1,true,false);
	HX_STACK_LINE(35)
	::org::flixel::plugin::photonstorm::FlxControl_obj::player1->setCursorControl(false,false,true,true);
	HX_STACK_LINE(37)
	::org::flixel::plugin::photonstorm::FlxControl_obj::player1->setGravity((int)0,(int)400);
	HX_STACK_LINE(39)
	::org::flixel::plugin::photonstorm::FlxControl_obj::player1->setMovementSpeed((int)400,(int)0,(int)50,(int)200,(int)400,(int)0);
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Void Player_obj::hitSpring( ::org::flixel::FlxObject player,::org::flixel::FlxObject spring){
{
		HX_STACK_PUSH("Player::hitSpring","Player.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(player,"player");
		HX_STACK_ARG(spring,"spring");
		HX_STACK_LINE(64)
		this->velocity->y = (int)-150;
		HX_STACK_LINE(65)
		this->acceleration->y = (int)-150;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,hitSpring,(void))

Void Player_obj::update( ){
{
		HX_STACK_PUSH("Player::update","Player.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(47)
		this->super::update();
		HX_STACK_LINE(49)
		if (((this->touching == (int)4096))){
			HX_STACK_LINE(50)
			if (((this->velocity->x != (int)0))){
				HX_STACK_LINE(52)
				this->play(HX_CSTRING("walk"),null());
			}
			else{
				HX_STACK_LINE(56)
				this->play(HX_CSTRING("idle"),null());
			}
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitSpring") ) { return hitSpring_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hitSpring"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

Class Player_obj::__mClass;

void Player_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Player_obj::__boot()
{
}

