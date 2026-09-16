#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class VisualIterator {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualIterator@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidState@VisualIterator@Composition@UI@Microsoft@@QEAAJXZ
    long EnsureValidState();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualIterator@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualIterator@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualIterator@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~VisualIterator();
};
} // namespace Microsoft::UI::Composition
