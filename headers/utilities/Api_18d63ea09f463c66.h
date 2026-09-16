#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition::CompositionShape {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterPoint@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_CenterPoint(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Offset(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Scale(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransformMatrix@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJPEAUMatrix3x2@Numerics@Foundation@Windows@@@Z
    virtual long get_TransformMatrix(::Windows::Foundation::Numerics::Matrix3x2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterPoint@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_CenterPoint(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Offset(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scale@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Scale(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransformMatrix@Api@CompositionShape@Composition@UI@Microsoft@@UEAAJUMatrix3x2@Numerics@Foundation@Windows@@@Z
    virtual long put_TransformMatrix(::Windows::Foundation::Numerics::Matrix3x2);
};
} // namespace Microsoft::UI::Composition::CompositionShape
