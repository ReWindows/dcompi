#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 17 member(s).
namespace Microsoft::UI::Composition {
class ComponentTransform2D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ComponentTransform2D@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Microsoft@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    static bool GetAnimatablePropertyInfo(HSTRING__*, int *, unsigned int *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplicitAnimations@ComponentTransform2D@Composition@UI@Microsoft@@UEBAPEAVImplicitAnimationCollection@234@XZ
    virtual WindissectOpaque * GetImplicitAnimations() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChange@ComponentTransform2D@Composition@UI@Microsoft@@UEAAJPEBUAnimationValueData@234@PEA_N@Z
    virtual long HandlePropertyChange(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@ComponentTransform2D@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ComponentTransform2D@Composition@UI@Microsoft@@QEAAJPEAVCompositionObject@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@ComponentTransform2D@Composition@UI@Microsoft@@QEAAJAEBUVector2@Numerics@Foundation@Windows@@@Z
    long SetCenterPoint(::Windows::Foundation::Numerics::Vector2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@ComponentTransform2D@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@ComponentTransform2D@Composition@UI@Microsoft@@QEAAJAEBUVector2@Numerics@Foundation@Windows@@@Z
    long SetOffset(::Windows::Foundation::Numerics::Vector2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@ComponentTransform2D@Composition@UI@Microsoft@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@ComponentTransform2D@Composition@UI@Microsoft@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@ComponentTransform2D@Composition@UI@Microsoft@@QEAAJAEBUVector2@Numerics@Foundation@Windows@@@Z
    long SetScale(::Windows::Foundation::Numerics::Vector2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@ComponentTransform2D@Composition@UI@Microsoft@@QEAAJAEBUMatrix3x2@Numerics@Foundation@Windows@@@Z
    long SetTransformMatrix(::Windows::Foundation::Numerics::Matrix3x2const &);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@ComponentTransform2D@Composition@UI@Microsoft@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@ComponentTransform2D@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Microsoft::UI::Composition
