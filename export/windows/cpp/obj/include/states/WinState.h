#ifndef INCLUDED_states_WinState
#define INCLUDED_states_WinState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxText)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS1(states,WinState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  WinState_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef WinState_obj OBJ_;
		WinState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< WinState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WinState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WinState"); }

		virtual Void keyHandling( );
		Dynamic keyHandling_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void create( );

		::org::flixel::FlxText winText;
};

} // end namespace states

#endif /* INCLUDED_states_WinState */ 
