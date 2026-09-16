#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 11 member(s).
namespace Microsoft::UI::Composition {
class CompositionGradientBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionGradientBrush@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@CompositionGradientBrush@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionGradientBrush@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@CompositionGradientBrush@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@I@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@CompositionGradientBrush@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionGradientBrush@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionGradientBrush();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionGradientBrush@Composition@UI@Microsoft@@IEAA@XZ
    CompositionGradientBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Microsoft@@AEAAJXZ
    long EnsureComponentTransform();
};
} // namespace Microsoft::UI::Composition
