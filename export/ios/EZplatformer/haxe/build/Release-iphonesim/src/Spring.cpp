#include <hxcpp.h>

#ifndef INCLUDED_Spring
#include <Spring.h>
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

Void Spring_obj::__construct(int X,int Y)
{
HX_STACK_PUSH("Spring::new","Spring.hx",8);
{
	HX_STACK_LINE(9)
	super::__construct((X * (int)8),(Y * (int)8),null());
	HX_STACK_LINE(10)
	this->setSolid(true);
	HX_STACK_LINE(11)
	this->immovable = true;
	HX_STACK_LINE(12)
	this->loadGraphic(HX_CSTRING("assets/spring.png"),true,false,(int)8,(int)8,null(),null());
	HX_STACK_LINE(13)
	this->addAnimation(HX_CSTRING("default"),Array_obj< int >::__new().Add((int)0),(int)0,false);
	HX_STACK_LINE(14)
	this->addAnimation(HX_CSTRING("boing"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)1).Add((int)0),(int)20,false);
	HX_STACK_LINE(16)
	this->play(HX_CSTRING("default"),null());
}
;
	return null();
}

Spring_obj::~Spring_obj() { }

Dynamic Spring_obj::__CreateEmpty() { return  new Spring_obj; }
hx::ObjectPtr< Spring_obj > Spring_obj::__new(int X,int Y)
{  hx::ObjectPtr< Spring_obj > result = new Spring_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Spring_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spring_obj > result = new Spring_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Spring_obj::Spring_obj()
{
}

void Spring_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spring);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spring_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Spring_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Spring_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Spring_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spring_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spring_obj::__mClass,"__mClass");
};

Class Spring_obj::__mClass;

void Spring_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Spring"), hx::TCanCast< Spring_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Spring_obj::__boot()
{
}

