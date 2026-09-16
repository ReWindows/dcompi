#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 11 member(s).
namespace Microsoft::UI::Composition {
class CompositionProjectedShadowCaster {
public:
    class Api;
    class Velocity;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAncestorClipVisual@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@@Z
    long SetAncestorClipVisual(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@QEAAJPEAVCompositionBrush@234@@Z
    long SetBrush(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@@Z
    long SetCastingVisual(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@CompositionProjectedShadowCaster@Composition@UI@Microsoft@@QEAAJPEAVCompositionBrush@234@@Z
    long SetMask(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionProjectedShadowCaster@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionProjectedShadowCaster();
};
} // namespace Microsoft::UI::Composition
