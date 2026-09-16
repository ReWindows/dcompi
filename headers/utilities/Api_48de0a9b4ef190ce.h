#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::BounceScalarNaturalMotionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Acceleration@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Acceleration(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Restitution@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Restitution(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Acceleration@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Acceleration(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Restitution@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Restitution(float);
};
} // namespace Microsoft::UI::Composition::BounceScalarNaturalMotionAnimation
