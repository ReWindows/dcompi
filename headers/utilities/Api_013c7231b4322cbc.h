#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::AnimationPropertyInfo {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedCompositionObject@Api@AnimationPropertyInfo@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionObject@345@@Z
    virtual long GetResolvedCompositionObject(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedCompositionObjectProperty@Api@AnimationPropertyInfo@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetResolvedCompositionObjectProperty(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessMode@Api@AnimationPropertyInfo@Composition@UI@Microsoft@@UEAAJPEAW4AnimationPropertyAccessMode@345@@Z
    virtual long get_AccessMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AccessMode@Api@AnimationPropertyInfo@Composition@UI@Microsoft@@UEAAJW4AnimationPropertyAccessMode@345@@Z
    virtual long put_AccessMode(int);
};
} // namespace Microsoft::UI::Composition::AnimationPropertyInfo
