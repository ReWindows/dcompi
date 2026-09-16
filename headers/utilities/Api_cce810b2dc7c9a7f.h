#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 18 member(s).
namespace Microsoft::UI::Composition::Scenes::ScenePbrMaterial {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlphaCutoff@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_AlphaCutoff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlphaMode@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAW4SceneAlphaMode@3456@@Z
    virtual long get_AlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EmissiveFactor@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_EmissiveFactor(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EmissiveInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z
    virtual long get_EmissiveInput(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDoubleSided@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsDoubleSided(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NormalInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z
    virtual long get_NormalInput(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NormalScale@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_NormalScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OcclusionInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z
    virtual long get_OcclusionInput(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OcclusionStrength@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_OcclusionStrength(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AlphaCutoff@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_AlphaCutoff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AlphaMode@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJW4SceneAlphaMode@3456@@Z
    virtual long put_AlphaMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EmissiveFactor@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_EmissiveFactor(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EmissiveInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAUISceneMaterialInput@3456@@Z
    virtual long put_EmissiveInput(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDoubleSided@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsDoubleSided(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NormalInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAUISceneMaterialInput@3456@@Z
    virtual long put_NormalInput(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NormalScale@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_NormalScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OcclusionInput@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAUISceneMaterialInput@3456@@Z
    virtual long put_OcclusionInput(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OcclusionStrength@Api@ScenePbrMaterial@Scenes@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_OcclusionStrength(float);
};
} // namespace Microsoft::UI::Composition::Scenes::ScenePbrMaterial
