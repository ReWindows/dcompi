#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 26 member(s).
namespace Microsoft::UI::Composition::Internal::SharedWriteCaptureController {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorPoint@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_AnchorPoint(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterPoint@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_CenterPoint(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentSize@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_ContentSize(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSDRBoost@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_DefaultSDRBoost(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCapturing@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsCapturing(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConstrainedBySize@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsConstrainedBySize(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Offset(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReferenceVisual@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long get_ReferenceVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Root@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long get_Root(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleInDegrees@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RotationAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Scale(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransformMatrix@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUMatrix4x4@Numerics@Foundation@Windows@@@Z
    virtual long get_TransformMatrix(::Windows::Foundation::Numerics::Matrix4x4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AnchorPoint@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_AnchorPoint(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterPoint@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_CenterPoint(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentSize@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@@Z
    virtual long put_ContentSize(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultSDRBoost@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_DefaultSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCapturing@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsCapturing(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsConstrainedBySize@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsConstrainedBySize(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_Offset(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReferenceVisual@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUIVisual@456@@Z
    virtual long put_ReferenceVisual(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Root@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJPEAUIVisual@456@@Z
    virtual long put_Root(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngleInDegrees@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RotationAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scale@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_Scale(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransformMatrix@Partner@SharedWriteCaptureController@Internal@Composition@UI@Microsoft@@UEAAJUMatrix4x4@Numerics@Foundation@Windows@@@Z
    virtual long put_TransformMatrix(::Windows::Foundation::Numerics::Matrix4x4);
};
} // namespace Microsoft::UI::Composition::Internal::SharedWriteCaptureController
