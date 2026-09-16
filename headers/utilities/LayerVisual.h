#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class LayerVisual {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LayerVisual@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@LayerVisual@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LayerVisual@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LayerVisual@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffect@LayerVisual@Composition@UI@Microsoft@@QEAAJPEAVCompositionEffectBrush@234@@Z
    long SetEffect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadow@LayerVisual@Composition@UI@Microsoft@@QEAAXPEAVCompositionShadow@234@@Z
    void SetShadow(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayerVisual@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~LayerVisual();
};
} // namespace Microsoft::UI::Composition
