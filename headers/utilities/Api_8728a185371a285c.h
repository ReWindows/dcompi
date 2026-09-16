#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::CompositionVisualSurface {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceOffset@Api@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_SourceOffset(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceSize@Api@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_SourceSize(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceVisual@Api@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_SourceVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceOffset@Api@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_SourceOffset(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceSize@Api@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_SourceSize(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceVisual@Api@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long put_SourceVisual(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::CompositionVisualSurface
