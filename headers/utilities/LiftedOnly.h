#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition::Compositor {
class LiftedOnly {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForHandle@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUICompositionSurface@345@@Z
    virtual long CreateCompositionSurfaceForHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForSwapChain@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@345@@Z
    virtual long CreateCompositionSurfaceForSwapChain(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopWindowTarget@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJPEAUHWND__@@_NPEAPEAUICompositionTargetPartner@Private@345@@Z
    virtual long CreateDesktopWindowTarget(HWND__*, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGraphicsDevice@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJPEAUIUnknown@@PEAPEAUICompositionGraphicsDevice@345@@Z
    virtual long CreateGraphicsDevice(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSystemVisualTarget@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUICompositionTargetPartner@Private@345@@Z
    virtual long CreateSystemVisualTarget(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOnThread@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJK@Z
    virtual long EnsureOnThread(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedManipulationTransformFromHandle@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJ_KPEAPEAUIInspectable@@@Z
    virtual long OpenSharedManipulationTransformFromHandle(uint64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PartnerClosed@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PartnerClosed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PartnerClosed@LiftedOnly@Compositor@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PartnerClosed(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::Compositor
