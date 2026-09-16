#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTipPoints@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJIIPEAE@Z
    virtual long AddTipPoints(unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertiesForPresentCount@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJIEIPEAE@Z
    virtual long SetPropertiesForPresentCount(unsigned int, unsigned char, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionSurfaceBrush@456@@Z
    virtual long get_ReferenceSwapChain(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJPEAUICompositionSurfaceBrush@456@@Z
    virtual long put_ReferenceSwapChain(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource
