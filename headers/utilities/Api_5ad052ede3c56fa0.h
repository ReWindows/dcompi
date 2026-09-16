#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::ImplicitAnimationCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimationBase@345@PEAE@Z
    virtual long Insert(HSTRING__*, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionAnimationBase@345@@Z
    virtual long Lookup(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@ImplicitAnimationCollection@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
};
} // namespace Microsoft::UI::Composition::ImplicitAnimationCollection
