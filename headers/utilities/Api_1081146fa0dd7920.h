#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::Scenes::SceneNode {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstComponentOfType@Api@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAJW4SceneComponentType@3456@PEAPEAUISceneComponent@3456@@Z
    virtual long FindFirstComponentOfType(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@Api@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IVector@PEAVSceneNode@Scenes@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long get_Children(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Components@Api@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long get_Components(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@Api@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneNode@3456@@Z
    virtual long get_Parent(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Transform@Api@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneModelTransform@3456@@Z
    virtual long get_Transform(WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::Scenes::SceneNode
