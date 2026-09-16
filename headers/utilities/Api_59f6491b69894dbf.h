#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::CompositionProjectedShadowCasterIterator {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Microsoft@@UEAAJIPEAPEAUICompositionProjectedShadowCaster@345@PEAI@Z
    virtual long GetMany(unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Microsoft::UI::Composition::CompositionProjectedShadowCasterIterator
