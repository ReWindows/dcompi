#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition::DropShadow {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlurRadius@Api@DropShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_BlurRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@DropShadow@Composition@UI@Microsoft@@UEAAJPEAUColor@4Windows@@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mask@Api@DropShadow@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Mask(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@DropShadow@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Offset(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Opacity@Api@DropShadow@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Opacity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePolicy@Api@DropShadow@Composition@UI@Microsoft@@UEAAJPEAW4CompositionDropShadowSourcePolicy@345@@Z
    virtual long get_SourcePolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BlurRadius@Api@DropShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_BlurRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@DropShadow@Composition@UI@Microsoft@@UEAAJUColor@4Windows@@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mask@Api@DropShadow@Composition@UI@Microsoft@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Mask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@DropShadow@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_Offset(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Opacity@Api@DropShadow@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Opacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourcePolicy@Api@DropShadow@Composition@UI@Microsoft@@UEAAJW4CompositionDropShadowSourcePolicy@345@@Z
    virtual long put_SourcePolicy(int);
};
} // namespace Microsoft::UI::Composition::DropShadow
