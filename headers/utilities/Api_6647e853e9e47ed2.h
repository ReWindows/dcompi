#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 20 member(s).
namespace Microsoft::UI::Composition::Effects::SceneLightingEffect {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@3Graphics@Windows@@@Z
    virtual long GetNamedPropertyMapping(unsigned short const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    virtual long GetProperty(unsigned int, ::Windows::Foundation::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@3Graphics@Windows@@@Z
    virtual long GetSource(unsigned int, ::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AmbientAmount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_AmbientAmount(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DiffuseAmount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_DiffuseAmount(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NormalMapSource@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSource@3Graphics@Windows@@@Z
    virtual long get_NormalMapSource(::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReflectanceModel@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAW4SceneLightingEffectReflectanceModel@3456@@Z
    virtual long get_ReflectanceModel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpecularAmount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_SpecularAmount(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpecularShine@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_SpecularShine(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AmbientAmount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_AmbientAmount(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DiffuseAmount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_DiffuseAmount(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NormalMapSource@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAUIGraphicsEffectSource@3Graphics@Windows@@@Z
    virtual long put_NormalMapSource(::Windows::Graphics::Effects::IGraphicsEffectSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReflectanceModel@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJW4SceneLightingEffectReflectanceModel@3456@@Z
    virtual long put_ReflectanceModel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SpecularAmount@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_SpecularAmount(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SpecularShine@Api@SceneLightingEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_SpecularShine(float);
};
} // namespace Microsoft::UI::Composition::Effects::SceneLightingEffect
