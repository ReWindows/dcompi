#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::SpringScalarNaturalMotionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_DampingRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Period@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Period(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_DampingRatio(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Period@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long put_Period(::Windows::Foundation::TimeSpan);
};
} // namespace Microsoft::UI::Composition::SpringScalarNaturalMotionAnimation
