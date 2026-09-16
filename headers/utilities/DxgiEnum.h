#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
class DxgiEnum {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuidForMonitor@DxgiEnum@@QEAAJPEAUHMONITOR__@@PEAU_LUID@@@Z
    long GetAdapterLuidForMonitor(HMONITOR__*, _LUID *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DxgiEnum@@MEAA@XZ
    virtual ~DxgiEnum();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMonitorToAdapterMapping@DxgiEnum@@AEAAJXZ
    long EnsureMonitorToAdapterMapping();
};
