#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::CompositionPath {
class Interop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometry@Interop@CompositionPath@Composition@UI@Microsoft@@UEAAJPEAPEAUID2D1Geometry@@@Z
    virtual long GetGeometry(ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGeometryUsingFactory@Interop@CompositionPath@Composition@UI@Microsoft@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    virtual long TryGetGeometryUsingFactory(ID2D1Factory *, ID2D1Geometry * *);
};
} // namespace Microsoft::UI::Composition::CompositionPath
