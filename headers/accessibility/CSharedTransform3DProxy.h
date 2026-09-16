#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CSharedTransform3DProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharedTransform3DProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
