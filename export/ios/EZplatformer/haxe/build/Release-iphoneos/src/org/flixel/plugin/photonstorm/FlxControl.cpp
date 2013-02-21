#include <hxcpp.h>

#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_nme_ObjectHash
#include <nme/ObjectHash.h>
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
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControl
#include <org/flixel/plugin/photonstorm/FlxControl.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxControlHandler
#include <org/flixel/plugin/photonstorm/FlxControlHandler.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{

Void FlxControl_obj::__construct()
{
HX_STACK_PUSH("FlxControl::new","org/flixel/plugin/photonstorm/FlxControl.hx",33);
{
	HX_STACK_LINE(33)
	super::__construct();
}
;
	return null();
}

FlxControl_obj::~FlxControl_obj() { }

Dynamic FlxControl_obj::__CreateEmpty() { return  new FlxControl_obj; }
hx::ObjectPtr< FlxControl_obj > FlxControl_obj::__new()
{  hx::ObjectPtr< FlxControl_obj > result = new FlxControl_obj();
	result->__construct();
	return result;}

Dynamic FlxControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxControl_obj > result = new FlxControl_obj();
	result->__construct();
	return result;}

Void FlxControl_obj::destroy( ){
{
		HX_STACK_PUSH("FlxControl::destroy","org/flixel/plugin/photonstorm/FlxControl.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_LINE(177)
		::org::flixel::plugin::photonstorm::FlxControl_obj::clear();
	}
return null();
}


Void FlxControl_obj::draw( ){
{
		HX_STACK_PUSH("FlxControl::draw","org/flixel/plugin/photonstorm/FlxControl.hx",163);
		HX_STACK_THIS(this);
		HX_STACK_LINE(163)
		for(::cpp::FastIterator_obj< ::org::flixel::plugin::photonstorm::FlxControlHandler > *__it = ::cpp::CreateFastIterator< ::org::flixel::plugin::photonstorm::FlxControlHandler >(::org::flixel::plugin::photonstorm::FlxControl_obj::members->hashValues->iterator());  __it->hasNext(); ){
			::org::flixel::plugin::photonstorm::FlxControlHandler handler = __it->next();
			if (((handler->enabled == true))){
				HX_STACK_LINE(167)
				handler->update();
			}
;
		}
	}
return null();
}


::org::flixel::plugin::photonstorm::FlxControlHandler FlxControl_obj::player1;

::org::flixel::plugin::photonstorm::FlxControlHandler FlxControl_obj::player2;

::org::flixel::plugin::photonstorm::FlxControlHandler FlxControl_obj::player3;

::org::flixel::plugin::photonstorm::FlxControlHandler FlxControl_obj::player4;

::nme::ObjectHash FlxControl_obj::members;

::org::flixel::plugin::photonstorm::FlxControlHandler FlxControl_obj::create( ::org::flixel::FlxSprite source,int movementType,int stoppingType,hx::Null< int >  __o_player,hx::Null< bool >  __o_updateFacing,hx::Null< bool >  __o_enableArrowKeys){
int player = __o_player.Default(1);
bool updateFacing = __o_updateFacing.Default(false);
bool enableArrowKeys = __o_enableArrowKeys.Default(true);
	HX_STACK_PUSH("FlxControl::create","org/flixel/plugin/photonstorm/FlxControl.hx",51);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(movementType,"movementType");
	HX_STACK_ARG(stoppingType,"stoppingType");
	HX_STACK_ARG(player,"player");
	HX_STACK_ARG(updateFacing,"updateFacing");
	HX_STACK_ARG(enableArrowKeys,"enableArrowKeys");
{
		HX_STACK_LINE(52)
		::org::flixel::plugin::photonstorm::FlxControlHandler result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(54)
		if (((player == (int)1))){
			HX_STACK_LINE(56)
			::org::flixel::plugin::photonstorm::FlxControl_obj::player1 = ::org::flixel::plugin::photonstorm::FlxControlHandler_obj::__new(source,movementType,stoppingType,updateFacing,enableArrowKeys);
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::nme::ObjectHash _this = ::org::flixel::plugin::photonstorm::FlxControl_obj::members;		HX_STACK_VAR(_this,"_this");
				::org::flixel::plugin::photonstorm::FlxControlHandler key = ::org::flixel::plugin::photonstorm::FlxControl_obj::player1;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(57)
				int id = ::__hxcpp_obj_id(key);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(57)
				_this->hashKeys->set(id,key);
				HX_STACK_LINE(57)
				_this->hashValues->set(id,::org::flixel::plugin::photonstorm::FlxControl_obj::player1);
			}
			HX_STACK_LINE(58)
			result = ::org::flixel::plugin::photonstorm::FlxControl_obj::player1;
		}
		else{
			HX_STACK_LINE(60)
			if (((player == (int)2))){
				HX_STACK_LINE(62)
				::org::flixel::plugin::photonstorm::FlxControl_obj::player2 = ::org::flixel::plugin::photonstorm::FlxControlHandler_obj::__new(source,movementType,stoppingType,updateFacing,enableArrowKeys);
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					::nme::ObjectHash _this = ::org::flixel::plugin::photonstorm::FlxControl_obj::members;		HX_STACK_VAR(_this,"_this");
					::org::flixel::plugin::photonstorm::FlxControlHandler key = ::org::flixel::plugin::photonstorm::FlxControl_obj::player2;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(63)
					int id = ::__hxcpp_obj_id(key);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(63)
					_this->hashKeys->set(id,key);
					HX_STACK_LINE(63)
					_this->hashValues->set(id,::org::flixel::plugin::photonstorm::FlxControl_obj::player2);
				}
				HX_STACK_LINE(64)
				result = ::org::flixel::plugin::photonstorm::FlxControl_obj::player2;
			}
			else{
				HX_STACK_LINE(66)
				if (((player == (int)3))){
					HX_STACK_LINE(68)
					::org::flixel::plugin::photonstorm::FlxControl_obj::player3 = ::org::flixel::plugin::photonstorm::FlxControlHandler_obj::__new(source,movementType,stoppingType,updateFacing,enableArrowKeys);
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						::nme::ObjectHash _this = ::org::flixel::plugin::photonstorm::FlxControl_obj::members;		HX_STACK_VAR(_this,"_this");
						::org::flixel::plugin::photonstorm::FlxControlHandler key = ::org::flixel::plugin::photonstorm::FlxControl_obj::player3;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(69)
						int id = ::__hxcpp_obj_id(key);		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(69)
						_this->hashKeys->set(id,key);
						HX_STACK_LINE(69)
						_this->hashValues->set(id,::org::flixel::plugin::photonstorm::FlxControl_obj::player3);
					}
					HX_STACK_LINE(70)
					result = ::org::flixel::plugin::photonstorm::FlxControl_obj::player3;
				}
				else{
					HX_STACK_LINE(72)
					if (((player == (int)4))){
						HX_STACK_LINE(74)
						::org::flixel::plugin::photonstorm::FlxControl_obj::player4 = ::org::flixel::plugin::photonstorm::FlxControlHandler_obj::__new(source,movementType,stoppingType,updateFacing,enableArrowKeys);
						HX_STACK_LINE(75)
						{
							HX_STACK_LINE(75)
							::nme::ObjectHash _this = ::org::flixel::plugin::photonstorm::FlxControl_obj::members;		HX_STACK_VAR(_this,"_this");
							::org::flixel::plugin::photonstorm::FlxControlHandler key = ::org::flixel::plugin::photonstorm::FlxControl_obj::player4;		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(75)
							int id = ::__hxcpp_obj_id(key);		HX_STACK_VAR(id,"id");
							HX_STACK_LINE(75)
							_this->hashKeys->set(id,key);
							HX_STACK_LINE(75)
							_this->hashValues->set(id,::org::flixel::plugin::photonstorm::FlxControl_obj::player4);
						}
						HX_STACK_LINE(76)
						result = ::org::flixel::plugin::photonstorm::FlxControl_obj::player4;
					}
					else{
						HX_STACK_LINE(80)
						::org::flixel::plugin::photonstorm::FlxControlHandler newControlHandler = ::org::flixel::plugin::photonstorm::FlxControlHandler_obj::__new(source,movementType,stoppingType,updateFacing,enableArrowKeys);		HX_STACK_VAR(newControlHandler,"newControlHandler");
						HX_STACK_LINE(81)
						{
							HX_STACK_LINE(81)
							::nme::ObjectHash _this = ::org::flixel::plugin::photonstorm::FlxControl_obj::members;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(81)
							int id = ::__hxcpp_obj_id(newControlHandler);		HX_STACK_VAR(id,"id");
							HX_STACK_LINE(81)
							_this->hashKeys->set(id,newControlHandler);
							HX_STACK_LINE(81)
							_this->hashValues->set(id,newControlHandler);
						}
						HX_STACK_LINE(82)
						result = newControlHandler;
					}
				}
			}
		}
		HX_STACK_LINE(85)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxControl_obj,create,return )

bool FlxControl_obj::remove( ::org::flixel::plugin::photonstorm::FlxControlHandler source){
	HX_STACK_PUSH("FlxControl::remove","org/flixel/plugin/photonstorm/FlxControl.hx",95);
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(96)
	if ((::org::flixel::plugin::photonstorm::FlxControl_obj::members->hashValues->exists(::__hxcpp_obj_id(source)))){
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::nme::ObjectHash _this = ::org::flixel::plugin::photonstorm::FlxControl_obj::members;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(98)
			int id = ::__hxcpp_obj_id(source);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(98)
			_this->hashKeys->remove(id);
			HX_STACK_LINE(98)
			_this->hashValues->remove(id);
		}
		HX_STACK_LINE(99)
		return true;
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxControl_obj,remove,return )

Void FlxControl_obj::clear( ){
{
		HX_STACK_PUSH("FlxControl::clear","org/flixel/plugin/photonstorm/FlxControl.hx",110);
		HX_STACK_LINE(110)
		for(::cpp::FastIterator_obj< ::org::flixel::plugin::photonstorm::FlxControlHandler > *__it = ::cpp::CreateFastIterator< ::org::flixel::plugin::photonstorm::FlxControlHandler >(::org::flixel::plugin::photonstorm::FlxControl_obj::members->hashValues->iterator());  __it->hasNext(); ){
			::org::flixel::plugin::photonstorm::FlxControlHandler handler = __it->next();
			{
				HX_STACK_LINE(113)
				::nme::ObjectHash _this = ::org::flixel::plugin::photonstorm::FlxControl_obj::members;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(113)
				int id = ::__hxcpp_obj_id(handler);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(113)
				_this->hashKeys->remove(id);
				HX_STACK_LINE(113)
				_this->hashValues->remove(id);
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxControl_obj,clear,(void))

Void FlxControl_obj::start( ::org::flixel::plugin::photonstorm::FlxControlHandler source){
{
		HX_STACK_PUSH("FlxControl::start","org/flixel/plugin/photonstorm/FlxControl.hx",124);
		HX_STACK_ARG(source,"source");
		HX_STACK_LINE(124)
		if (((source != null()))){
			HX_STACK_LINE(126)
			::org::flixel::plugin::photonstorm::FlxControl_obj::members->hashValues->get(::__hxcpp_obj_id(source))->__FieldRef(HX_CSTRING("enabled")) = true;
		}
		else{
			HX_STACK_LINE(130)
			for(::cpp::FastIterator_obj< ::org::flixel::plugin::photonstorm::FlxControlHandler > *__it = ::cpp::CreateFastIterator< ::org::flixel::plugin::photonstorm::FlxControlHandler >(::org::flixel::plugin::photonstorm::FlxControl_obj::members->hashValues->iterator());  __it->hasNext(); ){
				::org::flixel::plugin::photonstorm::FlxControlHandler handler = __it->next();
				handler->enabled = true;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxControl_obj,start,(void))

Void FlxControl_obj::stop( ::org::flixel::plugin::photonstorm::FlxControlHandler source){
{
		HX_STACK_PUSH("FlxControl::stop","org/flixel/plugin/photonstorm/FlxControl.hx",145);
		HX_STACK_ARG(source,"source");
		HX_STACK_LINE(145)
		if (((source != null()))){
			HX_STACK_LINE(147)
			::org::flixel::plugin::photonstorm::FlxControl_obj::members->hashValues->get(::__hxcpp_obj_id(source))->__FieldRef(HX_CSTRING("enabled")) = false;
		}
		else{
			HX_STACK_LINE(151)
			for(::cpp::FastIterator_obj< ::org::flixel::plugin::photonstorm::FlxControlHandler > *__it = ::cpp::CreateFastIterator< ::org::flixel::plugin::photonstorm::FlxControlHandler >(::org::flixel::plugin::photonstorm::FlxControl_obj::members->hashValues->iterator());  __it->hasNext(); ){
				::org::flixel::plugin::photonstorm::FlxControlHandler handler = __it->next();
				handler->enabled = false;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxControl_obj,stop,(void))


FlxControl_obj::FlxControl_obj()
{
}

void FlxControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxControl);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxControl_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxControl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { return player1; }
		if (HX_FIELD_EQ(inName,"player2") ) { return player2; }
		if (HX_FIELD_EQ(inName,"player3") ) { return player3; }
		if (HX_FIELD_EQ(inName,"player4") ) { return player4; }
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxControl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { player1=inValue.Cast< ::org::flixel::plugin::photonstorm::FlxControlHandler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player2") ) { player2=inValue.Cast< ::org::flixel::plugin::photonstorm::FlxControlHandler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player3") ) { player3=inValue.Cast< ::org::flixel::plugin::photonstorm::FlxControlHandler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player4") ) { player4=inValue.Cast< ::org::flixel::plugin::photonstorm::FlxControlHandler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< ::nme::ObjectHash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxControl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("player1"),
	HX_CSTRING("player2"),
	HX_CSTRING("player3"),
	HX_CSTRING("player4"),
	HX_CSTRING("members"),
	HX_CSTRING("create"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("start"),
	HX_CSTRING("stop"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxControl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxControl_obj::player1,"player1");
	HX_MARK_MEMBER_NAME(FlxControl_obj::player2,"player2");
	HX_MARK_MEMBER_NAME(FlxControl_obj::player3,"player3");
	HX_MARK_MEMBER_NAME(FlxControl_obj::player4,"player4");
	HX_MARK_MEMBER_NAME(FlxControl_obj::members,"members");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxControl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxControl_obj::player1,"player1");
	HX_VISIT_MEMBER_NAME(FlxControl_obj::player2,"player2");
	HX_VISIT_MEMBER_NAME(FlxControl_obj::player3,"player3");
	HX_VISIT_MEMBER_NAME(FlxControl_obj::player4,"player4");
	HX_VISIT_MEMBER_NAME(FlxControl_obj::members,"members");
};

Class FlxControl_obj::__mClass;

void FlxControl_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.photonstorm.FlxControl"), hx::TCanCast< FlxControl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxControl_obj::__boot()
{
	members= ::nme::ObjectHash_obj::__new();
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm
