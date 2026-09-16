#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::Internal {
class CaptureRenderTarget {
public:
    class Interop;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetController@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@QEAAXPEAVCaptureControllerBase@2345@@Z
    void SetController(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Internal
