#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 11 member(s).
namespace Microsoft::UI::Composition {
class InteropCompositor {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropCompositor@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteropVisual@InteropCompositor@Composition@UI@Microsoft@@QEAAJPEAPEAVInteropVisual@234@@Z
    long CreateInteropVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateManipulationTransform@InteropCompositor@Composition@UI@Microsoft@@QEAAJPEAUIDCompositionTransform@@AEBU_GUID@@PEAPEAX@Z
    long CreateManipulationTransform(IDCompositionTransform *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedResource@InteropCompositor@Composition@UI@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long CreateSharedResource(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropCompositor@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropCompositor@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Microsoft@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@W4DeviceVersion@DirectComposition@@@Z
    long RuntimeClassInitialize(IUnknown *, WindissectOpaque *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommitNeeded_Callback@InteropCompositor@Composition@UI@Microsoft@@MEAAXXZ
    virtual void HandleCommitNeeded_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferStateTransition_Callback@InteropCompositor@Composition@UI@Microsoft@@MEAAX_N@Z
    virtual void NotifyDeferStateTransition_Callback(bool);
};
} // namespace Microsoft::UI::Composition
