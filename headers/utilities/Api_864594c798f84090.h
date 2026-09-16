#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::Vector3NaturalMotionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_FinalValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_InitialValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialVelocity@Api@Vector3NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_InitialVelocity(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_FinalValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_InitialValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialVelocity@Api@Vector3NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_InitialVelocity(::Windows::Foundation::Numerics::Vector3);
};
} // namespace Microsoft::UI::Composition::Vector3NaturalMotionAnimation
