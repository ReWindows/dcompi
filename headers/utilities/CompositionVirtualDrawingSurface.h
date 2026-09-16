#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class CompositionVirtualDrawingSurface {
public:
    class Api;
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@QEAAJUSizeInt32@Graphics@Windows@@@Z
    long Resize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@EEAAJUSizeInt32@Graphics@Windows@@@Z
    virtual long RecreateUnderlying(::Windows::Graphics::SizeInt32);
};
} // namespace Microsoft::UI::Composition
