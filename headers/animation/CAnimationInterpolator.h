#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
class CAnimationInterpolator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z
    bool GetAnimationValue(int64_t, float *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z
    bool GetInterpolatedValue(int64_t, float *, bool *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z
    bool FindCurrentPrimitive(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z
    bool GetAdjustedHandoffValue(int64_t, float, int, float, uint64_t, float *);
};
