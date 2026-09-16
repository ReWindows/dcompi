#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionProjectedShadowReceiver {
class Velocity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DrawOrder@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAJPEAW4CompositionProjectedShadowDrawOrder@345@@Z
    virtual long get_DrawOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Mask(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DrawOrder@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAJW4CompositionProjectedShadowDrawOrder@345@@Z
    virtual long put_DrawOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Microsoft@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Mask(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::CompositionProjectedShadowReceiver
