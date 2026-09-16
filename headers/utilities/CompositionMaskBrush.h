#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class CompositionMaskBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionMaskBrush@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@CompositionMaskBrush@Composition@UI@Microsoft@@QEAAJPEAVCompositionBrush@234@@Z
    long SetMask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CompositionMaskBrush@Composition@UI@Microsoft@@QEAAJPEAVCompositionBrush@234@@Z
    long SetSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate_Mask@CompositionMaskBrush@Composition@UI@Microsoft@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z
    long Validate_Mask(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate_Source@CompositionMaskBrush@Composition@UI@Microsoft@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z
    long Validate_Source(WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionMaskBrush@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionMaskBrush();
};
} // namespace Microsoft::UI::Composition
