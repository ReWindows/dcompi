#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::Vector3KeyFrameAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@Vector3KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUVector3@Numerics@Foundation@Windows@@@Z
    virtual long InsertKeyFrame(float, ::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@Vector3KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUVector3@Numerics@Foundation@Windows@@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, ::Windows::Foundation::Numerics::Vector3, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Vector3KeyFrameAnimation
