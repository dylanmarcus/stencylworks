#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_utils_PolyDecompBayazit
#include <com/stencyl/utils/PolyDecompBayazit.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace utils{

Void PolyDecompBayazit_obj::__construct(Array< ::Dynamic > points)
{
HX_STACK_PUSH("PolyDecompBayazit::new","com/stencyl/utils/PolyDecompBayazit.hx",84);
{
	HX_STACK_LINE(85)
	this->points = points;
	HX_STACK_LINE(87)
	this->combineClosePoints();
	HX_STACK_LINE(88)
	this->combineColinearPoints();
	HX_STACK_LINE(89)
	this->makeCCW();
}
;
	return null();
}

PolyDecompBayazit_obj::~PolyDecompBayazit_obj() { }

Dynamic PolyDecompBayazit_obj::__CreateEmpty() { return  new PolyDecompBayazit_obj; }
hx::ObjectPtr< PolyDecompBayazit_obj > PolyDecompBayazit_obj::__new(Array< ::Dynamic > points)
{  hx::ObjectPtr< PolyDecompBayazit_obj > result = new PolyDecompBayazit_obj();
	result->__construct(points);
	return result;}

Dynamic PolyDecompBayazit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PolyDecompBayazit_obj > result = new PolyDecompBayazit_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PolyDecompBayazit_obj::makeCCW( ){
{
		HX_STACK_PUSH("PolyDecompBayazit::makeCCW","com/stencyl/utils/PolyDecompBayazit.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_LINE(224)
		int br = (int)0;		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			while(((_g1 < _g))){
				HX_STACK_LINE(227)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(228)
				if (((bool((this->at(i)->y < this->at(br)->y)) || bool((bool((this->at(i)->y == this->at(br)->y)) && bool((this->at(i)->x > this->at(br)->x))))))){
					HX_STACK_LINE(228)
					br = i;
				}
			}
		}
		HX_STACK_LINE(234)
		if ((!(::com::stencyl::utils::PolyDecompBayazit_obj::left(this->at((br - (int)1)),this->at(br),this->at((br + (int)1)))))){
			HX_STACK_LINE(234)
			this->points->reverse();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PolyDecompBayazit_obj,makeCCW,(void))

Void PolyDecompBayazit_obj::decompose( Dynamic cb){
{
		HX_STACK_PUSH("PolyDecompBayazit::decompose","com/stencyl/utils/PolyDecompBayazit.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cb,"cb");
		HX_STACK_LINE(123)
		if (((this->points->length < (int)3))){
			HX_STACK_LINE(123)
			return null();
		}
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(125)
			while(((_g1 < _g))){
				HX_STACK_LINE(125)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(126)
				if ((this->isReflex(i))){
					HX_STACK_LINE(129)
					Float upperDist = 1.7976931348623158e+308;		HX_STACK_VAR(upperDist,"upperDist");
					HX_STACK_LINE(130)
					::flash::geom::Point upperIntersection = null();		HX_STACK_VAR(upperIntersection,"upperIntersection");
					HX_STACK_LINE(131)
					int upperIndex = (int)0;		HX_STACK_VAR(upperIndex,"upperIndex");
					HX_STACK_LINE(132)
					Float lowerDist = 1.7976931348623158e+308;		HX_STACK_VAR(lowerDist,"lowerDist");
					HX_STACK_LINE(133)
					::flash::geom::Point lowerIntersection = null();		HX_STACK_VAR(lowerIntersection,"lowerIntersection");
					HX_STACK_LINE(134)
					int lowerIndex = (int)0;		HX_STACK_VAR(lowerIndex,"lowerIndex");
					HX_STACK_LINE(136)
					{
						HX_STACK_LINE(136)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = this->points->length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(136)
						while(((_g3 < _g2))){
							HX_STACK_LINE(136)
							int j = (_g3)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(137)
							if (((bool(::com::stencyl::utils::PolyDecompBayazit_obj::left(this->at((i - (int)1)),this->at(i),this->at(j))) && bool(::com::stencyl::utils::PolyDecompBayazit_obj::rightOn(this->at((i - (int)1)),this->at(i),this->at((j - (int)1))))))){
								HX_STACK_LINE(138)
								::flash::geom::Point intersectionPoint = ::com::stencyl::utils::PolyDecompBayazit_obj::getIntersection(this->at((i - (int)1)),this->at(i),this->at(j),this->at((j - (int)1)));		HX_STACK_VAR(intersectionPoint,"intersectionPoint");
								HX_STACK_LINE(139)
								if ((::com::stencyl::utils::PolyDecompBayazit_obj::right(this->at((i + (int)1)),this->at(i),intersectionPoint))){
									HX_STACK_LINE(140)
									Float distance = ::com::stencyl::utils::PolyDecompBayazit_obj::sqdist(this->at(i),intersectionPoint);		HX_STACK_VAR(distance,"distance");
									HX_STACK_LINE(141)
									if (((distance < lowerDist))){
										HX_STACK_LINE(142)
										lowerDist = distance;
										HX_STACK_LINE(143)
										lowerIntersection = intersectionPoint;
										HX_STACK_LINE(144)
										lowerIndex = j;
									}
								}
							}
							HX_STACK_LINE(148)
							if (((bool(::com::stencyl::utils::PolyDecompBayazit_obj::left(this->at((i + (int)1)),this->at(i),this->at((j + (int)1)))) && bool(::com::stencyl::utils::PolyDecompBayazit_obj::rightOn(this->at((i + (int)1)),this->at(i),this->at(j)))))){
								HX_STACK_LINE(149)
								::flash::geom::Point intersectionPoint = ::com::stencyl::utils::PolyDecompBayazit_obj::getIntersection(this->at((i + (int)1)),this->at(i),this->at(j),this->at((j + (int)1)));		HX_STACK_VAR(intersectionPoint,"intersectionPoint");
								HX_STACK_LINE(150)
								if ((::com::stencyl::utils::PolyDecompBayazit_obj::left(this->at((i - (int)1)),this->at(i),intersectionPoint))){
									HX_STACK_LINE(151)
									Float distance = ::com::stencyl::utils::PolyDecompBayazit_obj::sqdist(this->at(i),intersectionPoint);		HX_STACK_VAR(distance,"distance");
									HX_STACK_LINE(152)
									if (((distance < upperDist))){
										HX_STACK_LINE(153)
										upperDist = distance;
										HX_STACK_LINE(154)
										upperIntersection = intersectionPoint;
										HX_STACK_LINE(155)
										upperIndex = j;
									}
								}
							}
						}
					}
					HX_STACK_LINE(161)
					::com::stencyl::utils::PolyDecompBayazit lowerPoly;		HX_STACK_VAR(lowerPoly,"lowerPoly");
					HX_STACK_LINE(162)
					::com::stencyl::utils::PolyDecompBayazit upperPoly;		HX_STACK_VAR(upperPoly,"upperPoly");
					HX_STACK_LINE(165)
					if (((lowerIndex == hx::Mod(((upperIndex + (int)1)),this->points->length)))){
						HX_STACK_LINE(166)
						::flash::geom::Point steinerPoint = ::flash::geom::Point_obj::__new((((lowerIntersection->x + upperIntersection->x)) * 0.5),(((lowerIntersection->y + upperIntersection->y)) * 0.5));		HX_STACK_VAR(steinerPoint,"steinerPoint");
						HX_STACK_LINE(170)
						lowerPoly = this->polyFromRange(i,upperIndex);
						HX_STACK_LINE(171)
						lowerPoly->points->push(steinerPoint);
						HX_STACK_LINE(173)
						if (((i < upperIndex))){
							HX_STACK_LINE(174)
							upperPoly = this->polyFromRange(lowerIndex,i);
						}
						else{
							HX_STACK_LINE(176)
							upperPoly = this->polyFromRange((int)0,i);
						}
						HX_STACK_LINE(177)
						upperPoly->points->push(steinerPoint);
					}
					else{
						HX_STACK_LINE(182)
						if (((lowerIndex > upperIndex))){
							HX_STACK_LINE(182)
							hx::AddEq(upperIndex,this->points->length);
						}
						HX_STACK_LINE(185)
						int closestIndex = (int)0;		HX_STACK_VAR(closestIndex,"closestIndex");
						HX_STACK_LINE(186)
						Float closestDist = 1.7976931348623158e+308;		HX_STACK_VAR(closestDist,"closestDist");
						HX_STACK_LINE(187)
						::flash::geom::Point closestVert = null();		HX_STACK_VAR(closestVert,"closestVert");
						HX_STACK_LINE(189)
						int j = lowerIndex;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(191)
						while(((j <= upperIndex))){
							HX_STACK_LINE(192)
							if (((bool(::com::stencyl::utils::PolyDecompBayazit_obj::leftOn(this->at((i - (int)1)),this->at(i),this->at(j))) && bool(::com::stencyl::utils::PolyDecompBayazit_obj::rightOn(this->at((i + (int)1)),this->at(i),this->at(j)))))){
								HX_STACK_LINE(193)
								Float distance = ::com::stencyl::utils::PolyDecompBayazit_obj::sqdist(this->at(i),this->at(j));		HX_STACK_VAR(distance,"distance");
								HX_STACK_LINE(194)
								if (((distance < closestDist))){
									HX_STACK_LINE(195)
									closestDist = distance;
									HX_STACK_LINE(196)
									closestVert = this->at(j);
									HX_STACK_LINE(197)
									closestIndex = hx::Mod(j,this->points->length);
								}
							}
							HX_STACK_LINE(201)
							++(j);
						}
						HX_STACK_LINE(204)
						lowerPoly = this->polyFromRange(i,closestIndex);
						HX_STACK_LINE(205)
						upperPoly = this->polyFromRange(closestIndex,i);
					}
					HX_STACK_LINE(209)
					if (((lowerPoly->points->length < upperPoly->points->length))){
						HX_STACK_LINE(210)
						lowerPoly->decompose(cb);
						HX_STACK_LINE(211)
						upperPoly->decompose(cb);
					}
					else{
						HX_STACK_LINE(213)
						upperPoly->decompose(cb);
						HX_STACK_LINE(214)
						lowerPoly->decompose(cb);
					}
					HX_STACK_LINE(216)
					return null();
				}
			}
		}
		HX_STACK_LINE(220)
		if (((this->points->length >= (int)3))){
			HX_STACK_LINE(220)
			cb(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PolyDecompBayazit_obj,decompose,(void))

::com::stencyl::utils::PolyDecompBayazit PolyDecompBayazit_obj::polyFromRange( int lower,int upper){
	HX_STACK_PUSH("PolyDecompBayazit::polyFromRange","com/stencyl/utils/PolyDecompBayazit.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(lower,"lower");
	HX_STACK_ARG(upper,"upper");
	HX_STACK_LINE(115)
	if (((lower < upper))){
		HX_STACK_LINE(117)
		return ::com::stencyl::utils::PolyDecompBayazit_obj::__new(this->points->slice(lower,(upper + (int)1)));
	}
	else{
		HX_STACK_LINE(119)
		return ::com::stencyl::utils::PolyDecompBayazit_obj::__new(this->points->slice(lower,null())->concat(this->points->slice((int)0,(upper + (int)1))));
	}
	HX_STACK_LINE(115)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PolyDecompBayazit_obj,polyFromRange,return )

bool PolyDecompBayazit_obj::isReflex( int i){
	HX_STACK_PUSH("PolyDecompBayazit::isReflex","com/stencyl/utils/PolyDecompBayazit.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(111)
	return ::com::stencyl::utils::PolyDecompBayazit_obj::right(this->at((i - (int)1)),this->at(i),this->at((i + (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC1(PolyDecompBayazit_obj,isReflex,return )

::flash::geom::Point PolyDecompBayazit_obj::at( int i){
	HX_STACK_PUSH("PolyDecompBayazit::at","com/stencyl/utils/PolyDecompBayazit.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(107)
	int s = this->points->length;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(108)
	return this->points->__get(hx::Mod(((i + s)),s)).StaticCast< ::flash::geom::Point >();
}


HX_DEFINE_DYNAMIC_FUNC1(PolyDecompBayazit_obj,at,return )

Void PolyDecompBayazit_obj::combineClosePoints( ){
{
		HX_STACK_PUSH("PolyDecompBayazit::combineClosePoints","com/stencyl/utils/PolyDecompBayazit.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		Array< ::Dynamic > combinedPoints = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(combinedPoints,"combinedPoints");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while(((_g1 < _g))){
				HX_STACK_LINE(95)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(96)
				::flash::geom::Point a = this->at(i);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(97)
				::flash::geom::Point b = this->at((i + (int)1));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(99)
				if (((::com::stencyl::utils::PolyDecompBayazit_obj::sqdist(a,b) > 2.2250738585072014e-308))){
					HX_STACK_LINE(100)
					combinedPoints->push(a);
				}
			}
		}
		HX_STACK_LINE(103)
		this->points = combinedPoints;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PolyDecompBayazit_obj,combineClosePoints,(void))

Void PolyDecompBayazit_obj::combineColinearPoints( ){
{
		HX_STACK_PUSH("PolyDecompBayazit::combineColinearPoints","com/stencyl/utils/PolyDecompBayazit.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		Array< ::Dynamic > combinedPoints = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(combinedPoints,"combinedPoints");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			while(((_g1 < _g))){
				HX_STACK_LINE(71)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(72)
				::flash::geom::Point a = this->at((i - (int)1));		HX_STACK_VAR(a,"a");
				::flash::geom::Point b = this->at(i);		HX_STACK_VAR(b,"b");
				::flash::geom::Point c = this->at((i + (int)1));		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(74)
				if (((::com::stencyl::utils::PolyDecompBayazit_obj::getIntersection(a,b,b,c) != null()))){
					HX_STACK_LINE(75)
					combinedPoints->push(b);
				}
			}
		}
		HX_STACK_LINE(78)
		this->points = combinedPoints;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PolyDecompBayazit_obj,combineColinearPoints,(void))

Float PolyDecompBayazit_obj::area( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c){
	HX_STACK_PUSH("PolyDecompBayazit::area","com/stencyl/utils/PolyDecompBayazit.hx",26);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(26)
	return ((((b->x - a->x)) * ((c->y - a->y))) - (((c->x - a->x)) * ((b->y - a->y))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PolyDecompBayazit_obj,area,return )

bool PolyDecompBayazit_obj::right( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c){
	HX_STACK_PUSH("PolyDecompBayazit::right","com/stencyl/utils/PolyDecompBayazit.hx",30);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(30)
	return (::com::stencyl::utils::PolyDecompBayazit_obj::area(a,b,c) < (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PolyDecompBayazit_obj,right,return )

bool PolyDecompBayazit_obj::rightOn( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c){
	HX_STACK_PUSH("PolyDecompBayazit::rightOn","com/stencyl/utils/PolyDecompBayazit.hx",34);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(34)
	return (::com::stencyl::utils::PolyDecompBayazit_obj::area(a,b,c) <= (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PolyDecompBayazit_obj,rightOn,return )

bool PolyDecompBayazit_obj::left( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c){
	HX_STACK_PUSH("PolyDecompBayazit::left","com/stencyl/utils/PolyDecompBayazit.hx",38);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(38)
	return (::com::stencyl::utils::PolyDecompBayazit_obj::area(a,b,c) > (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PolyDecompBayazit_obj,left,return )

bool PolyDecompBayazit_obj::leftOn( ::flash::geom::Point a,::flash::geom::Point b,::flash::geom::Point c){
	HX_STACK_PUSH("PolyDecompBayazit::leftOn","com/stencyl/utils/PolyDecompBayazit.hx",42);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(42)
	return (::com::stencyl::utils::PolyDecompBayazit_obj::area(a,b,c) >= (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PolyDecompBayazit_obj,leftOn,return )

Float PolyDecompBayazit_obj::sqdist( ::flash::geom::Point a,::flash::geom::Point b){
	HX_STACK_PUSH("PolyDecompBayazit::sqdist","com/stencyl/utils/PolyDecompBayazit.hx",46);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(47)
	Float dx = (b->x - a->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(48)
	Float dy = (b->y - a->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(49)
	return ((dx * dx) + (dy * dy));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PolyDecompBayazit_obj,sqdist,return )

::flash::geom::Point PolyDecompBayazit_obj::getIntersection( ::flash::geom::Point start1,::flash::geom::Point end1,::flash::geom::Point start2,::flash::geom::Point end2){
	HX_STACK_PUSH("PolyDecompBayazit::getIntersection","com/stencyl/utils/PolyDecompBayazit.hx",52);
	HX_STACK_ARG(start1,"start1");
	HX_STACK_ARG(end1,"end1");
	HX_STACK_ARG(start2,"start2");
	HX_STACK_ARG(end2,"end2");
	HX_STACK_LINE(53)
	Float a1 = (end1->y - start1->y);		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(54)
	Float b1 = (start1->x - end1->x);		HX_STACK_VAR(b1,"b1");
	HX_STACK_LINE(55)
	Float c1 = ((a1 * start1->x) + (b1 * start1->y));		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(56)
	Float a2 = (end2->y - start2->y);		HX_STACK_VAR(a2,"a2");
	HX_STACK_LINE(57)
	Float b2 = (start2->x - end2->x);		HX_STACK_VAR(b2,"b2");
	HX_STACK_LINE(58)
	Float c2 = ((a2 * start2->x) + (b2 * start2->y));		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(59)
	Float det = ((a1 * b2) - (a2 * b1));		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(61)
	if (((::Math_obj::abs(det) > 2.2250738585072014e-308))){
		HX_STACK_LINE(61)
		return ::flash::geom::Point_obj::__new((Float((((b2 * c1) - (b1 * c2)))) / Float(det)),(Float((((a1 * c2) - (a2 * c1)))) / Float(det)));
	}
	HX_STACK_LINE(64)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PolyDecompBayazit_obj,getIntersection,return )


PolyDecompBayazit_obj::PolyDecompBayazit_obj()
{
}

void PolyDecompBayazit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolyDecompBayazit);
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_END_CLASS();
}

void PolyDecompBayazit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(points,"points");
}

Dynamic PolyDecompBayazit_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"area") ) { return area_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"leftOn") ) { return leftOn_dyn(); }
		if (HX_FIELD_EQ(inName,"sqdist") ) { return sqdist_dyn(); }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rightOn") ) { return rightOn_dyn(); }
		if (HX_FIELD_EQ(inName,"makeCCW") ) { return makeCCW_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isReflex") ) { return isReflex_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"polyFromRange") ) { return polyFromRange_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getIntersection") ) { return getIntersection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"combineClosePoints") ) { return combineClosePoints_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"combineColinearPoints") ) { return combineColinearPoints_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PolyDecompBayazit_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolyDecompBayazit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("points"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("area"),
	HX_CSTRING("right"),
	HX_CSTRING("rightOn"),
	HX_CSTRING("left"),
	HX_CSTRING("leftOn"),
	HX_CSTRING("sqdist"),
	HX_CSTRING("getIntersection"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("makeCCW"),
	HX_CSTRING("decompose"),
	HX_CSTRING("polyFromRange"),
	HX_CSTRING("isReflex"),
	HX_CSTRING("at"),
	HX_CSTRING("combineClosePoints"),
	HX_CSTRING("points"),
	HX_CSTRING("combineColinearPoints"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolyDecompBayazit_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolyDecompBayazit_obj::__mClass,"__mClass");
};

Class PolyDecompBayazit_obj::__mClass;

void PolyDecompBayazit_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.utils.PolyDecompBayazit"), hx::TCanCast< PolyDecompBayazit_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PolyDecompBayazit_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
