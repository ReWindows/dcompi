#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
class CRegion {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArea@CRegion@@QEBA_KXZ
    uint64_t GetArea() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddRectangle@CRegion@@QEAAJAEBUMilRectU@@@Z
    long TryAddRectangle(MilRectU const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryIntersect@CRegion@@QEAAJAEBV1@@Z
    long TryIntersect(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySubtract@CRegion@@QEAAJAEBV1@@Z
    long TrySubtract(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnion@CRegion@@QEAAJAEBV1@@Z
    long TryUnion(CRegion const &);
};
