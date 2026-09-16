#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 15 member(s).
namespace Microsoft::UI::Composition::Internal {
class CaptureControllerBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CaptureControllerBase@Internal@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJXZ
    long EnsureComponentTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@_NPEAX1@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, void *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorPoint@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJAEBUVector2@Numerics@Foundation@Windows@@@Z
    long SetAnchorPoint(::Windows::Foundation::Numerics::Vector2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJAEBUVector3@Numerics@Foundation@Windows@@@Z
    long SetCenterPoint(::Windows::Foundation::Numerics::Vector3const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentSize@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAXAEBUVector2@Numerics@Foundation@Windows@@@Z
    void SetContentSize(::Windows::Foundation::Numerics::Vector2const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultSDRBoost@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAXM@Z
    void SetDefaultSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJAEBUVector3@Numerics@Foundation@Windows@@@Z
    long SetOffset(::Windows::Foundation::Numerics::Vector3const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceVisual@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAXPEAVVisual@345@@Z
    void SetReferenceVisual(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAXPEAVVisual@345@@Z
    void SetRoot(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJAEBUVector3@Numerics@Foundation@Windows@@@Z
    long SetScale(::Windows::Foundation::Numerics::Vector3const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Microsoft@@QEAAJAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z
    long SetTransformMatrix(::Windows::Foundation::Numerics::Matrix4x4const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CaptureControllerBase@Internal@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CaptureControllerBase();
};
} // namespace Microsoft::UI::Composition::Internal
