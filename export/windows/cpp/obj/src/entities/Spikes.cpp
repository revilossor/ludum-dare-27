#include <hxcpp.h>

#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_entities_Spikes
#include <entities/Spikes.h>
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
namespace entities{

Void Spikes_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("Spikes::new","entities/Spikes.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct(xp,yp,null());
	HX_STACK_LINE(16)
	this->loadGraphic(::Resourses_obj::spikes,false,false,(int)32,(int)12,null(),null());
	HX_STACK_LINE(17)
	this->immovable = true;
	HX_STACK_LINE(18)
	this->type = HX_CSTRING("spike");
}
;
	return null();
}

Spikes_obj::~Spikes_obj() { }

Dynamic Spikes_obj::__CreateEmpty() { return  new Spikes_obj; }
hx::ObjectPtr< Spikes_obj > Spikes_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< Spikes_obj > result = new Spikes_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic Spikes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spikes_obj > result = new Spikes_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Spikes_obj::Spikes_obj()
{
}

void Spikes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spikes);
	HX_MARK_MEMBER_NAME(type,"type");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spikes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Spikes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spikes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spikes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spikes_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spikes_obj::__mClass,"__mClass");
};

Class Spikes_obj::__mClass;

void Spikes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Spikes"), hx::TCanCast< Spikes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Spikes_obj::__boot()
{
}

} // end namespace entities
