#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::SpringVector2NaturalMotionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DampingRatio@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_DampingRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Period@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Period(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DampingRatio@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_DampingRatio(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Period@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Period(::Windows::Foundation::TimeSpan);
};
} // namespace Microsoft::UI::Composition::SpringVector2NaturalMotionAnimation
