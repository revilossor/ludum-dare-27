#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StunningEntity
#include <StunningEntity.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_entities_Entity
#include <entities/Entity.h>
#endif
#ifndef INCLUDED_entities_PlatformerPlayer
#include <entities/PlatformerPlayer.h>
#endif
#ifndef INCLUDED_entities_TimePlusPlus
#include <entities/TimePlusPlus.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#include <org/flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputStates
#include <org/flixel/system/input/FlxInputStates.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxKeyboard
#include <org/flixel/system/input/FlxKeyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxRect
#include <org/flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_states_GameOverState
#include <states/GameOverState.h>
#endif
#ifndef INCLUDED_states_PlatformerState
#include <states/PlatformerState.h>
#endif
#ifndef INCLUDED_states_WinState
#include <states/WinState.h>
#endif
namespace states{

Void PlatformerState_obj::__construct(hx::Null< int >  __o_i)
{
HX_STACK_PUSH("PlatformerState::new","states/PlatformerState.hx",38);
int i = __o_i.Default(0);
{
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	this->index = i;
}
;
	return null();
}

PlatformerState_obj::~PlatformerState_obj() { }

Dynamic PlatformerState_obj::__CreateEmpty() { return  new PlatformerState_obj; }
hx::ObjectPtr< PlatformerState_obj > PlatformerState_obj::__new(hx::Null< int >  __o_i)
{  hx::ObjectPtr< PlatformerState_obj > result = new PlatformerState_obj();
	result->__construct(__o_i);
	return result;}

Dynamic PlatformerState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlatformerState_obj > result = new PlatformerState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlatformerState_obj::baddieHitWall( ::entities::Entity bd,::org::flixel::FlxBasic w){
{
		HX_STACK_PUSH("PlatformerState::baddieHitWall","states/PlatformerState.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bd,"bd");
		HX_STACK_ARG(w,"w");
		HX_STACK_LINE(152)
		::String _switch_1 = (bd->type);
		if (  ( _switch_1==HX_CSTRING("StunningEntity"))){
			HX_STACK_LINE(156)
			::StunningEntity s = bd;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(157)
			if ((s->isGoingUp)){
				HX_STACK_LINE(158)
				s->isGoingUp = false;
				HX_STACK_LINE(159)
				s->velocity = s->addEq(s->velocity,s->upVect);
			}
			else{
				HX_STACK_LINE(161)
				s->isGoingUp = true;
				HX_STACK_LINE(162)
				s->velocity = s->addEq(s->velocity,s->downVect);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlatformerState_obj,baddieHitWall,(void))

Void PlatformerState_obj::playerHitBaddie( ::org::flixel::FlxBasic pl,::entities::Entity bd){
{
		HX_STACK_PUSH("PlatformerState::playerHitBaddie","states/PlatformerState.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pl,"pl");
		HX_STACK_ARG(bd,"bd");
		HX_STACK_LINE(142)
		if (((bd->type == HX_CSTRING("spike")))){
			HX_STACK_LINE(143)
			if (((this->_player->y < (bd->y - (int)29)))){
				HX_STACK_LINE(144)
				::org::flixel::FlxG_obj::switchState(::states::GameOverState_obj::__new(HX_CSTRING("You Were Spiked By A Spike!")));
			}
		}
		else{
			HX_STACK_LINE(147)
			::org::flixel::FlxG_obj::switchState(::states::GameOverState_obj::__new(HX_CSTRING("You Died!")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlatformerState_obj,playerHitBaddie,(void))

Void PlatformerState_obj::playerOverCoin( ::org::flixel::FlxBasic pl,::org::flixel::FlxSprite co){
{
		HX_STACK_PUSH("PlatformerState::playerOverCoin","states/PlatformerState.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pl,"pl");
		HX_STACK_ARG(co,"co");
		HX_STACK_LINE(137)
		co->exists = false;
		HX_STACK_LINE(138)
		hx::AddEq(this->timeRemaining,(int)30);
		HX_STACK_LINE(139)
		this->timeplusses->add(::entities::TimePlusPlus_obj::__new((co->x - (int)15),(co->y - (int)16)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlatformerState_obj,playerOverCoin,(void))

Void PlatformerState_obj::playerOverDoor( ::org::flixel::FlxBasic pl,::org::flixel::FlxSprite door){
{
		HX_STACK_PUSH("PlatformerState::playerOverDoor","states/PlatformerState.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pl,"pl");
		HX_STACK_ARG(door,"door");
		HX_STACK_LINE(120)
		if ((::org::flixel::FlxG_obj::keys->justPressed(HX_CSTRING("DOWN")))){
			HX_STACK_LINE(122)
			door->allowCollisions = (int)0;
			HX_STACK_LINE(123)
			::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("player over door"));
			HX_STACK_LINE(124)
			(::Reg_obj::roomIndex)++;
			HX_STACK_LINE(125)
			::haxe::Log_obj::trace((HX_CSTRING("roomIndex ") + ::Reg_obj::roomIndex),hx::SourceInfo(HX_CSTRING("PlatformerState.hx"),125,HX_CSTRING("states.PlatformerState"),HX_CSTRING("playerOverDoor")));
			HX_STACK_LINE(126)
			::haxe::Log_obj::trace((HX_CSTRING("levels length ") + ::Reg_obj::levels->__Field(HX_CSTRING("length"),true)),hx::SourceInfo(HX_CSTRING("PlatformerState.hx"),126,HX_CSTRING("states.PlatformerState"),HX_CSTRING("playerOverDoor")));
			HX_STACK_LINE(127)
			if (((::Reg_obj::roomIndex == ::Reg_obj::levels->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(128)
				::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("WIN!"));
				HX_STACK_LINE(129)
				::org::flixel::FlxG_obj::switchState(::states::WinState_obj::__new());
			}
			else{
				HX_STACK_LINE(130)
				::org::flixel::FlxG_obj::switchState(::states::PlatformerState_obj::__new(::Reg_obj::roomIndex));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlatformerState_obj,playerOverDoor,(void))

Void PlatformerState_obj::doCollision( ){
{
		HX_STACK_PUSH("PlatformerState::doCollision","states/PlatformerState.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_LINE(108)
		::org::flixel::FlxTilemap roomTiles = this->_room->get__tiles();		HX_STACK_VAR(roomTiles,"roomTiles");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Dynamic NotifyCallback = null();		HX_STACK_VAR(NotifyCallback,"NotifyCallback");
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				::org::flixel::FlxBasic ObjectOrGroup1 = this->_player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
				::org::flixel::FlxBasic ObjectOrGroup2 = roomTiles;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
				HX_STACK_LINE(109)
				if (((ObjectOrGroup1 == null()))){
					HX_STACK_LINE(109)
					ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
				}
				HX_STACK_LINE(109)
				if (((ObjectOrGroup2 == ObjectOrGroup1))){
					HX_STACK_LINE(109)
					ObjectOrGroup2 = null();
				}
				HX_STACK_LINE(109)
				::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
				HX_STACK_LINE(109)
				::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
				HX_STACK_LINE(109)
				quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::org::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(109)
				bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(109)
				quadTree->destroy();
				HX_STACK_LINE(109)
				result;
			}
		}
		HX_STACK_LINE(110)
		if (((((int(this->_player->touching) & int((int)4096))) > (int)0))){
			HX_STACK_LINE(110)
			this->_player->onFloor = true;
		}
		else{
			HX_STACK_LINE(110)
			this->_player->onFloor = false;
		}
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->_player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = this->door;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			Dynamic ProcessCallback = null();		HX_STACK_VAR(ProcessCallback,"ProcessCallback");
			HX_STACK_LINE(111)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(111)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
			}
			HX_STACK_LINE(111)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(111)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(111)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(111)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(111)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->playerOverDoor_dyn(),ProcessCallback);
			HX_STACK_LINE(111)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(111)
			quadTree->destroy();
			HX_STACK_LINE(111)
			result;
		}
		HX_STACK_LINE(112)
		::org::flixel::FlxGroup coins = this->_room->get_allCoins();		HX_STACK_VAR(coins,"coins");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->_player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = coins;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			Dynamic ProcessCallback = null();		HX_STACK_VAR(ProcessCallback,"ProcessCallback");
			HX_STACK_LINE(113)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(113)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
			}
			HX_STACK_LINE(113)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(113)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(113)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(113)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(113)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->playerOverCoin_dyn(),ProcessCallback);
			HX_STACK_LINE(113)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(113)
			quadTree->destroy();
			HX_STACK_LINE(113)
			result;
		}
		HX_STACK_LINE(114)
		::org::flixel::FlxGroup baddies = this->_room->get_allBaddies();		HX_STACK_VAR(baddies,"baddies");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::org::flixel::FlxBasic ObjectOrGroup1 = this->_player;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = baddies;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			HX_STACK_LINE(115)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(115)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
			}
			HX_STACK_LINE(115)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(115)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(115)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(115)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(115)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->playerHitBaddie_dyn(),::org::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(115)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(115)
			quadTree->destroy();
			HX_STACK_LINE(115)
			result;
		}
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::org::flixel::FlxBasic ObjectOrGroup1 = baddies;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = roomTiles;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			HX_STACK_LINE(116)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(116)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
			}
			HX_STACK_LINE(116)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(116)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(116)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(116)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(116)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->baddieHitWall_dyn(),::org::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(116)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(116)
			quadTree->destroy();
			HX_STACK_LINE(116)
			result;
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::org::flixel::FlxBasic ObjectOrGroup1 = baddies;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
			::org::flixel::FlxBasic ObjectOrGroup2 = baddies;		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
			HX_STACK_LINE(117)
			if (((ObjectOrGroup1 == null()))){
				HX_STACK_LINE(117)
				ObjectOrGroup1 = ::org::flixel::FlxG_obj::get_state();
			}
			HX_STACK_LINE(117)
			if (((ObjectOrGroup2 == ObjectOrGroup1))){
				HX_STACK_LINE(117)
				ObjectOrGroup2 = null();
			}
			HX_STACK_LINE(117)
			::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
			HX_STACK_LINE(117)
			::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
			HX_STACK_LINE(117)
			quadTree->load(ObjectOrGroup1,ObjectOrGroup2,this->baddieHitWall_dyn(),::org::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(117)
			bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(117)
			quadTree->destroy();
			HX_STACK_LINE(117)
			result;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlatformerState_obj,doCollision,(void))

Void PlatformerState_obj::keyHandling( ){
{
		HX_STACK_PUSH("PlatformerState::keyHandling","states/PlatformerState.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_LINE(95)
		if ((::org::flixel::FlxG_obj::keys->justReleased(HX_CSTRING("Q")))){
			HX_STACK_LINE(97)
			(::Reg_obj::roomIndex)++;
			HX_STACK_LINE(98)
			if (((::Reg_obj::roomIndex == ::Reg_obj::levels->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(99)
				::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("WIN!"));
				HX_STACK_LINE(100)
				::org::flixel::FlxG_obj::switchState(::states::WinState_obj::__new());
			}
			else{
				HX_STACK_LINE(101)
				::org::flixel::FlxG_obj::switchState(::states::PlatformerState_obj::__new(::Reg_obj::roomIndex));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlatformerState_obj,keyHandling,(void))

Void PlatformerState_obj::update( ){
{
		HX_STACK_PUSH("PlatformerState::update","states/PlatformerState.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(85)
		this->super::update();
		HX_STACK_LINE(86)
		this->doCollision();
		HX_STACK_LINE(87)
		(this->timeRemaining)--;
		HX_STACK_LINE(88)
		this->timeDisplay->set_text((HX_CSTRING("time remaining : ") + ::Math_obj::ceil((Float(this->timeRemaining) / Float((int)30)))));
		HX_STACK_LINE(89)
		this->keyHandling();
		HX_STACK_LINE(90)
		if (((this->timeRemaining <= (int)0))){
			HX_STACK_LINE(90)
			::org::flixel::FlxG_obj::switchState(::states::GameOverState_obj::__new(null()));
		}
	}
return null();
}


Void PlatformerState_obj::destroy( ){
{
		HX_STACK_PUSH("PlatformerState::destroy","states/PlatformerState.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_LINE(80)
		this->super::destroy();
	}
return null();
}


Void PlatformerState_obj::addItems( ){
{
		HX_STACK_PUSH("PlatformerState::addItems","states/PlatformerState.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(67)
		this->add(this->_room);
		HX_STACK_LINE(68)
		::flash::geom::Point thisDoorPosition = ::Reg_obj::doorPositions->__get(this->index).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(thisDoorPosition,"thisDoorPosition");
		HX_STACK_LINE(69)
		this->door = ::org::flixel::FlxSprite_obj::__new(thisDoorPosition->x,thisDoorPosition->y,::Resourses_obj::door);
		HX_STACK_LINE(70)
		this->door->scrollFactor = ::org::flixel::util::FlxPoint_obj::__new((int)1,(int)1);
		HX_STACK_LINE(71)
		this->add(this->door);
		HX_STACK_LINE(72)
		this->add(this->timeplusses);
		HX_STACK_LINE(73)
		this->add(this->_player);
		HX_STACK_LINE(74)
		this->timeDisplay = ::org::flixel::FlxText_obj::__new((int)0,(int)0,(int)800,HX_CSTRING("init"),(int)36,null(),null());
		HX_STACK_LINE(75)
		this->timeDisplay->setFormat(null(),(int)36,(int)-256,HX_CSTRING("left"),null(),null());
		HX_STACK_LINE(76)
		this->timeDisplay->scrollFactor = ::org::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
		HX_STACK_LINE(77)
		this->add(this->timeDisplay);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlatformerState_obj,addItems,(void))

Void PlatformerState_obj::create( ){
{
		HX_STACK_PUSH("PlatformerState::create","states/PlatformerState.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		this->super::create();
		HX_STACK_LINE(46)
		::org::flixel::FlxG_obj::set_bgColor((int)-16777216);
		HX_STACK_LINE(48)
		this->timeplusses = ::org::flixel::FlxGroup_obj::__new(null());
		HX_STACK_LINE(49)
		this->_room = ::Room_obj::__new(this->index);
		HX_STACK_LINE(51)
		::flash::geom::Point playerStart = ::Reg_obj::startPositions->__get(this->index).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(playerStart,"playerStart");
		HX_STACK_LINE(52)
		::Util_obj::log(hx::ObjectPtr<OBJ_>(this),(HX_CSTRING("player start at ") + ::Std_obj::string(playerStart)));
		HX_STACK_LINE(54)
		this->_player = ::entities::PlatformerPlayer_obj::__new(playerStart->x,playerStart->y);
		HX_STACK_LINE(56)
		this->addItems();
		HX_STACK_LINE(58)
		this->timeRemaining = (int)300;
		HX_STACK_LINE(60)
		::org::flixel::FlxG_obj::worldBounds = ::org::flixel::util::FlxRect_obj::__new((int)0,(int)0,this->_room->get_width(),this->_room->get_height());
		HX_STACK_LINE(61)
		::org::flixel::FlxG_obj::camera->setBounds((int)0,(int)0,this->_room->get_width(),this->_room->get_height(),null());
		HX_STACK_LINE(62)
		::org::flixel::FlxG_obj::camera->style = (int)1;
		HX_STACK_LINE(63)
		::org::flixel::FlxG_obj::camera->follow(this->_player,null(),null(),null());
	}
return null();
}



PlatformerState_obj::PlatformerState_obj()
{
}

void PlatformerState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlatformerState);
	HX_MARK_MEMBER_NAME(timeDisplay,"timeDisplay");
	HX_MARK_MEMBER_NAME(timeRemaining,"timeRemaining");
	HX_MARK_MEMBER_NAME(timeplusses,"timeplusses");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(door,"door");
	HX_MARK_MEMBER_NAME(_room,"_room");
	HX_MARK_MEMBER_NAME(index,"index");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlatformerState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timeDisplay,"timeDisplay");
	HX_VISIT_MEMBER_NAME(timeRemaining,"timeRemaining");
	HX_VISIT_MEMBER_NAME(timeplusses,"timeplusses");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(door,"door");
	HX_VISIT_MEMBER_NAME(_room,"_room");
	HX_VISIT_MEMBER_NAME(index,"index");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlatformerState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"door") ) { return door; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_room") ) { return _room; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addItems") ) { return addItems_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doCollision") ) { return doCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"keyHandling") ) { return keyHandling_dyn(); }
		if (HX_FIELD_EQ(inName,"timeDisplay") ) { return timeDisplay; }
		if (HX_FIELD_EQ(inName,"timeplusses") ) { return timeplusses; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"baddieHitWall") ) { return baddieHitWall_dyn(); }
		if (HX_FIELD_EQ(inName,"timeRemaining") ) { return timeRemaining; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"playerOverCoin") ) { return playerOverCoin_dyn(); }
		if (HX_FIELD_EQ(inName,"playerOverDoor") ) { return playerOverDoor_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerHitBaddie") ) { return playerHitBaddie_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlatformerState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"door") ) { door=inValue.Cast< ::org::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_room") ) { _room=inValue.Cast< ::Room >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::entities::PlatformerPlayer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeDisplay") ) { timeDisplay=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeplusses") ) { timeplusses=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timeRemaining") ) { timeRemaining=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlatformerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timeDisplay"));
	outFields->push(HX_CSTRING("timeRemaining"));
	outFields->push(HX_CSTRING("timeplusses"));
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("door"));
	outFields->push(HX_CSTRING("_room"));
	outFields->push(HX_CSTRING("index"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("baddieHitWall"),
	HX_CSTRING("playerHitBaddie"),
	HX_CSTRING("playerOverCoin"),
	HX_CSTRING("playerOverDoor"),
	HX_CSTRING("doCollision"),
	HX_CSTRING("keyHandling"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addItems"),
	HX_CSTRING("create"),
	HX_CSTRING("timeDisplay"),
	HX_CSTRING("timeRemaining"),
	HX_CSTRING("timeplusses"),
	HX_CSTRING("_player"),
	HX_CSTRING("door"),
	HX_CSTRING("_room"),
	HX_CSTRING("index"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlatformerState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlatformerState_obj::__mClass,"__mClass");
};

Class PlatformerState_obj::__mClass;

void PlatformerState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.PlatformerState"), hx::TCanCast< PlatformerState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlatformerState_obj::__boot()
{
}

} // end namespace states
