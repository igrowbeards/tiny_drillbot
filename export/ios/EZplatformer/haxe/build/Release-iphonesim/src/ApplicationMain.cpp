#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Void ApplicationMain_obj::main( ){
{
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",5);
		HX_STACK_LINE(6)
		::nme::Lib_obj::setPackage(HX_CSTRING("Zaphod"),HX_CSTRING("EZplatformer"),HX_CSTRING("com.example.myapp"),HX_CSTRING("0.0.1"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		bool run(int orientation){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",10);
			HX_STACK_ARG(orientation,"orientation");
			{
				HX_STACK_LINE(12)
				if (((bool((orientation == ::native::display::Stage_obj::OrientationLandscapeLeft)) || bool((orientation == ::native::display::Stage_obj::OrientationLandscapeRight))))){
					HX_STACK_LINE(13)
					return true;
				}
				HX_STACK_LINE(16)
				return false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(9)
		::native::display::Stage_obj::shouldRotateInterface =  Dynamic(new _Function_1_1());

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_2","ApplicationMain.hx",21);
			{
				HX_STACK_LINE(22)
				{
				}
				HX_STACK_LINE(29)
				::ApplicationMain_obj::initialize();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(20)
		::nme::Lib_obj::create( Dynamic(new _Function_1_2()),(int)640,(int)480,(int)30,(int)16777215,(int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int(::nme::Lib_obj::RESIZABLE))) | int((int)0))) | int((int)0)),HX_CSTRING("EZplatformer"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::initialize( ){
{
		HX_STACK_PUSH("ApplicationMain::initialize","ApplicationMain.hx",49);
		HX_STACK_LINE(52)
		bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			while(((_g < _g1->length))){
				HX_STACK_LINE(54)
				::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
				HX_STACK_LINE(54)
				++(_g);
				HX_STACK_LINE(56)
				if (((methodName == HX_CSTRING("main")))){
					HX_STACK_LINE(58)
					hasMain = true;
					HX_STACK_LINE(59)
					break;
				}
			}
		}
		HX_STACK_LINE(63)
		if ((hasMain)){
			HX_STACK_LINE(64)
			::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(68)
			::nme::Lib_obj::get_current()->addChild(hx::TCast< native::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::Main >(),Dynamic( Array_obj<Dynamic>::__new()))));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,initialize,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",75);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(77)
	if (((inName == HX_CSTRING("assets/backdrop.png")))){
		HX_STACK_LINE(78)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/backdrop.png"),null());
	}
	HX_STACK_LINE(84)
	if (((inName == HX_CSTRING("assets/bullet.png")))){
		HX_STACK_LINE(85)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/bullet.png"),null());
	}
	HX_STACK_LINE(91)
	if (((inName == HX_CSTRING("assets/data/autotiles.png")))){
		HX_STACK_LINE(92)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles.png"),null());
	}
	HX_STACK_LINE(98)
	if (((inName == HX_CSTRING("assets/data/autotiles_alt.png")))){
		HX_STACK_LINE(99)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles_alt.png"),null());
	}
	HX_STACK_LINE(105)
	if (((inName == HX_CSTRING("assets/data/base.png")))){
		HX_STACK_LINE(106)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/base.png"),null());
	}
	HX_STACK_LINE(112)
	if (((inName == HX_CSTRING("assets/data/beep.mp3")))){
		HX_STACK_LINE(113)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/data/beep.mp3"));
	}
	HX_STACK_LINE(119)
	if (((inName == HX_CSTRING("assets/data/beep.wav")))){
		HX_STACK_LINE(120)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/data/beep.wav"));
	}
	HX_STACK_LINE(126)
	if (((inName == HX_CSTRING("assets/data/button.png")))){
		HX_STACK_LINE(127)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button.png"),null());
	}
	HX_STACK_LINE(133)
	if (((inName == HX_CSTRING("assets/data/button_a.png")))){
		HX_STACK_LINE(134)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_a.png"),null());
	}
	HX_STACK_LINE(140)
	if (((inName == HX_CSTRING("assets/data/button_b.png")))){
		HX_STACK_LINE(141)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_b.png"),null());
	}
	HX_STACK_LINE(147)
	if (((inName == HX_CSTRING("assets/data/button_c.png")))){
		HX_STACK_LINE(148)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_c.png"),null());
	}
	HX_STACK_LINE(154)
	if (((inName == HX_CSTRING("assets/data/button_down.png")))){
		HX_STACK_LINE(155)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_down.png"),null());
	}
	HX_STACK_LINE(161)
	if (((inName == HX_CSTRING("assets/data/button_left.png")))){
		HX_STACK_LINE(162)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_left.png"),null());
	}
	HX_STACK_LINE(168)
	if (((inName == HX_CSTRING("assets/data/button_right.png")))){
		HX_STACK_LINE(169)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_right.png"),null());
	}
	HX_STACK_LINE(175)
	if (((inName == HX_CSTRING("assets/data/button_up.png")))){
		HX_STACK_LINE(176)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_up.png"),null());
	}
	HX_STACK_LINE(182)
	if (((inName == HX_CSTRING("assets/data/button_x.png")))){
		HX_STACK_LINE(183)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_x.png"),null());
	}
	HX_STACK_LINE(189)
	if (((inName == HX_CSTRING("assets/data/button_y.png")))){
		HX_STACK_LINE(190)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button_y.png"),null());
	}
	HX_STACK_LINE(196)
	if (((inName == HX_CSTRING("assets/data/courier.ttf")))){
		HX_STACK_LINE(197)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/courier.ttf"));
	}
	HX_STACK_LINE(203)
	if (((inName == HX_CSTRING("assets/data/cursor.png")))){
		HX_STACK_LINE(204)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/cursor.png"),null());
	}
	HX_STACK_LINE(210)
	if (((inName == HX_CSTRING("assets/data/default.png")))){
		HX_STACK_LINE(211)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/default.png"),null());
	}
	HX_STACK_LINE(217)
	if (((inName == HX_CSTRING("assets/data/fontData10pt.png")))){
		HX_STACK_LINE(218)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData10pt.png"),null());
	}
	HX_STACK_LINE(224)
	if (((inName == HX_CSTRING("assets/data/fontData11pt.png")))){
		HX_STACK_LINE(225)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData11pt.png"),null());
	}
	HX_STACK_LINE(231)
	if (((inName == HX_CSTRING("assets/data/handle.png")))){
		HX_STACK_LINE(232)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/handle.png"),null());
	}
	HX_STACK_LINE(238)
	if (((inName == HX_CSTRING("assets/data/logo.png")))){
		HX_STACK_LINE(239)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo.png"),null());
	}
	HX_STACK_LINE(245)
	if (((inName == HX_CSTRING("assets/data/logo_corners.png")))){
		HX_STACK_LINE(246)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_corners.png"),null());
	}
	HX_STACK_LINE(252)
	if (((inName == HX_CSTRING("assets/data/logo_light.png")))){
		HX_STACK_LINE(253)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_light.png"),null());
	}
	HX_STACK_LINE(259)
	if (((inName == HX_CSTRING("assets/data/nokiafc22.ttf")))){
		HX_STACK_LINE(260)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/nokiafc22.ttf"));
	}
	HX_STACK_LINE(266)
	if (((inName == HX_CSTRING("assets/data/stick.png")))){
		HX_STACK_LINE(267)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/stick.png"),null());
	}
	HX_STACK_LINE(273)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(274)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(280)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(281)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(287)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(288)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(294)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(295)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(301)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(302)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(308)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(309)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(315)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(316)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(322)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(323)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(329)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(330)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(336)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(337)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(343)
	if (((inName == HX_CSTRING("assets/driller.png")))){
		HX_STACK_LINE(344)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/driller.png"),null());
	}
	HX_STACK_LINE(350)
	if (((inName == HX_CSTRING("assets/elevator.png")))){
		HX_STACK_LINE(351)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/elevator.png"),null());
	}
	HX_STACK_LINE(357)
	if (((inName == HX_CSTRING("assets/exit_appear.wav")))){
		HX_STACK_LINE(358)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/exit_appear.wav"));
	}
	HX_STACK_LINE(364)
	if (((inName == HX_CSTRING("assets/fuel.png")))){
		HX_STACK_LINE(365)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/fuel.png"),null());
	}
	HX_STACK_LINE(371)
	if (((inName == HX_CSTRING("assets/fuel_pickup.wav")))){
		HX_STACK_LINE(372)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/fuel_pickup.wav"));
	}
	HX_STACK_LINE(378)
	if (((inName == HX_CSTRING("assets/fuel_tiles.png")))){
		HX_STACK_LINE(379)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/fuel_tiles.png"),null());
	}
	HX_STACK_LINE(385)
	if (((inName == HX_CSTRING("assets/goomba.png")))){
		HX_STACK_LINE(386)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/goomba.png"),null());
	}
	HX_STACK_LINE(392)
	if (((inName == HX_CSTRING("assets/goomba_tiles.png")))){
		HX_STACK_LINE(393)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/goomba_tiles.png"),null());
	}
	HX_STACK_LINE(399)
	if (((inName == HX_CSTRING("assets/HaxeFlixel.svg")))){
		HX_STACK_LINE(400)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/HaxeFlixel.svg"));
	}
	HX_STACK_LINE(406)
	if (((inName == HX_CSTRING("assets/hurt.wav")))){
		HX_STACK_LINE(407)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/hurt.wav"));
	}
	HX_STACK_LINE(413)
	if (((inName == HX_CSTRING("assets/lava.png")))){
		HX_STACK_LINE(414)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/lava.png"),null());
	}
	HX_STACK_LINE(420)
	if (((inName == HX_CSTRING("assets/level1.dam")))){
		HX_STACK_LINE(421)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/level1.dam"));
	}
	HX_STACK_LINE(427)
	if (((inName == HX_CSTRING("assets/level1.dam.bak")))){
		HX_STACK_LINE(428)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/level1.dam.bak"));
	}
	HX_STACK_LINE(434)
	if (((inName == HX_CSTRING("assets/level1.txt")))){
		HX_STACK_LINE(435)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/level1.txt"));
	}
	HX_STACK_LINE(441)
	if (((inName == HX_CSTRING("assets/level1_tileset.tmx")))){
		HX_STACK_LINE(442)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/level1_tileset.tmx"));
	}
	HX_STACK_LINE(448)
	if (((inName == HX_CSTRING("assets/mapCSV_Group1_Map1.csv")))){
		HX_STACK_LINE(449)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map1.csv"));
	}
	HX_STACK_LINE(455)
	if (((inName == HX_CSTRING("assets/mapCSV_Group1_Map2.csv")))){
		HX_STACK_LINE(456)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map2.csv"));
	}
	HX_STACK_LINE(462)
	if (((inName == HX_CSTRING("assets/mapCSV_Group1_Map3.csv")))){
		HX_STACK_LINE(463)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map3.csv"));
	}
	HX_STACK_LINE(469)
	if (((inName == HX_CSTRING("assets/mapCSV_Group1_Map4.csv")))){
		HX_STACK_LINE(470)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map4.csv"));
	}
	HX_STACK_LINE(476)
	if (((inName == HX_CSTRING("assets/mapCSV_Group1_Map5.csv")))){
		HX_STACK_LINE(477)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map5.csv"));
	}
	HX_STACK_LINE(483)
	if (((inName == HX_CSTRING("assets/mapCSV_Group1_Map6.csv")))){
		HX_STACK_LINE(484)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Group1_Map6.csv"));
	}
	HX_STACK_LINE(490)
	if (((inName == HX_CSTRING("assets/mapCSV_Level1_Map.csv")))){
		HX_STACK_LINE(491)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Level1_Map.csv"));
	}
	HX_STACK_LINE(497)
	if (((inName == HX_CSTRING("assets/mapCSV_Level1_Sky.csv")))){
		HX_STACK_LINE(498)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Level1_Sky.csv"));
	}
	HX_STACK_LINE(504)
	if (((inName == HX_CSTRING("assets/mapCSV_Level1_Stars.csv")))){
		HX_STACK_LINE(505)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/mapCSV_Level1_Stars.csv"));
	}
	HX_STACK_LINE(511)
	if (((inName == HX_CSTRING("assets/rock_tiles.png")))){
		HX_STACK_LINE(512)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/rock_tiles.png"),null());
	}
	HX_STACK_LINE(518)
	if (((inName == HX_CSTRING("assets/spike.png")))){
		HX_STACK_LINE(519)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/spike.png"),null());
	}
	HX_STACK_LINE(525)
	if (((inName == HX_CSTRING("assets/spikes.png")))){
		HX_STACK_LINE(526)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/spikes.png"),null());
	}
	HX_STACK_LINE(532)
	if (((inName == HX_CSTRING("assets/spring.png")))){
		HX_STACK_LINE(533)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/spring.png"),null());
	}
	HX_STACK_LINE(539)
	if (((inName == HX_CSTRING("assets/spring.wav")))){
		HX_STACK_LINE(540)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/spring.wav"));
	}
	HX_STACK_LINE(546)
	if (((inName == HX_CSTRING("assets/spring_tile.png")))){
		HX_STACK_LINE(547)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/spring_tile.png"),null());
	}
	HX_STACK_LINE(553)
	if (((inName == HX_CSTRING("assets/springboard.png")))){
		HX_STACK_LINE(554)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/springboard.png"),null());
	}
	HX_STACK_LINE(560)
	if (((inName == HX_CSTRING("assets/stomp.wav")))){
		HX_STACK_LINE(561)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/stomp.wav"));
	}
	HX_STACK_LINE(567)
	if (((inName == HX_CSTRING("assets/tiles.png")))){
		HX_STACK_LINE(568)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/tiles.png"),null());
	}
	HX_STACK_LINE(574)
	if (((inName == HX_CSTRING("assets/tiles.png.bak")))){
		HX_STACK_LINE(575)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/tiles.png.bak"));
	}
	HX_STACK_LINE(581)
	if (((inName == HX_CSTRING("assets/work/tiles.psd")))){
		HX_STACK_LINE(582)
		return ::nme::installer::Assets_obj::getBytes(HX_CSTRING("assets/work/tiles.psd"));
	}
	HX_STACK_LINE(588)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

void ApplicationMain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMain_obj::__boot()
{
}

