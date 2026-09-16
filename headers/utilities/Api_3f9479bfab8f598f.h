#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 17 member(s).
namespace Microsoft::UI::Composition::KeyFrameAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionKeyFrame@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMPEAUHSTRING__@@@Z
    virtual long InsertExpressionKeyFrame(float, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionKeyFrameWithEasingFunction@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJMPEAUHSTRING__@@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertExpressionKeyFrameWithEasingFunction(float, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayBehavior@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAW4AnimationDelayBehavior@345@@Z
    virtual long get_DelayBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayTime@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_DelayTime(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAW4AnimationDirection@345@@Z
    virtual long get_Direction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Duration(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IterationBehavior@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAW4AnimationIterationBehavior@345@@Z
    virtual long get_IterationBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IterationCount@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_IterationCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyFrameCount@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_KeyFrameCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StopBehavior@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAW4AnimationStopBehavior@345@@Z
    virtual long get_StopBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayBehavior@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJW4AnimationDelayBehavior@345@@Z
    virtual long put_DelayBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayTime@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_DelayTime(::Windows::Foundation::TimeSpan);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Direction@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJW4AnimationDirection@345@@Z
    virtual long put_Direction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Duration@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Duration(::Windows::Foundation::TimeSpan);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IterationBehavior@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJW4AnimationIterationBehavior@345@@Z
    virtual long put_IterationBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IterationCount@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJH@Z
    virtual long put_IterationCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StopBehavior@Api@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJW4AnimationStopBehavior@345@@Z
    virtual long put_StopBehavior(int);
};
} // namespace Microsoft::UI::Composition::KeyFrameAnimation
