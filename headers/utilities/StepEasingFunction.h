#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition {
class StepEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StepEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@StepEasingFunction@Composition@UI@Microsoft@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StepEasingFunction@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StepEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
