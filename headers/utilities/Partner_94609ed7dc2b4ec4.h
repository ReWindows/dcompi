#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::Internal::CompositionAnimationTriggerPartner {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotificationId@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAAJ_K0@Z
    virtual long SetNotificationId(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TriggerFired(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TriggerFired(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::Internal::CompositionAnimationTriggerPartner
