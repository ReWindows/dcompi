#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class CompositionProjectedShadowReceiver {
public:
    class Api;
    class Velocity;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@QEAAJPEAVCompositionBrush@234@@Z
    long SetMask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReceivingVisual@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@QEAAXPEAVVisual@234@@Z
    void SetReceivingVisual(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionProjectedShadowReceiver();
};
} // namespace Microsoft::UI::Composition
