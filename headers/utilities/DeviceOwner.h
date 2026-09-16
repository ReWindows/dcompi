#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition {
class DeviceOwner {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeviceOwner@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertSessionLockHeld@DeviceOwner@Composition@UI@Microsoft@@UEAAXXZ
    virtual void AssertSessionLockHeld();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSessionLock@DeviceOwner@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool EnsureSessionLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveSessionLock@DeviceOwner@Composition@UI@Microsoft@@UEAAXXZ
    virtual void LeaveSessionLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceChanged@DeviceOwner@Composition@UI@Microsoft@@UEAAXXZ
    virtual void OnDeviceChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeviceOwner@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeviceOwner@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceOwner@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~DeviceOwner();
};
} // namespace Microsoft::UI::Composition
