#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::CompositionAnimationIterator {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@CompositionAnimationIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@CompositionAnimationIterator@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionAnimation@345@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@CompositionAnimationIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Microsoft::UI::Composition::CompositionAnimationIterator
