#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition {
class CompositionEasingFunction {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@CompositionEasingFunction@Composition@UI@Microsoft@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
};
} // namespace Microsoft::UI::Composition
