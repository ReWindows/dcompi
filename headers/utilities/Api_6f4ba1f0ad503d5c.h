#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionProjectedShadowReceiverIterator {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Microsoft@@UEAAJIPEAPEAUICompositionProjectedShadowReceiver@345@PEAI@Z
    virtual long GetMany(unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadowReceiver@345@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Microsoft::UI::Composition::CompositionProjectedShadowReceiverIterator
