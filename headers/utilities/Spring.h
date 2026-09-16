#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition {
class Spring {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDampingRatio@Spring@Composition@UI@Microsoft@@QEAAJM@Z
    long SetDampingRatio(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPeriod@Spring@Composition@UI@Microsoft@@QEAAJUTimeSpan@Foundation@Windows@@@Z
    long SetPeriod(::Windows::Foundation::TimeSpan);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@Spring@Composition@UI@Microsoft@@QEAAXPEAVNaturalMotionAnimator@234@@Z
    void SetProperties(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
