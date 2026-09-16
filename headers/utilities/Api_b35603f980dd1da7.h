#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::Scenes::SceneMeshRendererComponent {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMaterial@3456@@Z
    virtual long get_Material(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMesh@3456@@Z
    virtual long get_Mesh(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UVMappings@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMeshMaterialAttributeMap@3456@@Z
    virtual long get_UVMappings(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAJPEAUISceneMaterial@3456@@Z
    virtual long put_Material(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAJPEAUISceneMesh@3456@@Z
    virtual long put_Mesh(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Scenes::SceneMeshRendererComponent
