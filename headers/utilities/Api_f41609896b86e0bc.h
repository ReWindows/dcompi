#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::Scenes::SceneMetallicRoughnessMaterial {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAUVector4@Numerics@Foundation@Windows@@@Z
    virtual long get_BaseColorFactor(::Windows::Foundation::Numerics::Vector4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z
    virtual long get_BaseColorInput(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MetallicFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z
    virtual long get_MetallicRoughnessInput(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RoughnessFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJUVector4@Numerics@Foundation@Windows@@@Z
    virtual long put_BaseColorFactor(::Windows::Foundation::Numerics::Vector4);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAUISceneMaterialInput@3456@@Z
    virtual long put_BaseColorInput(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MetallicFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJPEAUISceneMaterialInput@3456@@Z
    virtual long put_MetallicRoughnessInput(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RoughnessFactor(float);
};
} // namespace Microsoft::UI::Composition::Scenes::SceneMetallicRoughnessMaterial
