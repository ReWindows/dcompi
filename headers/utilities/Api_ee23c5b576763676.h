#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::Scenes::SceneSurfaceMaterialInput {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJPEAW4CompositionBitmapInterpolationMode@456@@Z
    virtual long get_BitmapInterpolationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionSurface@456@@Z
    virtual long get_Surface(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJPEAW4SceneWrappingMode@3456@@Z
    virtual long get_WrappingUMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJPEAW4SceneWrappingMode@3456@@Z
    virtual long get_WrappingVMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJW4CompositionBitmapInterpolationMode@456@@Z
    virtual long put_BitmapInterpolationMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJPEAUICompositionSurface@456@@Z
    virtual long put_Surface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJW4SceneWrappingMode@3456@@Z
    virtual long put_WrappingUMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJW4SceneWrappingMode@3456@@Z
    virtual long put_WrappingVMode(int);
};
} // namespace Microsoft::UI::Composition::Scenes::SceneSurfaceMaterialInput
