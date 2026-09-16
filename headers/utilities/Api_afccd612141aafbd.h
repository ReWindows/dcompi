#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionLight {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExclusionsFromTargets@Api@CompositionLight@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z
    virtual long get_ExclusionsFromTargets(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@Api@CompositionLight@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Targets@Api@CompositionLight@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z
    virtual long get_Targets(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsEnabled@Api@CompositionLight@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsEnabled(unsigned char);
};
} // namespace Microsoft::UI::Composition::CompositionLight
