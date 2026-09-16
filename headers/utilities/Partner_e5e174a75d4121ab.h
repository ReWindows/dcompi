#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::Internal::CaptureRenderTarget {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUICaptureControllerBase@3456@@Z
    virtual long get_Controller(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DirtyRegionMode@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJPEAW4CompositionDirtyRegionMode@3456@@Z
    virtual long get_DirtyRegionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCursorEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsCursorEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinUpdateInterval@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long get_MinUpdateInterval(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SDRBoost@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_SDRBoost(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJPEAUICaptureControllerBase@3456@@Z
    virtual long put_Controller(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DirtyRegionMode@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJW4CompositionDirtyRegionMode@3456@@Z
    virtual long put_DirtyRegionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCursorEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsCursorEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinUpdateInterval@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJI@Z
    virtual long put_MinUpdateInterval(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SDRBoost@Partner@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_SDRBoost(float);
};
} // namespace Microsoft::UI::Composition::Internal::CaptureRenderTarget
