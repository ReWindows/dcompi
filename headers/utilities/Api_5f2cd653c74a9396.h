#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::ScalarNaturalMotionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long get_FinalValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long get_InitialValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialVelocity@Api@ScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_InitialVelocity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long put_FinalValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long put_InitialValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialVelocity@Api@ScalarNaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_InitialVelocity(float);
};
} // namespace Microsoft::UI::Composition::ScalarNaturalMotionAnimation
