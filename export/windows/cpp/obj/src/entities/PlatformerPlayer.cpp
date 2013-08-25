#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_entities_PlatformerPlayer
#include <entities/PlatformerPlayer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
HX_STACK_PUSH("PlatformerPlayer::new","entities/PlatformerPlayer.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct(xp,yp,null());
	HX_STACK_LINE(21)
	this->loadGraphic(::Resourses_obj::player_sprite,true,true,(int)16,(int)30,null(),null());
	HX_STACK_LINE(22)
	this->addAnimation(HX_CSTRING("stand"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(23)
	this->addAnimation(HX_CSTRING("run"),Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)2),(int)16,null());
	HX_STACK_LINE(24)
	this->addAnimation(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)4),null(),null());
	HX_STACK_LINE(25)
	this->maxVelocity = ::org::flixel::util::FlxPoint_obj::__new((int)300,(int)900);
	HX_STACK_LINE(26)
	this->acceleration = ::org::flixel::util::FlxPoint_obj::__new((int)0,(int)700);
	HX_STACK_LINE(27)
	this->drag = ::org::flixel::util::FlxPoint_obj::__new((int)100,(int)50);
	HX_STACK_LINE(28)
	this->onFloor = false;
	HX_STACK_LINE(29)
	this->set_forceComplexRender(true);
	HX_STACK_LINE(30)
	this->jumpTimer = (int)10;
	HX_STACK_LINE(31)
	this->play(HX_CSTRING("stand"),null(),null());
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
		HX_STACK_PUSH("PlatformerPlayer::keyHandling","entities/PlatformerPlayer.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("LEFT")))){
			HX_STACK_LINE(46)
			hx::SubEq(this->velocity->x,(int)20);
			HX_STACK_LINE(47)
			this->set_facing((int)1);
		}
		HX_STACK_LINE(49)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("RIGHT")))){
			HX_STACK_LINE(50)
			hx::AddEq(this->velocity->x,(int)20);
			HX_STACK_LINE(51)
			this->set_facing((int)16);
		}
		HX_STACK_LINE(53)
		if ((this->onFloor)){
			HX_STACK_LINE(54)
			this->jumpTimer = (int)10;
			HX_STACK_LINE(55)
			if (((bool(::org::flixel::FlxG_obj::keys->justPressed(HX_CSTRING("UP"))) || bool(::org::flixel::FlxG_obj::keys->justPressed(HX_CSTRING("SPACE")))))){
				HX_STACK_LINE(56)
				::Util_obj::log(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("start jump"));
				HX_STACK_LINE(57)
				hx::SubEq(this->y,(int)3);
				HX_STACK_LINE(58)
				(this->jumpTimer)--;
				HX_STACK_LINE(59)
				this->velocity->y = -(::Math_obj::abs((this->velocity->y * 1.1)));
			}
		}
		HX_STACK_LINE(62)
		if (((bool(((bool(::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("UP"))) || bool(::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("SPACE")))))) && bool((this->jumpTimer > (int)0))))){
			HX_STACK_LINE(63)
			hx::SubEq(this->velocity->y,(int)50);
			HX_STACK_LINE(64)
			(this->jumpTimer)--;
		}
		HX_STACK_LINE(66)
		if (((bool((bool(::org::flixel::FlxG_obj::keys->justReleased(HX_CSTRING("UP"))) || bool(::org::flixel::FlxG_obj::keys->justReleased(HX_CSTRING("SPACE"))))) || bool((this->jumpTimer <= (int)0))))){
			HX_STACK_LINE(66)
			this->isJumping = false;
		}
		HX_STACK_LINE(69)
		if (((this->velocity->y < (int)0))){
			HX_STACK_LINE(69)
			this->play(HX_CSTRING("jump"),null(),null());
		}
		else{
			HX_STACK_LINE(71)
			if (((::Math_obj::abs(this->velocity->x) < (int)20))){
				HX_STACK_LINE(71)
				this->play(HX_CSTRING("stand"),null(),null());
			}
			else{
				HX_STACK_LINE(73)
				this->play(HX_CSTRING("run"),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlatformerPlayer_obj,keyHandling,(void))

Void PlatformerPlayer_obj::update( ){
{
		HX_STACK_PUSH("PlatformerPlayer::update","entities/PlatformerPlayer.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		this->super::update();
		HX_STACK_LINE(40)
		this->keyHandling();
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::entities::PlatformerPlayer_obj *__this){
				HX_STACK_PUSH("*::closure","entities/PlatformerPlayer.hx",41);
				{
					HX_STACK_LINE(41)
					::org::flixel::util::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(41)
					if (((point == null()))){
						HX_STACK_LINE(41)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(41)
					point->x = (__this->x + (__this->width * 0.5));
					HX_STACK_LINE(41)
					point->y = (__this->y + (__this->height * 0.5));
					HX_STACK_LINE(41)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		::Reg_obj::playerPosition = _Function_1_1::Block(this);
	}
return null();
}


Void PlatformerPlayer_obj::destroy( ){
{
		HX_STACK_PUSH("PlatformerPlayer::destroy","entities/PlatformerPlayer.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
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
	HX_MARK_MEMBER_NAME(isJumping,"isJumping");
	HX_MARK_MEMBER_NAME(jumpTimer,"jumpTimer");
	HX_MARK_MEMBER_NAME(onFloor,"onFloor");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlatformerPlayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isJumping,"isJumping");
	HX_VISIT_MEMBER_NAME(jumpTimer,"jumpTimer");
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
	case 9:
		if (HX_FIELD_EQ(inName,"isJumping") ) { return isJumping; }
		if (HX_FIELD_EQ(inName,"jumpTimer") ) { return jumpTimer; }
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
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isJumping") ) { isJumping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpTimer") ) { jumpTimer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlatformerPlayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isJumping"));
	outFields->push(HX_CSTRING("jumpTimer"));
	outFields->push(HX_CSTRING("onFloor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keyHandling"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("isJumping"),
	HX_CSTRING("jumpTimer"),
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
