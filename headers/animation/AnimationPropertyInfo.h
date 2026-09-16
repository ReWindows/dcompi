#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class AnimationPropertyInfo {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationPropertyInfo@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPropertyInfo@AnimationPropertyInfo@Composition@UI@Microsoft@@QEAAXXZ
    void ClearPropertyInfo();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationPropertyInfo@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationPropertyInfo@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyName@AnimationPropertyInfo@Composition@UI@Microsoft@@QEAAXPEAUHSTRING__@@@Z
    void SetPropertyName(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationPropertyInfo@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~AnimationPropertyInfo();
};
} // namespace Microsoft::UI::Composition
