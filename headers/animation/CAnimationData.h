#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace DirectComposition {
class CAnimationData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z
    DwmAnimationPrimitive & PrimitiveAtIndex(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAnimationData@DirectComposition@@QEAAXXZ
    void Reset();
};
} // namespace DirectComposition
