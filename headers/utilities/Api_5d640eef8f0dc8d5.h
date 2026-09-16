#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::Vector2NaturalMotionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_FinalValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_InitialValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialVelocity@Api@Vector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_InitialVelocity(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_FinalValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_InitialValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialVelocity@Api@Vector2NaturalMotionAnimation@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_InitialVelocity(::Windows::Foundation::Numerics::Vector2);
};
} // namespace Microsoft::UI::Composition::Vector2NaturalMotionAnimation
