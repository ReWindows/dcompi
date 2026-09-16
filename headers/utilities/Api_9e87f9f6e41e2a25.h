#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::CompositionProjectedShadow {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlurRadiusMultiplier@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_BlurRadiusMultiplier(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Casters@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadowCasterCollection@345@@Z
    virtual long get_Casters(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightSource@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionLight@345@@Z
    virtual long get_LightSource(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MaxBlurRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MinBlurRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Receivers@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionProjectedShadowReceiverUnorderedCollection@345@@Z
    virtual long get_Receivers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BlurRadiusMultiplier@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_BlurRadiusMultiplier(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LightSource@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAUICompositionLight@345@@Z
    virtual long put_LightSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MaxBlurRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MinBlurRadius(float);
};
} // namespace Microsoft::UI::Composition::CompositionProjectedShadow
