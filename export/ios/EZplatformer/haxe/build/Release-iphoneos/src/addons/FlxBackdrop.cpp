#include <hxcpp.h>

#ifndef INCLUDED_addons_FlxBackdrop
#include <addons/FlxBackdrop.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace addons{

Void FlxBackdrop_obj::__construct(Dynamic graphic,hx::Null< Float >  __o_scrollX,hx::Null< Float >  __o_scrollY,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY)
{
HX_STACK_PUSH("FlxBackdrop::new","addons/FlxBackdrop.hx",17);
Float scrollX = __o_scrollX.Default(1);
Float scrollY = __o_scrollY.Default(1);
bool repeatX = __o_repeatX.Default(true);
bool repeatY = __o_repeatY.Default(true);
{
	HX_STACK_LINE(28)
	this->_numTiles = (int)0;
	HX_STACK_LINE(43)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(45)
	::native::display::BitmapData data = ::org::flixel::FlxG_obj::addBitmap(graphic,null(),null(),null(),null(),null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(46)
	int w = data->get_width();		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(47)
	int h = data->get_height();		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(48)
	if ((repeatX)){
		HX_STACK_LINE(48)
		hx::AddEq(w,::org::flixel::FlxG_obj::width);
	}
	HX_STACK_LINE(49)
	if ((repeatY)){
		HX_STACK_LINE(49)
		hx::AddEq(h,::org::flixel::FlxG_obj::height);
	}
	HX_STACK_LINE(54)
	this->_ppoint = ::native::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(56)
	this->_scrollW = data->get_width();
	HX_STACK_LINE(57)
	this->_scrollH = data->get_height();
	HX_STACK_LINE(58)
	this->_repeatX = repeatX;
	HX_STACK_LINE(59)
	this->_repeatY = repeatY;
	HX_STACK_LINE(62)
	this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
	HX_STACK_LINE(63)
	this->_tileInfo = Array_obj< Float >::__new();
	HX_STACK_LINE(64)
	this->updateAtlasInfo(null());
	HX_STACK_LINE(65)
	this->_numTiles = (int)0;
	HX_STACK_LINE(68)
	while(((this->_ppoint->y < (h + data->get_height())))){
		HX_STACK_LINE(70)
		while(((this->_ppoint->x < (w + data->get_width())))){
			HX_STACK_LINE(75)
			this->_tileInfo->push(this->_ppoint->x);
			HX_STACK_LINE(76)
			this->_tileInfo->push(this->_ppoint->y);
			HX_STACK_LINE(77)
			(this->_numTiles)++;
			HX_STACK_LINE(79)
			hx::AddEq(this->_ppoint->x,data->get_width());
		}
		HX_STACK_LINE(81)
		this->_ppoint->x = (int)0;
		HX_STACK_LINE(82)
		hx::AddEq(this->_ppoint->y,data->get_height());
	}
	HX_STACK_LINE(85)
	this->scrollFactor->x = scrollX;
	HX_STACK_LINE(86)
	this->scrollFactor->y = scrollY;
}
;
	return null();
}

FlxBackdrop_obj::~FlxBackdrop_obj() { }

Dynamic FlxBackdrop_obj::__CreateEmpty() { return  new FlxBackdrop_obj; }
hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__new(Dynamic graphic,hx::Null< Float >  __o_scrollX,hx::Null< Float >  __o_scrollY,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(graphic,__o_scrollX,__o_scrollY,__o_repeatX,__o_repeatY);
	return result;}

Dynamic FlxBackdrop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxBackdrop_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxBackdrop::updateFrameData","addons/FlxBackdrop.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_LINE(207)
		if (((this->_node != null()))){
			HX_STACK_LINE(210)
			this->_tileID = this->_node->addTileRect(::native::geom::Rectangle_obj::__new((int)0,(int)0,this->_scrollW,this->_scrollH),::native::geom::Point_obj::__new(null(),null()));
		}
	}
return null();
}


Void FlxBackdrop_obj::draw( ){
{
		HX_STACK_PUSH("FlxBackdrop::draw","addons/FlxBackdrop.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_LINE(106)
		if (((this->cameras == null()))){
			HX_STACK_LINE(107)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(110)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(111)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = l;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			while(((_g1 < _g))){
				HX_STACK_LINE(113)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(115)
				camera = this->cameras->__get(i);
				HX_STACK_LINE(117)
				if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
					HX_STACK_LINE(118)
					continue;
				}
				HX_STACK_LINE(123)
				if ((this->_repeatX)){
					HX_STACK_LINE(125)
					this->_ppoint->x = hx::Mod(((this->x - (camera->scroll->x * this->scrollFactor->x))),this->_scrollW);
					HX_STACK_LINE(126)
					if (((this->_ppoint->x > (int)0))){
						HX_STACK_LINE(126)
						hx::SubEq(this->_ppoint->x,this->_scrollW);
					}
				}
				else{
					HX_STACK_LINE(129)
					this->_ppoint->x = (this->x - (camera->scroll->x * this->scrollFactor->x));
				}
				HX_STACK_LINE(134)
				if ((this->_repeatY)){
					HX_STACK_LINE(136)
					this->_ppoint->y = hx::Mod(((this->y - (camera->scroll->y * this->scrollFactor->y))),this->_scrollH);
					HX_STACK_LINE(137)
					if (((this->_ppoint->y > (int)0))){
						HX_STACK_LINE(137)
						hx::SubEq(this->_ppoint->y,this->_scrollH);
					}
				}
				else{
					HX_STACK_LINE(140)
					this->_ppoint->y = (this->y - (camera->scroll->y * this->scrollFactor->y));
				}
				HX_STACK_LINE(148)
				if (((this->_atlas == null()))){
					HX_STACK_LINE(149)
					return null();
				}
				HX_STACK_LINE(153)
				Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
				HX_STACK_LINE(154)
				int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
				HX_STACK_LINE(155)
				bool isColoredCamera = (camera->color < (int)16777215);		HX_STACK_VAR(isColoredCamera,"isColoredCamera");
				struct _Function_3_1{
					inline static ::org::flixel::system::layer::DrawStackItem Block( ::addons::FlxBackdrop_obj *__this,::org::flixel::FlxCamera &camera,bool &isColoredCamera){
						HX_STACK_PUSH("*::closure","addons/FlxBackdrop.hx",156);
						{
							HX_STACK_LINE(156)
							::org::flixel::system::layer::Atlas ObjAtlas = __this->_atlas;		HX_STACK_VAR(ObjAtlas,"ObjAtlas");
							HX_STACK_LINE(156)
							::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
							HX_STACK_LINE(156)
							if (((camera->_currentStackItem->initialized == false))){
								HX_STACK_LINE(156)
								camera->_headOfDrawStack = camera->_currentStackItem;
								HX_STACK_LINE(156)
								camera->_currentStackItem->atlas = ObjAtlas;
								HX_STACK_LINE(156)
								camera->_currentStackItem->colored = isColoredCamera;
								HX_STACK_LINE(156)
								camera->_currentStackItem->blending = (int)0;
								HX_STACK_LINE(156)
								itemToReturn = camera->_currentStackItem;
							}
							else{
								HX_STACK_LINE(156)
								if (((bool((bool((camera->_currentStackItem->atlas == ObjAtlas)) && bool((camera->_currentStackItem->colored == isColoredCamera)))) && bool((camera->_currentStackItem->blending == (int)0))))){
									HX_STACK_LINE(156)
									itemToReturn = camera->_currentStackItem;
								}
							}
							HX_STACK_LINE(156)
							if (((itemToReturn == null()))){
								HX_STACK_LINE(156)
								::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
								HX_STACK_LINE(156)
								if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
									HX_STACK_LINE(156)
									newItem = ::org::flixel::FlxCamera_obj::_storageHead;
									HX_STACK_LINE(156)
									::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
									HX_STACK_LINE(156)
									newItem->next = null();
									HX_STACK_LINE(156)
									::org::flixel::FlxCamera_obj::_storageHead = newHead;
								}
								else{
									HX_STACK_LINE(156)
									newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
								}
								HX_STACK_LINE(156)
								newItem->atlas = ObjAtlas;
								HX_STACK_LINE(156)
								newItem->colored = isColoredCamera;
								HX_STACK_LINE(156)
								newItem->blending = (int)0;
								HX_STACK_LINE(156)
								camera->_currentStackItem->next = newItem;
								HX_STACK_LINE(156)
								camera->_currentStackItem = newItem;
								HX_STACK_LINE(156)
								itemToReturn = camera->_currentStackItem;
							}
							HX_STACK_LINE(156)
							itemToReturn->initialized = true;
							HX_STACK_LINE(156)
							return itemToReturn;
						}
						return null();
					}
				};
				HX_STACK_LINE(156)
				::org::flixel::system::layer::DrawStackItem drawItem = _Function_3_1::Block(this,camera,isColoredCamera);		HX_STACK_VAR(drawItem,"drawItem");
				HX_STACK_LINE(158)
				currDrawData = drawItem->drawData;
				HX_STACK_LINE(159)
				currIndex = drawItem->position;
				HX_STACK_LINE(161)
				int currPosInArr;		HX_STACK_VAR(currPosInArr,"currPosInArr");
				HX_STACK_LINE(162)
				Float currTileX;		HX_STACK_VAR(currTileX,"currTileX");
				HX_STACK_LINE(163)
				Float currTileY;		HX_STACK_VAR(currTileY,"currTileY");
				HX_STACK_LINE(165)
				Float redMult = (int)1;		HX_STACK_VAR(redMult,"redMult");
				HX_STACK_LINE(166)
				Float greenMult = (int)1;		HX_STACK_VAR(greenMult,"greenMult");
				HX_STACK_LINE(167)
				Float blueMult = (int)1;		HX_STACK_VAR(blueMult,"blueMult");
				HX_STACK_LINE(169)
				if ((isColoredCamera)){
					HX_STACK_LINE(171)
					redMult = camera->red;
					HX_STACK_LINE(172)
					greenMult = camera->green;
					HX_STACK_LINE(173)
					blueMult = camera->blue;
				}
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->_numTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(176)
					while(((_g3 < _g2))){
						HX_STACK_LINE(176)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(178)
						currPosInArr = (j * (int)2);
						HX_STACK_LINE(179)
						currTileX = this->_tileInfo->__get(currPosInArr);
						HX_STACK_LINE(180)
						currTileY = this->_tileInfo->__get((currPosInArr + (int)1));
						HX_STACK_LINE(182)
						currDrawData[(currIndex)++] = (this->_ppoint->x + currTileX);
						HX_STACK_LINE(183)
						currDrawData[(currIndex)++] = (this->_ppoint->y + currTileY);
						HX_STACK_LINE(184)
						currDrawData[(currIndex)++] = this->_tileID;
						HX_STACK_LINE(186)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(187)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(188)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(189)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(191)
						if ((isColoredCamera)){
							HX_STACK_LINE(193)
							currDrawData[(currIndex)++] = redMult;
							HX_STACK_LINE(194)
							currDrawData[(currIndex)++] = greenMult;
							HX_STACK_LINE(195)
							currDrawData[(currIndex)++] = blueMult;
						}
						HX_STACK_LINE(198)
						currDrawData[(currIndex)++] = 1.0;
					}
				}
				HX_STACK_LINE(201)
				drawItem->position = currIndex;
			}
		}
	}
return null();
}


Void FlxBackdrop_obj::destroy( ){
{
		HX_STACK_PUSH("FlxBackdrop::destroy","addons/FlxBackdrop.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		this->_tileInfo = null();
		HX_STACK_LINE(100)
		this->_ppoint = null();
		HX_STACK_LINE(101)
		this->super::destroy();
	}
return null();
}



FlxBackdrop_obj::FlxBackdrop_obj()
{
}

void FlxBackdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBackdrop);
	HX_MARK_MEMBER_NAME(_numTiles,"_numTiles");
	HX_MARK_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_MARK_MEMBER_NAME(_tileID,"_tileID");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_scrollH,"_scrollH");
	HX_MARK_MEMBER_NAME(_scrollW,"_scrollW");
	HX_MARK_MEMBER_NAME(_ppoint,"_ppoint");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBackdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_numTiles,"_numTiles");
	HX_VISIT_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_VISIT_MEMBER_NAME(_tileID,"_tileID");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_scrollH,"_scrollH");
	HX_VISIT_MEMBER_NAME(_scrollW,"_scrollW");
	HX_VISIT_MEMBER_NAME(_ppoint,"_ppoint");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBackdrop_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileID") ) { return _tileID; }
		if (HX_FIELD_EQ(inName,"_ppoint") ) { return _ppoint; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return _repeatY; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return _repeatX; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { return _scrollH; }
		if (HX_FIELD_EQ(inName,"_scrollW") ) { return _scrollW; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_numTiles") ) { return _numTiles; }
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { return _tileInfo; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBackdrop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tileID") ) { _tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ppoint") ) { _ppoint=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { _scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollW") ) { _scrollW=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_numTiles") ) { _numTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { _tileInfo=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_numTiles"));
	outFields->push(HX_CSTRING("_tileInfo"));
	outFields->push(HX_CSTRING("_tileID"));
	outFields->push(HX_CSTRING("_repeatY"));
	outFields->push(HX_CSTRING("_repeatX"));
	outFields->push(HX_CSTRING("_scrollH"));
	outFields->push(HX_CSTRING("_scrollW"));
	outFields->push(HX_CSTRING("_ppoint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("draw"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_numTiles"),
	HX_CSTRING("_tileInfo"),
	HX_CSTRING("_tileID"),
	HX_CSTRING("_repeatY"),
	HX_CSTRING("_repeatX"),
	HX_CSTRING("_scrollH"),
	HX_CSTRING("_scrollW"),
	HX_CSTRING("_ppoint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

Class FlxBackdrop_obj::__mClass;

void FlxBackdrop_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("addons.FlxBackdrop"), hx::TCanCast< FlxBackdrop_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxBackdrop_obj::__boot()
{
}

} // end namespace addons
