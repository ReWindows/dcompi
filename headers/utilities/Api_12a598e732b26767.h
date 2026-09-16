#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition::Effects::WhiteNoiseEffect {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@3Graphics@Windows@@@Z
    virtual long GetNamedPropertyMapping(unsigned short const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    virtual long GetProperty(unsigned int, ::Windows::Foundation::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@3Graphics@Windows@@@Z
    virtual long GetSource(unsigned int, ::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Frequency@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Frequency(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Offset(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Frequency@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Frequency(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Offset(::Windows::Foundation::Numerics::Vector2);
};
} // namespace Microsoft::UI::Composition::Effects::WhiteNoiseEffect
