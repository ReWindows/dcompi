#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition {
class ComponentTransform3D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ComponentTransform3D@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplicitAnimations@ComponentTransform3D@Composition@UI@Microsoft@@UEBAPEAVImplicitAnimationCollection@234@XZ
    virtual WindissectOpaque * GetImplicitAnimations() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChange@ComponentTransform3D@Composition@UI@Microsoft@@UEAAJPEBUAnimationValueData@234@PEA_N@Z
    virtual long HandlePropertyChange(WindissectOpaque const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@ComponentTransform3D@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ComponentTransform3D@Composition@UI@Microsoft@@QEAAJPEAVCompositionObject@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyChangedListener@ComponentTransform3D@Composition@UI@Microsoft@@QEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUIExpCompositionPropertyChangedListener@Experimental@234@PEAVProxyObject@234@@Z
    long SetPropertyChangedListener(int, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@ComponentTransform3D@Composition@UI@Microsoft@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@ComponentTransform3D@Composition@UI@Microsoft@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@ComponentTransform3D@Composition@UI@Microsoft@@QEAAJAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z
    long SetTransformMatrix(::Windows::Foundation::Numerics::Matrix4x4const &);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@ComponentTransform3D@Composition@UI@Microsoft@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@ComponentTransform3D@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Microsoft::UI::Composition
