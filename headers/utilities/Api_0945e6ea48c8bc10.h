#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 40 member(s).
namespace Microsoft::UI::Composition::Interactions::InteractionTracker {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPositionXIfGreaterThanThreshold@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJMM@Z
    virtual long AdjustPositionXIfGreaterThanThreshold(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPositionYIfGreaterThanThreshold@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJMM@Z
    virtual long AdjustPositionYIfGreaterThanThreshold(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureCenterPointXInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureCenterPointYInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePositionXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigurePositionXInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePositionYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigurePositionYInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureScaleInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureScaleInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVector2PositionInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureVector2PositionInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePosition@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@PEAH@Z
    virtual long TryUpdatePosition(::Windows::Foundation::Numerics::Vector3, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionBy@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@PEAH@Z
    virtual long TryUpdatePositionBy(::Windows::Foundation::Numerics::Vector3, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionByWithOption@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@W4InteractionTrackerClampingOption@3456@PEAH@Z
    virtual long TryUpdatePositionByWithOption(::Windows::Foundation::Numerics::Vector3, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@PEAH@Z
    virtual long TryUpdatePositionWithAdditionalVelocity(::Windows::Foundation::Numerics::Vector3, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimation@456@PEAH@Z
    virtual long TryUpdatePositionWithAnimation(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@W4InteractionTrackerClampingOption@3456@PEAH@Z
    virtual long TryUpdatePositionWithOption(::Windows::Foundation::Numerics::Vector3, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@W4InteractionTrackerClampingOption@3456@W4InteractionTrackerPositionUpdateOption@3456@PEAH@Z
    virtual long TryUpdatePositionWithOption(::Windows::Foundation::Numerics::Vector3, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScale@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJMUVector3@Numerics@Foundation@Windows@@PEAH@Z
    virtual long TryUpdateScale(float, ::Windows::Foundation::Numerics::Vector3, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJMUVector3@Numerics@Foundation@Windows@@PEAH@Z
    virtual long TryUpdateScaleWithAdditionalVelocity(float, ::Windows::Foundation::Numerics::Vector3, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimation@456@UVector3@Numerics@Foundation@Windows@@PEAH@Z
    virtual long TryUpdateScaleWithAnimation(WindissectOpaque *, ::Windows::Foundation::Numerics::Vector3, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionSources@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionInteractionSourceCollection@3456@@Z
    virtual long get_InteractionSources(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertiaFromImpulse@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsInertiaFromImpulse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPositionRoundingSuggested@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsPositionRoundingSuggested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxPosition@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_MaxPosition(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxScale@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MaxScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinPosition@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_MinPosition(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinScale@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MinScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingPosition@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_NaturalRestingPosition(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingScale@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_NaturalRestingScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Owner@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUIInteractionTrackerOwner@3456@@Z
    virtual long get_Owner(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Position(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_PositionInertiaDecayRate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionVelocityInPixelsPerSecond@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_PositionVelocityInPixelsPerSecond(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Scale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long get_ScaleInertiaDecayRate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleVelocityInPercentPerSecond@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_ScaleVelocityInPercentPerSecond(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxPosition@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_MaxPosition(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxScale@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MaxScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinPosition@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_MinPosition(::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinScale@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_MinScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_PositionInertiaDecayRate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long put_ScaleInertiaDecayRate(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Interactions::InteractionTracker
