#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class SineEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SineEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@SineEasingFunction@Composition@UI@Microsoft@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SineEasingFunction@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SineEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SineEasingFunction@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
};
} // namespace Microsoft::UI::Composition
