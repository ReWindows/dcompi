#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionCapabilities {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsFast@Api@CompositionCapabilities@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long AreEffectsFast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsSupported@Api@CompositionCapabilities@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long AreEffectsSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@Api@CompositionCapabilities@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Microsoft@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@Api@CompositionCapabilities@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::CompositionCapabilities
