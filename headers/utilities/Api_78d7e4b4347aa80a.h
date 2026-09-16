#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::CompositionGraphicsDevice {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAsync@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@USizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@85@W4DirectXAlphaMode@DirectX@85@MPEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Microsoft@@@Foundation@9@@Z
    virtual long CaptureAsync(WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJUSize@Foundation@Windows@@W4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@DirectX@Graphics@5@PEAPEAUICompositionDrawingSurface@345@@Z
    virtual long CreateDrawingSurface(::Windows::Foundation::Size, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawingSurface2@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJUSizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@DirectX@75@PEAPEAUICompositionDrawingSurface@345@@Z
    virtual long CreateDrawingSurface2(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMipmapSurface@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJUSizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@DirectX@75@PEAPEAUICompositionMipmapSurface@345@@Z
    virtual long CreateMipmapSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualDrawingSurface@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJUSizeInt32@Graphics@Windows@@W4DirectXPixelFormat@DirectX@75@W4DirectXAlphaMode@DirectX@75@PEAPEAUICompositionVirtualDrawingSurface@345@@Z
    virtual long CreateVirtualDrawingSurface(::Windows::Graphics::SizeInt32, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Trim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Microsoft@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RenderingDeviceReplaced(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RenderingDeviceReplaced(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::CompositionGraphicsDevice
