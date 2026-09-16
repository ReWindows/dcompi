#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 25 member(s).
namespace Microsoft::UI::Composition {
class CompositionObject {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionObject@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectAnimation@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long DisconnectAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableImplicitAnimations@CompositionObject@Composition@UI@Microsoft@@UEAAXH@Z
    virtual void EnableImplicitAnimations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidState@CompositionObject@Composition@UI@Microsoft@@UEAAJXZ
    virtual long EnsureValidState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplicitAnimations@CompositionObject@Composition@UI@Microsoft@@UEBAPEAVImplicitAnimationCollection@234@XZ
    virtual WindissectOpaque * GetImplicitAnimations() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CompositionObject@Composition@UI@Microsoft@@UEAAPEAVCompositionPropertySet@234@_N@Z
    virtual WindissectOpaque * GetProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChange@CompositionObject@Composition@UI@Microsoft@@UEAAJPEBUAnimationValueData@234@PEA_N@Z
    virtual long HandlePropertyChange(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionObject@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAllDependentProperties@CompositionObject@Composition@UI@Microsoft@@UEAAXIPEAIPEAPEAI@Z
    virtual void OnGetAllDependentProperties(unsigned int, unsigned int *, unsigned int * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfo@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z
    virtual long PopulatePropertyInfo(HSTRING__*, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionObject@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionObject@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionObject@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComment@CompositionObject@Composition@UI@Microsoft@@UEAAXPEAUHSTRING__@@@Z
    virtual void SetComment(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionObject@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroup@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StartAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAVAnimationController@234@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long StopAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationGroup@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StopAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyAnimator@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z
    virtual long TryGetPropertyAnimator(HSTRING__*, WindissectOpaque * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionObject@Composition@UI@Microsoft@@IEAA@XZ
    CompositionObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionObject@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@CompositionObject@Composition@UI@Microsoft@@MEAAXXZ
    virtual void PostDestroy();
};
} // namespace Microsoft::UI::Composition
