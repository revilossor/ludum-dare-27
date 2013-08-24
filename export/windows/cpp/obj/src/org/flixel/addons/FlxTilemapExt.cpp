#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_addons_FlxTilemapExt
#include <org/flixel/addons/FlxTilemapExt.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxTile
#include <org/flixel/system/FlxTile.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace addons{

Void FlxTilemapExt_obj::__construct()
{
HX_STACK_PUSH("FlxTilemapExt::new","org/flixel/addons/FlxTilemapExt.hx",33);
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(36)
	this->_snapping = (int)2;
	HX_STACK_LINE(37)
	this->_slopePoint = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(38)
	this->_objPoint = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(40)
	this->slopeFloorLeft = Array_obj< int >::__new();
	HX_STACK_LINE(41)
	this->slopeFloorRight = Array_obj< int >::__new();
	HX_STACK_LINE(42)
	this->slopeCeilLeft = Array_obj< int >::__new();
	HX_STACK_LINE(43)
	this->slopeCeilRight = Array_obj< int >::__new();
}
;
	return null();
}

FlxTilemapExt_obj::~FlxTilemapExt_obj() { }

Dynamic FlxTilemapExt_obj::__CreateEmpty() { return  new FlxTilemapExt_obj; }
hx::ObjectPtr< FlxTilemapExt_obj > FlxTilemapExt_obj::__new()
{  hx::ObjectPtr< FlxTilemapExt_obj > result = new FlxTilemapExt_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemapExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapExt_obj > result = new FlxTilemapExt_obj();
	result->__construct();
	return result;}

bool FlxTilemapExt_obj::checkArrays( int tileIndex){
	HX_STACK_PUSH("FlxTilemapExt::checkArrays","org/flixel/addons/FlxTilemapExt.hx",405);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileIndex,"tileIndex");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(406)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->slopeFloorLeft->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(406)
		while(((_g1 < _g))){
			HX_STACK_LINE(406)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(408)
			if (((this->slopeFloorLeft->__get(i) == tileIndex))){
				HX_STACK_LINE(409)
				return true;
			}
		}
	}
	HX_STACK_LINE(413)
	{
		HX_STACK_LINE(413)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->slopeFloorRight->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(413)
		while(((_g1 < _g))){
			HX_STACK_LINE(413)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(415)
			if (((this->slopeFloorRight->__get(i) == tileIndex))){
				HX_STACK_LINE(416)
				return true;
			}
		}
	}
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->slopeCeilLeft->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(420)
		while(((_g1 < _g))){
			HX_STACK_LINE(420)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(422)
			if (((this->slopeCeilLeft->__get(i) == tileIndex))){
				HX_STACK_LINE(423)
				return true;
			}
		}
	}
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(427)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->slopeCeilRight->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(427)
		while(((_g1 < _g))){
			HX_STACK_LINE(427)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(429)
			if (((this->slopeCeilRight->__get(i) == tileIndex))){
				HX_STACK_LINE(430)
				return true;
			}
		}
	}
	HX_STACK_LINE(435)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkArrays,return )

Void FlxTilemapExt_obj::setSlopeProperties( ){
{
		HX_STACK_PUSH("FlxTilemapExt::setSlopeProperties","org/flixel/addons/FlxTilemapExt.hx",379);
		HX_STACK_THIS(this);
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->slopeFloorLeft->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(380)
			while(((_g1 < _g))){
				HX_STACK_LINE(380)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(382)
				this->setTileProperties(this->slopeFloorLeft->__get(i),(int)4112,this->solveCollisionSlopeFloorLeft_dyn(),null(),null());
			}
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->slopeFloorRight->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(384)
			while(((_g1 < _g))){
				HX_STACK_LINE(384)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(386)
				this->setTileProperties(this->slopeFloorRight->__get(i),(int)4097,this->solveCollisionSlopeFloorRight_dyn(),null(),null());
			}
		}
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->slopeCeilLeft->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(388)
			while(((_g1 < _g))){
				HX_STACK_LINE(388)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(390)
				this->setTileProperties(this->slopeCeilLeft->__get(i),(int)272,this->solveCollisionSlopeCeilLeft_dyn(),null(),null());
			}
		}
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->slopeCeilRight->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(392)
			while(((_g1 < _g))){
				HX_STACK_LINE(392)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(394)
				this->setTileProperties(this->slopeCeilRight->__get(i),(int)257,this->solveCollisionSlopeCeilRight_dyn(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapExt_obj,setSlopeProperties,(void))

Void FlxTilemapExt_obj::setSlopes( Array< int > leftFloorSlopes,Array< int > rightFloorSlopes,Array< int > leftCeilSlopes,Array< int > rightCeilSlopes){
{
		HX_STACK_PUSH("FlxTilemapExt::setSlopes","org/flixel/addons/FlxTilemapExt.hx",353);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leftFloorSlopes,"leftFloorSlopes");
		HX_STACK_ARG(rightFloorSlopes,"rightFloorSlopes");
		HX_STACK_ARG(leftCeilSlopes,"leftCeilSlopes");
		HX_STACK_ARG(rightCeilSlopes,"rightCeilSlopes");
		HX_STACK_LINE(354)
		if (((leftFloorSlopes != null()))){
			HX_STACK_LINE(355)
			this->slopeFloorLeft = leftFloorSlopes;
		}
		HX_STACK_LINE(358)
		if (((rightFloorSlopes != null()))){
			HX_STACK_LINE(359)
			this->slopeFloorRight = rightFloorSlopes;
		}
		HX_STACK_LINE(362)
		if (((leftCeilSlopes != null()))){
			HX_STACK_LINE(363)
			this->slopeCeilLeft = leftCeilSlopes;
		}
		HX_STACK_LINE(366)
		if (((rightCeilSlopes != null()))){
			HX_STACK_LINE(367)
			this->slopeCeilRight = rightCeilSlopes;
		}
		HX_STACK_LINE(371)
		this->setSlopeProperties();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapExt_obj,setSlopes,(void))

Void FlxTilemapExt_obj::setClouds( Array< int > clouds){
{
		HX_STACK_PUSH("FlxTilemapExt::setClouds","org/flixel/addons/FlxTilemapExt.hx",335);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clouds,"clouds");
		HX_STACK_LINE(335)
		if (((clouds != null()))){
			HX_STACK_LINE(338)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = clouds->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(338)
			while(((_g1 < _g))){
				HX_STACK_LINE(338)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(340)
				this->setTileProperties(clouds->__get(i),(int)256,null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,setClouds,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeCeilRight( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeCeilRight","org/flixel/addons/FlxTilemapExt.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slope,"slope");
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(310)
		this->_objPoint->x = ::Math_obj::floor((obj->x - this->_snapping));
		HX_STACK_LINE(311)
		this->_objPoint->y = ::Math_obj::ceil(obj->y);
		HX_STACK_LINE(315)
		this->_slopePoint->x = this->_objPoint->x;
		HX_STACK_LINE(316)
		this->_slopePoint->y = (slope->y + (((slope->x - this->_slopePoint->x) + this->_tileWidth)));
		HX_STACK_LINE(319)
		this->fixSlopePoint(hx::TCast< org::flixel::system::FlxTile >::cast(slope));
		HX_STACK_LINE(322)
		if (((bool((bool((bool((this->_objPoint->x > ((slope->x - obj->width) - this->_snapping))) && bool((this->_objPoint->x < ((slope->x + this->_tileWidth) + this->_snapping))))) && bool((this->_objPoint->y <= this->_slopePoint->y)))) && bool((this->_objPoint->y >= slope->y))))){
			HX_STACK_LINE(323)
			this->onCollideCeilSlope(slope,obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeCeilRight,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeCeilLeft( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeCeilLeft","org/flixel/addons/FlxTilemapExt.hx",281);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slope,"slope");
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(283)
		this->_objPoint->x = ::Math_obj::floor(((obj->x + obj->width) + this->_snapping));
		HX_STACK_LINE(284)
		this->_objPoint->y = ::Math_obj::ceil(obj->y);
		HX_STACK_LINE(288)
		this->_slopePoint->x = this->_objPoint->x;
		HX_STACK_LINE(289)
		this->_slopePoint->y = (slope->y + ((this->_slopePoint->x - slope->x)));
		HX_STACK_LINE(292)
		this->fixSlopePoint(hx::TCast< org::flixel::system::FlxTile >::cast(slope));
		HX_STACK_LINE(295)
		if (((bool((bool((bool((this->_objPoint->x > (slope->x + this->_snapping))) && bool((this->_objPoint->x < (((slope->x + this->_tileWidth) + obj->width) + this->_snapping))))) && bool((this->_objPoint->y <= this->_slopePoint->y)))) && bool((this->_objPoint->y >= slope->y))))){
			HX_STACK_LINE(296)
			this->onCollideCeilSlope(slope,obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeCeilLeft,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeFloorRight( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeFloorRight","org/flixel/addons/FlxTilemapExt.hx",254);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slope,"slope");
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(256)
		this->_objPoint->x = ::Math_obj::floor((obj->x - this->_snapping));
		HX_STACK_LINE(257)
		this->_objPoint->y = ::Math_obj::floor((obj->y + obj->height));
		HX_STACK_LINE(261)
		this->_slopePoint->x = this->_objPoint->x;
		HX_STACK_LINE(262)
		this->_slopePoint->y = ((slope->y + this->_tileHeight) - (((slope->x - this->_slopePoint->x) + this->_tileWidth)));
		HX_STACK_LINE(265)
		this->fixSlopePoint(hx::TCast< org::flixel::system::FlxTile >::cast(slope));
		HX_STACK_LINE(268)
		if (((bool((bool((bool((this->_objPoint->x > ((slope->x - obj->width) - this->_snapping))) && bool((this->_objPoint->x < ((slope->x + this->_tileWidth) + this->_snapping))))) && bool((this->_objPoint->y >= this->_slopePoint->y)))) && bool((this->_objPoint->y <= (slope->y + this->_tileHeight)))))){
			HX_STACK_LINE(269)
			this->onCollideFloorSlope(slope,obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeFloorRight,(void))

Void FlxTilemapExt_obj::solveCollisionSlopeFloorLeft( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj){
{
		HX_STACK_PUSH("FlxTilemapExt::solveCollisionSlopeFloorLeft","org/flixel/addons/FlxTilemapExt.hx",227);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slope,"slope");
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(229)
		this->_objPoint->x = ::Math_obj::floor(((obj->x + obj->width) + this->_snapping));
		HX_STACK_LINE(230)
		this->_objPoint->y = ::Math_obj::floor((obj->y + obj->height));
		HX_STACK_LINE(234)
		this->_slopePoint->x = this->_objPoint->x;
		HX_STACK_LINE(235)
		this->_slopePoint->y = ((slope->y + this->_tileHeight) - ((this->_slopePoint->x - slope->x)));
		HX_STACK_LINE(238)
		this->fixSlopePoint(hx::TCast< org::flixel::system::FlxTile >::cast(slope));
		HX_STACK_LINE(241)
		if (((bool((bool((bool((this->_objPoint->x > (slope->x + this->_snapping))) && bool((this->_objPoint->x < (((slope->x + this->_tileWidth) + obj->width) + this->_snapping))))) && bool((this->_objPoint->y >= this->_slopePoint->y)))) && bool((this->_objPoint->y <= (slope->y + this->_tileHeight)))))){
			HX_STACK_LINE(242)
			this->onCollideFloorSlope(slope,obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeFloorLeft,(void))

Void FlxTilemapExt_obj::onCollideCeilSlope( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj){
{
		HX_STACK_PUSH("FlxTilemapExt::onCollideCeilSlope","org/flixel/addons/FlxTilemapExt.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slope,"slope");
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(211)
		obj->touching = (int)256;
		HX_STACK_LINE(214)
		obj->velocity->y = (int)0;
		HX_STACK_LINE(217)
		obj->y = this->_slopePoint->y;
		HX_STACK_LINE(218)
		if (((obj->y > (slope->y + this->_tileHeight)))){
			HX_STACK_LINE(218)
			obj->y = (slope->y + this->_tileHeight);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideCeilSlope,(void))

Void FlxTilemapExt_obj::onCollideFloorSlope( ::org::flixel::FlxObject slope,::org::flixel::FlxObject obj){
{
		HX_STACK_PUSH("FlxTilemapExt::onCollideFloorSlope","org/flixel/addons/FlxTilemapExt.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slope,"slope");
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(193)
		obj->touching = (int)4096;
		HX_STACK_LINE(196)
		obj->velocity->y = (int)0;
		HX_STACK_LINE(199)
		obj->y = (this->_slopePoint->y - obj->height);
		HX_STACK_LINE(200)
		if (((obj->y < (slope->y - obj->height)))){
			HX_STACK_LINE(200)
			obj->y = (slope->y - obj->height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideFloorSlope,(void))

Void FlxTilemapExt_obj::fixSlopePoint( ::org::flixel::system::FlxTile slope){
{
		HX_STACK_PUSH("FlxTilemapExt::fixSlopePoint","org/flixel/addons/FlxTilemapExt.hx",180);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slope,"slope");
		struct _Function_1_1{
			inline static Float Block( ::org::flixel::addons::FlxTilemapExt_obj *__this,::org::flixel::system::FlxTile &slope){
				HX_STACK_PUSH("*::closure","org/flixel/addons/FlxTilemapExt.hx",181);
				{
					HX_STACK_LINE(181)
					Float Value = __this->_slopePoint->x;		HX_STACK_VAR(Value,"Value");
					Float Min = slope->x;		HX_STACK_VAR(Min,"Min");
					Float Max = (slope->x + __this->_tileWidth);		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(181)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(181)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(181)
		this->_slopePoint->x = _Function_1_1::Block(this,slope);
		struct _Function_1_2{
			inline static Float Block( ::org::flixel::addons::FlxTilemapExt_obj *__this,::org::flixel::system::FlxTile &slope){
				HX_STACK_PUSH("*::closure","org/flixel/addons/FlxTilemapExt.hx",182);
				{
					HX_STACK_LINE(182)
					Float Value = __this->_slopePoint->y;		HX_STACK_VAR(Value,"Value");
					Float Min = slope->y;		HX_STACK_VAR(Min,"Min");
					Float Max = (slope->y + __this->_tileHeight);		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(182)
					Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(182)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(182)
		this->_slopePoint->y = _Function_1_2::Block(this,slope);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,fixSlopePoint,(void))

bool FlxTilemapExt_obj::overlapsWithCallback( ::org::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::org::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_PUSH("FlxTilemapExt::overlapsWithCallback","org/flixel/addons/FlxTilemapExt.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams");
	HX_STACK_ARG(Position,"Position");
{
		HX_STACK_LINE(74)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(76)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(77)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(78)
		if (((Position != null()))){
			HX_STACK_LINE(80)
			X = Position->x;
			HX_STACK_LINE(81)
			Y = Position->y;
		}
		HX_STACK_LINE(85)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_tileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(86)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_tileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(87)
		int selectionWidth = ((selectionX + ::Math_obj::ceil((Float(Object->width) / Float(this->_tileWidth)))) + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(88)
		int selectionHeight = ((selectionY + ::Math_obj::ceil((Float(Object->height) / Float(this->_tileHeight)))) + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(91)
		if (((selectionX < (int)0))){
			HX_STACK_LINE(92)
			selectionX = (int)0;
		}
		HX_STACK_LINE(95)
		if (((selectionY < (int)0))){
			HX_STACK_LINE(96)
			selectionY = (int)0;
		}
		HX_STACK_LINE(99)
		if (((selectionWidth > this->widthInTiles))){
			HX_STACK_LINE(100)
			selectionWidth = this->widthInTiles;
		}
		HX_STACK_LINE(103)
		if (((selectionHeight > this->heightInTiles))){
			HX_STACK_LINE(104)
			selectionHeight = this->heightInTiles;
		}
		HX_STACK_LINE(109)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(110)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(111)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(112)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(113)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(114)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(115)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(116)
		while(((row < selectionHeight))){
			HX_STACK_LINE(118)
			column = selectionX;
			HX_STACK_LINE(119)
			while(((column < selectionWidth))){
				HX_STACK_LINE(121)
				overlapFound = false;
				HX_STACK_LINE(122)
				tile = this->_tileObjects->__get(this->_data->__get((rowStart + column))).StaticCast< ::org::flixel::system::FlxTile >();
				HX_STACK_LINE(123)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(125)
					tile->x = (X + (column * this->_tileWidth));
					HX_STACK_LINE(126)
					tile->y = (Y + (row * this->_tileHeight));
					HX_STACK_LINE(127)
					tile->last->x = (tile->x - deltaX);
					HX_STACK_LINE(128)
					tile->last->y = (tile->y - deltaY);
					HX_STACK_LINE(129)
					if (((Callback != null()))){
						HX_STACK_LINE(130)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(132)
							overlapFound = Callback(Object,tile).Cast< bool >();
						}
						else{
							HX_STACK_LINE(136)
							overlapFound = Callback(tile,Object).Cast< bool >();
						}
					}
					else{
						HX_STACK_LINE(141)
						overlapFound = (bool((bool((bool(((Object->x + Object->width) > tile->x)) && bool((Object->x < (tile->x + tile->width))))) && bool(((Object->y + Object->height) > tile->y)))) && bool((Object->y < (tile->y + tile->height))));
					}
					HX_STACK_LINE(152)
					if (((bool(overlapFound) || bool((bool(!(overlapFound)) && bool(this->checkArrays(tile->index))))))){
						HX_STACK_LINE(154)
						if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
							HX_STACK_LINE(156)
							tile->mapIndex = (rowStart + column);
							HX_STACK_LINE(157)
							tile->callbackFunction(tile,Object);
						}
						HX_STACK_LINE(159)
						results = true;
					}
				}
				else{
					HX_STACK_LINE(162)
					if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
						HX_STACK_LINE(164)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(165)
						tile->callbackFunction(tile,Object);
					}
				}
				HX_STACK_LINE(167)
				(column)++;
			}
			HX_STACK_LINE(169)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(170)
			(row)++;
		}
		HX_STACK_LINE(172)
		return results;
	}
}


Void FlxTilemapExt_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemapExt::destroy","org/flixel/addons/FlxTilemapExt.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		this->_slopePoint = null();
		HX_STACK_LINE(49)
		this->_objPoint = null();
		HX_STACK_LINE(51)
		this->slopeFloorLeft = null();
		HX_STACK_LINE(52)
		this->slopeFloorRight = null();
		HX_STACK_LINE(53)
		this->slopeCeilLeft = null();
		HX_STACK_LINE(54)
		this->slopeCeilRight = null();
		HX_STACK_LINE(56)
		this->super::destroy();
	}
return null();
}



FlxTilemapExt_obj::FlxTilemapExt_obj()
{
}

void FlxTilemapExt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapExt);
	HX_MARK_MEMBER_NAME(slopeCeilRight,"slopeCeilRight");
	HX_MARK_MEMBER_NAME(slopeCeilLeft,"slopeCeilLeft");
	HX_MARK_MEMBER_NAME(slopeFloorRight,"slopeFloorRight");
	HX_MARK_MEMBER_NAME(slopeFloorLeft,"slopeFloorLeft");
	HX_MARK_MEMBER_NAME(_objPoint,"_objPoint");
	HX_MARK_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemapExt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(slopeCeilRight,"slopeCeilRight");
	HX_VISIT_MEMBER_NAME(slopeCeilLeft,"slopeCeilLeft");
	HX_VISIT_MEMBER_NAME(slopeFloorRight,"slopeFloorRight");
	HX_VISIT_MEMBER_NAME(slopeFloorLeft,"slopeFloorLeft");
	HX_VISIT_MEMBER_NAME(_objPoint,"_objPoint");
	HX_VISIT_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemapExt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setSlopes") ) { return setSlopes_dyn(); }
		if (HX_FIELD_EQ(inName,"setClouds") ) { return setClouds_dyn(); }
		if (HX_FIELD_EQ(inName,"_objPoint") ) { return _objPoint; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { return _snapping; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkArrays") ) { return checkArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { return _slopePoint; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixSlopePoint") ) { return fixSlopePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"slopeCeilLeft") ) { return slopeCeilLeft; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"slopeCeilRight") ) { return slopeCeilRight; }
		if (HX_FIELD_EQ(inName,"slopeFloorLeft") ) { return slopeFloorLeft; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"slopeFloorRight") ) { return slopeFloorRight; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setSlopeProperties") ) { return setSlopeProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"onCollideCeilSlope") ) { return onCollideCeilSlope_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onCollideFloorSlope") ) { return onCollideFloorSlope_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeCeilLeft") ) { return solveCollisionSlopeCeilLeft_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeCeilRight") ) { return solveCollisionSlopeCeilRight_dyn(); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeFloorLeft") ) { return solveCollisionSlopeFloorLeft_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeFloorRight") ) { return solveCollisionSlopeFloorRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_objPoint") ) { _objPoint=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { _slopePoint=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"slopeCeilLeft") ) { slopeCeilLeft=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"slopeCeilRight") ) { slopeCeilRight=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slopeFloorLeft") ) { slopeFloorLeft=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"slopeFloorRight") ) { slopeFloorRight=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("slopeCeilRight"));
	outFields->push(HX_CSTRING("slopeCeilLeft"));
	outFields->push(HX_CSTRING("slopeFloorRight"));
	outFields->push(HX_CSTRING("slopeFloorLeft"));
	outFields->push(HX_CSTRING("_objPoint"));
	outFields->push(HX_CSTRING("_slopePoint"));
	outFields->push(HX_CSTRING("_snapping"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("checkArrays"),
	HX_CSTRING("setSlopeProperties"),
	HX_CSTRING("setSlopes"),
	HX_CSTRING("setClouds"),
	HX_CSTRING("solveCollisionSlopeCeilRight"),
	HX_CSTRING("solveCollisionSlopeCeilLeft"),
	HX_CSTRING("solveCollisionSlopeFloorRight"),
	HX_CSTRING("solveCollisionSlopeFloorLeft"),
	HX_CSTRING("onCollideCeilSlope"),
	HX_CSTRING("onCollideFloorSlope"),
	HX_CSTRING("fixSlopePoint"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("destroy"),
	HX_CSTRING("slopeCeilRight"),
	HX_CSTRING("slopeCeilLeft"),
	HX_CSTRING("slopeFloorRight"),
	HX_CSTRING("slopeFloorLeft"),
	HX_CSTRING("_objPoint"),
	HX_CSTRING("_slopePoint"),
	HX_CSTRING("_snapping"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapExt_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapExt_obj::__mClass,"__mClass");
};

Class FlxTilemapExt_obj::__mClass;

void FlxTilemapExt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.addons.FlxTilemapExt"), hx::TCanCast< FlxTilemapExt_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemapExt_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace addons
