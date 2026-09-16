#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::ScalarKeyFrameAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@ScalarKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMM@Z
    virtual long InsertKeyFrame(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@ScalarKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMMPEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, float, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::ScalarKeyFrameAnimation
