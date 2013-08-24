#ifndef INCLUDED_entities_PlatformerPlayer
#define INCLUDED_entities_PlatformerPlayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS1(entities,PlatformerPlayer)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  PlatformerPlayer_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef PlatformerPlayer_obj OBJ_;
		PlatformerPlayer_obj();
		Void __construct(int xp,int yp);

	public:
		static hx::ObjectPtr< PlatformerPlayer_obj > __new(int xp,int yp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlatformerPlayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlatformerPlayer"); }

		virtual Void keyHandling( );
		Dynamic keyHandling_dyn();

		virtual Void update( );

		virtual Void destroy( );

		bool onFloor;
};

} // end namespace entities

#endif /* INCLUDED_entities_PlatformerPlayer */ 
