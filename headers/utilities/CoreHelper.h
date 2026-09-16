#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 2 member(s).
namespace Microsoft::UI::Composition {
class CoreHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCoreWindow@CoreHelper@Composition@UI@Microsoft@@SAJPEAPEAUICoreWindow@Core@3Windows@@@Z
    static long GetCurrentCoreWindow(::Windows::UI::Core::ICoreWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Microsoft@@SAJPEAPEAUIDispatcherQueue@Dispatching@34@@Z
    static long GetCurrentDispatcherQueue(::Microsoft::UI::Dispatching::IDispatcherQueue * *);
};
} // namespace Microsoft::UI::Composition
