#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition {
class SpotLight {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpotLight@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SpotLight@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@SpotLight@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@SpotLight@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpotLight@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpotLight@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpotLight@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoordinateSpace@SpotLight@Composition@UI@Microsoft@@QEAAXPEAVVisual@234@@Z
    void SetCoordinateSpace(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@SpotLight@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpotLight@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~SpotLight();
};
} // namespace Microsoft::UI::Composition
