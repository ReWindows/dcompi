#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class CubicBezierEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CubicBezierEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@CubicBezierEasingFunction@Composition@UI@Microsoft@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CubicBezierEasingFunction@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CubicBezierEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CubicBezierEasingFunction@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@MMMM@Z
    long RuntimeClassInitialize(WindissectOpaque *, float, float, float, float);
};
} // namespace Microsoft::UI::Composition
