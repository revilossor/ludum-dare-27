#ifndef INCLUDED_org_flixel_addons_FlxTilemapExt
#define INCLUDED_org_flixel_addons_FlxTilemapExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxTilemap.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxTilemap)
HX_DECLARE_CLASS3(org,flixel,addons,FlxTilemapExt)
HX_DECLARE_CLASS3(org,flixel,system,FlxTile)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{
namespace addons{


class HXCPP_CLASS_ATTRIBUTES  FlxTilemapExt_obj : public ::org::flixel::FlxTilemap_obj{
	public:
		typedef ::org::flixel::FlxTilemap_obj super;
		typedef FlxTilemapExt_obj OBJ_;
		FlxTilemapExt_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTilemapExt_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTilemapExt_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTilemapExt"); }

		virtual bool checkArrays( int tileIndex);
		Dynamic checkArrays_dyn();

		virtual Void setSlopeProperties( );
		Dynamic setSlopeProperties_dyn();

		virtual Void setSlopes( Array< int > leftFloorSlopes,Array< int > rightFloorSlopes,Array< int > leftCeilSlopes,Array< int > rightCeilSlopes);
		Dynamic setSlopes_dyn();

		virtual Void setClouds( Array< int > clouds);
		Dynamic setClouds_dyn();

		virtual Void solveCollisionSlopeCeilRight( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj);
		Dynamic solveCollisionSlopeCeilRight_dyn();

		virtual Void solveCollisionSlopeCeilLeft( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj);
		Dynamic solveCollisionSlopeCeilLeft_dyn();

		virtual Void solveCollisionSlopeFloorRight( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj);
		Dynamic solveCollisionSlopeFloorRight_dyn();

		virtual Void solveCollisionSlopeFloorLeft( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj);
		Dynamic solveCollisionSlopeFloorLeft_dyn();

		virtual Void onCollideCeilSlope( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj);
		Dynamic onCollideCeilSlope_dyn();

		virtual Void onCollideFloorSlope( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj);
		Dynamic onCollideFloorSlope_dyn();

		virtual Void fixSlopePoint( ::org::flixel::system::FlxTile slope);
		Dynamic fixSlopePoint_dyn();

		virtual bool overlapsWithCallback( ::org::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  FlipCallbackParams,::org::flixel::util::FlxPoint Position);

		virtual Void destroy( );

		Array< int > slopeCeilRight;
		Array< int > slopeCeilLeft;
		Array< int > slopeFloorRight;
		Array< int > slopeFloorLeft;
		::org::flixel::util::FlxPoint _objPoint;
		::org::flixel::util::FlxPoint _slopePoint;
		int _snapping;
};

} // end namespace org
} // end namespace flixel
} // end namespace addons

#endif /* INCLUDED_org_flixel_addons_FlxTilemapExt */ 
