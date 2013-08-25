#include <hxcpp.h>

#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_entities_TimePlusPlus
#include <entities/TimePlusPlus.h>
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

Void TimePlusPlus_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("TimePlusPlus::new","entities/TimePlusPlus.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(xp,yp,null());
	HX_STACK_LINE(14)
	this->loadGraphic(::Resourses_obj::tpp,false,false,(int)36,(int)7,null(),null());
}
;
	return null();
}

TimePlusPlus_obj::~TimePlusPlus_obj() { }

Dynamic TimePlusPlus_obj::__CreateEmpty() { return  new TimePlusPlus_obj; }
hx::ObjectPtr< TimePlusPlus_obj > TimePlusPlus_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< TimePlusPlus_obj > result = new TimePlusPlus_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic TimePlusPlus_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimePlusPlus_obj > result = new TimePlusPlus_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TimePlusPlus_obj::update( ){
{
		HX_STACK_PUSH("TimePlusPlus::update","entities/TimePlusPlus.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_LINE(18)
		this->scale->x = hx::MultEq(this->scale->y,1.1);
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			::entities::TimePlusPlus _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(19)
			_g->set_alpha((_g->alpha * 0.9));
		}
		HX_STACK_LINE(20)
		if (((this->alpha < 0.3))){
			HX_STACK_LINE(20)
			this->exists = false;
		}
	}
return null();
}



TimePlusPlus_obj::TimePlusPlus_obj()
{
}

void TimePlusPlus_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimePlusPlus);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TimePlusPlus_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TimePlusPlus_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimePlusPlus_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TimePlusPlus_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimePlusPlus_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimePlusPlus_obj::__mClass,"__mClass");
};

Class TimePlusPlus_obj::__mClass;

void TimePlusPlus_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.TimePlusPlus"), hx::TCanCast< TimePlusPlus_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TimePlusPlus_obj::__boot()
{
}

} // end namespace entities
