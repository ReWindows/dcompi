#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition::CompositorCommon {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorVisual@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJ_KPEAPEAUICursorVisualPartner@345@@Z
    virtual long CreateCursorVisual(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedTarget@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisualTargetPartner@345@@Z
    virtual long CreateSharedTarget(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisual@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long CreateSharedVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintSize@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJII@Z
    virtual long HintSize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferSurfaceResources@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJXZ
    virtual long OfferSurfaceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceHandle@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUICompositionObject@345@PEAPEAX@Z
    virtual long OpenSharedResourceHandle(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedTargetFromHandle@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUIVisualTargetPartner@345@@Z
    virtual long OpenSharedTargetFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedTargetFromVisual@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@PEAPEAUIVisualTargetPartner@345@@Z
    virtual long OpenSharedTargetFromVisual(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualFromHandle@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUIVisual@345@@Z
    virtual long OpenSharedVisualFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualFromTarget@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisualTargetPartner@345@PEAPEAUIVisual@345@@Z
    virtual long OpenSharedVisualFromTarget(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualReferenceFromHandle@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUIVisualReference@Internal@345@@Z
    virtual long OpenSharedVisualReferenceFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimSurfaceResources@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long ReclaimSurfaceResources(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionCommittedListener@Partner@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUICompositionNotifyCommittedPartner@345@@Z
    virtual long SetCompositionCommittedListener(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::CompositorCommon
