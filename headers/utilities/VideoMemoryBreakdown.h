#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace DirectComposition {
class VideoMemoryBreakdown {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAllocatableOnAtlas@VideoMemoryBreakdown@DirectComposition@@QEAA_NAEBVSizeU@2@@Z
    bool IsAllocatableOnAtlas(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultAtlasSize@VideoMemoryBreakdown@DirectComposition@@QEAAXIII@Z
    void SetDefaultAtlasSize(unsigned int, unsigned int, unsigned int);
};
} // namespace DirectComposition
