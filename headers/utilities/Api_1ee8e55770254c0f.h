#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Scenes::SceneMesh {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillMeshAttribute@Api@SceneMesh@Scenes@Composition@UI@Microsoft@@UEAAJW4SceneAttributeSemantic@3456@W4DirectXPixelFormat@DirectX@Graphics@6@PEAUIMemoryBuffer@Foundation@Windows@@@Z
    virtual long FillMeshAttribute(int, int, ::Windows::Foundation::IMemoryBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@Api@SceneMesh@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneBoundingBox@3456@@Z
    virtual long get_Bounds(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Microsoft@@UEAAJPEAW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z
    virtual long get_PrimitiveTopology(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Microsoft@@UEAAJW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z
    virtual long put_PrimitiveTopology(int);
};
} // namespace Microsoft::UI::Composition::Scenes::SceneMesh
