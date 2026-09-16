#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Interactions::VisualInteractionSource {
class Test {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOutputPrediction@Test@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJ_N@Z
    virtual long DisableOutputPrediction(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectManipulation@Test@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJUInjectManipulationArgs@@@Z
    virtual long InjectManipulation(InjectManipulationArgs);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoManipulationRedirectionMode@Test@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJXZ
    virtual long SetAutoManipulationRedirectionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInjectionAnimation@Test@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAUIInjectionAnimationTest@456@@Z
    virtual long StartInjectionAnimation(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Interactions::VisualInteractionSource
