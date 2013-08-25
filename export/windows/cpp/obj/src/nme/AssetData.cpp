#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
namespace nme{

Void AssetData_obj::__construct()
{
	return null();
}

AssetData_obj::~AssetData_obj() { }

Dynamic AssetData_obj::__CreateEmpty() { return  new AssetData_obj; }
hx::ObjectPtr< AssetData_obj > AssetData_obj::__new()
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

Dynamic AssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap AssetData_obj::library;

::haxe::ds::StringMap AssetData_obj::path;

::haxe::ds::StringMap AssetData_obj::type;

bool AssetData_obj::initialized;

Void AssetData_obj::initialize( ){
{
		HX_STACK_PUSH("AssetData::initialize","nme/AssetData.hx",17);
		HX_STACK_LINE(17)
		if ((!(::nme::AssetData_obj::initialized))){
			HX_STACK_LINE(21)
			::nme::AssetData_obj::path = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(22)
			::nme::AssetData_obj::type = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(23)
			::nme::AssetData_obj::library = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(25)
			::nme::AssetData_obj::path->set(HX_CSTRING("Beep"),HX_CSTRING("assets/data/beep.wav"));
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("sound").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(26)
				::nme::AssetData_obj::type->set(HX_CSTRING("Beep"),value);
			}
			HX_STACK_LINE(27)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets/data/autotiles.png"));
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(28)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/autotiles.png"),value);
			}
			HX_STACK_LINE(29)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets/data/autotiles_alt.png"));
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(30)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/autotiles_alt.png"),value);
			}
			HX_STACK_LINE(31)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/base.png"),HX_CSTRING("assets/data/base.png"));
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(32)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/base.png"),value);
			}
			HX_STACK_LINE(33)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("assets/data/beep.mp3"));
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("music").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(34)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/beep.mp3"),value);
			}
			HX_STACK_LINE(35)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("assets/data/beep.wav"));
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("sound").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(36)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/beep.wav"),value);
			}
			HX_STACK_LINE(37)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets/data/button.png"));
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(38)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button.png"),value);
			}
			HX_STACK_LINE(39)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_a.png"),HX_CSTRING("assets/data/button_a.png"));
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(40)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_a.png"),value);
			}
			HX_STACK_LINE(41)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_b.png"),HX_CSTRING("assets/data/button_b.png"));
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(42)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_b.png"),value);
			}
			HX_STACK_LINE(43)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_c.png"),HX_CSTRING("assets/data/button_c.png"));
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(44)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_c.png"),value);
			}
			HX_STACK_LINE(45)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_down.png"),HX_CSTRING("assets/data/button_down.png"));
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(46)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_down.png"),value);
			}
			HX_STACK_LINE(47)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_left.png"),HX_CSTRING("assets/data/button_left.png"));
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(48)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_left.png"),value);
			}
			HX_STACK_LINE(49)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_right.png"),HX_CSTRING("assets/data/button_right.png"));
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(50)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_right.png"),value);
			}
			HX_STACK_LINE(51)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_up.png"),HX_CSTRING("assets/data/button_up.png"));
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(52)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_up.png"),value);
			}
			HX_STACK_LINE(53)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_x.png"),HX_CSTRING("assets/data/button_x.png"));
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(54)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_x.png"),value);
			}
			HX_STACK_LINE(55)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_y.png"),HX_CSTRING("assets/data/button_y.png"));
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(56)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_y.png"),value);
			}
			HX_STACK_LINE(57)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("assets/data/courier.ttf"));
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("font").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(58)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/courier.ttf"),value);
			}
			HX_STACK_LINE(59)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets/data/cursor.png"));
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(60)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/cursor.png"),value);
			}
			HX_STACK_LINE(61)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets/data/default.png"));
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(62)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/default.png"),value);
			}
			HX_STACK_LINE(63)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets/data/fontData10pt.png"));
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(64)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/fontData10pt.png"),value);
			}
			HX_STACK_LINE(65)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets/data/fontData11pt.png"));
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(66)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/fontData11pt.png"),value);
			}
			HX_STACK_LINE(67)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets/data/handle.png"));
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(68)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/handle.png"),value);
			}
			HX_STACK_LINE(69)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets/data/logo.png"));
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(70)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/logo.png"),value);
			}
			HX_STACK_LINE(71)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets/data/logo_corners.png"));
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(72)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/logo_corners.png"),value);
			}
			HX_STACK_LINE(73)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets/data/logo_light.png"));
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(74)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/logo_light.png"),value);
			}
			HX_STACK_LINE(75)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("assets/data/nokiafc22.ttf"));
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("font").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(76)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/nokiafc22.ttf"),value);
			}
			HX_STACK_LINE(77)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/stick.png"),HX_CSTRING("assets/data/stick.png"));
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(78)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/stick.png"),value);
			}
			HX_STACK_LINE(79)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets/data/vcr/flixel.png"));
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(80)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/flixel.png"),value);
			}
			HX_STACK_LINE(81)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets/data/vcr/open.png"));
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(82)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/open.png"),value);
			}
			HX_STACK_LINE(83)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets/data/vcr/pause.png"));
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(84)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/pause.png"),value);
			}
			HX_STACK_LINE(85)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets/data/vcr/play.png"));
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(86)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/play.png"),value);
			}
			HX_STACK_LINE(87)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets/data/vcr/record_off.png"));
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(88)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/record_off.png"),value);
			}
			HX_STACK_LINE(89)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets/data/vcr/record_on.png"));
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(90)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/record_on.png"),value);
			}
			HX_STACK_LINE(91)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets/data/vcr/restart.png"));
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(92)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/restart.png"),value);
			}
			HX_STACK_LINE(93)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets/data/vcr/step.png"));
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(94)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/step.png"),value);
			}
			HX_STACK_LINE(95)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets/data/vcr/stop.png"));
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(96)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/stop.png"),value);
			}
			HX_STACK_LINE(97)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets/data/vis/bounds.png"));
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(98)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vis/bounds.png"),value);
			}
			HX_STACK_LINE(99)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/bg_tile.png"),HX_CSTRING("assets/gfx/bg_tile.png"));
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(100)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/bg_tile.png"),value);
			}
			HX_STACK_LINE(101)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/coin.png"),HX_CSTRING("assets/gfx/coin.png"));
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(102)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/coin.png"),value);
			}
			HX_STACK_LINE(103)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/coin_tiles.png"),HX_CSTRING("assets/gfx/coin_tiles.png"));
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(104)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/coin_tiles.png"),value);
			}
			HX_STACK_LINE(105)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/horizkiller.png"),HX_CSTRING("assets/gfx/horizkiller.png"));
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(106)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/horizkiller.png"),value);
			}
			HX_STACK_LINE(107)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/horizontalkiller.png"),HX_CSTRING("assets/gfx/horizontalkiller.png"));
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(108)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/horizontalkiller.png"),value);
			}
			HX_STACK_LINE(109)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/mapeditor_entities.png"),HX_CSTRING("assets/gfx/mapeditor_entities.png"));
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(110)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/mapeditor_entities.png"),value);
			}
			HX_STACK_LINE(111)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/outDoor.png"),HX_CSTRING("assets/gfx/outDoor.png"));
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(112)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/outDoor.png"),value);
			}
			HX_STACK_LINE(113)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/platformer_player.png"),HX_CSTRING("assets/gfx/platformer_player.png"));
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(114)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/platformer_player.png"),value);
			}
			HX_STACK_LINE(115)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/player.png"),HX_CSTRING("assets/gfx/player.png"));
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(116)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/player.png"),value);
			}
			HX_STACK_LINE(117)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/spikes.png"),HX_CSTRING("assets/gfx/spikes.png"));
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(118)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/spikes.png"),value);
			}
			HX_STACK_LINE(119)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/sponnerkiller.png"),HX_CSTRING("assets/gfx/sponnerkiller.png"));
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(120)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/sponnerkiller.png"),value);
			}
			HX_STACK_LINE(121)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/template_tiles.png"),HX_CSTRING("assets/gfx/template_tiles.png"));
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(122)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/template_tiles.png"),value);
			}
			HX_STACK_LINE(123)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/time++.png"),HX_CSTRING("assets/gfx/time++.png"));
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(124)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/time++.png"),value);
			}
			HX_STACK_LINE(125)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/gfx/vertkiller.png"),HX_CSTRING("assets/gfx/vertkiller.png"));
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(126)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/gfx/vertkiller.png"),value);
			}
			HX_STACK_LINE(127)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/HaxeFlixel.svg"),HX_CSTRING("assets/HaxeFlixel.svg"));
			HX_STACK_LINE(128)
			{
				HX_STACK_LINE(128)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(128)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/HaxeFlixel.svg"),value);
			}
			HX_STACK_LINE(129)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_1_baddies.csv"));
			HX_STACK_LINE(130)
			{
				HX_STACK_LINE(130)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(130)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_baddies.csv"),value);
			}
			HX_STACK_LINE(131)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_1_bg.csv"));
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(132)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_bg.csv"),value);
			}
			HX_STACK_LINE(133)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_1_entities.csv"));
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(134)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_entities.csv"),value);
			}
			HX_STACK_LINE(135)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_1_tiles.csv"));
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(136)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_1_tiles.csv"),value);
			}
			HX_STACK_LINE(137)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_2_baddies.csv"));
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(138)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_baddies.csv"),value);
			}
			HX_STACK_LINE(139)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_2_bg.csv"));
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(140)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_bg.csv"),value);
			}
			HX_STACK_LINE(141)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_2_entities.csv"));
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(142)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_entities.csv"),value);
			}
			HX_STACK_LINE(143)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_2_tiles.csv"));
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(144)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_2_tiles.csv"),value);
			}
			HX_STACK_LINE(145)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_3_baddies.csv"));
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(146)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_baddies.csv"),value);
			}
			HX_STACK_LINE(147)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_3_bg.csv"));
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(148)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_bg.csv"),value);
			}
			HX_STACK_LINE(149)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_3_entities.csv"));
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(150)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_entities.csv"),value);
			}
			HX_STACK_LINE(151)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_3_tiles.csv"));
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(152)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_3_tiles.csv"),value);
			}
			HX_STACK_LINE(153)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_4_baddies.csv"));
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(154)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_baddies.csv"),value);
			}
			HX_STACK_LINE(155)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_4_bg.csv"));
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(156)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_bg.csv"),value);
			}
			HX_STACK_LINE(157)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_4_entities.csv"));
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(158)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_entities.csv"),value);
			}
			HX_STACK_LINE(159)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_4_tiles.csv"));
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(160)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_4_tiles.csv"),value);
			}
			HX_STACK_LINE(161)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_5_baddies.csv"));
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(162)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_baddies.csv"),value);
			}
			HX_STACK_LINE(163)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_5_bg.csv"));
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(164)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_bg.csv"),value);
			}
			HX_STACK_LINE(165)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_5_entities.csv"));
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(166)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_entities.csv"),value);
			}
			HX_STACK_LINE(167)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_5_tiles.csv"));
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(168)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_5_tiles.csv"),value);
			}
			HX_STACK_LINE(169)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_6_baddies.csv"));
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(170)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_baddies.csv"),value);
			}
			HX_STACK_LINE(171)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_6_bg.csv"));
			HX_STACK_LINE(172)
			{
				HX_STACK_LINE(172)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(172)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_bg.csv"),value);
			}
			HX_STACK_LINE(173)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_6_entities.csv"));
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(174)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_entities.csv"),value);
			}
			HX_STACK_LINE(175)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_6_tiles.csv"));
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(176)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_6_tiles.csv"),value);
			}
			HX_STACK_LINE(177)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_7_baddies.csv"));
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(178)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_baddies.csv"),value);
			}
			HX_STACK_LINE(179)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_7_bg.csv"));
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(180)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_bg.csv"),value);
			}
			HX_STACK_LINE(181)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_7_entities.csv"));
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(182)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_entities.csv"),value);
			}
			HX_STACK_LINE(183)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_7_tiles.csv"));
			HX_STACK_LINE(184)
			{
				HX_STACK_LINE(184)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(184)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_7_tiles.csv"),value);
			}
			HX_STACK_LINE(185)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_8_baddies.csv"));
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(186)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_baddies.csv"),value);
			}
			HX_STACK_LINE(187)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_8_bg.csv"));
			HX_STACK_LINE(188)
			{
				HX_STACK_LINE(188)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(188)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_bg.csv"),value);
			}
			HX_STACK_LINE(189)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_8_entities.csv"));
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(190)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_entities.csv"),value);
			}
			HX_STACK_LINE(191)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_8_tiles.csv"));
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(192)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_8_tiles.csv"),value);
			}
			HX_STACK_LINE(193)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_9_baddies.csv"));
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(194)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_baddies.csv"),value);
			}
			HX_STACK_LINE(195)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_9_bg.csv"));
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(196)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_bg.csv"),value);
			}
			HX_STACK_LINE(197)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_9_entities.csv"));
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(198)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_entities.csv"),value);
			}
			HX_STACK_LINE(199)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_map_9_tiles.csv"));
			HX_STACK_LINE(200)
			{
				HX_STACK_LINE(200)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(200)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_map_9_tiles.csv"),value);
			}
			HX_STACK_LINE(201)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_baddies.csv"),HX_CSTRING("assets/maps/template/mapCSV_template_map_baddies.csv"));
			HX_STACK_LINE(202)
			{
				HX_STACK_LINE(202)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(202)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_baddies.csv"),value);
			}
			HX_STACK_LINE(203)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_bg.csv"),HX_CSTRING("assets/maps/template/mapCSV_template_map_bg.csv"));
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(204)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_bg.csv"),value);
			}
			HX_STACK_LINE(205)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_entities.csv"),HX_CSTRING("assets/maps/template/mapCSV_template_map_entities.csv"));
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(206)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_entities.csv"),value);
			}
			HX_STACK_LINE(207)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_tiles.csv"),HX_CSTRING("assets/maps/template/mapCSV_template_map_tiles.csv"));
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(208)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/mapCSV_template_map_tiles.csv"),value);
			}
			HX_STACK_LINE(209)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_1.dam"),HX_CSTRING("assets/maps/template/map_1.dam"));
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(210)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(210)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_1.dam"),value);
			}
			HX_STACK_LINE(211)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_1.dam.bak"),HX_CSTRING("assets/maps/template/map_1.dam.bak"));
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(212)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_1.dam.bak"),value);
			}
			HX_STACK_LINE(213)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_2.dam"),HX_CSTRING("assets/maps/template/map_2.dam"));
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(214)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_2.dam"),value);
			}
			HX_STACK_LINE(215)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_2.dam.bak"),HX_CSTRING("assets/maps/template/map_2.dam.bak"));
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(216)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_2.dam.bak"),value);
			}
			HX_STACK_LINE(217)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_3.dam"),HX_CSTRING("assets/maps/template/map_3.dam"));
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(218)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_3.dam"),value);
			}
			HX_STACK_LINE(219)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_3.dam.bak"),HX_CSTRING("assets/maps/template/map_3.dam.bak"));
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(220)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_3.dam.bak"),value);
			}
			HX_STACK_LINE(221)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_4.dam"),HX_CSTRING("assets/maps/template/map_4.dam"));
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(222)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_4.dam"),value);
			}
			HX_STACK_LINE(223)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_4.dam.bak"),HX_CSTRING("assets/maps/template/map_4.dam.bak"));
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(224)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_4.dam.bak"),value);
			}
			HX_STACK_LINE(225)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_5.dam"),HX_CSTRING("assets/maps/template/map_5.dam"));
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(226)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_5.dam"),value);
			}
			HX_STACK_LINE(227)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_5.dam.bak"),HX_CSTRING("assets/maps/template/map_5.dam.bak"));
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(228)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_5.dam.bak"),value);
			}
			HX_STACK_LINE(229)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_6.dam"),HX_CSTRING("assets/maps/template/map_6.dam"));
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(230)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_6.dam"),value);
			}
			HX_STACK_LINE(231)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_6.dam.bak"),HX_CSTRING("assets/maps/template/map_6.dam.bak"));
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(232)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_6.dam.bak"),value);
			}
			HX_STACK_LINE(233)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_7.dam"),HX_CSTRING("assets/maps/template/map_7.dam"));
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(234)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_7.dam"),value);
			}
			HX_STACK_LINE(235)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_7.dam.bak"),HX_CSTRING("assets/maps/template/map_7.dam.bak"));
			HX_STACK_LINE(236)
			{
				HX_STACK_LINE(236)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(236)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_7.dam.bak"),value);
			}
			HX_STACK_LINE(237)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_8.dam"),HX_CSTRING("assets/maps/template/map_8.dam"));
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(238)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_8.dam"),value);
			}
			HX_STACK_LINE(239)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_8.dam.bak"),HX_CSTRING("assets/maps/template/map_8.dam.bak"));
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(240)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_8.dam.bak"),value);
			}
			HX_STACK_LINE(241)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_9.dam"),HX_CSTRING("assets/maps/template/map_9.dam"));
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(242)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_9.dam"),value);
			}
			HX_STACK_LINE(243)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/map_9.dam.bak"),HX_CSTRING("assets/maps/template/map_9.dam.bak"));
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(244)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/map_9.dam.bak"),value);
			}
			HX_STACK_LINE(245)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/template_map.dam"),HX_CSTRING("assets/maps/template/template_map.dam"));
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(246)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/template_map.dam"),value);
			}
			HX_STACK_LINE(247)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/maps/template/template_map.dam.bak"),HX_CSTRING("assets/maps/template/template_map.dam.bak"));
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(248)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/maps/template/template_map.dam.bak"),value);
			}
			HX_STACK_LINE(251)
			::nme::AssetData_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AssetData_obj,initialize,(void))


AssetData_obj::AssetData_obj()
{
}

void AssetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetData);
	HX_MARK_END_CLASS();
}

void AssetData_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AssetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return library; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetData_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetData_obj::library,"library");
	HX_MARK_MEMBER_NAME(AssetData_obj::path,"path");
	HX_MARK_MEMBER_NAME(AssetData_obj::type,"type");
	HX_MARK_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetData_obj::library,"library");
	HX_VISIT_MEMBER_NAME(AssetData_obj::path,"path");
	HX_VISIT_MEMBER_NAME(AssetData_obj::type,"type");
	HX_VISIT_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

Class AssetData_obj::__mClass;

void AssetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.AssetData"), hx::TCanCast< AssetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetData_obj::__boot()
{
	initialized= false;
}

} // end namespace nme
