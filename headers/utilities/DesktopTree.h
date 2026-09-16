#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition {
class DesktopTree {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DesktopTree@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DesktopTree@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@U_LUID@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, _LUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@DesktopTree@Composition@UI@Microsoft@@QEAAJPEAVContainerVisual@234@@Z
    long SetRoot(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
