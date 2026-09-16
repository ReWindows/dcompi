#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::CompositionGraphicsDevice {
class Interop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingDevice@Interop@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetRenderingDevice(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderingDevice@Interop@CompositionGraphicsDevice@Composition@UI@Microsoft@@UEAAJPEAUIUnknown@@@Z
    virtual long SetRenderingDevice(IUnknown *);
};
} // namespace Microsoft::UI::Composition::CompositionGraphicsDevice
