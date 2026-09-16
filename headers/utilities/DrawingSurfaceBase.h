#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 11 member(s).
namespace Microsoft::UI::Composition {
class DrawingSurfaceBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@DrawingSurfaceBase@Composition@UI@Microsoft@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    long BeginDraw(tagRECT const *, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DrawingSurfaceBase@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@DrawingSurfaceBase@Composition@UI@Microsoft@@QEAAJXZ
    long EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@DrawingSurfaceBase@Composition@UI@Microsoft@@QEAAJXZ
    long ResumeDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@DrawingSurfaceBase@Composition@UI@Microsoft@@QEAAJPEBURectInt32@Graphics@Windows@@0AEBUPointInt32@67@@Z
    long Scroll(::Windows::Graphics::RectInt32const *, ::Windows::Graphics::RectInt32const *, ::Windows::Graphics::PointInt32const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@DrawingSurfaceBase@Composition@UI@Microsoft@@QEAAJPEBUtagRECT@@0HH@Z
    long Scroll(tagRECT const *, tagRECT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@DrawingSurfaceBase@Composition@UI@Microsoft@@QEAAJXZ
    long SuspendDraw();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderingDeviceChanged@DrawingSurfaceBase@Composition@UI@Microsoft@@MEAAJXZ
    virtual long NotifyRenderingDeviceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Microsoft@@IEAAJPEAPEAUIDCompositionSurface@@@Z
    long UseUnderlyingSurface(IDCompositionSurface * *);
};
} // namespace Microsoft::UI::Composition
