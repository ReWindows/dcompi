#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition {
class NaturalMotionAnimation {
public:
    class Api;
    class Internal;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAVNaturalMotionAnimator@234@@Z
    virtual long SetProperties(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
