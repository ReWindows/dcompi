#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition::Internal::CaptureRenderTarget {
class Interop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdapterLuidAndBuffers@Interop@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJAEBU_LUID@@IPEAPEAX@Z
    virtual long SetAdapterLuidAndBuffers(_LUID const &, unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlipManagerWithHandle@Interop@CaptureRenderTarget@Internal@Composition@UI@Microsoft@@UEAAJPEAX@Z
    virtual long SetFlipManagerWithHandle(void *);
};
} // namespace Microsoft::UI::Composition::Internal::CaptureRenderTarget
