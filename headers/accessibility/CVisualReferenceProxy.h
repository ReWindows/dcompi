#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CVisualReferenceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualReferenceProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualReferenceProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualReferenceProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
