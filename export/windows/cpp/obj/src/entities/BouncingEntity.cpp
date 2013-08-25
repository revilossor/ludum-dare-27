#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_entities_BouncingEntity
#include <entities/BouncingEntity.h>
#endif
#ifndef INCLUDED_entities_Entity
#include <entities/Entity.h>
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

Void BouncingEntity_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("BouncingEntity::new","entities/BouncingEntity.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(xp,yp);
	HX_STACK_LINE(14)
	this->loadGraphic(::Resourses_obj::spinnerseeker,true,false,(int)32,(int)32,null(),null());
	HX_STACK_LINE(15)
	this->addAnimation(HX_CSTRING("spin"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)32,null());
	HX_STACK_LINE(16)
	this->play(HX_CSTRING("spin"),null(),null());
	HX_STACK_LINE(17)
	this->type = HX_CSTRING("BouncingEntity");
	HX_STACK_LINE(18)
	this->speed = (int)125;
}
;
	return null();
}

BouncingEntity_obj::~BouncingEntity_obj() { }

Dynamic BouncingEntity_obj::__CreateEmpty() { return  new BouncingEntity_obj; }
hx::ObjectPtr< BouncingEntity_obj > BouncingEntity_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< BouncingEntity_obj > result = new BouncingEntity_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic BouncingEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BouncingEntity_obj > result = new BouncingEntity_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BouncingEntity_obj::update( ){
{
		HX_STACK_PUSH("BouncingEntity::update","entities/BouncingEntity.hx",21);
		HX_STACK_THIS(this);
		HX_STACK_LINE(22)
		this->super::update();
		struct _Function_1_1{
			inline static ::org::flixel::util::FlxPoint Block( ::entities::BouncingEntity_obj *__this){
				HX_STACK_PUSH("*::closure","entities/BouncingEntity.hx",23);
				{
					HX_STACK_LINE(23)
					::org::flixel::util::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(23)
					if (((point == null()))){
						HX_STACK_LINE(23)
						point = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(23)
					point->x = (__this->x + (__this->width * 0.5));
					HX_STACK_LINE(23)
					point->y = (__this->y + (__this->height * 0.5));
					HX_STACK_LINE(23)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		::org::flixel::util::FlxPoint myMidpoint = _Function_1_1::Block(this);		HX_STACK_VAR(myMidpoint,"myMidpoint");
		HX_STACK_LINE(24)
		Float distToPlayer = this->getDistanceBetween(myMidpoint,::Reg_obj::playerPosition);		HX_STACK_VAR(distToPlayer,"distToPlayer");
		HX_STACK_LINE(25)
		if (((distToPlayer < (int)400))){
			HX_STACK_LINE(26)
			::org::flixel::util::FlxPoint seekVect = this->seekAtSpeed(myMidpoint,::Reg_obj::playerPosition,this->speed);		HX_STACK_VAR(seekVect,"seekVect");
			HX_STACK_LINE(27)
			this->velocity->x = seekVect->x;
			HX_STACK_LINE(28)
			this->velocity->y = seekVect->y;
			HX_STACK_LINE(29)
			(this->angle)++;
		}
		else{
			HX_STACK_LINE(31)
			hx::MultEq(this->velocity->x,0.9);
			HX_STACK_LINE(32)
			hx::MultEq(this->velocity->y,0.9);
		}
	}
return null();
}



BouncingEntity_obj::BouncingEntity_obj()
{
}

void BouncingEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BouncingEntity);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BouncingEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BouncingEntity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BouncingEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BouncingEntity_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BouncingEntity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BouncingEntity_obj::__mClass,"__mClass");
};

Class BouncingEntity_obj::__mClass;

void BouncingEntity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.BouncingEntity"), hx::TCanCast< BouncingEntity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BouncingEntity_obj::__boot()
{
}

} // end namespace entities
