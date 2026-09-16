#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace DirectComposition {
class CScratchSurfaceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z
    void CollectScratchSurfaces(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z
    long GetScratchSurface(int, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CScratchSurfaceManager@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScratchSurfaceManager@DirectComposition@@EEAA@XZ
    virtual ~CScratchSurfaceManager();
};
} // namespace DirectComposition
