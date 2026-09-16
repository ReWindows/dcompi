#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::CompositorCommon {
class Native {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenReadCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUIReadCaptureController@Internal@345@@Z
    virtual long OpenReadCaptureControllerFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenWriteCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUIWriteCaptureController@Internal@345@@Z
    virtual long OpenWriteCaptureControllerFromHandle(void *, WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::CompositorCommon
