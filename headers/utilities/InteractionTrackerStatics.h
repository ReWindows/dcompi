#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 29 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTrackerStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositor@345@PEAPEAUIInteractionTracker@2345@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithOwner@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositor@345@PEAUIInteractionTrackerOwner@2345@PEAPEAUIInteractionTracker@2345@@Z
    virtual long CreateWithOwner(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAUIInteractionTracker@2345@0PEAW4InteractionBindingAxisModes@2345@@Z
    virtual long GetBindingMode(WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Microsoft@@UEAAJPEAUIInteractionTracker@2345@0W4InteractionBindingAxisModes@2345@@Z
    virtual long SetBindingMode(WindissectOpaque *, WindissectOpaque *, int);
};
} // namespace Microsoft::UI::Composition::Interactions
