#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::PathKeyFrameAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@PathKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMPEAUICompositionPath@345@@Z
    virtual long InsertKeyFrame(float, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@PathKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMPEAUICompositionPath@345@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::PathKeyFrameAnimation
