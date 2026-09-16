#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class CompositionSurfaceWrapper {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSurfaceWrapper@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSurfaceWrapper@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingVirtualSurface@CompositionSurfaceWrapper@Composition@UI@Microsoft@@QEAAPEAUIDCompositionVirtualSurface@@XZ
    IDCompositionVirtualSurface * GetUnderlyingVirtualSurface();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSurfaceWrapper@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSurfaceWrapper@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDCompSurface@CompositionSurfaceWrapper@Composition@UI@Microsoft@@AEAAXXZ
    void ClearDCompSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Microsoft@@AEAAJPEAUIDCompositionSurface@@@Z
    long SetDCompSurface(IDCompositionSurface *);
};
} // namespace Microsoft::UI::Composition
