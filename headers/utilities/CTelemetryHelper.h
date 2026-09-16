#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
class CTelemetryHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGraphStrings@CTelemetryHelper@@QEAAJPEAUIWrappedString@Composition@UI@Microsoft@@@Z
    long AddGraphStrings(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitUsageTelemetry@CTelemetryHelper@@QEAAXXZ
    void EmitUsageTelemetry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ
    void LogTelemetryLocked();
};
