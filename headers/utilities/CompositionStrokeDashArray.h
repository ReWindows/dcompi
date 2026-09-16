#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class CompositionStrokeDashArray {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionStrokeDashArray@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionStrokeDashArray@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CompositionStrokeDashArray@Composition@UI@Microsoft@@UEAAXXZ
    virtual void OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddItem@CompositionStrokeDashArray@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long PreAddItem(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRemoveItem@CompositionStrokeDashArray@Composition@UI@Microsoft@@UEAAXM@Z
    virtual void PreRemoveItem(float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionStrokeDashArray@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionStrokeDashArray@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
