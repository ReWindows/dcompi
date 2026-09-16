#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class CompositionGeometricClip {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionGeometricClip@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionGeometricClip@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionGeometricClip@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeometry@CompositionGeometricClip@Composition@UI@Microsoft@@QEAAXPEAVCompositionGeometry@234@@Z
    void SetGeometry(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionGeometricClip@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionGeometricClip();
};
} // namespace Microsoft::UI::Composition
