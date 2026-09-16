#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class SpriteVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpriteVisual@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SpriteVisual@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpriteVisual@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpriteVisual@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@SpriteVisual@Composition@UI@Microsoft@@QEAAXPEAVCompositionBrush@234@@Z
    void SetBrush(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadow@SpriteVisual@Composition@UI@Microsoft@@QEAAXPEAVCompositionShadow@234@@Z
    void SetShadow(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpriteVisual@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~SpriteVisual();
};
} // namespace Microsoft::UI::Composition
