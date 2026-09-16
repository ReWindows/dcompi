#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 16 member(s).
namespace Microsoft::UI::Composition {
class CompositionGraphicsDevice {
public:
    class Api;
    class Interop;
    class XUCInternal;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionGraphicsDevice@Composition@UI@Microsoft@@QEAA@XZ
    CompositionGraphicsDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingSurface@CompositionGraphicsDevice@Composition@UI@Microsoft@@QEAAJUSizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@964@_NPEAPEAVCompositionDrawingSurface@234@@Z
    long CreateDrawingSurface(::Windows::Graphics::SizeInt32, int, int, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Microsoft@@QEAAJUSizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@964@PEAPEAVCompositionMipmapSurface@234@@Z
    long CreateMipmapSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Microsoft@@QEAAJUSizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@964@PEAPEAVCompositionVirtualDrawingSurface@234@@Z
    long CreateVirtualDrawingSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredCallbackOperation_Callback@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAXXZ
    virtual void ProcessDeferredCallbackOperation_Callback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAUIUnknown@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Microsoft@@QEAAJPEAUIUnknown@@@Z
    long SetRenderingDevice(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionGraphicsDevice();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CompositionGraphicsDevice@Composition@UI@Microsoft@@AEAAJAEBUSizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@964@_N3PEAPEAVCompositionDrawingSurface@234@@Z
    long CreateSurface(::Windows::Graphics::SizeInt32const &, int, int, bool, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRenderingDeviceReplacedEventHandler@CompositionGraphicsDevice@Composition@UI@Microsoft@@AEAAJUEventRegistrationToken@@@Z
    long RemoveRenderingDeviceReplacedEventHandler(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition
