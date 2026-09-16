#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::Internal::CompositionVailSuperWetInkSource {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableForVail@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJU_GUID@@III0III0@Z
    virtual long EnableForVail(_GUID, unsigned int, unsigned int, unsigned int, _GUID, unsigned int, unsigned int, unsigned int, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionSurfaceBrush@456@@Z
    virtual long get_ReferenceSwapChain(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJPEAUICompositionSurfaceBrush@456@@Z
    virtual long put_ReferenceSwapChain(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Internal::CompositionVailSuperWetInkSource
