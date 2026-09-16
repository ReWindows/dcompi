#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition {
class Bounce {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAcceleration@Bounce@Composition@UI@Microsoft@@QEAAJM@Z
    long SetAcceleration(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@Bounce@Composition@UI@Microsoft@@QEAAXPEAVNaturalMotionAnimator@234@@Z
    void SetProperties(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestitution@Bounce@Composition@UI@Microsoft@@QEAAJM@Z
    long SetRestitution(float);
};
} // namespace Microsoft::UI::Composition
