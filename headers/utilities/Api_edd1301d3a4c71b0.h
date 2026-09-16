#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::SpriteVisual {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Brush@Api@SpriteVisual@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Brush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shadow@Api@SpriteVisual@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionShadow@345@@Z
    virtual long get_Shadow(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Brush@Api@SpriteVisual@Composition@UI@Microsoft@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Brush(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Shadow@Api@SpriteVisual@Composition@UI@Microsoft@@UEAAJPEAUICompositionShadow@345@@Z
    virtual long put_Shadow(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::SpriteVisual
