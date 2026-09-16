#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class SpringScalarNaturalMotionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedProperties@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEBA?AV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Microsoft@@$0?0@gsl@@XZ
    virtual WindissectOpaque GetAnimatedProperties() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAVNaturalMotionAnimator@234@@Z
    virtual long SetProperties(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
