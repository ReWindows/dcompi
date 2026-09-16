#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 18 member(s).
namespace Microsoft::UI::Composition::PointLight {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAUColor@4Windows@@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConstantAttenuation@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_ConstantAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoordinateSpace@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_CoordinateSpace(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Intensity@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Intensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinearAttenuation@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_LinearAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxAttenuationCutoff@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MaxAttenuationCutoff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinAttenuationCutoff@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MinAttenuationCutoff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Offset(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuadraticAttenuation@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_QuadraticAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@PointLight@Composition@UI@Microsoft@@UEAAJUColor@4Windows@@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ConstantAttenuation@Api@PointLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_ConstantAttenuation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CoordinateSpace@Api@PointLight@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long put_CoordinateSpace(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Intensity@Api@PointLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Intensity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LinearAttenuation@Api@PointLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_LinearAttenuation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxAttenuationCutoff@Api@PointLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MaxAttenuationCutoff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinAttenuationCutoff@Api@PointLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MinAttenuationCutoff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@PointLight@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_Offset(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QuadraticAttenuation@Api@PointLight@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_QuadraticAttenuation(float);
};
} // namespace Microsoft::UI::Composition::PointLight
