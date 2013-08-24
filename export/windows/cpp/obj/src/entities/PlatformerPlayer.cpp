#include <hxcpp.h>

#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_entities_PlatformerPlayer
#include <entities/PlatformerPlayer.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
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
namespace entities{

Void PlatformerPlayer_obj::__construct(int xp,int yp)
{
HX_STACK_PUSH("PlatformerPlayer::new","entities/PlatformerPlayer.hx",16);
{
	HX_STACK_LINE(17)
	super::__construct(xp,yp,null());
	HX_STACK_LINE(18)
	this->loadGraphic(::Resourses_obj::player_sprite,false,false,(int)16,(int)30,null(),null());
	HX_STACK_LINE(19)
	this->maxVelocity = ::org::flixel::util::FlxPoint_obj::__new((int)500,(int)800);
	HX_STACK_LINE(20)
	this->acceleration = ::org::flixel::util::FlxPoint_obj::__new((int)0,(int)500);
	HX_STACK_LINE(21)
	this->drag = ::org::flixel::util::FlxPoint_obj::__new((int)50,(int)50);
	HX_STACK_LINE(22)
	this->onFloor = false;
}
;
	return null();
}

PlatformerPlayer_obj::~PlatformerPlayer_obj() { }

Dynamic PlatformerPlayer_obj::__CreateEmpty() { return  new PlatformerPlayer_obj; }
hx::ObjectPtr< PlatformerPlayer_obj > PlatformerPlayer_obj::__new(int xp,int yp)
{  hx::ObjectPtr< PlatformerPlayer_obj > result = new PlatformerPlayer_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic PlatformerPlayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlatformerPlayer_obj > result = new PlatformerPlayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PlatformerPlayer_obj::keyHandling( ){
{
		HX_STACK_PUSH("PlatformerPlayer::keyHandling","entities/PlatformerPlayer.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("LEFT")))){
			HX_STACK_LINE(35)
			hx::SubEq(this->velocity->x,(int)10);
		}
		HX_STACK_LINE(38)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("RIGHT")))){
			HX_STACK_LINE(38)
			hx::AddEq(this->velocity->x,(int)10);
		}
		HX_STACK_LINE(41)
		if ((this->onFloor)){
			HX_STACK_LINE(41)
			if ((::org::flixel::FlxG_obj::keys->justPressed(HX_CSTRING("UP")))){
				HX_STACK_LINE(43)
				::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("jump"));
				HX_STACK_LINE(44)
				hx::SubEq(this->y,(int)3);
				HX_STACK_LINE(45)
				this->velocity->y = (Float(-(this->maxVelocity->y)) / Float((int)2));
			}
		}
		HX_STACK_LINE(48)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("DOWN")))){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlatformerPlayer_obj,keyHandling,(void))

Void PlatformerPlayer_obj::update( ){
{
		HX_STACK_PUSH("PlatformerPlayer::update","entities/PlatformerPlayer.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->super::update();
		HX_STACK_LINE(31)
		this->keyHandling();
	}
return null();
}


Void PlatformerPlayer_obj::destroy( ){
{
		HX_STACK_PUSH("PlatformerPlayer::destroy","entities/PlatformerPlayer.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_LINE(25)
		this->super::destroy();
	}
return null();
}



PlatformerPlayer_obj::PlatformerPlayer_obj()
{
}

void PlatformerPlayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlatformerPlayer);
	HX_MARK_MEMBER_NAME(onFloor,"onFloor");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlatformerPlayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFloor,"onFloor");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlatformerPlayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFloor") ) { return onFloor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyHandling") ) { return keyHandling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlatformerPlayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onFloor") ) { onFloor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlatformerPlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("onFloor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keyHandling"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onFloor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlatformerPlayer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlatformerPlayer_obj::__mClass,"__mClass");
};

Class PlatformerPlayer_obj::__mClass;

void PlatformerPlayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.PlatformerPlayer"), hx::TCanCast< PlatformerPlayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlatformerPlayer_obj::__boot()
{
}

} // end namespace entities
