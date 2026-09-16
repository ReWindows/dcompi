#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::CompositorCommon {
class VelocityPartnerProjectedShadow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHostProjectedShadowCaster@VelocityPartnerProjectedShadow@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long CreateSharedHostProjectedShadowCaster(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenClientProjectedShadowCasterFromHandle@VelocityPartnerProjectedShadow@CompositorCommon@Composition@UI@Microsoft@@UEAAJ_KPEAPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long OpenClientProjectedShadowCasterFromHandle(uint64_t, WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::CompositorCommon
