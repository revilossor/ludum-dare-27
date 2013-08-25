#include <hxcpp.h>

#ifndef INCLUDED_entities_Entity
#include <entities/Entity.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace entities{

Void Entity_obj::__construct(Float xp,Float yp)
{
HX_STACK_PUSH("Entity::new","entities/Entity.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct(xp,yp,null());
	HX_STACK_LINE(22)
	this->set_forceComplexRender(true);
}
;
	return null();
}

Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(Float xp,Float yp)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(xp,yp);
	return result;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::org::flixel::util::FlxPoint Entity_obj::magnify( ::org::flixel::util::FlxPoint v,Float m){
	HX_STACK_PUSH("Entity::magnify","entities/Entity.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(70)
	try{
		HX_STACK_LINE(71)
		return ::org::flixel::util::FlxPoint_obj::__new((v->x * m),(v->y * m));
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
				HX_STACK_LINE(73)
				return ::org::flixel::util::FlxPoint_obj::__new(null(),null());
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(70)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,magnify,return )

::org::flixel::util::FlxPoint Entity_obj::getUnit( ::org::flixel::util::FlxPoint v){
	HX_STACK_PUSH("Entity::getUnit","entities/Entity.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(67)
	Float mag = this->getMagnitude(v);		HX_STACK_VAR(mag,"mag");
	HX_STACK_LINE(68)
	return ::org::flixel::util::FlxPoint_obj::__new((Float(v->x) / Float(mag)),(Float(v->y) / Float(mag)));
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,getUnit,return )

Float Entity_obj::getMagnitudeSq( ::org::flixel::util::FlxPoint v){
	HX_STACK_PUSH("Entity::getMagnitudeSq","entities/Entity.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(63)
	return (::Math_obj::pow(v->x,(int)2) + ::Math_obj::pow(v->y,(int)2));
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,getMagnitudeSq,return )

Float Entity_obj::getMagnitude( ::org::flixel::util::FlxPoint v){
	HX_STACK_PUSH("Entity::getMagnitude","entities/Entity.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(60)
	return ::Math_obj::sqrt((::Math_obj::pow(v->x,(int)2) + ::Math_obj::pow(v->y,(int)2)));
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,getMagnitude,return )

Float Entity_obj::getDistanceBetween( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b){
	HX_STACK_PUSH("Entity::getDistanceBetween","entities/Entity.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(57)
	return this->getMagnitude(this->getBetween(a,b));
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,getDistanceBetween,return )

::org::flixel::util::FlxPoint Entity_obj::getBetween( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b){
	HX_STACK_PUSH("Entity::getBetween","entities/Entity.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(54)
	return ::org::flixel::util::FlxPoint_obj::__new((b->x - a->x),(b->y - a->y));
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,getBetween,return )

::org::flixel::util::FlxPoint Entity_obj::getUnitBetween( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b){
	HX_STACK_PUSH("Entity::getUnitBetween","entities/Entity.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(51)
	return this->getUnit(this->getBetween(a,b));
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,getUnitBetween,return )

::org::flixel::util::FlxPoint Entity_obj::mulEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b){
	HX_STACK_PUSH("Entity::mulEq","entities/Entity.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(48)
	return ::org::flixel::util::FlxPoint_obj::__new((a->x * b->x),(a->y * b->y));
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,mulEq,return )

::org::flixel::util::FlxPoint Entity_obj::divEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b){
	HX_STACK_PUSH("Entity::divEq","entities/Entity.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(45)
	return ::org::flixel::util::FlxPoint_obj::__new((Float(a->x) / Float(b->x)),(Float(a->y) / Float(b->y)));
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,divEq,return )

::org::flixel::util::FlxPoint Entity_obj::subEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b){
	HX_STACK_PUSH("Entity::subEq","entities/Entity.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(42)
	return ::org::flixel::util::FlxPoint_obj::__new((a->x - b->x),(a->y - b->y));
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,subEq,return )

::org::flixel::util::FlxPoint Entity_obj::addEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b){
	HX_STACK_PUSH("Entity::addEq","entities/Entity.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(39)
	return ::org::flixel::util::FlxPoint_obj::__new((a->x + b->x),(a->y + b->y));
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,addEq,return )

::org::flixel::util::FlxPoint Entity_obj::fleeAtSpeed( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t,Float s){
	HX_STACK_PUSH("Entity::fleeAtSpeed","entities/Entity.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(35)
	return this->magnify(this->getUnitBetween(t,e),s);
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,fleeAtSpeed,return )

::org::flixel::util::FlxPoint Entity_obj::seekAtSpeed( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t,Float s){
	HX_STACK_PUSH("Entity::seekAtSpeed","entities/Entity.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(32)
	return this->magnify(this->getUnitBetween(e,t),s);
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,seekAtSpeed,return )

::org::flixel::util::FlxPoint Entity_obj::flee( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t){
	HX_STACK_PUSH("Entity::flee","entities/Entity.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(29)
	return this->getUnitBetween(t,e);
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,flee,return )

::org::flixel::util::FlxPoint Entity_obj::seek( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t){
	HX_STACK_PUSH("Entity::seek","entities/Entity.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(26)
	return this->getUnitBetween(e,t);
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,seek,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(type,"type");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(type,"type");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flee") ) { return flee_dyn(); }
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mulEq") ) { return mulEq_dyn(); }
		if (HX_FIELD_EQ(inName,"divEq") ) { return divEq_dyn(); }
		if (HX_FIELD_EQ(inName,"subEq") ) { return subEq_dyn(); }
		if (HX_FIELD_EQ(inName,"addEq") ) { return addEq_dyn(); }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magnify") ) { return magnify_dyn(); }
		if (HX_FIELD_EQ(inName,"getUnit") ) { return getUnit_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getBetween") ) { return getBetween_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fleeAtSpeed") ) { return fleeAtSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"seekAtSpeed") ) { return seekAtSpeed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMagnitude") ) { return getMagnitude_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMagnitudeSq") ) { return getMagnitudeSq_dyn(); }
		if (HX_FIELD_EQ(inName,"getUnitBetween") ) { return getUnitBetween_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getDistanceBetween") ) { return getDistanceBetween_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("magnify"),
	HX_CSTRING("getUnit"),
	HX_CSTRING("getMagnitudeSq"),
	HX_CSTRING("getMagnitude"),
	HX_CSTRING("getDistanceBetween"),
	HX_CSTRING("getBetween"),
	HX_CSTRING("getUnitBetween"),
	HX_CSTRING("mulEq"),
	HX_CSTRING("divEq"),
	HX_CSTRING("subEq"),
	HX_CSTRING("addEq"),
	HX_CSTRING("fleeAtSpeed"),
	HX_CSTRING("seekAtSpeed"),
	HX_CSTRING("flee"),
	HX_CSTRING("seek"),
	HX_CSTRING("speed"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Entity"), hx::TCanCast< Entity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Entity_obj::__boot()
{
}

} // end namespace entities
