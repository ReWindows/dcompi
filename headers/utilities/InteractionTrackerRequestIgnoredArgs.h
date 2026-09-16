#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 27 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTrackerRequestIgnoredArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestId@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_RequestId(int *);
};
} // namespace Microsoft::UI::Composition::Interactions
