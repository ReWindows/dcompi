#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTrackerInertiaModifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@W4InertiaModifierType@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAnimation@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@QEAAJPEAVCompositionAnimation@345@@Z
    long SetValueAnimation(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~InteractionTrackerInertiaModifier();
};
} // namespace Microsoft::UI::Composition::Interactions
