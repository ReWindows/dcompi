#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class InteropCursorVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropCursorVisual@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropCursorVisual@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropCursorVisual@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropCursorVisual@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@_K@Z
    long RuntimeClassInitialize(WindissectOpaque *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteropCursorVisual@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~InteropCursorVisual();
};
} // namespace Microsoft::UI::Composition
