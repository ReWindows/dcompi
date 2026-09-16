#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionGeometricClip {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Geometry@Api@CompositionGeometricClip@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionGeometry@345@@Z
    virtual long get_Geometry(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewBox@Api@CompositionGeometricClip@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionViewBox@345@@Z
    virtual long get_ViewBox(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Geometry@Api@CompositionGeometricClip@Composition@UI@Microsoft@@UEAAJPEAUICompositionGeometry@345@@Z
    virtual long put_Geometry(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewBox@Api@CompositionGeometricClip@Composition@UI@Microsoft@@UEAAJPEAUICompositionViewBox@345@@Z
    virtual long put_ViewBox(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::CompositionGeometricClip
