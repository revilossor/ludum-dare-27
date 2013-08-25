#include <hxcpp.h>

#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_StunningEntity
#include <StunningEntity.h>
#endif
#ifndef INCLUDED_entities_Entity
#include <entities/Entity.h>
#endif
#ifndef INCLUDED_entities_HorizontalFlipper
#include <entities/HorizontalFlipper.h>
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

Void HorizontalFlipper_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("HorizontalFlipper::new","entities/HorizontalFlipper.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(xp,yp);
	HX_STACK_LINE(14)
	this->upVect = ::org::flixel::util::FlxPoint_obj::__new((int)100,(int)0);
	HX_STACK_LINE(15)
	this->downVect = ::org::flixel::util::FlxPoint_obj::__new((int)-100,(int)0);
	HX_STACK_LINE(16)
	this->velocity = this->addEq(this->velocity,this->upVect);
	HX_STACK_LINE(17)
	this->loadGraphic(::Resourses_obj::hflip,true,false,(int)32,(int)32,null(),null());
	HX_STACK_LINE(18)
	this->addAnimation(HX_CSTRING("spin"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)32,null());
	HX_STACK_LINE(19)
	this->play(HX_CSTRING("spin"),null(),null());
}
;
	return null();
}

HorizontalFlipper_obj::~HorizontalFlipper_obj() { }

Dynamic HorizontalFlipper_obj::__CreateEmpty() { return  new HorizontalFlipper_obj; }
hx::ObjectPtr< HorizontalFlipper_obj > HorizontalFlipper_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< HorizontalFlipper_obj > result = new HorizontalFlipper_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic HorizontalFlipper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalFlipper_obj > result = new HorizontalFlipper_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


HorizontalFlipper_obj::HorizontalFlipper_obj()
{
}

void HorizontalFlipper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HorizontalFlipper);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HorizontalFlipper_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic HorizontalFlipper_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic HorizontalFlipper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalFlipper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalFlipper_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalFlipper_obj::__mClass,"__mClass");
};

Class HorizontalFlipper_obj::__mClass;

void HorizontalFlipper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.HorizontalFlipper"), hx::TCanCast< HorizontalFlipper_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HorizontalFlipper_obj::__boot()
{
}

} // end namespace entities
