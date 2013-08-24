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
#ifndef INCLUDED_Util
#include <Util.h>
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
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif

Void Room_obj::__construct(hx::Null< int >  __o_i)
{
HX_STACK_PUSH("Room::new","Room.hx",23);
int i = __o_i.Default(0);
{
	HX_STACK_LINE(24)
	super::__construct(null());
	HX_STACK_LINE(25)
	this->index = i;
	HX_STACK_LINE(26)
	this->_tiles = ::org::flixel::FlxTilemap_obj::__new();
	HX_STACK_LINE(27)
	this->get__tiles()->loadMap(::openfl::Assets_obj::getText(::Reg_obj::levels->__GetItem(this->index)),::Resourses_obj::template_tiles,(int)32,(int)32,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(28)
	this->addItems();
	HX_STACK_LINE(29)
	this->width = this->get__tiles()->width;
	HX_STACK_LINE(30)
	this->height = this->get__tiles()->height;
	HX_STACK_LINE(31)
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
	HX_STACK_PUSH("Room::get_height","Room.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get_height,return )

Float Room_obj::get_width( ){
	HX_STACK_PUSH("Room::get_width","Room.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get_width,return )

::org::flixel::FlxTilemap Room_obj::get__tiles( ){
	HX_STACK_PUSH("Room::get__tiles","Room.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->_tiles;
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,get__tiles,return )

Void Room_obj::update( ){
{
		HX_STACK_PUSH("Room::update","Room.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		this->super::update();
	}
return null();
}


Void Room_obj::destroy( ){
{
		HX_STACK_PUSH("Room::destroy","Room.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(40)
		this->super::destroy();
	}
return null();
}


Void Room_obj::addItems( ){
{
		HX_STACK_PUSH("Room::addItems","Room.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("adding tiles"));
		HX_STACK_LINE(37)
		this->add(this->get__tiles());
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
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Room_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Room_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
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
		if (HX_FIELD_EQ(inName,"addItems") ) { return addItems_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get__tiles") ) { return get__tiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Room_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast< ::org::flixel::FlxTilemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Room_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("_tiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get__tiles"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addItems"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("index"),
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

