#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CTransformGroupProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTransformGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTransformGroupProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformList@CTransformGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform@@I@Z
    long SetTransformList(IDCompositionTransform * *, unsigned int);
};
} // namespace DirectComposition
