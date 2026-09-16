#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::Internal {
class SuperWetInkVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SuperWetInkVisual@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SuperWetInkVisual@Internal@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SuperWetInkVisual@Internal@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SuperWetInkVisual@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuperWetInkSource@SuperWetInkVisual@Internal@Composition@UI@Microsoft@@QEAAXPEAVCompositionSuperWetInkSource@2345@@Z
    void SetSuperWetInkSource(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuperWetInkVisual@Internal@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~SuperWetInkVisual();
};
} // namespace Microsoft::UI::Composition::Internal
