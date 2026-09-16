#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::VisualUnorderedCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Api@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long Add(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAVVisual@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@VisualUnorderedCollection@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Microsoft::UI::Composition::VisualUnorderedCollection
