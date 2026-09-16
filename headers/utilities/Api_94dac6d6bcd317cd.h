#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::VisualIterator {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@Api@VisualIterator@Composition@UI@Microsoft@@UEAAJIPEAPEAUIVisual@345@PEAI@Z
    virtual long GetMany(unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@VisualIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@VisualIterator@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@VisualIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Microsoft::UI::Composition::VisualIterator
