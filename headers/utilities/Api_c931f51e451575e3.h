#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::CompositionVirtualDrawingSurface {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJUSizeInt32@Graphics@Windows@@@Z
    virtual long Resize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJUPointInt32@Graphics@Windows@@@Z
    virtual long Scroll(::Windows::Graphics::PointInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRect@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJUPointInt32@Graphics@Windows@@URectInt32@78@@Z
    virtual long ScrollRect(::Windows::Graphics::PointInt32, ::Windows::Graphics::RectInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRectWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJUPointInt32@Graphics@Windows@@URectInt32@78@1@Z
    virtual long ScrollRectWithClip(::Windows::Graphics::PointInt32, ::Windows::Graphics::RectInt32, ::Windows::Graphics::RectInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJUPointInt32@Graphics@Windows@@URectInt32@78@@Z
    virtual long ScrollWithClip(::Windows::Graphics::PointInt32, ::Windows::Graphics::RectInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJIPEAURectInt32@Graphics@Windows@@@Z
    virtual long Trim(unsigned int, ::Windows::Graphics::RectInt32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlphaMode@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEAW4DirectXAlphaMode@DirectX@Graphics@5@@Z
    virtual long get_AlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelFormat@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEAW4DirectXPixelFormat@DirectX@Graphics@5@@Z
    virtual long get_PixelFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_Size(::Windows::Foundation::Size *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SizeInt32@Api@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEAUSizeInt32@Graphics@Windows@@@Z
    virtual long get_SizeInt32(::Windows::Graphics::SizeInt32*);
};
} // namespace Microsoft::UI::Composition::CompositionVirtualDrawingSurface
