#ifndef INCLUDED_entities_HorizontalFlipper
#define INCLUDED_entities_HorizontalFlipper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <StunningEntity.h>
HX_DECLARE_CLASS0(StunningEntity)
HX_DECLARE_CLASS1(entities,Entity)
HX_DECLARE_CLASS1(entities,HorizontalFlipper)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  HorizontalFlipper_obj : public ::StunningEntity_obj{
	public:
		typedef ::StunningEntity_obj super;
		typedef HorizontalFlipper_obj OBJ_;
		HorizontalFlipper_obj();
		Void __construct(Float xp,Float yp);

	public:
		static hx::ObjectPtr< HorizontalFlipper_obj > __new(Float xp,Float yp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HorizontalFlipper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HorizontalFlipper"); }

};

} // end namespace entities

#endif /* INCLUDED_entities_HorizontalFlipper */ 
