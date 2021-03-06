#ifndef INCLUDED_GameClass
#define INCLUDED_GameClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGame.h>
HX_DECLARE_CLASS0(GameClass)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(org,flixel,FlxGame)


class HXCPP_CLASS_ATTRIBUTES  GameClass_obj : public ::org::flixel::FlxGame_obj{
	public:
		typedef ::org::flixel::FlxGame_obj super;
		typedef GameClass_obj OBJ_;
		GameClass_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GameClass_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameClass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameClass"); }

};


#endif /* INCLUDED_GameClass */ 
