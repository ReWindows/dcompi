#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::KeyFrameAnimation {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIterationCount@Partner@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long GetIterationCount(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomTimeline@Partner@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJPEAUIDCompositionAnimationInstancePartner@@@Z
    virtual long SetCustomTimeline(IDCompositionAnimationInstancePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIterationCount@Partner@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long SetIterationCount(float);
};
} // namespace Microsoft::UI::Composition::KeyFrameAnimation
