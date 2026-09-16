#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::Core::CompositorController {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@Api@CompositorController@Core@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePreviousCommitCompletedAsync@Api@CompositorController@Core@Composition@UI@Microsoft@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long EnsurePreviousCommitCompletedAsync(::Windows::Foundation::IAsyncAction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CommitNeeded@Api@CompositorController@Core@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Microsoft@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CommitNeeded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Compositor@Api@CompositorController@Core@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositor@456@@Z
    virtual long get_Compositor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CommitNeeded@Api@CompositorController@Core@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CommitNeeded(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::Core::CompositorController
