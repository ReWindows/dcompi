#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class CompositionSwapChain {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSwapChain@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSwapChain@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSwapChain@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSwapChain@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAUIDXGISwapChain1@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IDXGISwapChain1*);
};
} // namespace Microsoft::UI::Composition
