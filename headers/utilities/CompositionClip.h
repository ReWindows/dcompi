#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition {
class CompositionClip {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionClip@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionClip@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionClip@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyChangedListener@CompositionClip@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUIExpCompositionPropertyChangedListener@Experimental@234@@Z
    virtual long SetPropertyChangedListener(int, WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CompositionClip@Composition@UI@Microsoft@@AEAAJXZ
    long EnsureComponentTransform();
};
} // namespace Microsoft::UI::Composition
