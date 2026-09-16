#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 30 member(s).
namespace Microsoft::UI::Composition {
class CompositionAnimation {
public:
    class AnimationObjectInfoCache;
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllParameters@CompositionAnimation@Composition@UI@Microsoft@@QEAAJXZ
    long ClearAllParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearParameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@@Z
    long ClearParameter(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionAnimation@Composition@UI@Microsoft@@QEAA@XZ
    CompositionAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionAnimation@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionAnimation@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialValueExpressions@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAPEAVInitialValueExpressionCollection@234@@Z
    long GetInitialValueExpressions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@CompositionAnimation@Composition@UI@Microsoft@@QEAAXPEAPEAUHSTRING__@@@Z
    void GetTarget(HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorParameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@U_D3DCOLORVALUE@@@Z
    long SetColorParameter(HSTRING__*, _D3DCOLORVALUE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDebuggingInformation@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAVExpressionObjectPropertyInfo@@PEAVCompositionPropertyAnimator@234@@Z
    long SetDebuggingInformation(ExpressionObjectPropertyInfo *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@Windows@@@Z
    long SetQuaternionParameter(HSTRING__*, ::Windows::Foundation::Numerics::Quaternion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceParameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z
    long SetReferenceParameter(HSTRING__*, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarParameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@M@Z
    long SetScalarParameter(HSTRING__*, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector2Parameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@Windows@@@Z
    long SetVector2Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Vector2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3Parameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@Windows@@@Z
    long SetVector3Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Vector3const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector4Parameter@CompositionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@AEBUVector4@Numerics@Foundation@Windows@@@Z
    long SetVector4Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Vector4const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetParameterType@CompositionAnimation@Composition@UI@Microsoft@@QEAA_NPEAUHSTRING__@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    bool TryGetParameterType(HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetReferenceParameter@CompositionAnimation@Composition@UI@Microsoft@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAPEAVCompositionObject@234@PEAW4AnimationReferenceType@@@Z
    int TryGetReferenceParameter(HSTRING__*, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPopulateAnimationObjectParametersInfo@CompositionAnimation@Composition@UI@Microsoft@@QEAAX_N@Z
    void TryPopulateAnimationObjectParametersInfo(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionAnimation@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCache@CompositionAnimation@Composition@UI@Microsoft@@IEAAXXZ
    void InvalidateCache();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementForKey@CompositionAnimation@Composition@UI@Microsoft@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z
    void GetElementForKey(HSTRING__*, bool, ParameterEntry * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Microsoft@@AEAAXPEAVParameterEntry@@_N@Z
    void OnParameterEntryChange(ParameterEntry *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Microsoft@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z
    int TryGetParameterEntry(HSTRING__*, int, ParameterEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateKey@CompositionAnimation@Composition@UI@Microsoft@@AEAAJPEAUHSTRING__@@@Z
    long ValidateKey(HSTRING__*);
};
} // namespace Microsoft::UI::Composition
