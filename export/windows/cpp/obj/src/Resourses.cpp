#include <hxcpp.h>

#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif

Void Resourses_obj::__construct()
{
	return null();
}

Resourses_obj::~Resourses_obj() { }

Dynamic Resourses_obj::__CreateEmpty() { return  new Resourses_obj; }
hx::ObjectPtr< Resourses_obj > Resourses_obj::__new()
{  hx::ObjectPtr< Resourses_obj > result = new Resourses_obj();
	result->__construct();
	return result;}

Dynamic Resourses_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resourses_obj > result = new Resourses_obj();
	result->__construct();
	return result;}

::String Resourses_obj::template_tiles;

::String Resourses_obj::map_1;

::String Resourses_obj::template_entities;

::String Resourses_obj::template_room;

::String Resourses_obj::template_doors;

::String Resourses_obj::player_sprite;

::String Resourses_obj::door;


Resourses_obj::Resourses_obj()
{
}

void Resourses_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resourses);
	HX_MARK_END_CLASS();
}

void Resourses_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Resourses_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"door") ) { return door; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"map_1") ) { return map_1; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"template_room") ) { return template_room; }
		if (HX_FIELD_EQ(inName,"player_sprite") ) { return player_sprite; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"template_tiles") ) { return template_tiles; }
		if (HX_FIELD_EQ(inName,"template_doors") ) { return template_doors; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"template_entities") ) { return template_entities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Resourses_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"door") ) { door=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"map_1") ) { map_1=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"template_room") ) { template_room=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player_sprite") ) { player_sprite=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"template_tiles") ) { template_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"template_doors") ) { template_doors=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"template_entities") ) { template_entities=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Resourses_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("template_tiles"),
	HX_CSTRING("map_1"),
	HX_CSTRING("template_entities"),
	HX_CSTRING("template_room"),
	HX_CSTRING("template_doors"),
	HX_CSTRING("player_sprite"),
	HX_CSTRING("door"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resourses_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_tiles,"template_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_1,"map_1");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_entities,"template_entities");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_room,"template_room");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_doors,"template_doors");
	HX_MARK_MEMBER_NAME(Resourses_obj::player_sprite,"player_sprite");
	HX_MARK_MEMBER_NAME(Resourses_obj::door,"door");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resourses_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_tiles,"template_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_1,"map_1");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_entities,"template_entities");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_room,"template_room");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_doors,"template_doors");
	HX_VISIT_MEMBER_NAME(Resourses_obj::player_sprite,"player_sprite");
	HX_VISIT_MEMBER_NAME(Resourses_obj::door,"door");
};

Class Resourses_obj::__mClass;

void Resourses_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Resourses"), hx::TCanCast< Resourses_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Resourses_obj::__boot()
{
	template_tiles= HX_CSTRING("assets/gfx/template_tiles.png");
	map_1= HX_CSTRING("assets/maps/template/mapCSV_map_1_tiles.csv");
	template_entities= HX_CSTRING("assets/maps/template/mapCSV_template_map_entities.csv");
	template_room= HX_CSTRING("assets/maps/template/mapCSV_template_map_tiles.csv");
	template_doors= HX_CSTRING("assets/maps/template/mapCSV_template_map_doors.csv");
	player_sprite= HX_CSTRING("assets/gfx/platformer_player.png");
	door= HX_CSTRING("assets/gfx/outDoor.png");
}

