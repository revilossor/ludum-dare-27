#ifndef INCLUDED_states_MenuState
#define INCLUDED_states_MenuState

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
HX_DECLARE_CLASS1(states,MenuState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  MenuState_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef MenuState_obj OBJ_;
		MenuState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MenuState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MenuState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MenuState"); }

		virtual Void keyHandling( );
		Dynamic keyHandling_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void addItems( );
		Dynamic addItems_dyn();

		virtual Void create( );

		::org::flixel::FlxText _pressSpaceText;
};

} // end namespace states

#endif /* INCLUDED_states_MenuState */ 
