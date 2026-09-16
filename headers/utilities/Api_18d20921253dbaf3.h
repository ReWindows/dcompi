#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::VisualCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAVVisual@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAbove@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@0@Z
    virtual long InsertAbove(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtBottom@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long InsertAtBottom(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtTop@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long InsertAtTop(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBelow@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@0@Z
    virtual long InsertBelow(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@VisualCollection@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Microsoft::UI::Composition::VisualCollection
