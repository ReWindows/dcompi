#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 22 member(s).
namespace Microsoft::UI::Composition {
class KeyFrameAnimation {
public:
    class Api;
    class Internal;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@KeyFrameAnimation@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertColorKeyFrame@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMAEAU_D3DCOLORVALUE@@PEAVCompositionEasingFunction@234@@Z
    long InsertColorKeyFrame(float, _D3DCOLORVALUE &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMPEAUHSTRING__@@PEAVCompositionEasingFunction@234@@Z
    long InsertExpressionKeyFrame(float, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertQuaternionKeyFrame@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMAEAUQuaternion@Numerics@Foundation@Windows@@PEAVCompositionEasingFunction@234@@Z
    long InsertQuaternionKeyFrame(float, ::Windows::Foundation::Numerics::Quaternion &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertScalarKeyFrame@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMMPEAVCompositionEasingFunction@234@@Z
    long InsertScalarKeyFrame(float, float, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector2KeyFrame@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMAEAUVector2@Numerics@Foundation@Windows@@PEAVCompositionEasingFunction@234@@Z
    long InsertVector2KeyFrame(float, ::Windows::Foundation::Numerics::Vector2&, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMAEAUVector3@Numerics@Foundation@Windows@@PEAVCompositionEasingFunction@234@@Z
    long InsertVector3KeyFrame(float, ::Windows::Foundation::Numerics::Vector3&, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMAEAUVector4@Numerics@Foundation@Windows@@PEAVCompositionEasingFunction@234@@Z
    long InsertVector4KeyFrame(float, ::Windows::Foundation::Numerics::Vector4&, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyFrameAnimation@Composition@UI@Microsoft@@QEAA@XZ
    KeyFrameAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalTypeSpecificData@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z
    virtual long MarshalTypeSpecificData(unsigned int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KeyFrameAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomTimeline@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJPEAUIDCompositionAnimationInstancePartner@@@Z
    long SetCustomTimeline(IDCompositionAnimationInstancePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIterationCount2@KeyFrameAnimation@Composition@UI@Microsoft@@QEAAJM@Z
    long SetIterationCount2(float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Microsoft@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z
    long InsertKeyFrameHelper(float, KeyframeValueDefinition &, WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyframeData@KeyFrameAnimation@Composition@UI@Microsoft@@AEAAJPEAUKeyframeList@@MAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z
    long SetKeyframeData(KeyframeList *, float, KeyframeValueDefinition &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Microsoft@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateKeyAndOutputType(float, int);
};
} // namespace Microsoft::UI::Composition
