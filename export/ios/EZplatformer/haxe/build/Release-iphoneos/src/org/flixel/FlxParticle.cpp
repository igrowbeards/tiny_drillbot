#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxParticle
#include <org/flixel/FlxParticle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
namespace org{
namespace flixel{

Void FlxParticle_obj::__construct()
{
HX_STACK_PUSH("FlxParticle::new","org/flixel/FlxParticle.hx",33);
{
	HX_STACK_LINE(34)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(35)
	this->lifespan = (int)0;
	HX_STACK_LINE(36)
	this->friction = (int)500;
}
;
	return null();
}

FlxParticle_obj::~FlxParticle_obj() { }

Dynamic FlxParticle_obj::__CreateEmpty() { return  new FlxParticle_obj; }
hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new()
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

Dynamic FlxParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

Void FlxParticle_obj::onEmit( ){
{
		HX_STACK_PUSH("FlxParticle::onEmit","org/flixel/FlxParticle.hx",99);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))

Void FlxParticle_obj::update( ){
{
		HX_STACK_PUSH("FlxParticle::update","org/flixel/FlxParticle.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		if (((this->lifespan <= (int)0))){
			HX_STACK_LINE(47)
			return null();
		}
		HX_STACK_LINE(50)
		hx::SubEq(this->lifespan,::org::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(51)
		if (((this->lifespan <= (int)0))){
			HX_STACK_LINE(52)
			this->kill();
		}
		HX_STACK_LINE(57)
		if (((this->touching != (int)0))){
			HX_STACK_LINE(58)
			if (((this->angularVelocity != (int)0))){
				HX_STACK_LINE(60)
				this->angularVelocity = -(this->angularVelocity);
			}
		}
		HX_STACK_LINE(64)
		if (((this->acceleration->y > (int)0))){
			HX_STACK_LINE(65)
			if (((((int(this->touching) & int((int)4096))) != (int)0))){
				HX_STACK_LINE(69)
				this->drag->x = this->friction;
				HX_STACK_LINE(72)
				if (((((int(this->wasTouching) & int((int)4096))) == (int)0))){
					HX_STACK_LINE(73)
					if (((this->velocity->y < (-(this->elasticity) * (int)10)))){
						HX_STACK_LINE(75)
						if (((this->angularVelocity != (int)0))){
							HX_STACK_LINE(77)
							hx::MultEq(this->angularVelocity,-(this->elasticity));
						}
					}
					else{
						HX_STACK_LINE(83)
						this->velocity->y = (int)0;
						HX_STACK_LINE(84)
						this->angularVelocity = (int)0;
					}
				}
			}
			else{
				HX_STACK_LINE(89)
				this->drag->x = (int)0;
			}
		}
	}
return null();
}



FlxParticle_obj::FlxParticle_obj()
{
}

void FlxParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxParticle);
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxParticle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxParticle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onEmit") ) { return onEmit_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("lifespan"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onEmit"),
	HX_CSTRING("update"),
	HX_CSTRING("friction"),
	HX_CSTRING("lifespan"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxParticle"), hx::TCanCast< FlxParticle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxParticle_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
