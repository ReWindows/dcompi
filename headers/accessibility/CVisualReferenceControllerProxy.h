#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CVisualReferenceControllerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualReferenceControllerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualReferenceControllerProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualReferenceControllerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CVisualReferenceControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetVisual(IDCompositionVisual *);
};
} // namespace DirectComposition
