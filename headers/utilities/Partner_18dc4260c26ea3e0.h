#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionObject {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectAnimation@Partner@CompositionObject@Composition@UI@Microsoft@@UEAAJPEBGPEAUICompositionAnimation@345@PEAPEAUICompositionAnimatorPartner@345@@Z
    virtual long ConnectAnimation(unsigned short const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectAnimation@Partner@CompositionObject@Composition@UI@Microsoft@@UEAAJPEBG@Z
    virtual long DisconnectAnimation(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableImplicitAnimations@Partner@CompositionObject@Composition@UI@Microsoft@@UEAAJH@Z
    virtual long EnableImplicitAnimations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyAnimator@Partner@CompositionObject@Composition@UI@Microsoft@@UEAAJPEBGPEAPEAUICompositionAnimatorPartner@345@@Z
    virtual long TryGetPropertyAnimator(unsigned short const *, WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::CompositionObject
