#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Util
#include <Util.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Util_obj::__construct()
{
	return null();
}

Util_obj::~Util_obj() { }

Dynamic Util_obj::__CreateEmpty() { return  new Util_obj; }
hx::ObjectPtr< Util_obj > Util_obj::__new()
{  hx::ObjectPtr< Util_obj > result = new Util_obj();
	result->__construct();
	return result;}

Dynamic Util_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Util_obj > result = new Util_obj();
	result->__construct();
	return result;}

Void Util_obj::log( Dynamic from,::String message){
{
		HX_STACK_PUSH("Util::log","Util.hx",11);
		HX_STACK_ARG(from,"from");
		HX_STACK_ARG(message,"message");
		HX_STACK_LINE(11)
		::haxe::Log_obj::trace((((HX_CSTRING("[") + ::Std_obj::string(from)) + HX_CSTRING("] ")) + message),hx::SourceInfo(HX_CSTRING("Util.hx"),12,HX_CSTRING("Util"),HX_CSTRING("log")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,log,(void))


Util_obj::Util_obj()
{
}

void Util_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Util);
	HX_MARK_END_CLASS();
}

void Util_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Util_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Util_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Util_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("log"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Util_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Util_obj::__mClass,"__mClass");
};

Class Util_obj::__mClass;

void Util_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Util"), hx::TCanCast< Util_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Util_obj::__boot()
{
}

