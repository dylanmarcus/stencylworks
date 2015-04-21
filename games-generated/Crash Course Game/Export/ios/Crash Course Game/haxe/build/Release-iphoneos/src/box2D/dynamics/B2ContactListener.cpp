#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactImpulse
#include <box2D/dynamics/B2ContactImpulse.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Terrain
#include <com/stencyl/models/Terrain.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#include <de/polygonal/ds/IntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTable
#include <de/polygonal/ds/IntIntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace box2D{
namespace dynamics{

Void B2ContactListener_obj::__construct()
{
HX_STACK_PUSH("B2ContactListener::new","box2D/dynamics/B2ContactListener.hx",44);
{
}
;
	return null();
}

B2ContactListener_obj::~B2ContactListener_obj() { }

Dynamic B2ContactListener_obj::__CreateEmpty() { return  new B2ContactListener_obj; }
hx::ObjectPtr< B2ContactListener_obj > B2ContactListener_obj::__new()
{  hx::ObjectPtr< B2ContactListener_obj > result = new B2ContactListener_obj();
	result->__construct();
	return result;}

Dynamic B2ContactListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2ContactListener_obj > result = new B2ContactListener_obj();
	result->__construct();
	return result;}

Void B2ContactListener_obj::postSolve( ::box2D::dynamics::contacts::B2Contact contact,::box2D::dynamics::B2ContactImpulse impulse){
{
		HX_STACK_PUSH("B2ContactListener::postSolve","box2D/dynamics/B2ContactListener.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_ARG(impulse,"impulse");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2ContactListener_obj,postSolve,(void))

Void B2ContactListener_obj::preSolve( ::box2D::dynamics::contacts::B2Contact contact,::box2D::collision::B2Manifold oldManifold){
{
		HX_STACK_PUSH("B2ContactListener::preSolve","box2D/dynamics/B2ContactListener.hx",167);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_ARG(oldManifold,"oldManifold");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2ContactListener_obj,preSolve,(void))

Void B2ContactListener_obj::endContact( ::box2D::dynamics::contacts::B2Contact contact){
{
		HX_STACK_PUSH("B2ContactListener::endContact","box2D/dynamics/B2ContactListener.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_LINE(92)
		::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(93)
		::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(95)
		bool r1 = ::Std_obj::is(a1,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r1,"r1");
		HX_STACK_LINE(96)
		bool r2 = ::Std_obj::is(a2,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(98)
		if (((bool(r1) && bool(!(r2))))){
			HX_STACK_LINE(100)
			bool inRegion = false;		HX_STACK_VAR(inRegion,"inRegion");
			HX_STACK_LINE(102)
			if (((a2->regionContacts != null()))){
				HX_STACK_LINE(102)
				::de::polygonal::ds::IntHashTable _this = a2->regionContacts;		HX_STACK_VAR(_this,"_this");
				int key = contact->key;		HX_STACK_VAR(key,"key");
				struct _Function_3_1{
					inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",102);
						{
							HX_STACK_LINE(102)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(102)
							int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_4_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",102);
									{
										HX_STACK_LINE(102)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(102)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(102)
										while(((i != (int)-1))){
											HX_STACK_LINE(102)
											if (((_this1->_data->__get(i) == key))){
												HX_STACK_LINE(102)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(102)
												break;
											}
											HX_STACK_LINE(102)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(102)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(102)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(102)
				int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(102)
				if (((i == (int)-2147483647))){
					HX_STACK_LINE(102)
					false;
				}
				else{
					HX_STACK_LINE(102)
					_this->_key0 = (int)-2147483647;
					HX_STACK_LINE(102)
					hx::IndexRef((_this->_vals).mPtr,i) = null();
					HX_STACK_LINE(102)
					_this->_keys[i] = (int)-2147483647;
					HX_STACK_LINE(102)
					_this->_next[i] = _this->_free;
					HX_STACK_LINE(102)
					_this->_free = i;
					HX_STACK_LINE(102)
					bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
					HX_STACK_LINE(102)
					if (((_this->_sizeLevel > (int)0))){
						HX_STACK_LINE(102)
						if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
							HX_STACK_LINE(102)
							if ((_this->_isResizable)){
								HX_STACK_LINE(102)
								shrink = true;
							}
						}
					}
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(102)
						int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(102)
						int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(102)
						if (((i1 == (int)-1))){
							HX_STACK_LINE(102)
							false;
						}
						else{
							HX_STACK_LINE(102)
							if (((key == _this1->_data->__get(i1)))){
								HX_STACK_LINE(102)
								if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
									HX_STACK_LINE(102)
									_this1->_hash[b] = (int)-1;
								}
								else{
									HX_STACK_LINE(102)
									_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
								}
								HX_STACK_LINE(102)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(102)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(102)
								_this1->_free = j;
								HX_STACK_LINE(102)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(102)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(102)
								(_this1->_size)--;
								HX_STACK_LINE(102)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(102)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(102)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(102)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(102)
								true;
							}
							else{
								HX_STACK_LINE(102)
								bool exists = false;		HX_STACK_VAR(exists,"exists");
								HX_STACK_LINE(102)
								int i0 = i1;		HX_STACK_VAR(i0,"i0");
								HX_STACK_LINE(102)
								i1 = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(102)
								while(((i1 != (int)-1))){
									HX_STACK_LINE(102)
									if (((_this1->_data->__get(i1) == key))){
										HX_STACK_LINE(102)
										exists = true;
										HX_STACK_LINE(102)
										break;
									}
									HX_STACK_LINE(102)
									i1 = _this1->_data->__get(((i0 = i1) + (int)2));
								}
								HX_STACK_LINE(102)
								if ((exists)){
									HX_STACK_LINE(102)
									_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(102)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(102)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(102)
									_this1->_free = j;
									HX_STACK_LINE(102)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(102)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(102)
									--(_this1->_size);
									HX_STACK_LINE(102)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(102)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(102)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(102)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(102)
									true;
								}
								else{
									HX_STACK_LINE(102)
									false;
								}
							}
						}
					}
					HX_STACK_LINE(102)
					if ((shrink)){
						HX_STACK_LINE(102)
						(_this->_sizeLevel)--;
						HX_STACK_LINE(102)
						int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
						HX_STACK_LINE(102)
						int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
						struct _Function_5_1{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",102);
								{
									HX_STACK_LINE(102)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(102)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(102)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(102)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(102)
						_this->_next = _Function_5_1::Block(newSize);
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(102)
							while(((_g1 < _g))){
								HX_STACK_LINE(102)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(102)
								_this->_next[i1] = (i1 + (int)1);
							}
						}
						HX_STACK_LINE(102)
						_this->_next[(newSize - (int)1)] = (int)-1;
						HX_STACK_LINE(102)
						_this->_free = (int)0;
						struct _Function_5_2{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",102);
								{
									HX_STACK_LINE(102)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(102)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(102)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(102)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(102)
						Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							int k = newSize;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(102)
							if (((k == (int)-1))){
								HX_STACK_LINE(102)
								k = tmpKeys->length;
							}
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(102)
								while(((_g < k))){
									HX_STACK_LINE(102)
									int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(102)
									tmpKeys[i1] = (int)-2147483647;
								}
							}
						}
						struct _Function_5_3{
							inline static Array< ::Dynamic > Block( int &newSize){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",102);
								{
									HX_STACK_LINE(102)
									Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(102)
									a = Array_obj< ::Dynamic >::__new();
									HX_STACK_LINE(102)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(102)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(102)
						Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
						HX_STACK_LINE(102)
						for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
							int i1 = __it->next();
							{
								HX_STACK_LINE(102)
								tmpKeys[_this->_free] = _this->_keys->__get(i1);
								HX_STACK_LINE(102)
								tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
								HX_STACK_LINE(102)
								_this->_free = _this->_next->__get(_this->_free);
							}
;
						}
						HX_STACK_LINE(102)
						_this->_keys = tmpKeys;
						HX_STACK_LINE(102)
						_this->_vals = tmpVals;
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(102)
							while(((_g1 < _g))){
								HX_STACK_LINE(102)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(102)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
								HX_STACK_LINE(102)
								int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
								HX_STACK_LINE(102)
								if (((i2 == (int)-1))){
									HX_STACK_LINE(102)
									false;
								}
								else{
									HX_STACK_LINE(102)
									if (((_this1->_data->__get(i2) == key1))){
										HX_STACK_LINE(102)
										_this1->_data[(i2 + (int)1)] = i1;
										HX_STACK_LINE(102)
										true;
									}
									else{
										HX_STACK_LINE(102)
										i2 = _this1->_data->__get((i2 + (int)2));
										HX_STACK_LINE(102)
										while(((i2 != (int)-1))){
											HX_STACK_LINE(102)
											if (((_this1->_data->__get(i2) == key1))){
												HX_STACK_LINE(102)
												_this1->_data[(i2 + (int)1)] = i1;
												HX_STACK_LINE(102)
												break;
											}
											HX_STACK_LINE(102)
											i2 = _this1->_data->__get((i2 + (int)2));
										}
										HX_STACK_LINE(102)
										(i2 != (int)-1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(102)
					true;
				}
			}
			HX_STACK_LINE(104)
			for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >(a2->regionContacts->iterator());  __it->hasNext(); ){
				::box2D::dynamics::contacts::B2Contact p = __it->next();
				{
					HX_STACK_LINE(106)
					if (((bool(::Std_obj::is(p->getFixtureA()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureA()->getUserData() == a1))))){
						HX_STACK_LINE(108)
						inRegion = true;
						HX_STACK_LINE(109)
						break;
					}
					HX_STACK_LINE(112)
					if (((bool(::Std_obj::is(p->getFixtureB()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureB()->getUserData() == a1))))){
						HX_STACK_LINE(114)
						inRegion = true;
						HX_STACK_LINE(115)
						break;
					}
				}
;
			}
			HX_STACK_LINE(119)
			if (((bool(!(inRegion)) || bool(a2->recycled)))){
				HX_STACK_LINE(119)
				(hx::TCast< com::stencyl::models::Region >::cast(a1))->removeActor(a2);
			}
			HX_STACK_LINE(121)
			return null();
		}
		HX_STACK_LINE(124)
		if (((bool(r2) && bool(!(r1))))){
			HX_STACK_LINE(126)
			bool inRegion = false;		HX_STACK_VAR(inRegion,"inRegion");
			HX_STACK_LINE(128)
			if (((a1->regionContacts != null()))){
				HX_STACK_LINE(128)
				::de::polygonal::ds::IntHashTable _this = a1->regionContacts;		HX_STACK_VAR(_this,"_this");
				int key = contact->key;		HX_STACK_VAR(key,"key");
				struct _Function_3_1{
					inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",128);
						{
							HX_STACK_LINE(128)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(128)
							int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_4_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",128);
									{
										HX_STACK_LINE(128)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(128)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(128)
										while(((i != (int)-1))){
											HX_STACK_LINE(128)
											if (((_this1->_data->__get(i) == key))){
												HX_STACK_LINE(128)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(128)
												break;
											}
											HX_STACK_LINE(128)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(128)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(128)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(128)
				int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(128)
				if (((i == (int)-2147483647))){
					HX_STACK_LINE(128)
					false;
				}
				else{
					HX_STACK_LINE(128)
					_this->_key0 = (int)-2147483647;
					HX_STACK_LINE(128)
					hx::IndexRef((_this->_vals).mPtr,i) = null();
					HX_STACK_LINE(128)
					_this->_keys[i] = (int)-2147483647;
					HX_STACK_LINE(128)
					_this->_next[i] = _this->_free;
					HX_STACK_LINE(128)
					_this->_free = i;
					HX_STACK_LINE(128)
					bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
					HX_STACK_LINE(128)
					if (((_this->_sizeLevel > (int)0))){
						HX_STACK_LINE(128)
						if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
							HX_STACK_LINE(128)
							if ((_this->_isResizable)){
								HX_STACK_LINE(128)
								shrink = true;
							}
						}
					}
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(128)
						int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(128)
						int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(128)
						if (((i1 == (int)-1))){
							HX_STACK_LINE(128)
							false;
						}
						else{
							HX_STACK_LINE(128)
							if (((key == _this1->_data->__get(i1)))){
								HX_STACK_LINE(128)
								if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
									HX_STACK_LINE(128)
									_this1->_hash[b] = (int)-1;
								}
								else{
									HX_STACK_LINE(128)
									_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
								}
								HX_STACK_LINE(128)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(128)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(128)
								_this1->_free = j;
								HX_STACK_LINE(128)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(128)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(128)
								(_this1->_size)--;
								HX_STACK_LINE(128)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(128)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(128)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(128)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(128)
								true;
							}
							else{
								HX_STACK_LINE(128)
								bool exists = false;		HX_STACK_VAR(exists,"exists");
								HX_STACK_LINE(128)
								int i0 = i1;		HX_STACK_VAR(i0,"i0");
								HX_STACK_LINE(128)
								i1 = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(128)
								while(((i1 != (int)-1))){
									HX_STACK_LINE(128)
									if (((_this1->_data->__get(i1) == key))){
										HX_STACK_LINE(128)
										exists = true;
										HX_STACK_LINE(128)
										break;
									}
									HX_STACK_LINE(128)
									i1 = _this1->_data->__get(((i0 = i1) + (int)2));
								}
								HX_STACK_LINE(128)
								if ((exists)){
									HX_STACK_LINE(128)
									_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(128)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(128)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(128)
									_this1->_free = j;
									HX_STACK_LINE(128)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(128)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(128)
									--(_this1->_size);
									HX_STACK_LINE(128)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(128)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(128)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(128)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(128)
									true;
								}
								else{
									HX_STACK_LINE(128)
									false;
								}
							}
						}
					}
					HX_STACK_LINE(128)
					if ((shrink)){
						HX_STACK_LINE(128)
						(_this->_sizeLevel)--;
						HX_STACK_LINE(128)
						int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
						HX_STACK_LINE(128)
						int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
						struct _Function_5_1{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",128);
								{
									HX_STACK_LINE(128)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(128)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(128)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(128)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(128)
						_this->_next = _Function_5_1::Block(newSize);
						HX_STACK_LINE(128)
						{
							HX_STACK_LINE(128)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(128)
							while(((_g1 < _g))){
								HX_STACK_LINE(128)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(128)
								_this->_next[i1] = (i1 + (int)1);
							}
						}
						HX_STACK_LINE(128)
						_this->_next[(newSize - (int)1)] = (int)-1;
						HX_STACK_LINE(128)
						_this->_free = (int)0;
						struct _Function_5_2{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",128);
								{
									HX_STACK_LINE(128)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(128)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(128)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(128)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(128)
						Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
						HX_STACK_LINE(128)
						{
							HX_STACK_LINE(128)
							int k = newSize;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(128)
							if (((k == (int)-1))){
								HX_STACK_LINE(128)
								k = tmpKeys->length;
							}
							HX_STACK_LINE(128)
							{
								HX_STACK_LINE(128)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(128)
								while(((_g < k))){
									HX_STACK_LINE(128)
									int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(128)
									tmpKeys[i1] = (int)-2147483647;
								}
							}
						}
						struct _Function_5_3{
							inline static Array< ::Dynamic > Block( int &newSize){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",128);
								{
									HX_STACK_LINE(128)
									Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(128)
									a = Array_obj< ::Dynamic >::__new();
									HX_STACK_LINE(128)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(128)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(128)
						Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
						HX_STACK_LINE(128)
						for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
							int i1 = __it->next();
							{
								HX_STACK_LINE(128)
								tmpKeys[_this->_free] = _this->_keys->__get(i1);
								HX_STACK_LINE(128)
								tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
								HX_STACK_LINE(128)
								_this->_free = _this->_next->__get(_this->_free);
							}
;
						}
						HX_STACK_LINE(128)
						_this->_keys = tmpKeys;
						HX_STACK_LINE(128)
						_this->_vals = tmpVals;
						HX_STACK_LINE(128)
						{
							HX_STACK_LINE(128)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(128)
							while(((_g1 < _g))){
								HX_STACK_LINE(128)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(128)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
								HX_STACK_LINE(128)
								int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
								HX_STACK_LINE(128)
								if (((i2 == (int)-1))){
									HX_STACK_LINE(128)
									false;
								}
								else{
									HX_STACK_LINE(128)
									if (((_this1->_data->__get(i2) == key1))){
										HX_STACK_LINE(128)
										_this1->_data[(i2 + (int)1)] = i1;
										HX_STACK_LINE(128)
										true;
									}
									else{
										HX_STACK_LINE(128)
										i2 = _this1->_data->__get((i2 + (int)2));
										HX_STACK_LINE(128)
										while(((i2 != (int)-1))){
											HX_STACK_LINE(128)
											if (((_this1->_data->__get(i2) == key1))){
												HX_STACK_LINE(128)
												_this1->_data[(i2 + (int)1)] = i1;
												HX_STACK_LINE(128)
												break;
											}
											HX_STACK_LINE(128)
											i2 = _this1->_data->__get((i2 + (int)2));
										}
										HX_STACK_LINE(128)
										(i2 != (int)-1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(128)
					true;
				}
			}
			HX_STACK_LINE(130)
			for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >(a1->regionContacts->iterator());  __it->hasNext(); ){
				::box2D::dynamics::contacts::B2Contact p = __it->next();
				{
					HX_STACK_LINE(132)
					if (((bool(::Std_obj::is(p->getFixtureA()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureA()->getUserData() == a2))))){
						HX_STACK_LINE(134)
						inRegion = true;
						HX_STACK_LINE(135)
						break;
					}
					HX_STACK_LINE(138)
					if (((bool(::Std_obj::is(p->getFixtureB()->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool((p->getFixtureB()->getUserData() == a2))))){
						HX_STACK_LINE(140)
						inRegion = true;
						HX_STACK_LINE(141)
						break;
					}
				}
;
			}
			HX_STACK_LINE(145)
			if (((bool(!(inRegion)) || bool(a1->recycled)))){
				HX_STACK_LINE(145)
				(hx::TCast< com::stencyl::models::Region >::cast(a2))->removeActor(a1);
			}
			HX_STACK_LINE(147)
			return null();
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			if (((a1->collisions != null()))){
				struct _Function_3_1{
					inline static bool Block( ::com::stencyl::models::Actor &a1,::box2D::dynamics::contacts::B2Contact &contact){
						HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
						{
							HX_STACK_LINE(150)
							::de::polygonal::ds::IntHashTable _this = a1->collisions;		HX_STACK_VAR(_this,"_this");
							int key = contact->key;		HX_STACK_VAR(key,"key");
							struct _Function_4_1{
								inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
									{
										HX_STACK_LINE(150)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(150)
										int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
										struct _Function_5_1{
											inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
												{
													HX_STACK_LINE(150)
													int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(150)
													i = _this1->_data->__get((i + (int)2));
													HX_STACK_LINE(150)
													while(((i != (int)-1))){
														HX_STACK_LINE(150)
														if (((_this1->_data->__get(i) == key))){
															HX_STACK_LINE(150)
															v = _this1->_data->__get((i + (int)1));
															HX_STACK_LINE(150)
															break;
														}
														HX_STACK_LINE(150)
														i = _this1->_data->__get((i + (int)2));
													}
													HX_STACK_LINE(150)
													return v;
												}
												return null();
											}
										};
										HX_STACK_LINE(150)
										return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(150)
							int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
							struct _Function_4_2{
								inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
									{
										HX_STACK_LINE(150)
										_this->_key0 = (int)-2147483647;
										HX_STACK_LINE(150)
										hx::IndexRef((_this->_vals).mPtr,i) = null();
										HX_STACK_LINE(150)
										_this->_keys[i] = (int)-2147483647;
										HX_STACK_LINE(150)
										_this->_next[i] = _this->_free;
										HX_STACK_LINE(150)
										_this->_free = i;
										HX_STACK_LINE(150)
										bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
										HX_STACK_LINE(150)
										if (((_this->_sizeLevel > (int)0))){
											HX_STACK_LINE(150)
											if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
												HX_STACK_LINE(150)
												if ((_this->_isResizable)){
													HX_STACK_LINE(150)
													shrink = true;
												}
											}
										}
										HX_STACK_LINE(150)
										{
											HX_STACK_LINE(150)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(150)
											int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(150)
											int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
											HX_STACK_LINE(150)
											if (((i1 == (int)-1))){
												HX_STACK_LINE(150)
												false;
											}
											else{
												HX_STACK_LINE(150)
												if (((key == _this1->_data->__get(i1)))){
													HX_STACK_LINE(150)
													if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
														HX_STACK_LINE(150)
														_this1->_hash[b] = (int)-1;
													}
													else{
														HX_STACK_LINE(150)
														_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
													}
													HX_STACK_LINE(150)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(150)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(150)
													_this1->_free = j;
													HX_STACK_LINE(150)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(150)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(150)
													(_this1->_size)--;
													HX_STACK_LINE(150)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(150)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(150)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(150)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(150)
													true;
												}
												else{
													HX_STACK_LINE(150)
													bool exists = false;		HX_STACK_VAR(exists,"exists");
													HX_STACK_LINE(150)
													int i0 = i1;		HX_STACK_VAR(i0,"i0");
													HX_STACK_LINE(150)
													i1 = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(150)
													while(((i1 != (int)-1))){
														HX_STACK_LINE(150)
														if (((_this1->_data->__get(i1) == key))){
															HX_STACK_LINE(150)
															exists = true;
															HX_STACK_LINE(150)
															break;
														}
														HX_STACK_LINE(150)
														i1 = _this1->_data->__get(((i0 = i1) + (int)2));
													}
													HX_STACK_LINE(150)
													if ((exists)){
														HX_STACK_LINE(150)
														_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(150)
														int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
														HX_STACK_LINE(150)
														_this1->_next[j] = _this1->_free;
														HX_STACK_LINE(150)
														_this1->_free = j;
														HX_STACK_LINE(150)
														_this1->_data[(i1 + (int)1)] = (int)-2147483647;
														HX_STACK_LINE(150)
														_this1->_data[(i1 + (int)2)] = (int)-1;
														HX_STACK_LINE(150)
														--(_this1->_size);
														HX_STACK_LINE(150)
														if (((_this1->_sizeLevel > (int)0))){
															HX_STACK_LINE(150)
															if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
																HX_STACK_LINE(150)
																if ((_this1->_isResizable)){
																	HX_STACK_LINE(150)
																	_this1->_shrink();
																}
															}
														}
														HX_STACK_LINE(150)
														true;
													}
													else{
														HX_STACK_LINE(150)
														false;
													}
												}
											}
										}
										HX_STACK_LINE(150)
										if ((shrink)){
											HX_STACK_LINE(150)
											(_this->_sizeLevel)--;
											HX_STACK_LINE(150)
											int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
											HX_STACK_LINE(150)
											int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
											struct _Function_6_1{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
													{
														HX_STACK_LINE(150)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(150)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(150)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(150)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(150)
											_this->_next = _Function_6_1::Block(newSize);
											HX_STACK_LINE(150)
											{
												HX_STACK_LINE(150)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(150)
												while(((_g1 < _g))){
													HX_STACK_LINE(150)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(150)
													_this->_next[i1] = (i1 + (int)1);
												}
											}
											HX_STACK_LINE(150)
											_this->_next[(newSize - (int)1)] = (int)-1;
											HX_STACK_LINE(150)
											_this->_free = (int)0;
											struct _Function_6_2{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
													{
														HX_STACK_LINE(150)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(150)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(150)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(150)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(150)
											Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
											HX_STACK_LINE(150)
											{
												HX_STACK_LINE(150)
												int k = newSize;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(150)
												if (((k == (int)-1))){
													HX_STACK_LINE(150)
													k = tmpKeys->length;
												}
												HX_STACK_LINE(150)
												{
													HX_STACK_LINE(150)
													int _g = (int)0;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(150)
													while(((_g < k))){
														HX_STACK_LINE(150)
														int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(150)
														tmpKeys[i1] = (int)-2147483647;
													}
												}
											}
											struct _Function_6_3{
												inline static Array< ::Dynamic > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
													{
														HX_STACK_LINE(150)
														Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(150)
														a = Array_obj< ::Dynamic >::__new();
														HX_STACK_LINE(150)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(150)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(150)
											Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
											HX_STACK_LINE(150)
											for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
												int i1 = __it->next();
												{
													HX_STACK_LINE(150)
													tmpKeys[_this->_free] = _this->_keys->__get(i1);
													HX_STACK_LINE(150)
													tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
													HX_STACK_LINE(150)
													_this->_free = _this->_next->__get(_this->_free);
												}
;
											}
											HX_STACK_LINE(150)
											_this->_keys = tmpKeys;
											HX_STACK_LINE(150)
											_this->_vals = tmpVals;
											HX_STACK_LINE(150)
											{
												HX_STACK_LINE(150)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(150)
												while(((_g1 < _g))){
													HX_STACK_LINE(150)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(150)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
													HX_STACK_LINE(150)
													int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
													HX_STACK_LINE(150)
													if (((i2 == (int)-1))){
														HX_STACK_LINE(150)
														false;
													}
													else{
														HX_STACK_LINE(150)
														if (((_this1->_data->__get(i2) == key1))){
															HX_STACK_LINE(150)
															_this1->_data[(i2 + (int)1)] = i1;
															HX_STACK_LINE(150)
															true;
														}
														else{
															HX_STACK_LINE(150)
															i2 = _this1->_data->__get((i2 + (int)2));
															HX_STACK_LINE(150)
															while(((i2 != (int)-1))){
																HX_STACK_LINE(150)
																if (((_this1->_data->__get(i2) == key1))){
																	HX_STACK_LINE(150)
																	_this1->_data[(i2 + (int)1)] = i1;
																	HX_STACK_LINE(150)
																	break;
																}
																HX_STACK_LINE(150)
																i2 = _this1->_data->__get((i2 + (int)2));
															}
															HX_STACK_LINE(150)
															(i2 != (int)-1);
														}
													}
												}
											}
										}
										HX_STACK_LINE(150)
										return true;
									}
									return null();
								}
							};
							HX_STACK_LINE(150)
							return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_4_2::Block(i,_this,key)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(150)
				if ((_Function_3_1::Block(a1,contact))){
					HX_STACK_LINE(150)
					(a1->collisionsCount)--;
				}
			}
			HX_STACK_LINE(150)
			if (((a1->contacts != null()))){
				struct _Function_3_1{
					inline static bool Block( ::com::stencyl::models::Actor &a1,::box2D::dynamics::contacts::B2Contact &contact){
						HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
						{
							HX_STACK_LINE(150)
							::de::polygonal::ds::IntHashTable _this = a1->contacts;		HX_STACK_VAR(_this,"_this");
							int key = contact->key;		HX_STACK_VAR(key,"key");
							struct _Function_4_1{
								inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
									{
										HX_STACK_LINE(150)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(150)
										int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
										struct _Function_5_1{
											inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
												{
													HX_STACK_LINE(150)
													int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(150)
													i = _this1->_data->__get((i + (int)2));
													HX_STACK_LINE(150)
													while(((i != (int)-1))){
														HX_STACK_LINE(150)
														if (((_this1->_data->__get(i) == key))){
															HX_STACK_LINE(150)
															v = _this1->_data->__get((i + (int)1));
															HX_STACK_LINE(150)
															break;
														}
														HX_STACK_LINE(150)
														i = _this1->_data->__get((i + (int)2));
													}
													HX_STACK_LINE(150)
													return v;
												}
												return null();
											}
										};
										HX_STACK_LINE(150)
										return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(150)
							int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
							struct _Function_4_2{
								inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
									{
										HX_STACK_LINE(150)
										_this->_key0 = (int)-2147483647;
										HX_STACK_LINE(150)
										hx::IndexRef((_this->_vals).mPtr,i) = null();
										HX_STACK_LINE(150)
										_this->_keys[i] = (int)-2147483647;
										HX_STACK_LINE(150)
										_this->_next[i] = _this->_free;
										HX_STACK_LINE(150)
										_this->_free = i;
										HX_STACK_LINE(150)
										bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
										HX_STACK_LINE(150)
										if (((_this->_sizeLevel > (int)0))){
											HX_STACK_LINE(150)
											if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
												HX_STACK_LINE(150)
												if ((_this->_isResizable)){
													HX_STACK_LINE(150)
													shrink = true;
												}
											}
										}
										HX_STACK_LINE(150)
										{
											HX_STACK_LINE(150)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(150)
											int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(150)
											int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
											HX_STACK_LINE(150)
											if (((i1 == (int)-1))){
												HX_STACK_LINE(150)
												false;
											}
											else{
												HX_STACK_LINE(150)
												if (((key == _this1->_data->__get(i1)))){
													HX_STACK_LINE(150)
													if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
														HX_STACK_LINE(150)
														_this1->_hash[b] = (int)-1;
													}
													else{
														HX_STACK_LINE(150)
														_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
													}
													HX_STACK_LINE(150)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(150)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(150)
													_this1->_free = j;
													HX_STACK_LINE(150)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(150)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(150)
													(_this1->_size)--;
													HX_STACK_LINE(150)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(150)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(150)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(150)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(150)
													true;
												}
												else{
													HX_STACK_LINE(150)
													bool exists = false;		HX_STACK_VAR(exists,"exists");
													HX_STACK_LINE(150)
													int i0 = i1;		HX_STACK_VAR(i0,"i0");
													HX_STACK_LINE(150)
													i1 = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(150)
													while(((i1 != (int)-1))){
														HX_STACK_LINE(150)
														if (((_this1->_data->__get(i1) == key))){
															HX_STACK_LINE(150)
															exists = true;
															HX_STACK_LINE(150)
															break;
														}
														HX_STACK_LINE(150)
														i1 = _this1->_data->__get(((i0 = i1) + (int)2));
													}
													HX_STACK_LINE(150)
													if ((exists)){
														HX_STACK_LINE(150)
														_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(150)
														int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
														HX_STACK_LINE(150)
														_this1->_next[j] = _this1->_free;
														HX_STACK_LINE(150)
														_this1->_free = j;
														HX_STACK_LINE(150)
														_this1->_data[(i1 + (int)1)] = (int)-2147483647;
														HX_STACK_LINE(150)
														_this1->_data[(i1 + (int)2)] = (int)-1;
														HX_STACK_LINE(150)
														--(_this1->_size);
														HX_STACK_LINE(150)
														if (((_this1->_sizeLevel > (int)0))){
															HX_STACK_LINE(150)
															if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
																HX_STACK_LINE(150)
																if ((_this1->_isResizable)){
																	HX_STACK_LINE(150)
																	_this1->_shrink();
																}
															}
														}
														HX_STACK_LINE(150)
														true;
													}
													else{
														HX_STACK_LINE(150)
														false;
													}
												}
											}
										}
										HX_STACK_LINE(150)
										if ((shrink)){
											HX_STACK_LINE(150)
											(_this->_sizeLevel)--;
											HX_STACK_LINE(150)
											int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
											HX_STACK_LINE(150)
											int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
											struct _Function_6_1{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
													{
														HX_STACK_LINE(150)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(150)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(150)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(150)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(150)
											_this->_next = _Function_6_1::Block(newSize);
											HX_STACK_LINE(150)
											{
												HX_STACK_LINE(150)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(150)
												while(((_g1 < _g))){
													HX_STACK_LINE(150)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(150)
													_this->_next[i1] = (i1 + (int)1);
												}
											}
											HX_STACK_LINE(150)
											_this->_next[(newSize - (int)1)] = (int)-1;
											HX_STACK_LINE(150)
											_this->_free = (int)0;
											struct _Function_6_2{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
													{
														HX_STACK_LINE(150)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(150)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(150)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(150)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(150)
											Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
											HX_STACK_LINE(150)
											{
												HX_STACK_LINE(150)
												int k = newSize;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(150)
												if (((k == (int)-1))){
													HX_STACK_LINE(150)
													k = tmpKeys->length;
												}
												HX_STACK_LINE(150)
												{
													HX_STACK_LINE(150)
													int _g = (int)0;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(150)
													while(((_g < k))){
														HX_STACK_LINE(150)
														int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(150)
														tmpKeys[i1] = (int)-2147483647;
													}
												}
											}
											struct _Function_6_3{
												inline static Array< ::Dynamic > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",150);
													{
														HX_STACK_LINE(150)
														Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(150)
														a = Array_obj< ::Dynamic >::__new();
														HX_STACK_LINE(150)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(150)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(150)
											Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
											HX_STACK_LINE(150)
											for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
												int i1 = __it->next();
												{
													HX_STACK_LINE(150)
													tmpKeys[_this->_free] = _this->_keys->__get(i1);
													HX_STACK_LINE(150)
													tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
													HX_STACK_LINE(150)
													_this->_free = _this->_next->__get(_this->_free);
												}
;
											}
											HX_STACK_LINE(150)
											_this->_keys = tmpKeys;
											HX_STACK_LINE(150)
											_this->_vals = tmpVals;
											HX_STACK_LINE(150)
											{
												HX_STACK_LINE(150)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(150)
												while(((_g1 < _g))){
													HX_STACK_LINE(150)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(150)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
													HX_STACK_LINE(150)
													int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
													HX_STACK_LINE(150)
													if (((i2 == (int)-1))){
														HX_STACK_LINE(150)
														false;
													}
													else{
														HX_STACK_LINE(150)
														if (((_this1->_data->__get(i2) == key1))){
															HX_STACK_LINE(150)
															_this1->_data[(i2 + (int)1)] = i1;
															HX_STACK_LINE(150)
															true;
														}
														else{
															HX_STACK_LINE(150)
															i2 = _this1->_data->__get((i2 + (int)2));
															HX_STACK_LINE(150)
															while(((i2 != (int)-1))){
																HX_STACK_LINE(150)
																if (((_this1->_data->__get(i2) == key1))){
																	HX_STACK_LINE(150)
																	_this1->_data[(i2 + (int)1)] = i1;
																	HX_STACK_LINE(150)
																	break;
																}
																HX_STACK_LINE(150)
																i2 = _this1->_data->__get((i2 + (int)2));
															}
															HX_STACK_LINE(150)
															(i2 != (int)-1);
														}
													}
												}
											}
										}
										HX_STACK_LINE(150)
										return true;
									}
									return null();
								}
							};
							HX_STACK_LINE(150)
							return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_4_2::Block(i,_this,key)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(150)
				if ((_Function_3_1::Block(a1,contact))){
					HX_STACK_LINE(150)
					(a1->contactCount)--;
				}
			}
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			if (((a2->collisions != null()))){
				struct _Function_3_1{
					inline static bool Block( ::box2D::dynamics::contacts::B2Contact &contact,::com::stencyl::models::Actor &a2){
						HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
						{
							HX_STACK_LINE(151)
							::de::polygonal::ds::IntHashTable _this = a2->collisions;		HX_STACK_VAR(_this,"_this");
							int key = contact->key;		HX_STACK_VAR(key,"key");
							struct _Function_4_1{
								inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
									{
										HX_STACK_LINE(151)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(151)
										int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
										struct _Function_5_1{
											inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
												{
													HX_STACK_LINE(151)
													int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(151)
													i = _this1->_data->__get((i + (int)2));
													HX_STACK_LINE(151)
													while(((i != (int)-1))){
														HX_STACK_LINE(151)
														if (((_this1->_data->__get(i) == key))){
															HX_STACK_LINE(151)
															v = _this1->_data->__get((i + (int)1));
															HX_STACK_LINE(151)
															break;
														}
														HX_STACK_LINE(151)
														i = _this1->_data->__get((i + (int)2));
													}
													HX_STACK_LINE(151)
													return v;
												}
												return null();
											}
										};
										HX_STACK_LINE(151)
										return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(151)
							int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
							struct _Function_4_2{
								inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
									{
										HX_STACK_LINE(151)
										_this->_key0 = (int)-2147483647;
										HX_STACK_LINE(151)
										hx::IndexRef((_this->_vals).mPtr,i) = null();
										HX_STACK_LINE(151)
										_this->_keys[i] = (int)-2147483647;
										HX_STACK_LINE(151)
										_this->_next[i] = _this->_free;
										HX_STACK_LINE(151)
										_this->_free = i;
										HX_STACK_LINE(151)
										bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
										HX_STACK_LINE(151)
										if (((_this->_sizeLevel > (int)0))){
											HX_STACK_LINE(151)
											if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
												HX_STACK_LINE(151)
												if ((_this->_isResizable)){
													HX_STACK_LINE(151)
													shrink = true;
												}
											}
										}
										HX_STACK_LINE(151)
										{
											HX_STACK_LINE(151)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(151)
											int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(151)
											int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
											HX_STACK_LINE(151)
											if (((i1 == (int)-1))){
												HX_STACK_LINE(151)
												false;
											}
											else{
												HX_STACK_LINE(151)
												if (((key == _this1->_data->__get(i1)))){
													HX_STACK_LINE(151)
													if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
														HX_STACK_LINE(151)
														_this1->_hash[b] = (int)-1;
													}
													else{
														HX_STACK_LINE(151)
														_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
													}
													HX_STACK_LINE(151)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(151)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(151)
													_this1->_free = j;
													HX_STACK_LINE(151)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(151)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(151)
													(_this1->_size)--;
													HX_STACK_LINE(151)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(151)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(151)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(151)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(151)
													true;
												}
												else{
													HX_STACK_LINE(151)
													bool exists = false;		HX_STACK_VAR(exists,"exists");
													HX_STACK_LINE(151)
													int i0 = i1;		HX_STACK_VAR(i0,"i0");
													HX_STACK_LINE(151)
													i1 = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(151)
													while(((i1 != (int)-1))){
														HX_STACK_LINE(151)
														if (((_this1->_data->__get(i1) == key))){
															HX_STACK_LINE(151)
															exists = true;
															HX_STACK_LINE(151)
															break;
														}
														HX_STACK_LINE(151)
														i1 = _this1->_data->__get(((i0 = i1) + (int)2));
													}
													HX_STACK_LINE(151)
													if ((exists)){
														HX_STACK_LINE(151)
														_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(151)
														int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
														HX_STACK_LINE(151)
														_this1->_next[j] = _this1->_free;
														HX_STACK_LINE(151)
														_this1->_free = j;
														HX_STACK_LINE(151)
														_this1->_data[(i1 + (int)1)] = (int)-2147483647;
														HX_STACK_LINE(151)
														_this1->_data[(i1 + (int)2)] = (int)-1;
														HX_STACK_LINE(151)
														--(_this1->_size);
														HX_STACK_LINE(151)
														if (((_this1->_sizeLevel > (int)0))){
															HX_STACK_LINE(151)
															if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
																HX_STACK_LINE(151)
																if ((_this1->_isResizable)){
																	HX_STACK_LINE(151)
																	_this1->_shrink();
																}
															}
														}
														HX_STACK_LINE(151)
														true;
													}
													else{
														HX_STACK_LINE(151)
														false;
													}
												}
											}
										}
										HX_STACK_LINE(151)
										if ((shrink)){
											HX_STACK_LINE(151)
											(_this->_sizeLevel)--;
											HX_STACK_LINE(151)
											int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
											HX_STACK_LINE(151)
											int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
											struct _Function_6_1{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
													{
														HX_STACK_LINE(151)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(151)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(151)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(151)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(151)
											_this->_next = _Function_6_1::Block(newSize);
											HX_STACK_LINE(151)
											{
												HX_STACK_LINE(151)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(151)
												while(((_g1 < _g))){
													HX_STACK_LINE(151)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(151)
													_this->_next[i1] = (i1 + (int)1);
												}
											}
											HX_STACK_LINE(151)
											_this->_next[(newSize - (int)1)] = (int)-1;
											HX_STACK_LINE(151)
											_this->_free = (int)0;
											struct _Function_6_2{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
													{
														HX_STACK_LINE(151)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(151)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(151)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(151)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(151)
											Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
											HX_STACK_LINE(151)
											{
												HX_STACK_LINE(151)
												int k = newSize;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(151)
												if (((k == (int)-1))){
													HX_STACK_LINE(151)
													k = tmpKeys->length;
												}
												HX_STACK_LINE(151)
												{
													HX_STACK_LINE(151)
													int _g = (int)0;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(151)
													while(((_g < k))){
														HX_STACK_LINE(151)
														int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(151)
														tmpKeys[i1] = (int)-2147483647;
													}
												}
											}
											struct _Function_6_3{
												inline static Array< ::Dynamic > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
													{
														HX_STACK_LINE(151)
														Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(151)
														a = Array_obj< ::Dynamic >::__new();
														HX_STACK_LINE(151)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(151)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(151)
											Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
											HX_STACK_LINE(151)
											for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
												int i1 = __it->next();
												{
													HX_STACK_LINE(151)
													tmpKeys[_this->_free] = _this->_keys->__get(i1);
													HX_STACK_LINE(151)
													tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
													HX_STACK_LINE(151)
													_this->_free = _this->_next->__get(_this->_free);
												}
;
											}
											HX_STACK_LINE(151)
											_this->_keys = tmpKeys;
											HX_STACK_LINE(151)
											_this->_vals = tmpVals;
											HX_STACK_LINE(151)
											{
												HX_STACK_LINE(151)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(151)
												while(((_g1 < _g))){
													HX_STACK_LINE(151)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(151)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
													HX_STACK_LINE(151)
													int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
													HX_STACK_LINE(151)
													if (((i2 == (int)-1))){
														HX_STACK_LINE(151)
														false;
													}
													else{
														HX_STACK_LINE(151)
														if (((_this1->_data->__get(i2) == key1))){
															HX_STACK_LINE(151)
															_this1->_data[(i2 + (int)1)] = i1;
															HX_STACK_LINE(151)
															true;
														}
														else{
															HX_STACK_LINE(151)
															i2 = _this1->_data->__get((i2 + (int)2));
															HX_STACK_LINE(151)
															while(((i2 != (int)-1))){
																HX_STACK_LINE(151)
																if (((_this1->_data->__get(i2) == key1))){
																	HX_STACK_LINE(151)
																	_this1->_data[(i2 + (int)1)] = i1;
																	HX_STACK_LINE(151)
																	break;
																}
																HX_STACK_LINE(151)
																i2 = _this1->_data->__get((i2 + (int)2));
															}
															HX_STACK_LINE(151)
															(i2 != (int)-1);
														}
													}
												}
											}
										}
										HX_STACK_LINE(151)
										return true;
									}
									return null();
								}
							};
							HX_STACK_LINE(151)
							return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_4_2::Block(i,_this,key)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(151)
				if ((_Function_3_1::Block(contact,a2))){
					HX_STACK_LINE(151)
					(a2->collisionsCount)--;
				}
			}
			HX_STACK_LINE(151)
			if (((a2->contacts != null()))){
				struct _Function_3_1{
					inline static bool Block( ::box2D::dynamics::contacts::B2Contact &contact,::com::stencyl::models::Actor &a2){
						HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
						{
							HX_STACK_LINE(151)
							::de::polygonal::ds::IntHashTable _this = a2->contacts;		HX_STACK_VAR(_this,"_this");
							int key = contact->key;		HX_STACK_VAR(key,"key");
							struct _Function_4_1{
								inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
									{
										HX_STACK_LINE(151)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(151)
										int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
										struct _Function_5_1{
											inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
												{
													HX_STACK_LINE(151)
													int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(151)
													i = _this1->_data->__get((i + (int)2));
													HX_STACK_LINE(151)
													while(((i != (int)-1))){
														HX_STACK_LINE(151)
														if (((_this1->_data->__get(i) == key))){
															HX_STACK_LINE(151)
															v = _this1->_data->__get((i + (int)1));
															HX_STACK_LINE(151)
															break;
														}
														HX_STACK_LINE(151)
														i = _this1->_data->__get((i + (int)2));
													}
													HX_STACK_LINE(151)
													return v;
												}
												return null();
											}
										};
										HX_STACK_LINE(151)
										return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(151)
							int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
							struct _Function_4_2{
								inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
									{
										HX_STACK_LINE(151)
										_this->_key0 = (int)-2147483647;
										HX_STACK_LINE(151)
										hx::IndexRef((_this->_vals).mPtr,i) = null();
										HX_STACK_LINE(151)
										_this->_keys[i] = (int)-2147483647;
										HX_STACK_LINE(151)
										_this->_next[i] = _this->_free;
										HX_STACK_LINE(151)
										_this->_free = i;
										HX_STACK_LINE(151)
										bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
										HX_STACK_LINE(151)
										if (((_this->_sizeLevel > (int)0))){
											HX_STACK_LINE(151)
											if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
												HX_STACK_LINE(151)
												if ((_this->_isResizable)){
													HX_STACK_LINE(151)
													shrink = true;
												}
											}
										}
										HX_STACK_LINE(151)
										{
											HX_STACK_LINE(151)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(151)
											int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(151)
											int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
											HX_STACK_LINE(151)
											if (((i1 == (int)-1))){
												HX_STACK_LINE(151)
												false;
											}
											else{
												HX_STACK_LINE(151)
												if (((key == _this1->_data->__get(i1)))){
													HX_STACK_LINE(151)
													if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
														HX_STACK_LINE(151)
														_this1->_hash[b] = (int)-1;
													}
													else{
														HX_STACK_LINE(151)
														_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
													}
													HX_STACK_LINE(151)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(151)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(151)
													_this1->_free = j;
													HX_STACK_LINE(151)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(151)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(151)
													(_this1->_size)--;
													HX_STACK_LINE(151)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(151)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(151)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(151)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(151)
													true;
												}
												else{
													HX_STACK_LINE(151)
													bool exists = false;		HX_STACK_VAR(exists,"exists");
													HX_STACK_LINE(151)
													int i0 = i1;		HX_STACK_VAR(i0,"i0");
													HX_STACK_LINE(151)
													i1 = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(151)
													while(((i1 != (int)-1))){
														HX_STACK_LINE(151)
														if (((_this1->_data->__get(i1) == key))){
															HX_STACK_LINE(151)
															exists = true;
															HX_STACK_LINE(151)
															break;
														}
														HX_STACK_LINE(151)
														i1 = _this1->_data->__get(((i0 = i1) + (int)2));
													}
													HX_STACK_LINE(151)
													if ((exists)){
														HX_STACK_LINE(151)
														_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(151)
														int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
														HX_STACK_LINE(151)
														_this1->_next[j] = _this1->_free;
														HX_STACK_LINE(151)
														_this1->_free = j;
														HX_STACK_LINE(151)
														_this1->_data[(i1 + (int)1)] = (int)-2147483647;
														HX_STACK_LINE(151)
														_this1->_data[(i1 + (int)2)] = (int)-1;
														HX_STACK_LINE(151)
														--(_this1->_size);
														HX_STACK_LINE(151)
														if (((_this1->_sizeLevel > (int)0))){
															HX_STACK_LINE(151)
															if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
																HX_STACK_LINE(151)
																if ((_this1->_isResizable)){
																	HX_STACK_LINE(151)
																	_this1->_shrink();
																}
															}
														}
														HX_STACK_LINE(151)
														true;
													}
													else{
														HX_STACK_LINE(151)
														false;
													}
												}
											}
										}
										HX_STACK_LINE(151)
										if ((shrink)){
											HX_STACK_LINE(151)
											(_this->_sizeLevel)--;
											HX_STACK_LINE(151)
											int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
											HX_STACK_LINE(151)
											int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
											struct _Function_6_1{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
													{
														HX_STACK_LINE(151)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(151)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(151)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(151)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(151)
											_this->_next = _Function_6_1::Block(newSize);
											HX_STACK_LINE(151)
											{
												HX_STACK_LINE(151)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(151)
												while(((_g1 < _g))){
													HX_STACK_LINE(151)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(151)
													_this->_next[i1] = (i1 + (int)1);
												}
											}
											HX_STACK_LINE(151)
											_this->_next[(newSize - (int)1)] = (int)-1;
											HX_STACK_LINE(151)
											_this->_free = (int)0;
											struct _Function_6_2{
												inline static Array< int > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
													{
														HX_STACK_LINE(151)
														Array< int > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(151)
														a = Array_obj< int >::__new();
														HX_STACK_LINE(151)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(151)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(151)
											Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
											HX_STACK_LINE(151)
											{
												HX_STACK_LINE(151)
												int k = newSize;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(151)
												if (((k == (int)-1))){
													HX_STACK_LINE(151)
													k = tmpKeys->length;
												}
												HX_STACK_LINE(151)
												{
													HX_STACK_LINE(151)
													int _g = (int)0;		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(151)
													while(((_g < k))){
														HX_STACK_LINE(151)
														int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(151)
														tmpKeys[i1] = (int)-2147483647;
													}
												}
											}
											struct _Function_6_3{
												inline static Array< ::Dynamic > Block( int &newSize){
													HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",151);
													{
														HX_STACK_LINE(151)
														Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
														HX_STACK_LINE(151)
														a = Array_obj< ::Dynamic >::__new();
														HX_STACK_LINE(151)
														a[(newSize - (int)1)] = null();
														HX_STACK_LINE(151)
														return a;
													}
													return null();
												}
											};
											HX_STACK_LINE(151)
											Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
											HX_STACK_LINE(151)
											for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
												int i1 = __it->next();
												{
													HX_STACK_LINE(151)
													tmpKeys[_this->_free] = _this->_keys->__get(i1);
													HX_STACK_LINE(151)
													tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
													HX_STACK_LINE(151)
													_this->_free = _this->_next->__get(_this->_free);
												}
;
											}
											HX_STACK_LINE(151)
											_this->_keys = tmpKeys;
											HX_STACK_LINE(151)
											_this->_vals = tmpVals;
											HX_STACK_LINE(151)
											{
												HX_STACK_LINE(151)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(151)
												while(((_g1 < _g))){
													HX_STACK_LINE(151)
													int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(151)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
													HX_STACK_LINE(151)
													int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
													HX_STACK_LINE(151)
													if (((i2 == (int)-1))){
														HX_STACK_LINE(151)
														false;
													}
													else{
														HX_STACK_LINE(151)
														if (((_this1->_data->__get(i2) == key1))){
															HX_STACK_LINE(151)
															_this1->_data[(i2 + (int)1)] = i1;
															HX_STACK_LINE(151)
															true;
														}
														else{
															HX_STACK_LINE(151)
															i2 = _this1->_data->__get((i2 + (int)2));
															HX_STACK_LINE(151)
															while(((i2 != (int)-1))){
																HX_STACK_LINE(151)
																if (((_this1->_data->__get(i2) == key1))){
																	HX_STACK_LINE(151)
																	_this1->_data[(i2 + (int)1)] = i1;
																	HX_STACK_LINE(151)
																	break;
																}
																HX_STACK_LINE(151)
																i2 = _this1->_data->__get((i2 + (int)2));
															}
															HX_STACK_LINE(151)
															(i2 != (int)-1);
														}
													}
												}
											}
										}
										HX_STACK_LINE(151)
										return true;
									}
									return null();
								}
							};
							HX_STACK_LINE(151)
							return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_4_2::Block(i,_this,key)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(151)
				if ((_Function_3_1::Block(contact,a2))){
					HX_STACK_LINE(151)
					(a2->contactCount)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2ContactListener_obj,endContact,(void))

Void B2ContactListener_obj::beginContact( ::box2D::dynamics::contacts::B2Contact contact){
{
		HX_STACK_PUSH("B2ContactListener::beginContact","box2D/dynamics/B2ContactListener.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_LINE(56)
		if (((::box2D::dynamics::B2ContactListener_obj::KEY_LOCK > (int)5000))){
			HX_STACK_LINE(57)
			::box2D::dynamics::B2ContactListener_obj::KEY_LOCK = (int)0;
		}
		HX_STACK_LINE(61)
		contact->key = (::box2D::dynamics::B2ContactListener_obj::KEY_LOCK)++;
		HX_STACK_LINE(63)
		::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(64)
		::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(contact->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(66)
		bool r1 = ::Std_obj::is(a1,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r1,"r1");
		HX_STACK_LINE(67)
		bool r2 = ::Std_obj::is(a2,hx::ClassOf< ::com::stencyl::models::Region >());		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(69)
		if (((bool(r1) && bool(!(((bool(r2) || bool(::Std_obj::is(a2,hx::ClassOf< ::com::stencyl::models::Terrain >()))))))))){
			HX_STACK_LINE(71)
			(hx::TCast< com::stencyl::models::Region >::cast(a1))->addActor(a2);
			HX_STACK_LINE(72)
			if (((a2->regionContacts != null()))){
				HX_STACK_LINE(72)
				::de::polygonal::ds::IntHashTable _this = a2->regionContacts;		HX_STACK_VAR(_this,"_this");
				int key = contact->key;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(72)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(72)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(72)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(72)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",72);
							{
								HX_STACK_LINE(72)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(72)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(72)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(72)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(72)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(72)
						if (((max == (int)-1))){
							HX_STACK_LINE(72)
							max = src->length;
						}
						HX_STACK_LINE(72)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(72)
							while(((_g < max))){
								HX_STACK_LINE(72)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(72)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(72)
						tmp;
					}
					HX_STACK_LINE(72)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",72);
							{
								HX_STACK_LINE(72)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(72)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(72)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(72)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(72)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(72)
						if (((max == (int)-1))){
							HX_STACK_LINE(72)
							max = src->length;
						}
						HX_STACK_LINE(72)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(72)
							while(((_g < max))){
								HX_STACK_LINE(72)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(72)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(72)
						tmp1;
					}
					HX_STACK_LINE(72)
					_this->_keys = tmp1;
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(72)
						while(((_g < newSize))){
							HX_STACK_LINE(72)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(72)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(72)
						while(((_g1 < _g))){
							HX_STACK_LINE(72)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(72)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(72)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(72)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",72);
							{
								HX_STACK_LINE(72)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(72)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(72)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(72)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(72)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(72)
						if (((max == (int)-1))){
							HX_STACK_LINE(72)
							max = src->length;
						}
						HX_STACK_LINE(72)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(72)
							while(((_g < max))){
								HX_STACK_LINE(72)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(72)
								tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
							}
						}
						HX_STACK_LINE(72)
						tmp2;
					}
					HX_STACK_LINE(72)
					_this->_vals = tmp2;
					HX_STACK_LINE(72)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(72)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(72)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(72)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(72)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(72)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(72)
					_this1->_data[i] = key;
					HX_STACK_LINE(72)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(72)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(72)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(72)
					if (((j == (int)-1))){
						HX_STACK_LINE(72)
						_this1->_hash[b] = i;
						HX_STACK_LINE(72)
						(_this1->_size)++;
						HX_STACK_LINE(72)
						true;
					}
					else{
						HX_STACK_LINE(72)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(72)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(72)
						while(((t != (int)-1))){
							HX_STACK_LINE(72)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(72)
								first = false;
							}
							HX_STACK_LINE(72)
							j = t;
							HX_STACK_LINE(72)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(72)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(72)
						(_this1->_size)++;
						HX_STACK_LINE(72)
						first;
					}
				}
				HX_STACK_LINE(72)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = contact;
				HX_STACK_LINE(72)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(72)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(72)
				true;
			}
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(76)
		if (((bool(r2) && bool(!(((bool(r1) || bool(::Std_obj::is(a1,hx::ClassOf< ::com::stencyl::models::Terrain >()))))))))){
			HX_STACK_LINE(78)
			(hx::TCast< com::stencyl::models::Region >::cast(a2))->addActor(a1);
			HX_STACK_LINE(79)
			if (((a1->regionContacts != null()))){
				HX_STACK_LINE(79)
				::de::polygonal::ds::IntHashTable _this = a1->regionContacts;		HX_STACK_VAR(_this,"_this");
				int key = contact->key;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(79)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(79)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(79)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(79)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",79);
							{
								HX_STACK_LINE(79)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(79)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(79)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(79)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(79)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(79)
						if (((max == (int)-1))){
							HX_STACK_LINE(79)
							max = src->length;
						}
						HX_STACK_LINE(79)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(79)
						{
							HX_STACK_LINE(79)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(79)
							while(((_g < max))){
								HX_STACK_LINE(79)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(79)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(79)
						tmp;
					}
					HX_STACK_LINE(79)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",79);
							{
								HX_STACK_LINE(79)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(79)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(79)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(79)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(79)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(79)
						if (((max == (int)-1))){
							HX_STACK_LINE(79)
							max = src->length;
						}
						HX_STACK_LINE(79)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(79)
						{
							HX_STACK_LINE(79)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(79)
							while(((_g < max))){
								HX_STACK_LINE(79)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(79)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(79)
						tmp1;
					}
					HX_STACK_LINE(79)
					_this->_keys = tmp1;
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(79)
						while(((_g < newSize))){
							HX_STACK_LINE(79)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(79)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(79)
						while(((_g1 < _g))){
							HX_STACK_LINE(79)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(79)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(79)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(79)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",79);
							{
								HX_STACK_LINE(79)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(79)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(79)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(79)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(79)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(79)
						if (((max == (int)-1))){
							HX_STACK_LINE(79)
							max = src->length;
						}
						HX_STACK_LINE(79)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(79)
						{
							HX_STACK_LINE(79)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(79)
							while(((_g < max))){
								HX_STACK_LINE(79)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(79)
								tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
							}
						}
						HX_STACK_LINE(79)
						tmp2;
					}
					HX_STACK_LINE(79)
					_this->_vals = tmp2;
					HX_STACK_LINE(79)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(79)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(79)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(79)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(79)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(79)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(79)
					_this1->_data[i] = key;
					HX_STACK_LINE(79)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(79)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(79)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(79)
					if (((j == (int)-1))){
						HX_STACK_LINE(79)
						_this1->_hash[b] = i;
						HX_STACK_LINE(79)
						(_this1->_size)++;
						HX_STACK_LINE(79)
						true;
					}
					else{
						HX_STACK_LINE(79)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(79)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(79)
						while(((t != (int)-1))){
							HX_STACK_LINE(79)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(79)
								first = false;
							}
							HX_STACK_LINE(79)
							j = t;
							HX_STACK_LINE(79)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(79)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(79)
						(_this1->_size)++;
						HX_STACK_LINE(79)
						first;
					}
				}
				HX_STACK_LINE(79)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = contact;
				HX_STACK_LINE(79)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(79)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(79)
				true;
			}
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(83)
		if (((a1->contacts != null()))){
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				::de::polygonal::ds::IntHashTable _this = a1->contacts;		HX_STACK_VAR(_this,"_this");
				int key = contact->key;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(83)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(83)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(83)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(83)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
							{
								HX_STACK_LINE(83)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(83)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(83)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(83)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(83)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(83)
						if (((max == (int)-1))){
							HX_STACK_LINE(83)
							max = src->length;
						}
						HX_STACK_LINE(83)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(83)
							while(((_g < max))){
								HX_STACK_LINE(83)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(83)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(83)
						tmp;
					}
					HX_STACK_LINE(83)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
							{
								HX_STACK_LINE(83)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(83)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(83)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(83)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(83)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(83)
						if (((max == (int)-1))){
							HX_STACK_LINE(83)
							max = src->length;
						}
						HX_STACK_LINE(83)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(83)
							while(((_g < max))){
								HX_STACK_LINE(83)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(83)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(83)
						tmp1;
					}
					HX_STACK_LINE(83)
					_this->_keys = tmp1;
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(83)
						while(((_g < newSize))){
							HX_STACK_LINE(83)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(83)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(83)
						while(((_g1 < _g))){
							HX_STACK_LINE(83)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(83)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(83)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(83)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
							{
								HX_STACK_LINE(83)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(83)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(83)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(83)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(83)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(83)
						if (((max == (int)-1))){
							HX_STACK_LINE(83)
							max = src->length;
						}
						HX_STACK_LINE(83)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(83)
							while(((_g < max))){
								HX_STACK_LINE(83)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(83)
								tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
							}
						}
						HX_STACK_LINE(83)
						tmp2;
					}
					HX_STACK_LINE(83)
					_this->_vals = tmp2;
					HX_STACK_LINE(83)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(83)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(83)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(83)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(83)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(83)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(83)
					_this1->_data[i] = key;
					HX_STACK_LINE(83)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(83)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(83)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(83)
					if (((j == (int)-1))){
						HX_STACK_LINE(83)
						_this1->_hash[b] = i;
						HX_STACK_LINE(83)
						(_this1->_size)++;
						HX_STACK_LINE(83)
						true;
					}
					else{
						HX_STACK_LINE(83)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(83)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(83)
						while(((t != (int)-1))){
							HX_STACK_LINE(83)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(83)
								first = false;
							}
							HX_STACK_LINE(83)
							j = t;
							HX_STACK_LINE(83)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(83)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(83)
						(_this1->_size)++;
						HX_STACK_LINE(83)
						first;
					}
				}
				HX_STACK_LINE(83)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = contact;
				HX_STACK_LINE(83)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(83)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(83)
				true;
			}
			HX_STACK_LINE(83)
			(a1->contactCount)++;
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::models::Actor &a1,::box2D::dynamics::contacts::B2Contact &contact){
					HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
					{
						HX_STACK_LINE(83)
						::de::polygonal::ds::IntHashTable _this = a1->collisions;		HX_STACK_VAR(_this,"_this");
						int key = contact->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
								{
									HX_STACK_LINE(83)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(83)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
											{
												HX_STACK_LINE(83)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(83)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(83)
												while(((i != (int)-1))){
													HX_STACK_LINE(83)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(83)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(83)
														break;
													}
													HX_STACK_LINE(83)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(83)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(83)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(83)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
								{
									HX_STACK_LINE(83)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(83)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(83)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(83)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(83)
									_this->_free = i;
									HX_STACK_LINE(83)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(83)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(83)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(83)
											if ((_this->_isResizable)){
												HX_STACK_LINE(83)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(83)
									{
										HX_STACK_LINE(83)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(83)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(83)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(83)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(83)
											false;
										}
										else{
											HX_STACK_LINE(83)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(83)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(83)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(83)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(83)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(83)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(83)
												_this1->_free = j;
												HX_STACK_LINE(83)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(83)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(83)
												(_this1->_size)--;
												HX_STACK_LINE(83)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(83)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(83)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(83)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(83)
												true;
											}
											else{
												HX_STACK_LINE(83)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(83)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(83)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(83)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(83)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(83)
														exists = true;
														HX_STACK_LINE(83)
														break;
													}
													HX_STACK_LINE(83)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(83)
												if ((exists)){
													HX_STACK_LINE(83)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(83)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(83)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(83)
													_this1->_free = j;
													HX_STACK_LINE(83)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(83)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(83)
													--(_this1->_size);
													HX_STACK_LINE(83)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(83)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(83)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(83)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(83)
													true;
												}
												else{
													HX_STACK_LINE(83)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(83)
									if ((shrink)){
										HX_STACK_LINE(83)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(83)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(83)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
												{
													HX_STACK_LINE(83)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(83)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(83)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(83)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(83)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(83)
										{
											HX_STACK_LINE(83)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(83)
											while(((_g1 < _g))){
												HX_STACK_LINE(83)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(83)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(83)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(83)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
												{
													HX_STACK_LINE(83)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(83)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(83)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(83)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(83)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(83)
										{
											HX_STACK_LINE(83)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(83)
											if (((k == (int)-1))){
												HX_STACK_LINE(83)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(83)
											{
												HX_STACK_LINE(83)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(83)
												while(((_g < k))){
													HX_STACK_LINE(83)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(83)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",83);
												{
													HX_STACK_LINE(83)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(83)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(83)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(83)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(83)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(83)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(83)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(83)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(83)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(83)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(83)
										_this->_vals = tmpVals;
										HX_STACK_LINE(83)
										{
											HX_STACK_LINE(83)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(83)
											while(((_g1 < _g))){
												HX_STACK_LINE(83)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(83)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(83)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(83)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(83)
													false;
												}
												else{
													HX_STACK_LINE(83)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(83)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(83)
														true;
													}
													else{
														HX_STACK_LINE(83)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(83)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(83)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(83)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(83)
																break;
															}
															HX_STACK_LINE(83)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(83)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(83)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(83)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(83)
			if ((_Function_2_1::Block(a1,contact))){
				HX_STACK_LINE(83)
				(a1->collisionsCount)--;
			}
		}
		HX_STACK_LINE(84)
		if (((a2->contacts != null()))){
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				::de::polygonal::ds::IntHashTable _this = a2->contacts;		HX_STACK_VAR(_this,"_this");
				int key = contact->key;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(84)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(84)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(84)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(84)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
							{
								HX_STACK_LINE(84)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(84)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(84)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(84)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(84)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(84)
						if (((max == (int)-1))){
							HX_STACK_LINE(84)
							max = src->length;
						}
						HX_STACK_LINE(84)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(84)
							while(((_g < max))){
								HX_STACK_LINE(84)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(84)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(84)
						tmp;
					}
					HX_STACK_LINE(84)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
							{
								HX_STACK_LINE(84)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(84)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(84)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(84)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(84)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(84)
						if (((max == (int)-1))){
							HX_STACK_LINE(84)
							max = src->length;
						}
						HX_STACK_LINE(84)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(84)
							while(((_g < max))){
								HX_STACK_LINE(84)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(84)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(84)
						tmp1;
					}
					HX_STACK_LINE(84)
					_this->_keys = tmp1;
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(84)
						while(((_g < newSize))){
							HX_STACK_LINE(84)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(84)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(84)
						while(((_g1 < _g))){
							HX_STACK_LINE(84)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(84)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(84)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(84)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
							{
								HX_STACK_LINE(84)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(84)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(84)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(84)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(84)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(84)
						if (((max == (int)-1))){
							HX_STACK_LINE(84)
							max = src->length;
						}
						HX_STACK_LINE(84)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(84)
							while(((_g < max))){
								HX_STACK_LINE(84)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(84)
								tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
							}
						}
						HX_STACK_LINE(84)
						tmp2;
					}
					HX_STACK_LINE(84)
					_this->_vals = tmp2;
					HX_STACK_LINE(84)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(84)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(84)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(84)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(84)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(84)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(84)
					_this1->_data[i] = key;
					HX_STACK_LINE(84)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(84)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(84)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(84)
					if (((j == (int)-1))){
						HX_STACK_LINE(84)
						_this1->_hash[b] = i;
						HX_STACK_LINE(84)
						(_this1->_size)++;
						HX_STACK_LINE(84)
						true;
					}
					else{
						HX_STACK_LINE(84)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(84)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(84)
						while(((t != (int)-1))){
							HX_STACK_LINE(84)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(84)
								first = false;
							}
							HX_STACK_LINE(84)
							j = t;
							HX_STACK_LINE(84)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(84)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(84)
						(_this1->_size)++;
						HX_STACK_LINE(84)
						first;
					}
				}
				HX_STACK_LINE(84)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = contact;
				HX_STACK_LINE(84)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(84)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(84)
				true;
			}
			HX_STACK_LINE(84)
			(a2->contactCount)++;
			struct _Function_2_1{
				inline static bool Block( ::box2D::dynamics::contacts::B2Contact &contact,::com::stencyl::models::Actor &a2){
					HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
					{
						HX_STACK_LINE(84)
						::de::polygonal::ds::IntHashTable _this = a2->collisions;		HX_STACK_VAR(_this,"_this");
						int key = contact->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
								{
									HX_STACK_LINE(84)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(84)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
											{
												HX_STACK_LINE(84)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(84)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(84)
												while(((i != (int)-1))){
													HX_STACK_LINE(84)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(84)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(84)
														break;
													}
													HX_STACK_LINE(84)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(84)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(84)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(84)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
								{
									HX_STACK_LINE(84)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(84)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(84)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(84)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(84)
									_this->_free = i;
									HX_STACK_LINE(84)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(84)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(84)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(84)
											if ((_this->_isResizable)){
												HX_STACK_LINE(84)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(84)
									{
										HX_STACK_LINE(84)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(84)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(84)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(84)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(84)
											false;
										}
										else{
											HX_STACK_LINE(84)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(84)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(84)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(84)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(84)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(84)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(84)
												_this1->_free = j;
												HX_STACK_LINE(84)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(84)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(84)
												(_this1->_size)--;
												HX_STACK_LINE(84)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(84)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(84)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(84)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(84)
												true;
											}
											else{
												HX_STACK_LINE(84)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(84)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(84)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(84)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(84)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(84)
														exists = true;
														HX_STACK_LINE(84)
														break;
													}
													HX_STACK_LINE(84)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(84)
												if ((exists)){
													HX_STACK_LINE(84)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(84)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(84)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(84)
													_this1->_free = j;
													HX_STACK_LINE(84)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(84)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(84)
													--(_this1->_size);
													HX_STACK_LINE(84)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(84)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(84)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(84)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(84)
													true;
												}
												else{
													HX_STACK_LINE(84)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(84)
									if ((shrink)){
										HX_STACK_LINE(84)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(84)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(84)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
												{
													HX_STACK_LINE(84)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(84)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(84)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(84)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(84)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(84)
										{
											HX_STACK_LINE(84)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(84)
											while(((_g1 < _g))){
												HX_STACK_LINE(84)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(84)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(84)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(84)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
												{
													HX_STACK_LINE(84)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(84)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(84)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(84)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(84)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(84)
										{
											HX_STACK_LINE(84)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(84)
											if (((k == (int)-1))){
												HX_STACK_LINE(84)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(84)
											{
												HX_STACK_LINE(84)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(84)
												while(((_g < k))){
													HX_STACK_LINE(84)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(84)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","box2D/dynamics/B2ContactListener.hx",84);
												{
													HX_STACK_LINE(84)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(84)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(84)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(84)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(84)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(84)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(84)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(84)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(84)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(84)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(84)
										_this->_vals = tmpVals;
										HX_STACK_LINE(84)
										{
											HX_STACK_LINE(84)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(84)
											while(((_g1 < _g))){
												HX_STACK_LINE(84)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(84)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(84)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(84)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(84)
													false;
												}
												else{
													HX_STACK_LINE(84)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(84)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(84)
														true;
													}
													else{
														HX_STACK_LINE(84)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(84)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(84)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(84)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(84)
																break;
															}
															HX_STACK_LINE(84)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(84)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(84)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(84)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(84)
			if ((_Function_2_1::Block(contact,a2))){
				HX_STACK_LINE(84)
				(a2->collisionsCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2ContactListener_obj,beginContact,(void))

int B2ContactListener_obj::KEY_LOCK;

::box2D::dynamics::B2ContactListener B2ContactListener_obj::b2_defaultListener;


B2ContactListener_obj::B2ContactListener_obj()
{
}

void B2ContactListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactListener);
	HX_MARK_END_CLASS();
}

void B2ContactListener_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic B2ContactListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_LOCK") ) { return KEY_LOCK; }
		if (HX_FIELD_EQ(inName,"preSolve") ) { return preSolve_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"postSolve") ) { return postSolve_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endContact") ) { return endContact_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"beginContact") ) { return beginContact_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"b2_defaultListener") ) { return b2_defaultListener; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2ContactListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_LOCK") ) { KEY_LOCK=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"b2_defaultListener") ) { b2_defaultListener=inValue.Cast< ::box2D::dynamics::B2ContactListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactListener_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("KEY_LOCK"),
	HX_CSTRING("b2_defaultListener"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("postSolve"),
	HX_CSTRING("preSolve"),
	HX_CSTRING("endContact"),
	HX_CSTRING("beginContact"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactListener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2ContactListener_obj::KEY_LOCK,"KEY_LOCK");
	HX_MARK_MEMBER_NAME(B2ContactListener_obj::b2_defaultListener,"b2_defaultListener");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactListener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2ContactListener_obj::KEY_LOCK,"KEY_LOCK");
	HX_VISIT_MEMBER_NAME(B2ContactListener_obj::b2_defaultListener,"b2_defaultListener");
};

Class B2ContactListener_obj::__mClass;

void B2ContactListener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2ContactListener"), hx::TCanCast< B2ContactListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2ContactListener_obj::__boot()
{
	KEY_LOCK= (int)0;
	b2_defaultListener= ::box2D::dynamics::B2ContactListener_obj::__new();
}

} // end namespace box2D
} // end namespace dynamics
