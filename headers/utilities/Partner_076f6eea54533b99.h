#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition::CompositionPropertyAnimator {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableValueUpdates@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJH@Z
    virtual long EnableValueUpdates(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long GetValue(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long GetValue(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUD2D_MATRIX_3X2_F@@@Z
    virtual long GetValue(D2D_MATRIX_3X2_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUD2D_MATRIX_4X4_F@@@Z
    virtual long GetValue(D2D_MATRIX_4X4_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUD2D_VECTOR_2F@@@Z
    virtual long GetValue(D2D_VECTOR_2F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUD2D_VECTOR_3F@@@Z
    virtual long GetValue(D2D_VECTOR_3F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUD2D_VECTOR_4F@@@Z
    virtual long GetValue(D2D_VECTOR_4F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAU_D3DCOLORVALUE@@@Z
    virtual long GetValue(_D3DCOLORVALUE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Partner@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Stop();
};
} // namespace Microsoft::UI::Composition::CompositionPropertyAnimator
