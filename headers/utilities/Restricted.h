#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::CompositorCommon {
class Restricted {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHoverPointerSource@Restricted@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@PEAPEAUIHoverPointerSourcePartner@345@@Z
    virtual long CreateHoverPointerSource(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitDeferral@Restricted@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionCommitDeferralPartner@345@@Z
    virtual long GetCommitDeferral(WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::CompositorCommon
