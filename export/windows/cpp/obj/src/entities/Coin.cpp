#include <hxcpp.h>

#ifndef INCLUDED_Resourses
#include <Resourses.h>
#endif
#ifndef INCLUDED_entities_Coin
#include <entities/Coin.h>
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

Void Coin_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("Coin::new","entities/Coin.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(xp,yp,null());
	HX_STACK_LINE(14)
	this->loadGraphic(::Resourses_obj::coin,true,false,(int)16,(int)16,null(),null());
	HX_STACK_LINE(15)
	this->addAnimation(HX_CSTRING("spin"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)3).Add((int)2).Add((int)1).Add((int)0),(int)8,null());
	HX_STACK_LINE(16)
	this->play(HX_CSTRING("spin"),null(),null());
}
;
	return null();
}

Coin_obj::~Coin_obj() { }

Dynamic Coin_obj::__CreateEmpty() { return  new Coin_obj; }
hx::ObjectPtr< Coin_obj > Coin_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< Coin_obj > result = new Coin_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic Coin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Coin_obj > result = new Coin_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Coin_obj::update( ){
{
		HX_STACK_PUSH("Coin::update","entities/Coin.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_LINE(19)
		this->super::update();
	}
return null();
}



Coin_obj::Coin_obj()
{
}

void Coin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Coin);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Coin_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Coin_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Coin_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Coin_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

Class Coin_obj::__mClass;

void Coin_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Coin"), hx::TCanCast< Coin_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Coin_obj::__boot()
{
}

} // end namespace entities
