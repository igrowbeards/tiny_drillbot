#ifndef INCLUDED_addons_FlxBackdrop
#define INCLUDED_addons_FlxBackdrop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxObject.h>
HX_DECLARE_CLASS1(addons,FlxBackdrop)
HX_DECLARE_CLASS2(native,geom,Point)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
namespace addons{


class FlxBackdrop_obj : public ::org::flixel::FlxObject_obj{
	public:
		typedef ::org::flixel::FlxObject_obj super;
		typedef FlxBackdrop_obj OBJ_;
		FlxBackdrop_obj();
		Void __construct(Dynamic graphic,hx::Null< Float >  __o_scrollX,hx::Null< Float >  __o_scrollY,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY);

	public:
		static hx::ObjectPtr< FlxBackdrop_obj > __new(Dynamic graphic,hx::Null< Float >  __o_scrollX,hx::Null< Float >  __o_scrollY,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxBackdrop_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxBackdrop"); }

		virtual Void updateFrameData( );

		virtual Void draw( );

		virtual Void destroy( );

		int _numTiles; /* REM */ 
		Array< Float > _tileInfo; /* REM */ 
		int _tileID; /* REM */ 
		bool _repeatY; /* REM */ 
		bool _repeatX; /* REM */ 
		int _scrollH; /* REM */ 
		int _scrollW; /* REM */ 
		::native::geom::Point _ppoint; /* REM */ 
};

} // end namespace addons

#endif /* INCLUDED_addons_FlxBackdrop */ 
