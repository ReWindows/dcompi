#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class LocalAppRenderTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@LocalAppRenderTarget@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LocalAppRenderTarget@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdapterLUID@LocalAppRenderTarget@Composition@UI@Microsoft@@QEAAXAEBU_LUID@@@Z
    void SetAdapterLUID(_LUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopTree@LocalAppRenderTarget@Composition@UI@Microsoft@@QEAAXPEAVDesktopTree@234@@Z
    void SetDesktopTree(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@LocalAppRenderTarget@Composition@UI@Microsoft@@QEAAXAEBUtagSIZE@@@Z
    void SetSize(tagSIZE const &);
};
} // namespace Microsoft::UI::Composition
