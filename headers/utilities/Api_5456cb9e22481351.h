#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 14 member(s).
namespace Microsoft::UI::Composition::CompositionClip {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorPoint@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_AnchorPoint(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterPoint@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_CenterPoint(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Offset(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleInDegrees@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_Scale(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransformMatrix@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJPEAUMatrix3x2@Numerics@Foundation@Windows@@@Z
    virtual long get_TransformMatrix(::Windows::Foundation::Numerics::Matrix3x2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AnchorPoint@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_AnchorPoint(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterPoint@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_CenterPoint(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Offset(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngleInDegrees@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scale@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_Scale(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransformMatrix@Api@CompositionClip@Composition@UI@Microsoft@@UEAAJUMatrix3x2@Numerics@Foundation@Windows@@@Z
    virtual long put_TransformMatrix(::Windows::Foundation::Numerics::Matrix3x2);
};
} // namespace Microsoft::UI::Composition::CompositionClip
