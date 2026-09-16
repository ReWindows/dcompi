#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition::Scenes::SceneModelTransform {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJPEAUQuaternion@Numerics@Foundation@Windows@@@Z
    virtual long get_Orientation(::Windows::Foundation::Numerics::Quaternion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleInDegrees@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAxis@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_RotationAxis(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Scale(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Translation@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Translation(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Orientation@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJUQuaternion@Numerics@Foundation@Windows@@@Z
    virtual long put_Orientation(::Windows::Foundation::Numerics::Quaternion);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngleInDegrees@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAxis@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_RotationAxis(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scale@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_Scale(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Translation@Api@SceneModelTransform@Scenes@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_Translation(::Windows::Foundation::Numerics::Vector3);
};
} // namespace Microsoft::UI::Composition::Scenes::SceneModelTransform
