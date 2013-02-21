#include <hxcpp.h>

#ifndef INCLUDED_Goomba
#include <Goomba.h>
#endif
#ifndef INCLUDED_Goombas
#include <Goombas.h>
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

Void Goombas_obj::__construct()
{
HX_STACK_PUSH("Goombas::new","Goombas.hx",8);
{
	HX_STACK_LINE(8)
	super::__construct(null());
}
;
	return null();
}

Goombas_obj::~Goombas_obj() { }

Dynamic Goombas_obj::__CreateEmpty() { return  new Goombas_obj; }
hx::ObjectPtr< Goombas_obj > Goombas_obj::__new()
{  hx::ObjectPtr< Goombas_obj > result = new Goombas_obj();
	result->__construct();
	return result;}

Dynamic Goombas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Goombas_obj > result = new Goombas_obj();
	result->__construct();
	return result;}

Void Goombas_obj::update( ){
{
		HX_STACK_PUSH("Goombas::update","Goombas.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_LINE(19)
		this->super::update();
	}
return null();
}


Void Goombas_obj::addGoomba( int x,int y){
{
		HX_STACK_PUSH("Goombas::addGoomba","Goombas.hx",13);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(14)
		::Goomba tempGoomba = ::Goomba_obj::__new(x,y);		HX_STACK_VAR(tempGoomba,"tempGoomba");
		HX_STACK_LINE(15)
		this->add(tempGoomba);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Goombas_obj,addGoomba,(void))


Goombas_obj::Goombas_obj()
{
}

void Goombas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Goombas);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Goombas_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Goombas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addGoomba") ) { return addGoomba_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Goombas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Goombas_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("addGoomba"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Goombas_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Goombas_obj::__mClass,"__mClass");
};

Class Goombas_obj::__mClass;

void Goombas_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Goombas"), hx::TCanCast< Goombas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Goombas_obj::__boot()
{
}

