#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::CompositionVisualSurface {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@Partner@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Freeze();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RealizationSize@Partner@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_RealizationSize(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@Partner@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJPEAW4CompositionStretch@345@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RealizationSize@Partner@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_RealizationSize(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@Partner@CompositionVisualSurface@Composition@UI@Microsoft@@UEAAJW4CompositionStretch@345@@Z
    virtual long put_Stretch(int);
};
} // namespace Microsoft::UI::Composition::CompositionVisualSurface
