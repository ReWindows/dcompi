#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition {
class CommitDeferral {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalBeginDeferral@CommitDeferral@Composition@UI@Microsoft@@MEAAJPEAVCompositor@234@@Z
    virtual long InternalBeginDeferral(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalEndDeferral@CommitDeferral@Composition@UI@Microsoft@@MEAAJXZ
    virtual long InternalEndDeferral();
};
} // namespace Microsoft::UI::Composition
