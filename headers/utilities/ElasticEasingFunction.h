#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class ElasticEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ElasticEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@ElasticEasingFunction@Composition@UI@Microsoft@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ElasticEasingFunction@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ElasticEasingFunction@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ElasticEasingFunction@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@HM@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, int, float);
};
} // namespace Microsoft::UI::Composition
