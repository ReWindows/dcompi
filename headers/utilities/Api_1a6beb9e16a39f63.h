#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::CompositionViewBox {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_HorizontalAlignmentRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Offset(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Size(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJPEAW4CompositionStretch@345@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_VerticalAlignmentRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_HorizontalAlignmentRatio(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Offset(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Size(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJW4CompositionStretch@345@@Z
    virtual long put_Stretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_VerticalAlignmentRatio(float);
};
} // namespace Microsoft::UI::Composition::CompositionViewBox
