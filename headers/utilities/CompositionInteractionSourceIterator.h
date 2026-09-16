#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::Interactions {
class CompositionInteractionSourceIterator {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition::Interactions
