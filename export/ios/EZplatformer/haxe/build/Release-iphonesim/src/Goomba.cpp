#include <hxcpp.h>

#ifndef INCLUDED_Goomba
#include <Goomba.h>
#endif
#ifndef INCLUDED_Registry
#include <Registry.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
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
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif

Void Goomba_obj::__construct(Float x,Float y)
{
HX_STACK_PUSH("Goomba::new","Goomba.hx",8);
{
	HX_STACK_LINE(11)
	this->speed = (int)20;
	HX_STACK_LINE(15)
	super::__construct((x * (int)8),((y * (int)8) + (int)4),null());
	HX_STACK_LINE(16)
	this->loadGraphic(HX_CSTRING("assets/goomba.png"),true,true,(int)5,(int)5,true,null());
	HX_STACK_LINE(17)
	this->addAnimation(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)1).Add((int)2),(int)12,true);
	HX_STACK_LINE(18)
	this->setFacing((int)16);
	HX_STACK_LINE(19)
	this->acceleration->y = (int)50;
	HX_STACK_LINE(20)
	this->velocity->x = (int)30;
	HX_STACK_LINE(21)
	this->play(HX_CSTRING("walk"),null());
}
;
	return null();
}

Goomba_obj::~Goomba_obj() { }

Dynamic Goomba_obj::__CreateEmpty() { return  new Goomba_obj; }
hx::ObjectPtr< Goomba_obj > Goomba_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Goomba_obj > result = new Goomba_obj();
	result->__construct(x,y);
	return result;}

Dynamic Goomba_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Goomba_obj > result = new Goomba_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Goomba_obj::update( ){
{
		HX_STACK_PUSH("Goomba::update","Goomba.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->super::update();
		HX_STACK_LINE(33)
		if (((bool((((int(this->touching) & int((int)1))) > (int)0)) && bool((((int(this->wasTouching) & int((int)1))) <= (int)0))))){
			HX_STACK_LINE(35)
			this->setFacing((int)16);
			HX_STACK_LINE(36)
			this->velocity->x = this->speed;
		}
		else{
			HX_STACK_LINE(38)
			if (((bool((((int(this->touching) & int((int)16))) > (int)0)) && bool((((int(this->wasTouching) & int((int)16))) <= (int)0))))){
				HX_STACK_LINE(40)
				this->setFacing((int)1);
				HX_STACK_LINE(41)
				this->velocity->x = -(this->speed);
			}
			else{
				HX_STACK_LINE(43)
				if (((bool((this->facing == (int)16)) && bool(!(((bool((((int(this->touching) & int((int)16))) > (int)0)) && bool((((int(this->wasTouching) & int((int)16))) <= (int)0))))))))){
					HX_STACK_LINE(44)
					if ((this->overlapsAt((this->x + (int)8),(this->y + (int)1),::Registry_obj::level,null(),null()))){
					}
					else{
						HX_STACK_LINE(50)
						this->velocity->x = -(this->speed);
						HX_STACK_LINE(51)
						this->setFacing((int)1);
					}
				}
				else{
					HX_STACK_LINE(54)
					if (((bool((this->facing == (int)1)) && bool(!(((bool((((int(this->touching) & int((int)1))) > (int)0)) && bool((((int(this->wasTouching) & int((int)1))) <= (int)0))))))))){
						HX_STACK_LINE(54)
						if ((this->overlapsAt((this->x - (int)8),(this->y + (int)1),::Registry_obj::level,null(),null()))){
						}
						else{
							HX_STACK_LINE(60)
							this->velocity->x = this->speed;
							HX_STACK_LINE(61)
							this->setFacing((int)16);
						}
					}
				}
			}
		}
	}
return null();
}


Void Goomba_obj::destroy( ){
{
		HX_STACK_PUSH("Goomba::destroy","Goomba.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_LINE(25)
		this->super::destroy();
	}
return null();
}



Goomba_obj::Goomba_obj()
{
}

void Goomba_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Goomba);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(start,"start");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Goomba_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(start,"start");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Goomba_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Goomba_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Goomba_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("start"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("speed"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Goomba_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Goomba_obj::__mClass,"__mClass");
};

Class Goomba_obj::__mClass;

void Goomba_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Goomba"), hx::TCanCast< Goomba_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Goomba_obj::__boot()
{
}

