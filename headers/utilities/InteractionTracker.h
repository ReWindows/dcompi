#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 31 member(s).
namespace Microsoft::UI::Composition::Interactions {
class InteractionTracker {
public:
    class Api;
    class Test;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddManipulation@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJPEAVCompositionManipulation@345@PEAVCompositionPointerEventRouter@345@@Z
    long AddManipulation(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJV?$span@PEAUIInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Microsoft@@$0?0@gsl@@@Z
    long ConfigureVector2PositionInertiaModifiers(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyManipulationList@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAXXZ
    void EmptyManipulationList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAA@XZ
    InteractionTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_InertiaBegin_Callback@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJPEBUVector3@Numerics@Foundation@Windows@@M0M0_NM11H1@Z
    long Message_InertiaBegin_Callback(::Windows::Foundation::Numerics::Vector3const *, float, ::Windows::Foundation::Numerics::Vector3const *, float, ::Windows::Foundation::Numerics::Vector3const *, bool, float, bool, bool, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAllDependentProperties@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAXIPEAIPEAPEAI@Z
    virtual void OnGetAllDependentProperties(unsigned int, unsigned int *, unsigned int * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJPEAVCompositionManipulation@345@@Z
    long RemoveManipulation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@PEAUIInteractionTrackerOwner@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJAEAUVector3@Numerics@Foundation@Windows@@_N@Z
    long SetPositionInertiaDecayRate(::Windows::Foundation::Numerics::Vector3&, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJAEAUVector3@Numerics@Foundation@Windows@@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z
    long TryUpdatePosition(::Windows::Foundation::Numerics::Vector3&, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJAEAUVector3@Numerics@Foundation@Windows@@W4InteractionTrackerClampingOption@2345@PEAH@Z
    long TryUpdatePositionBy(::Windows::Foundation::Numerics::Vector3&, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAXMAEAUVector3@Numerics@Foundation@Windows@@PEAH@Z
    void TryUpdateScaleWithAdditionalVelocity(float, ::Windows::Foundation::Numerics::Vector3&, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAnimation@InteractionTracker@Interactions@Composition@UI@Microsoft@@QEAAJPEAVCompositionAnimation@345@AEAUVector3@Numerics@Foundation@Windows@@PEAH@Z
    long TryUpdateScaleWithAnimation(WindissectOpaque *, ::Windows::Foundation::Numerics::Vector3&, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~InteractionTracker();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@InteractionTracker@Interactions@Composition@UI@Microsoft@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@InteractionTracker@Interactions@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConditionalInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Microsoft@@AEAAJPEAVConditionalExpressionAnimation@345@W4InertiaModifierAxis@@AEBV?$DynArray@W4InertiaModifierType@@$0A@@@@Z
    long AddConditionalInertiaModifiers(WindissectOpaque *, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPositionIfGreaterThanThreshold@InteractionTracker@Interactions@Composition@UI@Microsoft@@AEAAXW4ScrollAxis@@MM@Z
    void AdjustPositionIfGreaterThanThreshold(int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Microsoft@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Microsoft@@$0?0@gsl@@W4ScrollAxis@@@Z
    long ConfigureCenterPointInertiaModifiers(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Microsoft@@AEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@$0?0@gsl@@W4ScrollAxis@@@Z
    long ConfigureInertiaModifiers(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Microsoft@@AEAAHXZ
    int GetNextRequestId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollValues@InteractionTracker@Interactions@Composition@UI@Microsoft@@AEAAXMMM_N0@Z
    void UpdateScrollValues(float, float, float, bool, bool);
};
} // namespace Microsoft::UI::Composition::Interactions
