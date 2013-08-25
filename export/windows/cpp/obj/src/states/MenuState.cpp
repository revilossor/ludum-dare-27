#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
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
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_PlatformerState
#include <states/PlatformerState.h>
#endif
namespace states{

Void MenuState_obj::__construct()
{
HX_STACK_PUSH("MenuState::new","states/MenuState.hx",16);
{
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new()
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct();
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct();
	return result;}

Void MenuState_obj::keyHandling( ){
{
		HX_STACK_PUSH("MenuState::keyHandling","states/MenuState.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		if ((::org::flixel::FlxG_obj::keys->justReleased(HX_CSTRING("SPACE")))){
			HX_STACK_LINE(47)
			::org::flixel::FlxG_obj::switchState(::states::PlatformerState_obj::__new(null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,keyHandling,(void))

Void MenuState_obj::update( ){
{
		HX_STACK_PUSH("MenuState::update","states/MenuState.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		this->keyHandling();
		HX_STACK_LINE(43)
		this->super::update();
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_PUSH("MenuState::destroy","states/MenuState.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		this->_pressSpaceText = null();
		HX_STACK_LINE(38)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::addItems( ){
{
		HX_STACK_PUSH("MenuState::addItems","states/MenuState.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		this->add(this->_pressSpaceText);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,addItems,(void))

Void MenuState_obj::create( ){
{
		HX_STACK_PUSH("MenuState::create","states/MenuState.hx",21);
		HX_STACK_THIS(this);
		HX_STACK_LINE(22)
		::org::flixel::FlxG_obj::set_bgColor((int)267386880);
		HX_STACK_LINE(23)
		::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("init"));
		HX_STACK_LINE(24)
		::org::flixel::FlxG_obj::mouse->set_useSystemCursor(true);
		HX_STACK_LINE(25)
		::Reg_obj::roomIndex = (int)0;
		HX_STACK_LINE(26)
		this->_pressSpaceText = ::org::flixel::FlxText_obj::__new((int)0,(int)400,(int)800,HX_CSTRING("Press Space To Play"),(int)36,null(),null());
		HX_STACK_LINE(27)
		this->_pressSpaceText->setFormat(null(),(int)36,(int)-65281,HX_CSTRING("center"),null(),null());
		HX_STACK_LINE(28)
		this->addItems();
		HX_STACK_LINE(29)
		this->super::create();
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_pressSpaceText,"_pressSpaceText");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pressSpaceText,"_pressSpaceText");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addItems") ) { return addItems_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyHandling") ) { return keyHandling_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_pressSpaceText") ) { return _pressSpaceText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_pressSpaceText") ) { _pressSpaceText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pressSpaceText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keyHandling"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addItems"),
	HX_CSTRING("create"),
	HX_CSTRING("_pressSpaceText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MenuState_obj::__boot()
{
}

} // end namespace states
