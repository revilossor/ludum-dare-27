#ifndef INCLUDED_states_PlatformerState
#define INCLUDED_states_PlatformerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS1(entities,PlatformerPlayer)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxText)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)
HX_DECLARE_CLASS1(states,PlatformerState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  PlatformerState_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef PlatformerState_obj OBJ_;
		PlatformerState_obj();
		Void __construct(hx::Null< int >  __o_i);

	public:
		static hx::ObjectPtr< PlatformerState_obj > __new(hx::Null< int >  __o_i);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlatformerState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlatformerState"); }

		virtual Void playerOverDoor( ::org::flixel::FlxBasic pl,::org::flixel::FlxBasic door);
		Dynamic playerOverDoor_dyn();

		virtual Void doCollision( );
		Dynamic doCollision_dyn();

		virtual Void keyHandling( );
		Dynamic keyHandling_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void addItems( );
		Dynamic addItems_dyn();

		virtual Void create( );

		::org::flixel::FlxText timeDisplay;
		int timeRemaining;
		::entities::PlatformerPlayer _player;
		::org::flixel::FlxSprite door;
		::Room _room;
		int index;
};

} // end namespace states

#endif /* INCLUDED_states_PlatformerState */ 
