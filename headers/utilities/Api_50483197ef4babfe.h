#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::ColorKeyFrameAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@ColorKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUColor@4Windows@@@Z
    virtual long InsertKeyFrame(float, ::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@ColorKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMUColor@4Windows@@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, ::Windows::UI::Color, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InterpolationColorSpace@Api@ColorKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAW4CompositionColorSpace@345@@Z
    virtual long get_InterpolationColorSpace(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InterpolationColorSpace@Api@ColorKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJW4CompositionColorSpace@345@@Z
    virtual long put_InterpolationColorSpace(int);
};
} // namespace Microsoft::UI::Composition::ColorKeyFrameAnimation
