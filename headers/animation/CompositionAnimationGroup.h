#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class CompositionAnimationGroup {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CompositionAnimationGroup@Composition@UI@Microsoft@@QEAAXPEAVCompositionAnimation@234@@Z
    void Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@CompositionAnimationGroup@Composition@UI@Microsoft@@QEAAXXZ
    void RemoveAll();
};
} // namespace Microsoft::UI::Composition
