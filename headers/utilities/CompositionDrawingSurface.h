#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class CompositionDrawingSurface {
public:
    class Api;
    class Experimental;
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionDrawingSurface@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionDrawingSurface@Composition@UI@Microsoft@@QEAA@XZ
    CompositionDrawingSurface();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionDrawingSurface@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionDrawingSurface@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CompositionDrawingSurface@Composition@UI@Microsoft@@QEAAJUSizeInt32@Graphics@Windows@@@Z
    long Resize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@_N5@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Microsoft@@EEAAJUSizeInt32@Graphics@Windows@@@Z
    virtual long RecreateUnderlying(::Windows::Graphics::SizeInt32);
};
} // namespace Microsoft::UI::Composition
