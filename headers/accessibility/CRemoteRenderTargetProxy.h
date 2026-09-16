#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CRemoteRenderTargetProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRemoteRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRemoteRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRemoteRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopTree@CRemoteRenderTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionDesktopTreePartner@@@Z
    virtual long SetDesktopTree(IDCompositionDesktopTreePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRToHDRMultiplier@CRemoteRenderTargetProxy@DirectComposition@@UEAAJM@Z
    virtual long SetSDRToHDRMultiplier(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRefreshRate@CRemoteRenderTargetProxy@DirectComposition@@UEAAJXZ
    virtual long UpdateRefreshRate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@CRemoteRenderTargetProxy@DirectComposition@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z
    virtual long UpdateTransform(HMONITOR__*, D2D_RECT_F const &, float, D2D_RECT_U const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform2@CRemoteRenderTargetProxy@DirectComposition@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MMAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z
    virtual long UpdateTransform2(HMONITOR__*, D2D_RECT_F const &, float, float, D2D_RECT_U const &, int);
};
} // namespace DirectComposition
