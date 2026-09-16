#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::CompositionGeometry {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrimEnd@Api@CompositionGeometry@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_TrimEnd(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrimOffset@Api@CompositionGeometry@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_TrimOffset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrimStart@Api@CompositionGeometry@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_TrimStart(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrimEnd@Api@CompositionGeometry@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_TrimEnd(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrimOffset@Api@CompositionGeometry@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_TrimOffset(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrimStart@Api@CompositionGeometry@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_TrimStart(float);
};
} // namespace Microsoft::UI::Composition::CompositionGeometry
