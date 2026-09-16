#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::WRL2 {
class ContextSessionLock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContextSessionLock@WRL2@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContextSessionLock@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContextSessionLock@WRL2@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextSessionLock@WRL2@Microsoft@@MEAA@XZ
    virtual ~ContextSessionLock();
};
} // namespace Microsoft::WRL2
