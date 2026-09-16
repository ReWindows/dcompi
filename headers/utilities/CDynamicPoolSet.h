#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CDynamicPoolSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z
    long AllocateDynamicPool(WindissectOpaque * *, WindissectOpaque const &, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void CollectDeadSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z
    void DiscardAgedPools(bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDynamicPoolSet@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSurface@CDynamicPoolSet@DirectComposition@@QEAAJAEBVSizeU@2@00W4DXGI_FORMAT@@_N2PEAPEAVCAtlasSurface@2@@Z
    long RequestSurface(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, bool, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ
    void TrimPools();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z
    void RemoveDynamicPool(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W4DXGI_FORMAT@@_N33PEAPEAVCAtlasSurface@2@@Z
    long RequestSurfaceOnPool(WindissectOpaque *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, bool, bool, bool, WindissectOpaque * *);
};
} // namespace DirectComposition
