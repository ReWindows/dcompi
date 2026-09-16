#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class InteropVisualReference {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropVisualReference@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropVisualReference@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropVisualReference@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropVisualReference@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropVisualReference@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@_NPEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, void *);
};
} // namespace Microsoft::UI::Composition
