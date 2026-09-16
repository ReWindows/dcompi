#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class VisualUnorderedCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidState@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAJXZ
    virtual long EnsureValidState();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
