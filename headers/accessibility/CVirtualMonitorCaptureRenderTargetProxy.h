#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CVirtualMonitorCaptureRenderTargetProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBoundsInMonitor@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBUtagRECT@@@Z
    virtual long SetBoundsInMonitor(tagRECT const &);
};
} // namespace DirectComposition
