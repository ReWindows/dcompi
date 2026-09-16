#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace DirectComposition {
class CDynamicPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CDynamicPool@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBVSizeU@2@11@Z
    long CreateSurface(WindissectOpaque * *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDynamicPool@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocAtlasNode@CDynamicPool@DirectComposition@@AEAAJAEBVSizeU@2@PEAPEAVCAtlasNode@2@@Z
    long AllocAtlasNode(WindissectOpaque const &, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDynamicPool@DirectComposition@@EEAA@XZ
    virtual ~CDynamicPool();
};
} // namespace DirectComposition
