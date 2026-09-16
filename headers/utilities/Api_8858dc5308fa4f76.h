#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::ShapeVisual {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shapes@Api@ShapeVisual@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IVector@PEAVCompositionShape@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long get_Shapes(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewBox@Api@ShapeVisual@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionViewBox@345@@Z
    virtual long get_ViewBox(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewBox@Api@ShapeVisual@Composition@UI@Microsoft@@UEAAJPEAUICompositionViewBox@345@@Z
    virtual long put_ViewBox(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::ShapeVisual
