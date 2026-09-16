#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition {
class CompositionNineGridBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionNineGridBrush@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionNineGridBrush@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionNineGridBrush@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionNineGridBrush@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CompositionNineGridBrush@Composition@UI@Microsoft@@QEAAJPEAVCompositionBrush@234@@Z
    long SetSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate_Source@CompositionNineGridBrush@Composition@UI@Microsoft@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z
    long Validate_Source(WindissectOpaque *, WindissectOpaque * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetScaleWorker@CompositionNineGridBrush@Composition@UI@Microsoft@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z
    long SetInsetScaleWorker(float *, float, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetWorker@CompositionNineGridBrush@Composition@UI@Microsoft@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z
    long SetInsetWorker(float *, float, WindissectOpaque const &);
};
} // namespace Microsoft::UI::Composition
