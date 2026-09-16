#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::CompositionAnimationGroup {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Api@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimation@345@@Z
    virtual long Add(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAVCompositionAnimation@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimation@345@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@CompositionAnimationGroup@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Microsoft::UI::Composition::CompositionAnimationGroup
