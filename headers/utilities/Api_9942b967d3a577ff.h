#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::ElasticEasingFunction {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@Api@ElasticEasingFunction@Composition@UI@Microsoft@@UEAAJPEAW4CompositionEasingFunctionMode@345@@Z
    virtual long get_Mode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Oscillations@Api@ElasticEasingFunction@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_Oscillations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Springiness@Api@ElasticEasingFunction@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Springiness(float *);
};
} // namespace Microsoft::UI::Composition::ElasticEasingFunction
