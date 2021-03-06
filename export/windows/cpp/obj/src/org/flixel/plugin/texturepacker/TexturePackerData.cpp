#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_Frame
#include <org/flixel/plugin/texturepacker/Frame.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_TexturePackerData
#include <org/flixel/plugin/texturepacker/TexturePackerData.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace texturepacker{

Void TexturePackerData_obj::__construct(::String description,::String assetName)
{
HX_STACK_PUSH("TexturePackerData::new","org/flixel/plugin/texturepacker/TexturePackerData.hx",28);
{
	HX_STACK_LINE(29)
	this->assetName = assetName;
	HX_STACK_LINE(30)
	this->description = description;
	HX_STACK_LINE(32)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(34)
	this->parseData();
}
;
	return null();
}

TexturePackerData_obj::~TexturePackerData_obj() { }

Dynamic TexturePackerData_obj::__CreateEmpty() { return  new TexturePackerData_obj; }
hx::ObjectPtr< TexturePackerData_obj > TexturePackerData_obj::__new(::String description,::String assetName)
{  hx::ObjectPtr< TexturePackerData_obj > result = new TexturePackerData_obj();
	result->__construct(description,assetName);
	return result;}

Dynamic TexturePackerData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TexturePackerData_obj > result = new TexturePackerData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TexturePackerData_obj::destroy( ){
{
		HX_STACK_PUSH("TexturePackerData::destroy","org/flixel/plugin/texturepacker/TexturePackerData.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_LINE(78)
		int l = this->frames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			while(((_g < l))){
				HX_STACK_LINE(79)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(81)
				this->frames->__get(i).StaticCast< ::org::flixel::plugin::texturepacker::Frame >()->destroy();
			}
		}
		HX_STACK_LINE(83)
		this->frames = null();
		HX_STACK_LINE(84)
		this->assetName = null();
		HX_STACK_LINE(85)
		this->asset = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,destroy,(void))

Void TexturePackerData_obj::parseData( ){
{
		HX_STACK_PUSH("TexturePackerData::parseData","org/flixel/plugin/texturepacker/TexturePackerData.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		if (((this->frames->length != (int)0))){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(46)
		this->asset = ::openfl::Assets_obj::getBitmapData(this->assetName,null());
		HX_STACK_LINE(47)
		Dynamic data = ::haxe::Json_obj::parse(::openfl::Assets_obj::getText(this->description));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Dynamic _g1 = ::Lambda_obj::array(data->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(49)
				Dynamic frame = _g1->__GetItem(_g);		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(51)
				::org::flixel::plugin::texturepacker::Frame texFrame = ::org::flixel::plugin::texturepacker::Frame_obj::__new();		HX_STACK_VAR(texFrame,"texFrame");
				HX_STACK_LINE(52)
				texFrame->trimmed = frame->__Field(HX_CSTRING("trimmed"),true);
				HX_STACK_LINE(53)
				texFrame->rotated = frame->__Field(HX_CSTRING("rotated"),true);
				HX_STACK_LINE(54)
				texFrame->name = frame->__Field(HX_CSTRING("filename"),true);
				HX_STACK_LINE(56)
				texFrame->sourceSize = ::org::flixel::util::FlxPoint_obj::__new(frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("sourceSize"),true)->__Field(HX_CSTRING("h"),true));
				HX_STACK_LINE(57)
				texFrame->offset = ::org::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					::org::flixel::util::FlxPoint _this = texFrame->offset;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(58)
					_this->x = frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("x"),true);
					HX_STACK_LINE(58)
					_this->y = frame->__Field(HX_CSTRING("spriteSourceSize"),true)->__Field(HX_CSTRING("y"),true);
					HX_STACK_LINE(58)
					_this;
				}
				HX_STACK_LINE(60)
				if ((frame->__Field(HX_CSTRING("rotated"),true))){
					HX_STACK_LINE(61)
					texFrame->frame = ::flash::geom::Rectangle_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true));
				}
				else{
					HX_STACK_LINE(65)
					texFrame->frame = ::flash::geom::Rectangle_obj::__new(frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("x"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("y"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("w"),true),frame->__Field(HX_CSTRING("frame"),true)->__Field(HX_CSTRING("h"),true));
				}
				HX_STACK_LINE(69)
				this->frames->push(texFrame);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,parseData,(void))


TexturePackerData_obj::TexturePackerData_obj()
{
}

void TexturePackerData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TexturePackerData);
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(assetName,"assetName");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_END_CLASS();
}

void TexturePackerData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(assetName,"assetName");
	HX_VISIT_MEMBER_NAME(frames,"frames");
}

Dynamic TexturePackerData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseData") ) { return parseData_dyn(); }
		if (HX_FIELD_EQ(inName,"assetName") ) { return assetName; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TexturePackerData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetName") ) { assetName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TexturePackerData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("asset"));
	outFields->push(HX_CSTRING("description"));
	outFields->push(HX_CSTRING("assetName"));
	outFields->push(HX_CSTRING("frames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("parseData"),
	HX_CSTRING("asset"),
	HX_CSTRING("description"),
	HX_CSTRING("assetName"),
	HX_CSTRING("frames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

Class TexturePackerData_obj::__mClass;

void TexturePackerData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.texturepacker.TexturePackerData"), hx::TCanCast< TexturePackerData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TexturePackerData_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace texturepacker
