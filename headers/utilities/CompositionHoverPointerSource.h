#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition {
class CompositionHoverPointerSource {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionHoverPointerSource@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionHoverPointerSource@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionHoverPointerSource@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionHoverPointerSource@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionHoverPointerSource@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVVisual@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
