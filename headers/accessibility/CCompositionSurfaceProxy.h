#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CCompositionSurfaceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionSurfaceProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionSurfaceProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionSurfaceProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
