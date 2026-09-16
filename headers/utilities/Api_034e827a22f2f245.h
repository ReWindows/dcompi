#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::Interactions::CompositionInteractionSourceCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositionInteractionSource@3456@@Z
    virtual long Add(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAUICompositionInteractionSource@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositionInteractionSource@3456@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Microsoft::UI::Composition::Interactions::CompositionInteractionSourceCollection
