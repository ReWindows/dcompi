#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 27 member(s).
namespace Microsoft::UI::Composition {
class CompositionPropertyAnimator {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToControllerIfSupported@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAVAnimationController@234@@Z
    virtual long AddToControllerIfSupported(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableValueUpdates@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJ_N@Z
    virtual long EnableValueUpdates(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long GetValue(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUMatrix3x2@Numerics@Foundation@Windows@@@Z
    virtual long GetValue(::Windows::Foundation::Numerics::Matrix3x2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUMatrix4x4@Numerics@Foundation@Windows@@@Z
    virtual long GetValue(::Windows::Foundation::Numerics::Matrix4x4*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long GetValue(::Windows::Foundation::Numerics::Vector2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long GetValue(::Windows::Foundation::Numerics::Vector3*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAUVector4@Numerics@Foundation@Windows@@@Z
    virtual long GetValue(::Windows::Foundation::Numerics::Vector4*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAU_D3DCOLORVALUE@@@Z
    virtual long GetValue(_D3DCOLORVALUE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEA_N@Z
    virtual long GetValue(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_PersistentCache@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJIPEBEI@Z
    virtual long Message_PersistentCache(unsigned int, unsigned char const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTarget@CompositionPropertyAnimator@Composition@UI@Microsoft@@QEAAXXZ
    void RemoveTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwningTrigger@CompositionPropertyAnimator@Composition@UI@Microsoft@@QEAAXPEAVCompositionAnimationTriggerPartner@Internal@234@@Z
    void SetOwningTrigger(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@CompositionPropertyAnimator@Composition@UI@Microsoft@@QEAAJPEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z
    long SetTarget(ExpressionObjectPropertyInfo *, int, SubchannelMaskInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetMask@CompositionPropertyAnimator@Composition@UI@Microsoft@@QEAAXPEAVSubchannelMaskInfo@@@Z
    void SetTargetMask(SubchannelMaskInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetController@CompositionPropertyAnimator@Composition@UI@Microsoft@@UEAAJPEAPEAVAnimationController@234@@Z
    virtual long TryGetController(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Microsoft@@MEAAXXZ
    virtual void EnsureRegisteredInBatch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionPropertyAnimator@Composition@UI@Microsoft@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompleted@CompositionPropertyAnimator@Composition@UI@Microsoft@@MEAAXXZ
    virtual void NotifyCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionPropertyAnimator@Composition@UI@Microsoft@@IEAAJPEAVCompositor@234@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationValueSynchronizationBehavior@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionPropertyAnimator@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationEnded@CompositionPropertyAnimator@Composition@UI@Microsoft@@AEAAJW4AnimationEventType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z
    long AnimationEnded(int, int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@CompositionPropertyAnimator@Composition@UI@Microsoft@@AEAAXXZ
    void ReleaseResources();
};
} // namespace Microsoft::UI::Composition
