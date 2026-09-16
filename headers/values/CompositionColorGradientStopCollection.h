#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class CompositionColorGradientStopCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionColorGradientStopCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionColorGradientStopCollection@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CompositionColorGradientStopCollection@Composition@UI@Microsoft@@UEAAXXZ
    virtual void OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddItem@CompositionColorGradientStopCollection@Composition@UI@Microsoft@@UEAAJAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Microsoft@@@WRL2@4@@Z
    virtual long PreAddItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRemoveItem@CompositionColorGradientStopCollection@Composition@UI@Microsoft@@UEAAXAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Microsoft@@@WRL2@4@@Z
    virtual void PreRemoveItem(WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionColorGradientStopCollection@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionColorGradientStopCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
