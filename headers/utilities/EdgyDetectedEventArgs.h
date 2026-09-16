#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 28 member(s).
namespace Microsoft::UI::Composition::Interactions::Internal {
class EdgyDetectedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEBUEdgyDetectedParams@@@Z
    virtual long RuntimeClassInitialize(HSTRING__*, EdgyDetectedParams const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DetectedPoint@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_DetectedPoint(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DetectedTime@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEA_K@Z
    virtual long get_DetectedTime(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EdgeId@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EdgeId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputRouting@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4EdgyInputRouting@23456@@Z
    virtual long get_InputRouting(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerId@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long get_PointerId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPoint@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_StartPoint(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartTime@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Microsoft@@UEAAJPEA_K@Z
    virtual long get_StartTime(uint64_t *);
};
} // namespace Microsoft::UI::Composition::Interactions::Internal
