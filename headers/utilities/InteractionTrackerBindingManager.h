#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTrackerBindingManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTrackerBindings@InteractionTrackerBindingManager@Interactions@Composition@UI@Microsoft@@QEAAXPEAVInteractionTracker@2345@@Z
    void RemoveTrackerBindings(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Microsoft@@QEAAJIIW4InteractionBindingAxisModes@2345@@Z
    long SetTrackerBindingMode(unsigned int, unsigned int, int);
};
} // namespace Microsoft::UI::Composition::Interactions
