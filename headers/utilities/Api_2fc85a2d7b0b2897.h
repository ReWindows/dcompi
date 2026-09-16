#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::QuaternionKeyFrameAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@QuaternionKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUQuaternion@Numerics@Foundation@Windows@@@Z
    virtual long InsertKeyFrame(float, ::Windows::Foundation::Numerics::Quaternion);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@QuaternionKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUQuaternion@Numerics@Foundation@Windows@@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, ::Windows::Foundation::Numerics::Quaternion, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::QuaternionKeyFrameAnimation
