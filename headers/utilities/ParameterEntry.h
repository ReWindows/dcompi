#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
class ParameterEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMatrixValue@ParameterEntry@@QEAAXXZ
    void ClearMatrixValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix4x4@ParameterEntry@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z
    void SetMatrix4x4(::Windows::Foundation::Numerics::Matrix4x4const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParameterEntry@@QEAA@XZ
    ~ParameterEntry();
};
