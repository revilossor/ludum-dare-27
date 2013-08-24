#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
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
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
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
#ifndef INCLUDED_states_GameOverState
#include <states/GameOverState.h>
#endif
#ifndef INCLUDED_states_PlatformerState
#include <states/PlatformerState.h>
#endif
namespace states{

Void GameOverState_obj::__construct()
{
HX_STACK_PUSH("GameOverState::new","states/GameOverState.hx",18);
{
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

GameOverState_obj::~GameOverState_obj() { }

Dynamic GameOverState_obj::__CreateEmpty() { return  new GameOverState_obj; }
hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__new()
{  hx::ObjectPtr< GameOverState_obj > result = new GameOverState_obj();
	result->__construct();
	return result;}

Dynamic GameOverState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOverState_obj > result = new GameOverState_obj();
	result->__construct();
	return result;}

Void GameOverState_obj::keyHandling( ){
{
		HX_STACK_PUSH("GameOverState::keyHandling","states/GameOverState.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		if ((::org::flixel::FlxG_obj::keys->justPressed(HX_CSTRING("SPACE")))){
			HX_STACK_LINE(42)
			::org::flixel::FlxG_obj::switchState(::states::PlatformerState_obj::__new(::Reg_obj::roomIndex));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameOverState_obj,keyHandling,(void))

Void GameOverState_obj::update( ){
{
		HX_STACK_PUSH("GameOverState::update","states/GameOverState.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		this->super::update();
		HX_STACK_LINE(38)
		this->keyHandling();
	}
return null();
}


Void GameOverState_obj::destroy( ){
{
		HX_STACK_PUSH("GameOverState::destroy","states/GameOverState.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		this->super::destroy();
	}
return null();
}


Void GameOverState_obj::create( ){
{
		HX_STACK_PUSH("GameOverState::create","states/GameOverState.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_LINE(23)
		this->super::create();
		HX_STACK_LINE(24)
		this->goverText = ::org::flixel::FlxText_obj::__new((int)0,(int)100,(int)800,HX_CSTRING("You Ran Out Of Time!"),null(),null(),null());
		HX_STACK_LINE(25)
		this->goverText->setFormat(null(),(int)36,(int)-256,HX_CSTRING("center"),null(),null());
		HX_STACK_LINE(26)
		this->spaceText = ::org::flixel::FlxText_obj::__new((int)0,(int)450,(int)800,HX_CSTRING("press space to retry!"),null(),null(),null());
		HX_STACK_LINE(27)
		this->spaceText->setFormat(null(),(int)24,(int)-256,HX_CSTRING("center"),null(),null());
		HX_STACK_LINE(28)
		this->add(this->goverText);
		HX_STACK_LINE(29)
		this->add(this->spaceText);
	}
return null();
}



GameOverState_obj::GameOverState_obj()
{
}

void GameOverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverState);
	HX_MARK_MEMBER_NAME(spaceText,"spaceText");
	HX_MARK_MEMBER_NAME(goverText,"goverText");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(spaceText,"spaceText");
	HX_VISIT_MEMBER_NAME(goverText,"goverText");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GameOverState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spaceText") ) { return spaceText; }
		if (HX_FIELD_EQ(inName,"goverText") ) { return goverText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyHandling") ) { return keyHandling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOverState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"spaceText") ) { spaceText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"goverText") ) { goverText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("spaceText"));
	outFields->push(HX_CSTRING("goverText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keyHandling"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("spaceText"),
	HX_CSTRING("goverText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

Class GameOverState_obj::__mClass;

void GameOverState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.GameOverState"), hx::TCanCast< GameOverState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameOverState_obj::__boot()
{
}

} // end namespace states
