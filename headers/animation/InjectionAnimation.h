#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class InjectionAnimation {
public:
    class Test;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InjectionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendInjectionFrame@InjectionAnimation@Composition@UI@Microsoft@@QEAAJPEAUInjectManipulationArgs@@I@Z
    long AppendInjectionFrame(InjectManipulationArgs *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InjectionAnimation@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InjectionAnimation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InjectionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
