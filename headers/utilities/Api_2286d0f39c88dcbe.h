#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::Vector2KeyFrameAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@Vector2KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUVector2@Numerics@Foundation@Windows@@@Z
    virtual long InsertKeyFrame(float, ::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@Vector2KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUVector2@Numerics@Foundation@Windows@@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, ::Windows::Foundation::Numerics::Vector2, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Vector2KeyFrameAnimation
