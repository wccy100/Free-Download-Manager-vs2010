/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_ElementReplaceEventBinding_h__
#define mozilla_dom_ElementReplaceEventBinding_h__

#include "EventBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Element.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class Element;
class ElementReplaceEvent;
struct ElementReplaceEventInitAtoms;
class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct ElementReplaceEventInit : public EventInit
{
  nsRefPtr<mozilla::dom::Element> mUpgrade;

  ElementReplaceEventInit();

protected:
  explicit inline ElementReplaceEventInit(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  ElementReplaceEventInit(const ElementReplaceEventInit&) MOZ_DELETE;
  void operator=(const ElementReplaceEventInit) MOZ_DELETE;

  static bool
  InitIds(JSContext* cx, ElementReplaceEventInitAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastElementReplaceEventInit : public ElementReplaceEventInit
{
  inline FastElementReplaceEventInit()
    : ElementReplaceEventInit(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace ElementReplaceEventBinding {

  typedef mozilla::dom::ElementReplaceEvent NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::ElementReplaceEvent* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace ElementReplaceEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_ElementReplaceEventBinding_h__
