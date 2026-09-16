#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 14 member(s).
namespace Microsoft::UI::Composition {
class CompositionCapabilitiesFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionCapabilitiesFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
