#include <hxcpp.h>

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
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_WinState
#include <states/WinState.h>
#endif
namespace states{

Void WinState_obj::__construct()
{
HX_STACK_PUSH("WinState::new","states/WinState.hx",10);
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

WinState_obj::~WinState_obj() { }

Dynamic WinState_obj::__CreateEmpty() { return  new WinState_obj; }
hx::ObjectPtr< WinState_obj > WinState_obj::__new()
{  hx::ObjectPtr< WinState_obj > result = new WinState_obj();
	result->__construct();
	return result;}

Dynamic WinState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WinState_obj > result = new WinState_obj();
	result->__construct();
	return result;}

Void WinState_obj::keyHandling( ){
{
		HX_STACK_PUSH("WinState::keyHandling","states/WinState.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		if ((::org::flixel::FlxG_obj::keys->justReleased(HX_CSTRING("SPACE")))){
			HX_STACK_LINE(33)
			::org::flixel::FlxG_obj::switchState(::states::MenuState_obj::__new());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WinState_obj,keyHandling,(void))

Void WinState_obj::update( ){
{
		HX_STACK_PUSH("WinState::update","states/WinState.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_LINE(28)
		this->super::update();
		HX_STACK_LINE(29)
		this->keyHandling();
	}
return null();
}


Void WinState_obj::destroy( ){
{
		HX_STACK_PUSH("WinState::destroy","states/WinState.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_LINE(23)
		this->super::destroy();
	}
return null();
}


Void WinState_obj::create( ){
{
		HX_STACK_PUSH("WinState::create","states/WinState.hx",16);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17)
		this->super::create();
		HX_STACK_LINE(18)
		this->winText = ::org::flixel::FlxText_obj::__new((int)0,(int)200,(int)800,HX_CSTRING("you win! \n press space to start again!"),null(),null(),null());
		HX_STACK_LINE(19)
		this->winText->setFormat(null(),(int)36,(int)-256,HX_CSTRING("center"),null(),null());
		HX_STACK_LINE(20)
		this->add(this->winText);
	}
return null();
}



WinState_obj::WinState_obj()
{
}

void WinState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WinState);
	HX_MARK_MEMBER_NAME(winText,"winText");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WinState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(winText,"winText");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic WinState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"winText") ) { return winText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyHandling") ) { return keyHandling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WinState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"winText") ) { winText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WinState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("winText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keyHandling"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("winText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WinState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WinState_obj::__mClass,"__mClass");
};

Class WinState_obj::__mClass;

void WinState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.WinState"), hx::TCanCast< WinState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void WinState_obj::__boot()
{
}

} // end namespace states
