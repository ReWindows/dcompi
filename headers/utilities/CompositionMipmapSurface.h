#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition {
class CompositionMipmapSurface {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Microsoft@@QEAAJIPEAPEAVCompositionDrawingSurface@234@@Z
    long GetDrawingSurfaceForLevel(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderingDeviceChanged@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAJXZ
    virtual long NotifyRenderingDeviceChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSurface@CompositionMipmapSurface@Composition@UI@Microsoft@@EEAAJPEAUICompositionSurface@234@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long MarshalSurface(WindissectOpaque *, WindissectOpaque const *);
};
} // namespace Microsoft::UI::Composition
