#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_StunningEntity
#include <StunningEntity.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_entities_BouncingEntity
#include <entities/BouncingEntity.h>
#endif
#ifndef INCLUDED_entities_Coin
#include <entities/Coin.h>
#endif
#ifndef INCLUDED_entities_Entity
#include <entities/Entity.h>
#endif
#ifndef INCLUDED_entities_HorizontalFlipper
#include <entities/HorizontalFlipper.h>
#endif
#ifndef INCLUDED_entities_KillingEntity
#include <entities/KillingEntity.h>
#endif
#ifndef INCLUDED_entities_Spikes
#include <entities/Spikes.h>
#endif
#ifndef INCLUDED_entities_VerticalFlipper
#include <entities/VerticalFlipper.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
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
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif

Void Room_obj::__construct(hx::Null< int >  __o_i)
{
HX_STACK_PUSH("Room::new","Room.hx",34);
int i = __o_i.Default(0);
{
	HX_STACK_LINE(35)
	super::__construct(null());
	HX_STACK_LINE(36)
	this->index = i;
	HX_STACK_LINE(37)
	this->_tiles = ::org::flixel::FlxTilemap_obj::__new();
	HX_STACK_LINE(38)
	this->get__tiles()->loadMap(::openfl::Assets_obj::getText(::Reg_obj::levels->__GetItem(this->index)),::Resourses_obj::template_tiles,(int)32,(int)32,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(39)
	this->_bg = ::org::flixel::FlxTilemap_obj::__new();
	HX_STACK_LINE(40)
	this->_bg->loadMap(::openfl::Assets_obj::getText(::Reg_obj::bgs->__GetItem(this->index)),::Resourses_obj::bg_tiles,(int)32,(int)32,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(42)
	this->addItems();
	HX_STACK_LINE(43)
	this->width = this->get__tiles()->width;
	HX_STACK_LINE(44)
	this->height = this->get__tiles()->height;
	HX_STACK_LINE(45)
	::Util_obj::log(hx::ObjectPtr<OBJ_>(this),(((HX_CSTRING("width is ") + this->get_width()) + HX_CSTRING(", heigrht is ")) + this->get_height()));
}
;
	return null();
}

Room_obj::~Room_obj() { }

Dynamic Room_obj::__CreateEmpty() { return  new Room_obj; }
hx::ObjectPtr< Room_obj > Room_obj::__new(hx::Null< int >  __o_i)
{  hx::ObjectPtr< Room_obj > result = new Room_obj();
	result->__construct(__o_i);
	return result;}

Dynamic Room_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Room_obj > result = new Room_obj();
	result->__construct(inArgs[0]);
	return result;}

Float Room_obj::get_height( ){
	HX_STACK_PUSH("Room::get_height","Room.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get_height,return )

Float Room_obj::get_width( ){
	HX_STACK_PUSH("Room::get_width","Room.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get_width,return )

::org::flixel::FlxGroup Room_obj::get_allBaddies( ){
	HX_STACK_PUSH("Room::get_allBaddies","Room.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_LINE(124)
	return this->allBaddies;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get_allBaddies,return )

::org::flixel::FlxGroup Room_obj::get_allCoins( ){
	HX_STACK_PUSH("Room::get_allCoins","Room.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_LINE(120)
	return this->allCoins;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get_allCoins,return )

::org::flixel::FlxTilemap Room_obj::get__tiles( ){
	HX_STACK_PUSH("Room::get__tiles","Room.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_LINE(116)
	return this->_tiles;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get__tiles,return )

Void Room_obj::update( ){
{
		HX_STACK_PUSH("Room::update","Room.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_LINE(110)
		this->super::update();
	}
return null();
}


Void Room_obj::destroy( ){
{
		HX_STACK_PUSH("Room::destroy","Room.hx",106);
		HX_STACK_THIS(this);
		HX_STACK_LINE(106)
		this->super::destroy();
	}
return null();
}


Void Room_obj::addBaddies( ){
{
		HX_STACK_PUSH("Room::addBaddies","Room.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_LINE(79)
		this->allBaddies = ::org::flixel::FlxGroup_obj::__new(null());
		HX_STACK_LINE(80)
		::String entitiesCsv = ::openfl::Assets_obj::getText(::Reg_obj::baddies->__GetItem(this->index));		HX_STACK_VAR(entitiesCsv,"entitiesCsv");
		HX_STACK_LINE(81)
		::EReg r = ::EReg_obj::__new(HX_CSTRING("([0-9][\r\n\t])"),HX_CSTRING("g"));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(82)
		::String withCommas = r->replace(entitiesCsv,HX_CSTRING("$1,"));		HX_STACK_VAR(withCommas,"withCommas");
		HX_STACK_LINE(84)
		Array< ::String > entityData = withCommas.split(HX_CSTRING(","));		HX_STACK_VAR(entityData,"entityData");
		HX_STACK_LINE(85)
		int xIndex = (int)0;		HX_STACK_VAR(xIndex,"xIndex");
		HX_STACK_LINE(86)
		int yIndex = (int)0;		HX_STACK_VAR(yIndex,"yIndex");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = entityData->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			while(((_g1 < _g))){
				HX_STACK_LINE(87)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(88)
				if (((xIndex == (this->get__tiles()->widthInTiles - (int)1)))){
					HX_STACK_LINE(88)
					(yIndex)++;
				}
				HX_STACK_LINE(89)
				xIndex = hx::Mod(n,this->get__tiles()->widthInTiles);
				HX_STACK_LINE(90)
				::flash::geom::Point thisDrawPoint = ::flash::geom::Point_obj::__new((xIndex * (int)32),(yIndex * (int)32));		HX_STACK_VAR(thisDrawPoint,"thisDrawPoint");
				HX_STACK_LINE(91)
				if (((entityData->__get(n) == HX_CSTRING("1")))){
					HX_STACK_LINE(91)
					this->get_allBaddies()->add(::entities::KillingEntity_obj::__new(thisDrawPoint->x,thisDrawPoint->y));
				}
				else{
					HX_STACK_LINE(93)
					if (((entityData->__get(n) == HX_CSTRING("2")))){
						HX_STACK_LINE(93)
						this->get_allBaddies()->add(::entities::BouncingEntity_obj::__new(thisDrawPoint->x,thisDrawPoint->y));
					}
					else{
						HX_STACK_LINE(95)
						if (((entityData->__get(n) == HX_CSTRING("3")))){
							HX_STACK_LINE(95)
							this->get_allBaddies()->add(::entities::HorizontalFlipper_obj::__new(thisDrawPoint->x,thisDrawPoint->y));
						}
						else{
							HX_STACK_LINE(97)
							if (((entityData->__get(n) == HX_CSTRING("4")))){
								HX_STACK_LINE(97)
								this->get_allBaddies()->add(::entities::VerticalFlipper_obj::__new(thisDrawPoint->x,thisDrawPoint->y));
							}
							else{
								HX_STACK_LINE(99)
								if (((entityData->__get(n) == HX_CSTRING("5")))){
									HX_STACK_LINE(99)
									this->get_allBaddies()->add(::entities::Spikes_obj::__new(thisDrawPoint->x,(thisDrawPoint->y + (int)20)));
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(103)
		this->add(this->get_allBaddies());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,addBaddies,(void))

Void Room_obj::addCoins( ){
{
		HX_STACK_PUSH("Room::addCoins","Room.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		this->allCoins = ::org::flixel::FlxGroup_obj::__new(null());
		HX_STACK_LINE(59)
		::String entitiesCsv = ::openfl::Assets_obj::getText(::Reg_obj::entities->__GetItem(this->index));		HX_STACK_VAR(entitiesCsv,"entitiesCsv");
		HX_STACK_LINE(60)
		::EReg r = ::EReg_obj::__new(HX_CSTRING("([0-9][\r\n\t])"),HX_CSTRING("g"));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(61)
		::String withCommas = r->replace(entitiesCsv,HX_CSTRING("$1,"));		HX_STACK_VAR(withCommas,"withCommas");
		HX_STACK_LINE(62)
		Array< ::String > entityData = withCommas.split(HX_CSTRING(","));		HX_STACK_VAR(entityData,"entityData");
		HX_STACK_LINE(64)
		int xIndex = (int)0;		HX_STACK_VAR(xIndex,"xIndex");
		HX_STACK_LINE(65)
		int yIndex = (int)0;		HX_STACK_VAR(yIndex,"yIndex");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = entityData->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			while(((_g1 < _g))){
				HX_STACK_LINE(66)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(67)
				if ((((xIndex + (int)1) == this->get__tiles()->widthInTiles))){
					HX_STACK_LINE(67)
					(yIndex)++;
				}
				HX_STACK_LINE(68)
				xIndex = hx::Mod(n,this->get__tiles()->widthInTiles);
				HX_STACK_LINE(70)
				::flash::geom::Point thisDrawPoint = ::flash::geom::Point_obj::__new((xIndex * (int)32),(yIndex * (int)32));		HX_STACK_VAR(thisDrawPoint,"thisDrawPoint");
				HX_STACK_LINE(71)
				if (((entityData->__get(n) == HX_CSTRING("1")))){
					HX_STACK_LINE(71)
					this->get_allCoins()->add(::entities::Coin_obj::__new((thisDrawPoint->x + (int)8),(thisDrawPoint->y + (int)8)));
				}
			}
		}
		HX_STACK_LINE(75)
		this->add(this->get_allCoins());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,addCoins,(void))

Void Room_obj::addItems( ){
{
		HX_STACK_PUSH("Room::addItems","Room.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("adding tiles"));
		HX_STACK_LINE(51)
		this->add(this->_bg);
		HX_STACK_LINE(52)
		this->add(this->get__tiles());
		HX_STACK_LINE(53)
		this->addCoins();
		HX_STACK_LINE(54)
		this->addBaddies();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,addItems,(void))


Room_obj::Room_obj()
{
}

void Room_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Room);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(allBaddies,"allBaddies");
	HX_MARK_MEMBER_NAME(allCoins,"allCoins");
	HX_MARK_MEMBER_NAME(_bg,"_bg");
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Room_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(allBaddies,"allBaddies");
	HX_VISIT_MEMBER_NAME(allCoins,"allCoins");
	HX_VISIT_MEMBER_NAME(_bg,"_bg");
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Room_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_bg") ) { return _bg; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"_tiles") ) { return inCallProp ? get__tiles() : _tiles; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addCoins") ) { return addCoins_dyn(); }
		if (HX_FIELD_EQ(inName,"addItems") ) { return addItems_dyn(); }
		if (HX_FIELD_EQ(inName,"allCoins") ) { return inCallProp ? get_allCoins() : allCoins; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get__tiles") ) { return get__tiles_dyn(); }
		if (HX_FIELD_EQ(inName,"addBaddies") ) { return addBaddies_dyn(); }
		if (HX_FIELD_EQ(inName,"allBaddies") ) { return inCallProp ? get_allBaddies() : allBaddies; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_allCoins") ) { return get_allCoins_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_allBaddies") ) { return get_allBaddies_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Room_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_bg") ) { _bg=inValue.Cast< ::org::flixel::FlxTilemap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast< ::org::flixel::FlxTilemap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allCoins") ) { allCoins=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allBaddies") ) { allBaddies=inValue.Cast< ::org::flixel::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Room_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("allBaddies"));
	outFields->push(HX_CSTRING("allCoins"));
	outFields->push(HX_CSTRING("_bg"));
	outFields->push(HX_CSTRING("_tiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_allBaddies"),
	HX_CSTRING("get_allCoins"),
	HX_CSTRING("get__tiles"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addBaddies"),
	HX_CSTRING("addCoins"),
	HX_CSTRING("addItems"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("index"),
	HX_CSTRING("allBaddies"),
	HX_CSTRING("allCoins"),
	HX_CSTRING("_bg"),
	HX_CSTRING("_tiles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

Class Room_obj::__mClass;

void Room_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Room"), hx::TCanCast< Room_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Room_obj::__boot()
{
}

