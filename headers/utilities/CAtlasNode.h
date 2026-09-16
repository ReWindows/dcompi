#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CAtlasNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z
    long Allocate(unsigned long, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ
    void CollectDead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLargestAvailableDimensions@CAtlasNode@DirectComposition@@QEAAXXZ
    void UpdateLargestAvailableDimensions();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasNode@DirectComposition@@QEAA@XZ
    ~CAtlasNode();
};
} // namespace DirectComposition
