#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::AmbientLight {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@AmbientLight@Composition@UI@Microsoft@@UEAAJPEAUColor@4Windows@@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Intensity@Api@AmbientLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Intensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@AmbientLight@Composition@UI@Microsoft@@UEAAJUColor@4Windows@@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Intensity@Api@AmbientLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Intensity(float);
};
} // namespace Microsoft::UI::Composition::AmbientLight
