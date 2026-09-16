#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::CompositionProjectedShadow {
class Velocity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MaxOpacity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MinOpacity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpacityFalloff@Velocity@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_OpacityFalloff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MaxOpacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MinOpacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OpacityFalloff@Velocity@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_OpacityFalloff(float);
};
} // namespace Microsoft::UI::Composition::CompositionProjectedShadow
