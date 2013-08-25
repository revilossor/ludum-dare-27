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

::String Resourses_obj::bg_tiles;

::String Resourses_obj::template_entities;

::String Resourses_obj::template_baddies;

::String Resourses_obj::map_1;

::String Resourses_obj::map_1_entities;

::String Resourses_obj::map_1_baddies;

::String Resourses_obj::map_2_tiles;

::String Resourses_obj::map_2_coins;

::String Resourses_obj::map_2_baddies;

::String Resourses_obj::map_3_tiles;

::String Resourses_obj::map_3_coins;

::String Resourses_obj::map_3_baddies;

::String Resourses_obj::map_4_tiles;

::String Resourses_obj::map_4_coins;

::String Resourses_obj::map_4_baddies;

::String Resourses_obj::map_5_tiles;

::String Resourses_obj::map_5_coins;

::String Resourses_obj::map_5_baddies;

::String Resourses_obj::map_6_tiles;

::String Resourses_obj::map_6_coins;

::String Resourses_obj::map_6_baddies;

::String Resourses_obj::map_7_tiles;

::String Resourses_obj::map_7_coins;

::String Resourses_obj::map_7_baddies;

::String Resourses_obj::map_8_tiles;

::String Resourses_obj::map_8_coins;

::String Resourses_obj::map_8_baddies;

::String Resourses_obj::map_9_tiles;

::String Resourses_obj::map_9_coins;

::String Resourses_obj::map_9_baddies;

::String Resourses_obj::template_map_bg;

::String Resourses_obj::map_1_bg;

::String Resourses_obj::map_2_bg;

::String Resourses_obj::map_3_bg;

::String Resourses_obj::map_4_bg;

::String Resourses_obj::map_5_bg;

::String Resourses_obj::map_6_bg;

::String Resourses_obj::map_7_bg;

::String Resourses_obj::map_8_bg;

::String Resourses_obj::map_9_bg;

::String Resourses_obj::template_room;

::String Resourses_obj::template_doors;

::String Resourses_obj::door;

::String Resourses_obj::coin;

::String Resourses_obj::spikes;

::String Resourses_obj::horizontalkiller;

::String Resourses_obj::spinnerseeker;

::String Resourses_obj::hflip;

::String Resourses_obj::vflip;

::String Resourses_obj::player_sprite;

::String Resourses_obj::tpp;


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
	case 3:
		if (HX_FIELD_EQ(inName,"tpp") ) { return tpp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"door") ) { return door; }
		if (HX_FIELD_EQ(inName,"coin") ) { return coin; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"map_1") ) { return map_1; }
		if (HX_FIELD_EQ(inName,"hflip") ) { return hflip; }
		if (HX_FIELD_EQ(inName,"vflip") ) { return vflip; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spikes") ) { return spikes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bg_tiles") ) { return bg_tiles; }
		if (HX_FIELD_EQ(inName,"map_1_bg") ) { return map_1_bg; }
		if (HX_FIELD_EQ(inName,"map_2_bg") ) { return map_2_bg; }
		if (HX_FIELD_EQ(inName,"map_3_bg") ) { return map_3_bg; }
		if (HX_FIELD_EQ(inName,"map_4_bg") ) { return map_4_bg; }
		if (HX_FIELD_EQ(inName,"map_5_bg") ) { return map_5_bg; }
		if (HX_FIELD_EQ(inName,"map_6_bg") ) { return map_6_bg; }
		if (HX_FIELD_EQ(inName,"map_7_bg") ) { return map_7_bg; }
		if (HX_FIELD_EQ(inName,"map_8_bg") ) { return map_8_bg; }
		if (HX_FIELD_EQ(inName,"map_9_bg") ) { return map_9_bg; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"map_2_tiles") ) { return map_2_tiles; }
		if (HX_FIELD_EQ(inName,"map_2_coins") ) { return map_2_coins; }
		if (HX_FIELD_EQ(inName,"map_3_tiles") ) { return map_3_tiles; }
		if (HX_FIELD_EQ(inName,"map_3_coins") ) { return map_3_coins; }
		if (HX_FIELD_EQ(inName,"map_4_tiles") ) { return map_4_tiles; }
		if (HX_FIELD_EQ(inName,"map_4_coins") ) { return map_4_coins; }
		if (HX_FIELD_EQ(inName,"map_5_tiles") ) { return map_5_tiles; }
		if (HX_FIELD_EQ(inName,"map_5_coins") ) { return map_5_coins; }
		if (HX_FIELD_EQ(inName,"map_6_tiles") ) { return map_6_tiles; }
		if (HX_FIELD_EQ(inName,"map_6_coins") ) { return map_6_coins; }
		if (HX_FIELD_EQ(inName,"map_7_tiles") ) { return map_7_tiles; }
		if (HX_FIELD_EQ(inName,"map_7_coins") ) { return map_7_coins; }
		if (HX_FIELD_EQ(inName,"map_8_tiles") ) { return map_8_tiles; }
		if (HX_FIELD_EQ(inName,"map_8_coins") ) { return map_8_coins; }
		if (HX_FIELD_EQ(inName,"map_9_tiles") ) { return map_9_tiles; }
		if (HX_FIELD_EQ(inName,"map_9_coins") ) { return map_9_coins; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"map_1_baddies") ) { return map_1_baddies; }
		if (HX_FIELD_EQ(inName,"map_2_baddies") ) { return map_2_baddies; }
		if (HX_FIELD_EQ(inName,"map_3_baddies") ) { return map_3_baddies; }
		if (HX_FIELD_EQ(inName,"map_4_baddies") ) { return map_4_baddies; }
		if (HX_FIELD_EQ(inName,"map_5_baddies") ) { return map_5_baddies; }
		if (HX_FIELD_EQ(inName,"map_6_baddies") ) { return map_6_baddies; }
		if (HX_FIELD_EQ(inName,"map_7_baddies") ) { return map_7_baddies; }
		if (HX_FIELD_EQ(inName,"map_8_baddies") ) { return map_8_baddies; }
		if (HX_FIELD_EQ(inName,"map_9_baddies") ) { return map_9_baddies; }
		if (HX_FIELD_EQ(inName,"template_room") ) { return template_room; }
		if (HX_FIELD_EQ(inName,"spinnerseeker") ) { return spinnerseeker; }
		if (HX_FIELD_EQ(inName,"player_sprite") ) { return player_sprite; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"template_tiles") ) { return template_tiles; }
		if (HX_FIELD_EQ(inName,"map_1_entities") ) { return map_1_entities; }
		if (HX_FIELD_EQ(inName,"template_doors") ) { return template_doors; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"template_map_bg") ) { return template_map_bg; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"template_baddies") ) { return template_baddies; }
		if (HX_FIELD_EQ(inName,"horizontalkiller") ) { return horizontalkiller; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"template_entities") ) { return template_entities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Resourses_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tpp") ) { tpp=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"door") ) { door=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coin") ) { coin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"map_1") ) { map_1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hflip") ) { hflip=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vflip") ) { vflip=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"spikes") ) { spikes=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bg_tiles") ) { bg_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_1_bg") ) { map_1_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_2_bg") ) { map_2_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_3_bg") ) { map_3_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_4_bg") ) { map_4_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_5_bg") ) { map_5_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_6_bg") ) { map_6_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_7_bg") ) { map_7_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_8_bg") ) { map_8_bg=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_9_bg") ) { map_9_bg=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"map_2_tiles") ) { map_2_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_2_coins") ) { map_2_coins=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_3_tiles") ) { map_3_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_3_coins") ) { map_3_coins=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_4_tiles") ) { map_4_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_4_coins") ) { map_4_coins=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_5_tiles") ) { map_5_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_5_coins") ) { map_5_coins=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_6_tiles") ) { map_6_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_6_coins") ) { map_6_coins=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_7_tiles") ) { map_7_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_7_coins") ) { map_7_coins=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_8_tiles") ) { map_8_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_8_coins") ) { map_8_coins=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_9_tiles") ) { map_9_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_9_coins") ) { map_9_coins=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"map_1_baddies") ) { map_1_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_2_baddies") ) { map_2_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_3_baddies") ) { map_3_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_4_baddies") ) { map_4_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_5_baddies") ) { map_5_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_6_baddies") ) { map_6_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_7_baddies") ) { map_7_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_8_baddies") ) { map_8_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_9_baddies") ) { map_9_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"template_room") ) { template_room=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spinnerseeker") ) { spinnerseeker=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player_sprite") ) { player_sprite=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"template_tiles") ) { template_tiles=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map_1_entities") ) { map_1_entities=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"template_doors") ) { template_doors=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"template_map_bg") ) { template_map_bg=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"template_baddies") ) { template_baddies=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontalkiller") ) { horizontalkiller=inValue.Cast< ::String >(); return inValue; }
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
	HX_CSTRING("bg_tiles"),
	HX_CSTRING("template_entities"),
	HX_CSTRING("template_baddies"),
	HX_CSTRING("map_1"),
	HX_CSTRING("map_1_entities"),
	HX_CSTRING("map_1_baddies"),
	HX_CSTRING("map_2_tiles"),
	HX_CSTRING("map_2_coins"),
	HX_CSTRING("map_2_baddies"),
	HX_CSTRING("map_3_tiles"),
	HX_CSTRING("map_3_coins"),
	HX_CSTRING("map_3_baddies"),
	HX_CSTRING("map_4_tiles"),
	HX_CSTRING("map_4_coins"),
	HX_CSTRING("map_4_baddies"),
	HX_CSTRING("map_5_tiles"),
	HX_CSTRING("map_5_coins"),
	HX_CSTRING("map_5_baddies"),
	HX_CSTRING("map_6_tiles"),
	HX_CSTRING("map_6_coins"),
	HX_CSTRING("map_6_baddies"),
	HX_CSTRING("map_7_tiles"),
	HX_CSTRING("map_7_coins"),
	HX_CSTRING("map_7_baddies"),
	HX_CSTRING("map_8_tiles"),
	HX_CSTRING("map_8_coins"),
	HX_CSTRING("map_8_baddies"),
	HX_CSTRING("map_9_tiles"),
	HX_CSTRING("map_9_coins"),
	HX_CSTRING("map_9_baddies"),
	HX_CSTRING("template_map_bg"),
	HX_CSTRING("map_1_bg"),
	HX_CSTRING("map_2_bg"),
	HX_CSTRING("map_3_bg"),
	HX_CSTRING("map_4_bg"),
	HX_CSTRING("map_5_bg"),
	HX_CSTRING("map_6_bg"),
	HX_CSTRING("map_7_bg"),
	HX_CSTRING("map_8_bg"),
	HX_CSTRING("map_9_bg"),
	HX_CSTRING("template_room"),
	HX_CSTRING("template_doors"),
	HX_CSTRING("door"),
	HX_CSTRING("coin"),
	HX_CSTRING("spikes"),
	HX_CSTRING("horizontalkiller"),
	HX_CSTRING("spinnerseeker"),
	HX_CSTRING("hflip"),
	HX_CSTRING("vflip"),
	HX_CSTRING("player_sprite"),
	HX_CSTRING("tpp"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resourses_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_tiles,"template_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::bg_tiles,"bg_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_entities,"template_entities");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_baddies,"template_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_1,"map_1");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_1_entities,"map_1_entities");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_1_baddies,"map_1_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_2_tiles,"map_2_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_2_coins,"map_2_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_2_baddies,"map_2_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_3_tiles,"map_3_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_3_coins,"map_3_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_3_baddies,"map_3_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_4_tiles,"map_4_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_4_coins,"map_4_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_4_baddies,"map_4_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_5_tiles,"map_5_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_5_coins,"map_5_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_5_baddies,"map_5_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_6_tiles,"map_6_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_6_coins,"map_6_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_6_baddies,"map_6_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_7_tiles,"map_7_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_7_coins,"map_7_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_7_baddies,"map_7_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_8_tiles,"map_8_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_8_coins,"map_8_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_8_baddies,"map_8_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_9_tiles,"map_9_tiles");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_9_coins,"map_9_coins");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_9_baddies,"map_9_baddies");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_map_bg,"template_map_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_1_bg,"map_1_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_2_bg,"map_2_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_3_bg,"map_3_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_4_bg,"map_4_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_5_bg,"map_5_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_6_bg,"map_6_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_7_bg,"map_7_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_8_bg,"map_8_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::map_9_bg,"map_9_bg");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_room,"template_room");
	HX_MARK_MEMBER_NAME(Resourses_obj::template_doors,"template_doors");
	HX_MARK_MEMBER_NAME(Resourses_obj::door,"door");
	HX_MARK_MEMBER_NAME(Resourses_obj::coin,"coin");
	HX_MARK_MEMBER_NAME(Resourses_obj::spikes,"spikes");
	HX_MARK_MEMBER_NAME(Resourses_obj::horizontalkiller,"horizontalkiller");
	HX_MARK_MEMBER_NAME(Resourses_obj::spinnerseeker,"spinnerseeker");
	HX_MARK_MEMBER_NAME(Resourses_obj::hflip,"hflip");
	HX_MARK_MEMBER_NAME(Resourses_obj::vflip,"vflip");
	HX_MARK_MEMBER_NAME(Resourses_obj::player_sprite,"player_sprite");
	HX_MARK_MEMBER_NAME(Resourses_obj::tpp,"tpp");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resourses_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_tiles,"template_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::bg_tiles,"bg_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_entities,"template_entities");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_baddies,"template_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_1,"map_1");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_1_entities,"map_1_entities");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_1_baddies,"map_1_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_2_tiles,"map_2_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_2_coins,"map_2_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_2_baddies,"map_2_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_3_tiles,"map_3_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_3_coins,"map_3_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_3_baddies,"map_3_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_4_tiles,"map_4_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_4_coins,"map_4_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_4_baddies,"map_4_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_5_tiles,"map_5_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_5_coins,"map_5_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_5_baddies,"map_5_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_6_tiles,"map_6_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_6_coins,"map_6_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_6_baddies,"map_6_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_7_tiles,"map_7_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_7_coins,"map_7_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_7_baddies,"map_7_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_8_tiles,"map_8_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_8_coins,"map_8_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_8_baddies,"map_8_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_9_tiles,"map_9_tiles");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_9_coins,"map_9_coins");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_9_baddies,"map_9_baddies");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_map_bg,"template_map_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_1_bg,"map_1_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_2_bg,"map_2_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_3_bg,"map_3_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_4_bg,"map_4_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_5_bg,"map_5_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_6_bg,"map_6_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_7_bg,"map_7_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_8_bg,"map_8_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::map_9_bg,"map_9_bg");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_room,"template_room");
	HX_VISIT_MEMBER_NAME(Resourses_obj::template_doors,"template_doors");
	HX_VISIT_MEMBER_NAME(Resourses_obj::door,"door");
	HX_VISIT_MEMBER_NAME(Resourses_obj::coin,"coin");
	HX_VISIT_MEMBER_NAME(Resourses_obj::spikes,"spikes");
	HX_VISIT_MEMBER_NAME(Resourses_obj::horizontalkiller,"horizontalkiller");
	HX_VISIT_MEMBER_NAME(Resourses_obj::spinnerseeker,"spinnerseeker");
	HX_VISIT_MEMBER_NAME(Resourses_obj::hflip,"hflip");
	HX_VISIT_MEMBER_NAME(Resourses_obj::vflip,"vflip");
	HX_VISIT_MEMBER_NAME(Resourses_obj::player_sprite,"player_sprite");
	HX_VISIT_MEMBER_NAME(Resourses_obj::tpp,"tpp");
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
	bg_tiles= HX_CSTRING("assets/gfx/bg_tile.png");
	template_entities= HX_CSTRING("assets/maps/template/mapCSV_template_map_entities.csv");
	template_baddies= HX_CSTRING("assets/maps/template/mapCSV_template_map_baddies.csv");
	map_1= HX_CSTRING("assets/maps/template/mapCSV_map_1_tiles.csv");
	map_1_entities= HX_CSTRING("assets/maps/template/mapCSV_map_1_entities.csv");
	map_1_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_1_baddies.csv");
	map_2_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_2_tiles.csv");
	map_2_coins= HX_CSTRING("assets/maps/template/mapCSV_map_2_entities.csv");
	map_2_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_2_baddies.csv");
	map_3_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_3_tiles.csv");
	map_3_coins= HX_CSTRING("assets/maps/template/mapCSV_map_3_entities.csv");
	map_3_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_3_baddies.csv");
	map_4_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_4_tiles.csv");
	map_4_coins= HX_CSTRING("assets/maps/template/mapCSV_map_4_entities.csv");
	map_4_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_4_baddies.csv");
	map_5_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_5_tiles.csv");
	map_5_coins= HX_CSTRING("assets/maps/template/mapCSV_map_5_entities.csv");
	map_5_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_5_baddies.csv");
	map_6_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_6_tiles.csv");
	map_6_coins= HX_CSTRING("assets/maps/template/mapCSV_map_6_entities.csv");
	map_6_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_6_baddies.csv");
	map_7_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_7_tiles.csv");
	map_7_coins= HX_CSTRING("assets/maps/template/mapCSV_map_7_entities.csv");
	map_7_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_7_baddies.csv");
	map_8_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_8_tiles.csv");
	map_8_coins= HX_CSTRING("assets/maps/template/mapCSV_map_8_entities.csv");
	map_8_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_8_baddies.csv");
	map_9_tiles= HX_CSTRING("assets/maps/template/mapCSV_map_9_tiles.csv");
	map_9_coins= HX_CSTRING("assets/maps/template/mapCSV_map_9_entities.csv");
	map_9_baddies= HX_CSTRING("assets/maps/template/mapCSV_map_9_baddies.csv");
	template_map_bg= HX_CSTRING("assets/maps/template/mapCSV_template_map_bg.csv");
	map_1_bg= HX_CSTRING("assets/maps/template/mapCSV_map_1_bg.csv");
	map_2_bg= HX_CSTRING("assets/maps/template/mapCSV_map_2_bg.csv");
	map_3_bg= HX_CSTRING("assets/maps/template/mapCSV_map_3_bg.csv");
	map_4_bg= HX_CSTRING("assets/maps/template/mapCSV_map_4_bg.csv");
	map_5_bg= HX_CSTRING("assets/maps/template/mapCSV_map_5_bg.csv");
	map_6_bg= HX_CSTRING("assets/maps/template/mapCSV_map_6_bg.csv");
	map_7_bg= HX_CSTRING("assets/maps/template/mapCSV_map_7_bg.csv");
	map_8_bg= HX_CSTRING("assets/maps/template/mapCSV_map_8_bg.csv");
	map_9_bg= HX_CSTRING("assets/maps/template/mapCSV_map_9_bg.csv");
	template_room= HX_CSTRING("assets/maps/template/mapCSV_template_map_tiles.csv");
	template_doors= HX_CSTRING("assets/maps/template/mapCSV_template_map_doors.csv");
	door= HX_CSTRING("assets/gfx/outDoor.png");
	coin= HX_CSTRING("assets/gfx/coin.png");
	spikes= HX_CSTRING("assets/gfx/spikes.png");
	horizontalkiller= HX_CSTRING("assets/gfx/horizontalkiller.png");
	spinnerseeker= HX_CSTRING("assets/gfx/sponnerkiller.png");
	hflip= HX_CSTRING("assets/gfx/horizkiller.png");
	vflip= HX_CSTRING("assets/gfx/vertkiller.png");
	player_sprite= HX_CSTRING("assets/gfx/player.png");
	tpp= HX_CSTRING("assets/gfx/time++.png");
}

