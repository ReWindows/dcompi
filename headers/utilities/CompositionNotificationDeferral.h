#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 16 member(s).
namespace Microsoft::UI::Composition {
class CompositionNotificationDeferral {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionNotificationDeferral@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CompositionNotificationDeferral@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionNotificationDeferral@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionNotificationDeferral@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionNotificationDeferral@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionNotificationDeferral@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionNotificationDeferral@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionNotificationDeferral@Composition@UI@Microsoft@@EEAA@XZ
    virtual ~CompositionNotificationDeferral();
};
} // namespace Microsoft::UI::Composition
