#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::CompositorCommon {
class VelocityProjectedShadow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadow@VelocityProjectedShadow@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadow@345@@Z
    virtual long CreateProjectedShadow(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadowCaster@VelocityProjectedShadow@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long CreateProjectedShadowCaster(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadowReceiver@VelocityProjectedShadow@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadowReceiver@345@@Z
    virtual long CreateProjectedShadowReceiver(WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::CompositorCommon
