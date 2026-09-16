#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 18 member(s).
namespace Microsoft::UI::Composition::Interactions {
class VisualInteractionSource {
public:
    class Api;
    class AxisConfiguration;
    class Interop;
    class Test;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureSourceModifiers@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Microsoft@@$0?0@gsl@@W4SourceModifierIndex@@@Z
    long ConfigureSourceModifiers(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAAJPEAVVisual@345@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@2345@@Z
    void SetChainingModeForAxis(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAAJW4ScrollAxis@@_N@Z
    long SetEnabledForAxis(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAAXW4ScrollAxis@@_N@Z
    void SetInertiaEnabledForAxis(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRailsEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAAXW4ScrollAxis@@_N@Z
    void SetRailsEnabledForAxis(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMousewheelInteractionConfiguration@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAAJXZ
    long UpdateMousewheelInteractionConfiguration();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualInteractionSource@Interactions@Composition@UI@Microsoft@@QEAA@XZ
    VisualInteractionSource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~VisualInteractionSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Microsoft@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z
    long CreateConditionalExpressionAnimator(WindissectOpaque, int, WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::Interactions
