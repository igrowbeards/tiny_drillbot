#include <hxcpp.h>

#ifndef INCLUDED_Spike
#include <Spike.h>
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

Void Spike_obj::__construct(int X,int Y)
{
HX_STACK_PUSH("Spike::new","Spike.hx",8);
{
	HX_STACK_LINE(9)
	super::__construct((X * (int)8),(Y * (int)8),null());
	HX_STACK_LINE(10)
	this->loadGraphic(HX_CSTRING("assets/lava.png"),true,false,(int)8,(int)8,null(),null());
	HX_STACK_LINE(11)
	this->addAnimation(HX_CSTRING("default"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)5).Add((int)5).Add((int)5),(int)5,true);
	HX_STACK_LINE(12)
	this->setSolid(true);
	HX_STACK_LINE(13)
	this->immovable = true;
	HX_STACK_LINE(14)
	this->play(HX_CSTRING("default"),null());
}
;
	return null();
}

Spike_obj::~Spike_obj() { }

Dynamic Spike_obj::__CreateEmpty() { return  new Spike_obj; }
hx::ObjectPtr< Spike_obj > Spike_obj::__new(int X,int Y)
{  hx::ObjectPtr< Spike_obj > result = new Spike_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Spike_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spike_obj > result = new Spike_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Spike_obj::Spike_obj()
{
}

void Spike_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spike);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spike_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Spike_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Spike_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Spike_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spike_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spike_obj::__mClass,"__mClass");
};

Class Spike_obj::__mClass;

void Spike_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Spike"), hx::TCanCast< Spike_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Spike_obj::__boot()
{
}

