#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
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

Void MenuState_obj::update( ){
{
		HX_STACK_PUSH("MenuState::update","states/MenuState.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->super::update();
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_PUSH("MenuState::destroy","states/MenuState.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::create( ){
{
		HX_STACK_PUSH("MenuState::create","states/MenuState.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_LINE(20)
		::org::flixel::FlxG_obj::set_bgColor((int)-65281);
		HX_STACK_LINE(21)
		::haxe::Log_obj::trace(HX_CSTRING("init"),hx::SourceInfo(HX_CSTRING("MenuState.hx"),21,HX_CSTRING("states.MenuState"),HX_CSTRING("create")));
		HX_STACK_LINE(22)
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
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
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
