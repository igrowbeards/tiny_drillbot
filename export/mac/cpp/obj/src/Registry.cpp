#include <hxcpp.h>

#ifndef INCLUDED_Goombas
#include <Goombas.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Registry
#include <Registry.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif

Void Registry_obj::__construct()
{
	return null();
}

Registry_obj::~Registry_obj() { }

Dynamic Registry_obj::__CreateEmpty() { return  new Registry_obj; }
hx::ObjectPtr< Registry_obj > Registry_obj::__new()
{  hx::ObjectPtr< Registry_obj > result = new Registry_obj();
	result->__construct();
	return result;}

Dynamic Registry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Registry_obj > result = new Registry_obj();
	result->__construct();
	return result;}

Void Registry_obj::Registry( ){
{
		HX_STACK_PUSH("Registry::Registry","Registry.hx",21);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Registry_obj,Registry,(void))

::org::flixel::FlxTilemap Registry_obj::level;

::Goombas Registry_obj::Goombas;

::Player Registry_obj::player;


Registry_obj::Registry_obj()
{
}

void Registry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Registry);
	HX_MARK_END_CLASS();
}

void Registry_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Registry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Goombas") ) { return Goombas; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Registry") ) { return Registry_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Registry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< ::org::flixel::FlxTilemap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Goombas") ) { Goombas=inValue.Cast< ::Goombas >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Registry_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("level"),
	HX_CSTRING("Goombas"),
	HX_CSTRING("player"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("Registry"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Registry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Registry_obj::level,"level");
	HX_MARK_MEMBER_NAME(Registry_obj::Goombas,"Goombas");
	HX_MARK_MEMBER_NAME(Registry_obj::player,"player");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Registry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Registry_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Registry_obj::Goombas,"Goombas");
	HX_VISIT_MEMBER_NAME(Registry_obj::player,"player");
};

Class Registry_obj::__mClass;

void Registry_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Registry"), hx::TCanCast< Registry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Registry_obj::__boot()
{
}

