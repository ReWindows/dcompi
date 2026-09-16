#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 21 member(s).
namespace Microsoft::UI::Composition {
class CompositionProjectedShadowCasterCollectionStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxRespectedCasters@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long get_MaxRespectedCasters(int *);
};
} // namespace Microsoft::UI::Composition
