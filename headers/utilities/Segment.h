#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Path {
class Segment {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ
    WindissectOpaque GetControlPoints() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z
    static unsigned int GetSize(int);
};
} // namespace Path
