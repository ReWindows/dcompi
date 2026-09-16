#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class VisualTarget {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualTarget@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualTarget@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualTarget@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualTarget@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualTarget@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@VisualTarget@Composition@UI@Microsoft@@QEAAXPEAVVisual@234@@Z
    void SetRoot(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
