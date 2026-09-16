#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 48 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTrackerInertiaStateEnteredArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@QEAA@XZ
    InteractionTrackerInertiaStateEnteredArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFromBinding@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsFromBinding(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertiaFromImpulse@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsInertiaFromImpulse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModifiedRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_ModifiedRestingPosition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModifiedRestingScale@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long get_ModifiedRestingScale(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_NaturalRestingPosition(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingScale@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_NaturalRestingScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionVelocityInPixelsPerSecond@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_PositionVelocityInPixelsPerSecond(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestId@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_RequestId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleVelocityInPercentPerSecond@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_ScaleVelocityInPercentPerSecond(float *);
};
} // namespace Microsoft::UI::Composition::Interactions
