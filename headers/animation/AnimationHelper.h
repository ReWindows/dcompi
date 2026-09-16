#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class AnimationHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Microsoft@@YA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Microsoft@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAI3PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    bool FindAnimatablePropertyInfo(HSTRING__*, WindissectOpaque const &, int *, unsigned int *, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IAnimationObjectPropertyNameCheck@AnimationHelper@Composition@UI@Microsoft@@YAJPEAUHSTRING__@@@Z
    long IAnimationObjectPropertyNameCheck(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeValueWithMask@AnimationHelper@Composition@UI@Microsoft@@YAXPEAXPEBXG_K@Z
    void MergeValueWithMask(void *, void const *, unsigned short, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@AnimationHelper@Composition@UI@Microsoft@@YAJPEAUHSTRING__@@PEAVCompositionObject@234@PEAVCompositionAnimation@234@PEBUAnimationValueData@234@PEA_N@Z
    long SetFinalValueParameter(HSTRING__*, WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, bool *);
};
} // namespace Microsoft::UI::Composition
