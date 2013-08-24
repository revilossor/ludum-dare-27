#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSave
#include <org/flixel/FlxSave.h>
#endif

Void Reg_obj::__construct()
{
	return null();
}

Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Dynamic Reg_obj::levels;

int Reg_obj::level;

Dynamic Reg_obj::scores;

int Reg_obj::score;

Array< ::Dynamic > Reg_obj::saves;

::org::flixel::FlxSave Reg_obj::save;

Array< ::Dynamic > Reg_obj::startPositions;

Array< ::Dynamic > Reg_obj::doorPositions;

int Reg_obj::roomIndex;


Reg_obj::Reg_obj()
{
}

void Reg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reg);
	HX_MARK_END_CLASS();
}

void Reg_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Reg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return save; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"saves") ) { return saves; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { return levels; }
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"roomIndex") ) { return roomIndex; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doorPositions") ) { return doorPositions; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startPositions") ) { return startPositions; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast< ::org::flixel::FlxSave >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"saves") ) { saves=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { levels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"roomIndex") ) { roomIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doorPositions") ) { doorPositions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startPositions") ) { startPositions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reg_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("levels"),
	HX_CSTRING("level"),
	HX_CSTRING("scores"),
	HX_CSTRING("score"),
	HX_CSTRING("saves"),
	HX_CSTRING("save"),
	HX_CSTRING("startPositions"),
	HX_CSTRING("doorPositions"),
	HX_CSTRING("roomIndex"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_MARK_MEMBER_NAME(Reg_obj::level,"level");
	HX_MARK_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_MARK_MEMBER_NAME(Reg_obj::score,"score");
	HX_MARK_MEMBER_NAME(Reg_obj::saves,"saves");
	HX_MARK_MEMBER_NAME(Reg_obj::save,"save");
	HX_MARK_MEMBER_NAME(Reg_obj::startPositions,"startPositions");
	HX_MARK_MEMBER_NAME(Reg_obj::doorPositions,"doorPositions");
	HX_MARK_MEMBER_NAME(Reg_obj::roomIndex,"roomIndex");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_VISIT_MEMBER_NAME(Reg_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_VISIT_MEMBER_NAME(Reg_obj::score,"score");
	HX_VISIT_MEMBER_NAME(Reg_obj::saves,"saves");
	HX_VISIT_MEMBER_NAME(Reg_obj::save,"save");
	HX_VISIT_MEMBER_NAME(Reg_obj::startPositions,"startPositions");
	HX_VISIT_MEMBER_NAME(Reg_obj::doorPositions,"doorPositions");
	HX_VISIT_MEMBER_NAME(Reg_obj::roomIndex,"roomIndex");
};

Class Reg_obj::__mClass;

void Reg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reg"), hx::TCanCast< Reg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Reg_obj::__boot()
{
	levels= Dynamic( Array_obj<Dynamic>::__new().Add(::Resourses_obj::template_room).Add(::Resourses_obj::map_1));
	level= (int)0;
	scores= Dynamic( Array_obj<Dynamic>::__new());
	score= (int)0;
	saves= Array_obj< ::Dynamic >::__new();
	startPositions= Array_obj< ::Dynamic >::__new().Add(::flash::geom::Point_obj::__new((int)193,(int)609)).Add(::flash::geom::Point_obj::__new((int)99,(int)257));
	doorPositions= Array_obj< ::Dynamic >::__new().Add(::flash::geom::Point_obj::__new((int)1280,(int)672)).Add(::flash::geom::Point_obj::__new((int)801,(int)257));
	roomIndex= (int)0;
}

