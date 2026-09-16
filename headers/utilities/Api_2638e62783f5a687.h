#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Interactions::CompositionInteractionSourceIterator {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAJIPEAPEAUICompositionInteractionSource@3456@PEAI@Z
    virtual long GetMany(unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionInteractionSource@3456@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Microsoft::UI::Composition::Interactions::CompositionInteractionSourceIterator
