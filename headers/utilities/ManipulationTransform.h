#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class ManipulationTransform {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ManipulationTransform@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@ManipulationTransform@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ManipulationTransform@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ManipulationTransform@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ManipulationTransform@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAUIDCompositionTransform@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IDCompositionTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ManipulationTransform@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
};
} // namespace Microsoft::UI::Composition
