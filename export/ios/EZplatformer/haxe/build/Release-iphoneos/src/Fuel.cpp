#include <hxcpp.h>

#ifndef INCLUDED_Fuel
#include <Fuel.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif

Void Fuel_obj::__construct(int X,int Y)
{
HX_STACK_PUSH("Fuel::new","Fuel.hx",8);
{
	HX_STACK_LINE(9)
	super::__construct((X * (int)8),(Y * (int)8),null());
	HX_STACK_LINE(10)
	this->loadGraphic(HX_CSTRING("assets/fuel.png"),true,false,(int)8,(int)8,null(),null());
	HX_STACK_LINE(11)
	this->addAnimation(HX_CSTRING("default"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)15,null());
	HX_STACK_LINE(12)
	this->play(HX_CSTRING("default"),null());
	HX_STACK_LINE(13)
	this->setSolid(true);
}
;
	return null();
}

Fuel_obj::~Fuel_obj() { }

Dynamic Fuel_obj::__CreateEmpty() { return  new Fuel_obj; }
hx::ObjectPtr< Fuel_obj > Fuel_obj::__new(int X,int Y)
{  hx::ObjectPtr< Fuel_obj > result = new Fuel_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Fuel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fuel_obj > result = new Fuel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Fuel_obj::Fuel_obj()
{
}

void Fuel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fuel);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Fuel_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Fuel_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Fuel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Fuel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fuel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fuel_obj::__mClass,"__mClass");
};

Class Fuel_obj::__mClass;

void Fuel_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Fuel"), hx::TCanCast< Fuel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Fuel_obj::__boot()
{
}

