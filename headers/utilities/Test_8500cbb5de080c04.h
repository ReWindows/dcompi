#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::Interactions::InteractionTracker {
class Test {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositionManipulationPartner@456@PEAUICompositionInteractionPartner@456@_N@Z
    virtual long AddManipulationWithChaining(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInternalProperties@Test@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUInteractionTrackerInternalProperties@@@Z
    virtual long SetInternalProperties(InteractionTrackerInternalProperties *);
};
} // namespace Microsoft::UI::Composition::Interactions::InteractionTracker
