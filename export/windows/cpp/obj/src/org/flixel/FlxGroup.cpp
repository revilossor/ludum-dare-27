#include <hxcpp.h>

#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif
namespace org{
namespace flixel{

Void FlxGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_PUSH("FlxGroup::new","org/flixel/FlxGroup.hx",16);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(16)
	super::__construct(MaxSize);
}
;
	return null();
}

FlxGroup_obj::~FlxGroup_obj() { }

Dynamic FlxGroup_obj::__CreateEmpty() { return  new FlxGroup_obj; }
hx::ObjectPtr< FlxGroup_obj > FlxGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(inArgs[0]);
	return result;}


FlxGroup_obj::FlxGroup_obj()
{
}

void FlxGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGroup);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGroup_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
};

Class FlxGroup_obj::__mClass;

void FlxGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxGroup"), hx::TCanCast< FlxGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGroup_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
