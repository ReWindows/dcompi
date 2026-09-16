#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::Internal::CompositionAnimationTriggerValuePartner {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Animation@Partner@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionAnimationBase@456@@Z
    virtual long get_Animation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetObject@Partner@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUIAnimationObject@456@@Z
    virtual long get_TargetObject(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetProperty@Partner@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetProperty(HSTRING__* *);
};
} // namespace Microsoft::UI::Composition::Internal::CompositionAnimationTriggerValuePartner
