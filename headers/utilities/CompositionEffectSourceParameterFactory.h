#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 20 member(s).
namespace Microsoft::UI::Composition {
class CompositionEffectSourceParameterFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionEffectSourceParameter@234@@Z
    virtual long Create(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionEffectSourceParameterFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
