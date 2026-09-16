#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 15 member(s).
namespace Microsoft::UI::Composition {
class CompositionPointerEventRouter {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPointerEventRouter@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Microsoft@@QEAAJI_K@Z
    long CaptureManipulationInCompositor(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Microsoft@@QEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@234@@Z
    long CreateAndAttachManipulationTarget(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Microsoft@@QEAAJH@Z
    long DisableOutputPrediction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionPointerEventRouter@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionPointerEventRouter@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPointerEventRouter@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPointerEventRouter@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPenSettings@CompositionPointerEventRouter@Composition@UI@Microsoft@@QEAAJW4PenGestures@Private@234@II@Z
    long SetPenSettings(int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Microsoft@@QEAAJW4TouchGestures@Private@234@II@Z
    long SetTouchSettings(int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionPointerEventRouter@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionPointerEventRouter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Microsoft@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z
    long ProcessChange(InteractionConfigurationInternal const &, int const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Microsoft@@AEAAJXZ
    long EnsureNotReadOnly();
};
} // namespace Microsoft::UI::Composition
