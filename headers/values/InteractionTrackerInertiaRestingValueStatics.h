#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 20 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTrackerInertiaRestingValueStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositor@345@PEAPEAUIInteractionTrackerInertiaRestingValue@2345@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerInertiaRestingValueStatics@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition::Interactions
