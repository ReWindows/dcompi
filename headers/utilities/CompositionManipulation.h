#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 14 member(s).
namespace Microsoft::UI::Composition {
class CompositionManipulation {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionManipulation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgySetEdgeId@CompositionManipulation@Composition@UI@Microsoft@@QEAAXPEAUHSTRING__@@@Z
    void EdgySetEdgeId(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionManipulation@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionManipulation@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionManipulation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionManipulation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChainingModeForAxis@CompositionManipulation@Composition@UI@Microsoft@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@Interactions@234@@Z
    void SetChainingModeForAxis(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Microsoft@@QEAAXW4ScrollAxis@@_N@Z
    void SetInertiaEnabledForAxis(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationCaptureSettings@CompositionManipulation@Composition@UI@Microsoft@@QEAAXW4SystemManipulationMode@@@Z
    void SetManipulationCaptureSettings(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceModifier@CompositionManipulation@Composition@UI@Microsoft@@QEAAXW4SourceModifierIndex@@PEAVConditionalExpressionAnimator@234@@Z
    void SetSourceModifier(int, WindissectOpaque *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionManipulation@Composition@UI@Microsoft@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionManipulation@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Microsoft::UI::Composition
