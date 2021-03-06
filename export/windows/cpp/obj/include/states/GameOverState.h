#ifndef INCLUDED_states_GameOverState
#define INCLUDED_states_GameOverState

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
HX_DECLARE_CLASS1(states,GameOverState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  GameOverState_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef GameOverState_obj OBJ_;
		GameOverState_obj();
		Void __construct(::String __o_msg);

	public:
		static hx::ObjectPtr< GameOverState_obj > __new(::String __o_msg);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameOverState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameOverState"); }

		virtual Void keyHandling( );
		Dynamic keyHandling_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void create( );

		::String message;
		::org::flixel::FlxText spaceText;
		::org::flixel::FlxText goverText;
};

} // end namespace states

#endif /* INCLUDED_states_GameOverState */ 
