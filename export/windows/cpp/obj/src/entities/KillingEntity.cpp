#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_entities_Entity
#include <entities/Entity.h>
#endif
#ifndef INCLUDED_entities_KillingEntity
#include <entities/KillingEntity.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace entities{

Void KillingEntity_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("KillingEntity::new","entities/KillingEntity.hx",15);
{
	HX_STACK_LINE(16)
	super::__construct(xp,yp);
	HX_STACK_LINE(17)
	this->loadGraphic(::Resourses_obj::horizontalkiller,true,true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(18)
	this->addAnimation(HX_CSTRING("hunt"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)8,null());
	HX_STACK_LINE(19)
	this->addAnimation(HX_CSTRING("idle"),Array_obj< int >::__new().Add((int)0),null(),null());
	HX_STACK_LINE(20)
	this->play(HX_CSTRING("idle"),null(),null());
	HX_STACK_LINE(21)
	this->type = HX_CSTRING("KillingEntity");
	HX_STACK_LINE(22)
	this->speed = (int)150;
	HX_STACK_LINE(23)
	this->acceleration = ::org::flixel::util::FlxPoint_obj::__new((int)0,(int)500);
}
;
	return null();
}

KillingEntity_obj::~KillingEntity_obj() { }

Dynamic KillingEntity_obj::__CreateEmpty() { return  new KillingEntity_obj; }
hx::ObjectPtr< KillingEntity_obj > KillingEntity_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< KillingEntity_obj > result = new KillingEntity_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic KillingEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KillingEntity_obj > result = new KillingEntity_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void KillingEntity_obj::update( ){
{
		HX_STACK_PUSH("KillingEntity::update","entities/KillingEntity.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_LINE(28)
		this->super::update();
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::entities::KillingEntity_obj *__this){
				HX_STACK_PUSH("*::closure","entities/KillingEntity.hx",29);
				{
					HX_STACK_LINE(29)
					::org::flixel::util::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(29)
					if (((point == null()))){
						HX_STACK_LINE(29)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(29)
					point->x = (__this->x + (__this->width * 0.5));
					HX_STACK_LINE(29)
					point->y = (__this->y + (__this->height * 0.5));
					HX_STACK_LINE(29)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		::org::flixel::util::FlxPoint myMidpoint = _Function_1_1::Block(this);		HX_STACK_VAR(myMidpoint,"myMidpoint");
		HX_STACK_LINE(30)
		Float distToPlayer = this->getDistanceBetween(myMidpoint,::Reg_obj::playerPosition);		HX_STACK_VAR(distToPlayer,"distToPlayer");
		HX_STACK_LINE(31)
		if (((distToPlayer < (int)200))){
			HX_STACK_LINE(32)
			::org::flixel::util::FlxPoint seekVect = this->seekAtSpeed(myMidpoint,::Reg_obj::playerPosition,this->speed);		HX_STACK_VAR(seekVect,"seekVect");
			HX_STACK_LINE(33)
			this->velocity->x = seekVect->x;
			HX_STACK_LINE(34)
			if (((seekVect->x < (int)0))){
				HX_STACK_LINE(35)
				::haxe::Log_obj::trace(HX_CSTRING("left"),hx::SourceInfo(HX_CSTRING("KillingEntity.hx"),35,HX_CSTRING("entities.KillingEntity"),HX_CSTRING("update")));
				HX_STACK_LINE(36)
				this->set_facing((int)16);
			}
			else{
				HX_STACK_LINE(37)
				if (((seekVect->x > (int)0))){
					HX_STACK_LINE(38)
					::haxe::Log_obj::trace(HX_CSTRING("right"),hx::SourceInfo(HX_CSTRING("KillingEntity.hx"),38,HX_CSTRING("entities.KillingEntity"),HX_CSTRING("update")));
					HX_STACK_LINE(39)
					this->set_facing((int)1);
				}
			}
			HX_STACK_LINE(41)
			this->play(HX_CSTRING("hunt"),null(),null());
		}
		else{
			HX_STACK_LINE(43)
			this->play(HX_CSTRING("idle"),null(),null());
			HX_STACK_LINE(44)
			hx::MultEq(this->velocity->x,0.9);
		}
	}
return null();
}



KillingEntity_obj::KillingEntity_obj()
{
}

void KillingEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KillingEntity);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KillingEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic KillingEntity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KillingEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KillingEntity_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KillingEntity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KillingEntity_obj::__mClass,"__mClass");
};

Class KillingEntity_obj::__mClass;

void KillingEntity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.KillingEntity"), hx::TCanCast< KillingEntity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KillingEntity_obj::__boot()
{
}

} // end namespace entities
