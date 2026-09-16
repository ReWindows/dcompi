#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 43 member(s).
namespace Microsoft::UI::Composition {
class CompositionPropertySet {
public:
    class Api;
    class Experimental;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPropertySet@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionPropertySet@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionPropertySet@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CompositionPropertySet@Composition@UI@Microsoft@@UEAAPEAV1234@_N@Z
    virtual WindissectOpaque * GetProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMatrix3x2@CompositionPropertySet@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@PEBUMatrix3x2@Numerics@Foundation@Windows@@_N@Z
    long InsertMatrix3x2(HSTRING__*, ::Windows::Foundation::Numerics::Matrix3x2const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMatrix4x4@CompositionPropertySet@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@PEBUMatrix4x4@Numerics@Foundation@Windows@@_N@Z
    long InsertMatrix4x4(HSTRING__*, ::Windows::Foundation::Numerics::Matrix4x4const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPropertySet@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMatrix3x2@CompositionPropertySet@Composition@UI@Microsoft@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix3x2@Numerics@Foundation@Windows@@@Z
    int TryGetMatrix3x2(HSTRING__*, ::Windows::Foundation::Numerics::Matrix3x2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMatrix4x4@CompositionPropertySet@Composition@UI@Microsoft@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@Windows@@@Z
    int TryGetMatrix4x4(HSTRING__*, ::Windows::Foundation::Numerics::Matrix4x4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVector3@CompositionPropertySet@Composition@UI@Microsoft@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUVector3@Numerics@Foundation@Windows@@@Z
    int TryGetVector3(HSTRING__*, ::Windows::Foundation::Numerics::Vector3*);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@CompositionPropertySet@Composition@UI@Microsoft@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionPropertySet@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Microsoft@@AEAA_NPEAUHSTRING__@@PEAI@Z
    bool GetPropertyIdFromName(HSTRING__*, unsigned int *);
};
} // namespace Microsoft::UI::Composition
