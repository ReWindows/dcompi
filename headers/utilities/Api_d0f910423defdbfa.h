#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::CompositionEffectFactory {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrush@Api@CompositionEffectFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionEffectBrush@345@@Z
    virtual long CreateBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@Api@CompositionEffectFactory@Composition@UI@Microsoft@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadStatus@Api@CompositionEffectFactory@Composition@UI@Microsoft@@UEAAJPEAW4CompositionEffectFactoryLoadStatus@345@@Z
    virtual long get_LoadStatus(int *);
};
} // namespace Microsoft::UI::Composition::CompositionEffectFactory
