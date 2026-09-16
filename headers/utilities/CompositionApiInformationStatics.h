#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 20 member(s).
namespace Microsoft::UI::Composition {
class CompositionApiInformationStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionApiInformationStatics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionApiInformationStatics@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionApiInformationStatics@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionApiInformationStatics@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionApiInformationStatics@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CompositionApiInformationStatics@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionApiInformationStatics@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionApiInformationStatics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApiVersion@CompositionApiInformationStatics@Composition@UI@Microsoft@@UEAAJPEA_K@Z
    virtual long get_ApiVersion(uint64_t *);
};
} // namespace Microsoft::UI::Composition
