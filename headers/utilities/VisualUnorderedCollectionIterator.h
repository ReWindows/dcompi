#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class VisualUnorderedCollectionIterator {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualUnorderedCollectionIterator@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualUnorderedCollectionIterator@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidState@VisualUnorderedCollectionIterator@Composition@UI@Microsoft@@QEAAJXZ
    long EnsureValidState();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualUnorderedCollectionIterator@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualUnorderedCollectionIterator@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualUnorderedCollectionIterator@Composition@UI@Microsoft@@QEAAJPEAVAccessor@VisualUnorderedCollectionImpl@234@PEAV6234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
