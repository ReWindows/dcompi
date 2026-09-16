#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Visual {
class Experimental {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteraction@Experimental@Visual@Composition@UI@Microsoft@@UEAAJPEAUIInspectable@@@Z
    virtual long SetInteraction(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyChangedListener@Experimental@Visual@Composition@UI@Microsoft@@UEAAJW4ExpExpressionNotificationProperty@1345@PEAUIExpCompositionPropertyChangedListener@1345@@Z
    virtual long SetPropertyChangedListener(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PartnerClosed@Experimental@Visual@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PartnerClosed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PartnerClosed@Experimental@Visual@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PartnerClosed(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::Visual
