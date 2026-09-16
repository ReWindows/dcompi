#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::LayerVisual {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Effect@Api@LayerVisual@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionEffectBrush@345@@Z
    virtual long get_Effect(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shadow@Api@LayerVisual@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionShadow@345@@Z
    virtual long get_Shadow(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Effect@Api@LayerVisual@Composition@UI@Microsoft@@UEAAJPEAUICompositionEffectBrush@345@@Z
    virtual long put_Effect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Shadow@Api@LayerVisual@Composition@UI@Microsoft@@UEAAJPEAUICompositionShadow@345@@Z
    virtual long put_Shadow(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::LayerVisual
