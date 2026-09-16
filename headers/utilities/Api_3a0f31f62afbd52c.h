#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionColorGradientStop {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@CompositionColorGradientStop@Composition@UI@Microsoft@@UEAAJPEAUColor@4Windows@@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionColorGradientStop@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Offset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@CompositionColorGradientStop@Composition@UI@Microsoft@@UEAAJUColor@4Windows@@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionColorGradientStop@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Offset(float);
};
} // namespace Microsoft::UI::Composition::CompositionColorGradientStop
