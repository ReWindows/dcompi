#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionCommitBatch {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@Api@CompositionCommitBatch@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Microsoft@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActive@Api@CompositionCommitBatch@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnded@Api@CompositionCommitBatch@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsEnded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@Api@CompositionCommitBatch@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Completed(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::CompositionCommitBatch
