#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition {
class CompositionCapabilitiesRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Microsoft@@SAXXZ
    static void OnChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Microsoft@@SAJPEAUIDispatcherQueue@Dispatching@34@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z
    static long RegisterForEvents(::Microsoft::UI::Dispatching::IDispatcherQueue *, WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Microsoft@@SAXPEAUIDispatcherQueue@Dispatching@34@UEventRegistrationToken@@@Z
    static void UnregisterForEvents(::Microsoft::UI::Dispatching::IDispatcherQueue *, EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition
