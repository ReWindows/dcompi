#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition {
class CCapabilitiesEventListener {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangedEventInternal@CCapabilitiesEventListener@Composition@UI@Microsoft@@CAQEAXXZ
    static void * const GetChangedEventInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitCallback@CCapabilitiesEventListener@Composition@UI@Microsoft@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void WaitCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
};
} // namespace Microsoft::UI::Composition
