#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 29 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTrackerValuesChangedArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Position(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestId@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_RequestId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Scale(float *);
};
} // namespace Microsoft::UI::Composition::Interactions
