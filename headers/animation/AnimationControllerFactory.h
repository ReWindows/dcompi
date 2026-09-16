#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 28 member(s).
namespace Microsoft::UI::Composition {
class AnimationControllerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AnimationControllerFactory@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@AnimationControllerFactory@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxPlaybackRate@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MaxPlaybackRate(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinPlaybackRate@AnimationControllerFactory@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MinPlaybackRate(float *);
};
} // namespace Microsoft::UI::Composition
