#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::CompositionProjectedShadowCasterCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAVCompositionProjectedShadowCaster@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAbove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z
    virtual long InsertAbove(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtBottom@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long InsertAtBottom(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtTop@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long InsertAtTop(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBelow@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z
    virtual long InsertBelow(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Microsoft::UI::Composition::CompositionProjectedShadowCasterCollection
