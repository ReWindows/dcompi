#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::Interactions::Internal::EdgyExperienceSource {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@PEAVEdgyDetectedEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_EdgyDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRedirectForManipulation@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_AutoRedirectForManipulation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EdgeId@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EdgeId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRedirectForManipulation@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_AutoRedirectForManipulation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EdgyDetected(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::Interactions::Internal::EdgyExperienceSource
