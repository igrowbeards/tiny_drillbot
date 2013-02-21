#include <hxcpp.h>

#ifndef INCLUDED_Elevator
#include <Elevator.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
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

Void Elevator_obj::__construct(int X,int Y,int Width,int Height,hx::Null< int >  __o_Speed)
{
HX_STACK_PUSH("Elevator::new","Elevator.hx",7);
int Speed = __o_Speed.Default(10);
{
	HX_STACK_LINE(11)
	this->moveY = false;
	HX_STACK_LINE(10)
	this->moveX = false;
	HX_STACK_LINE(17)
	super::__construct((X * (int)8),(Y * (int)8),null());
	HX_STACK_LINE(18)
	this->loadGraphic(HX_CSTRING("assets/elevator.png"),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(20)
	this->startPoint = ::org::flixel::FlxPoint_obj::__new((X * (int)8),(Y * (int)8));
	HX_STACK_LINE(21)
	this->endPoint = ::org::flixel::FlxPoint_obj::__new((((X + Width)) * (int)8),(((Y + Height)) * (int)8));
	HX_STACK_LINE(23)
	if (((Width > (int)0))){
		HX_STACK_LINE(25)
		this->moveX = true;
		HX_STACK_LINE(26)
		this->velocity->x = Speed;
	}
	HX_STACK_LINE(29)
	if (((Height > (int)0))){
		HX_STACK_LINE(31)
		this->moveY = true;
		HX_STACK_LINE(32)
		this->velocity->y = Speed;
	}
	HX_STACK_LINE(35)
	this->immovable = true;
	HX_STACK_LINE(36)
	this->moves = true;
	HX_STACK_LINE(37)
	this->allowCollisions = (int)256;
}
;
	return null();
}

Elevator_obj::~Elevator_obj() { }

Dynamic Elevator_obj::__CreateEmpty() { return  new Elevator_obj; }
hx::ObjectPtr< Elevator_obj > Elevator_obj::__new(int X,int Y,int Width,int Height,hx::Null< int >  __o_Speed)
{  hx::ObjectPtr< Elevator_obj > result = new Elevator_obj();
	result->__construct(X,Y,Width,Height,__o_Speed);
	return result;}

Dynamic Elevator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Elevator_obj > result = new Elevator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Elevator_obj::update( ){
{
		HX_STACK_PUSH("Elevator::update","Elevator.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		if ((this->moveX)){
			HX_STACK_LINE(43)
			if (((this->x > this->endPoint->x))){
				HX_STACK_LINE(46)
				this->x = this->endPoint->x;
				HX_STACK_LINE(47)
				this->velocity->x = -(this->velocity->x);
			}
			else{
				HX_STACK_LINE(49)
				if (((this->x < this->startPoint->x))){
					HX_STACK_LINE(51)
					this->x = this->startPoint->x;
					HX_STACK_LINE(52)
					this->velocity->x = -(this->velocity->x);
				}
			}
		}
		HX_STACK_LINE(56)
		if ((this->moveY)){
			HX_STACK_LINE(57)
			if (((this->y > this->endPoint->y))){
				HX_STACK_LINE(60)
				this->y = this->endPoint->y;
				HX_STACK_LINE(61)
				this->velocity->y = -(this->velocity->y);
			}
			else{
				HX_STACK_LINE(63)
				if (((this->y < this->startPoint->y))){
					HX_STACK_LINE(65)
					this->y = this->startPoint->y;
					HX_STACK_LINE(66)
					this->velocity->y = -(this->velocity->y);
				}
			}
		}
	}
return null();
}



Elevator_obj::Elevator_obj()
{
}

void Elevator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Elevator);
	HX_MARK_MEMBER_NAME(endPoint,"endPoint");
	HX_MARK_MEMBER_NAME(startPoint,"startPoint");
	HX_MARK_MEMBER_NAME(moveY,"moveY");
	HX_MARK_MEMBER_NAME(moveX,"moveX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Elevator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endPoint,"endPoint");
	HX_VISIT_MEMBER_NAME(startPoint,"startPoint");
	HX_VISIT_MEMBER_NAME(moveY,"moveY");
	HX_VISIT_MEMBER_NAME(moveX,"moveX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Elevator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"moveY") ) { return moveY; }
		if (HX_FIELD_EQ(inName,"moveX") ) { return moveX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endPoint") ) { return endPoint; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startPoint") ) { return startPoint; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Elevator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"moveY") ) { moveY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveX") ) { moveX=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endPoint") ) { endPoint=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startPoint") ) { startPoint=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Elevator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("endPoint"));
	outFields->push(HX_CSTRING("startPoint"));
	outFields->push(HX_CSTRING("moveY"));
	outFields->push(HX_CSTRING("moveX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("endPoint"),
	HX_CSTRING("startPoint"),
	HX_CSTRING("moveY"),
	HX_CSTRING("moveX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Elevator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Elevator_obj::__mClass,"__mClass");
};

Class Elevator_obj::__mClass;

void Elevator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Elevator"), hx::TCanCast< Elevator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Elevator_obj::__boot()
{
}

