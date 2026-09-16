#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::NaturalMotionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayBehavior@Api@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAW4AnimationDelayBehavior@345@@Z
    virtual long get_DelayBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayTime@Api@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_DelayTime(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StopBehavior@Api@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAW4AnimationStopBehavior@345@@Z
    virtual long get_StopBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayBehavior@Api@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJW4AnimationDelayBehavior@345@@Z
    virtual long put_DelayBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayTime@Api@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_DelayTime(::Windows::Foundation::TimeSpan);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StopBehavior@Api@NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJW4AnimationStopBehavior@345@@Z
    virtual long put_StopBehavior(int);
};
} // namespace Microsoft::UI::Composition::NaturalMotionAnimation
