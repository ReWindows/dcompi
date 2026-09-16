#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::DistantLight {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@DistantLight@Composition@UI@Microsoft@@UEAAJPEAUColor@4Windows@@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoordinateSpace@Api@DistantLight@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_CoordinateSpace(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@Api@DistantLight@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Direction(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Intensity@Api@DistantLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Intensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@DistantLight@Composition@UI@Microsoft@@UEAAJUColor@4Windows@@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CoordinateSpace@Api@DistantLight@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long put_CoordinateSpace(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Direction@Api@DistantLight@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_Direction(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Intensity@Api@DistantLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Intensity(float);
};
} // namespace Microsoft::UI::Composition::DistantLight
