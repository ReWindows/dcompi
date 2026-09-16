#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 16 member(s).
namespace Microsoft::UI::Composition {
class CompositionSpriteShape {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSpriteShape@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSpriteShape@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionSpriteShape@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrokeDashArray@CompositionSpriteShape@Composition@UI@Microsoft@@QEAAJPEAPEAVCompositionStrokeDashArray@234@@Z
    long GetStrokeDashArray(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@CompositionSpriteShape@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSpriteShape@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@CompositionSpriteShape@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSpriteShape@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionSpriteShape@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGeometry@CompositionSpriteShape@Composition@UI@Microsoft@@QEAAXPEAVCompositionGeometry@234@@Z
    void SetGeometry(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@CompositionSpriteShape@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionSpriteShape@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionSpriteShape();
};
} // namespace Microsoft::UI::Composition
