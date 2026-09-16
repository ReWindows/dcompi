#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class ImplicitAnimationCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ImplicitAnimationCollection@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Microsoft@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z
    long TryPlayAnimation(WindissectOpaque *, WindissectOpaque const *, bool *);
};
} // namespace Microsoft::UI::Composition
