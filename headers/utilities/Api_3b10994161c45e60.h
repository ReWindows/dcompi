#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::CompositionMipmapSurface {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawingSurfaceForLevel@Api@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAJIPEAPEAUICompositionDrawingSurface@345@@Z
    virtual long GetDrawingSurfaceForLevel(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlphaMode@Api@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAJPEAW4DirectXAlphaMode@DirectX@Graphics@5@@Z
    virtual long get_AlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LevelCount@Api@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long get_LevelCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelFormat@Api@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAJPEAW4DirectXPixelFormat@DirectX@Graphics@5@@Z
    virtual long get_PixelFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SizeInt32@Api@CompositionMipmapSurface@Composition@UI@Microsoft@@UEAAJPEAUSizeInt32@Graphics@Windows@@@Z
    virtual long get_SizeInt32(::Windows::Graphics::SizeInt32*);
};
} // namespace Microsoft::UI::Composition::CompositionMipmapSurface
