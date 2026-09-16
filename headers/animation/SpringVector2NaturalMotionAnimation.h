#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class SpringVector2NaturalMotionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedProperties@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEBA?AV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Microsoft@@$0?0@gsl@@XZ
    virtual WindissectOpaque GetAnimatedProperties() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAVNaturalMotionAnimator@234@@Z
    virtual long SetProperties(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
