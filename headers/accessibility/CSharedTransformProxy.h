#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CSharedTransformProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharedTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
