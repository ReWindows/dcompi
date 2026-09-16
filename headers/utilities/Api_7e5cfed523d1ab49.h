#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Diagnostics::CompositionDebugHeatMaps {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@UEAAJPEAUIVisual@456@@Z
    virtual long Hide(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowMemoryUsage@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@UEAAJPEAUIVisual@456@@Z
    virtual long ShowMemoryUsage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOverdraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@UEAAJPEAUIVisual@456@W4CompositionDebugOverdrawContentKinds@3456@@Z
    virtual long ShowOverdraw(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRedraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@UEAAJPEAUIVisual@456@@Z
    virtual long ShowRedraw(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Diagnostics::CompositionDebugHeatMaps
