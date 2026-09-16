#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionLineGeometry {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_End@Api@CompositionLineGeometry@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_End(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Start@Api@CompositionLineGeometry@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Start(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_End@Api@CompositionLineGeometry@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_End(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Start@Api@CompositionLineGeometry@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Start(::Windows::Foundation::Numerics::Vector2);
};
} // namespace Microsoft::UI::Composition::CompositionLineGeometry
