#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class RenderingDeviceReplacedEventArgs {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RenderingDeviceReplacedEventArgs@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@RenderingDeviceReplacedEventArgs@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RenderingDeviceReplacedEventArgs@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RenderingDeviceReplacedEventArgs@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RenderingDeviceReplacedEventArgs@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
