#ifndef INCLUDED_StunningEntity
#define INCLUDED_StunningEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/Entity.h>
HX_DECLARE_CLASS0(StunningEntity)
HX_DECLARE_CLASS1(entities,Entity)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  StunningEntity_obj : public ::entities::Entity_obj{
	public:
		typedef ::entities::Entity_obj super;
		typedef StunningEntity_obj OBJ_;
		StunningEntity_obj();
		Void __construct(Float xp,Float yp);

	public:
		static hx::ObjectPtr< StunningEntity_obj > __new(Float xp,Float yp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StunningEntity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StunningEntity"); }

		bool isGoingUp;
		::org::flixel::util::FlxPoint downVect;
		::org::flixel::util::FlxPoint upVect;
};


#endif /* INCLUDED_StunningEntity */ 
