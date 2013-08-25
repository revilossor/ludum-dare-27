#include <hxcpp.h>

#ifndef INCLUDED_StunningEntity
#include <StunningEntity.h>
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

Void StunningEntity_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("StunningEntity::new","StunningEntity.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct(xp,yp);
	HX_STACK_LINE(21)
	this->makeGraphic((int)32,(int)32,(int)-256,null(),null());
	HX_STACK_LINE(22)
	this->type = HX_CSTRING("StunningEntity");
	HX_STACK_LINE(23)
	this->upVect = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(24)
	this->downVect = ::org::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(25)
	this->isGoingUp = true;
}
;
	return null();
}

StunningEntity_obj::~StunningEntity_obj() { }

Dynamic StunningEntity_obj::__CreateEmpty() { return  new StunningEntity_obj; }
hx::ObjectPtr< StunningEntity_obj > StunningEntity_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< StunningEntity_obj > result = new StunningEntity_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic StunningEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StunningEntity_obj > result = new StunningEntity_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


StunningEntity_obj::StunningEntity_obj()
{
}

void StunningEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StunningEntity);
	HX_MARK_MEMBER_NAME(isGoingUp,"isGoingUp");
	HX_MARK_MEMBER_NAME(downVect,"downVect");
	HX_MARK_MEMBER_NAME(upVect,"upVect");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StunningEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isGoingUp,"isGoingUp");
	HX_VISIT_MEMBER_NAME(downVect,"downVect");
	HX_VISIT_MEMBER_NAME(upVect,"upVect");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic StunningEntity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upVect") ) { return upVect; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"downVect") ) { return downVect; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGoingUp") ) { return isGoingUp; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StunningEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upVect") ) { upVect=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"downVect") ) { downVect=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGoingUp") ) { isGoingUp=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StunningEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isGoingUp"));
	outFields->push(HX_CSTRING("downVect"));
	outFields->push(HX_CSTRING("upVect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("isGoingUp"),
	HX_CSTRING("downVect"),
	HX_CSTRING("upVect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StunningEntity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StunningEntity_obj::__mClass,"__mClass");
};

Class StunningEntity_obj::__mClass;

void StunningEntity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StunningEntity"), hx::TCanCast< StunningEntity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StunningEntity_obj::__boot()
{
}

