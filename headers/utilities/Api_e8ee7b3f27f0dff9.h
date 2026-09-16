#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::CompositionScopedBatch {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@Api@CompositionScopedBatch@Composition@UI@Microsoft@@UEAAJXZ
    virtual long End();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@Api@CompositionScopedBatch@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@Api@CompositionScopedBatch@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Suspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@Api@CompositionScopedBatch@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Microsoft@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActive@Api@CompositionScopedBatch@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnded@Api@CompositionScopedBatch@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsEnded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@Api@CompositionScopedBatch@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Completed(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::CompositionScopedBatch
