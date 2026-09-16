#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition::Internal {
class CompositionAnimationTriggerPartner {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@PEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Microsoft@@$0?0@gsl@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionAnimationTriggerPartner();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@AEAAJXZ
    long GenerateAnimators();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTriggerFiredEventHandler@CompositionAnimationTriggerPartner@Internal@Composition@UI@Microsoft@@AEAAJUEventRegistrationToken@@@Z
    long RemoveTriggerFiredEventHandler(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::Internal
