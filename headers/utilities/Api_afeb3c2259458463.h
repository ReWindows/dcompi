#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 32 member(s).
namespace Microsoft::UI::Composition::Interactions::VisualInteractionSource {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointXModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureCenterPointXModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointYModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureCenterPointYModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureDeltaPositionXModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureDeltaPositionXModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureDeltaPositionYModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureDeltaPositionYModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureDeltaScaleModifiers@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Z
    virtual long ConfigureDeltaScaleModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRedirectForManipulation@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAUIPointerPoint@Input@56@@Z
    virtual long TryRedirectForManipulation(::Microsoft::UI::Input::IPointerPoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaPosition@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_DeltaPosition(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaScale@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_DeltaScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPositionXRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsPositionXRailsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPositionYRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsPositionYRailsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationRedirectionMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4VisualInteractionSourceRedirectionMode@3456@@Z
    virtual long get_ManipulationRedirectionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerWheelConfig@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUIInteractionSourceConfiguration@3456@@Z
    virtual long get_PointerWheelConfig(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_Position(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionVelocity@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_PositionVelocity(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionXChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4InteractionChainingMode@3456@@Z
    virtual long get_PositionXChainingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionXSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4InteractionSourceMode@3456@@Z
    virtual long get_PositionXSourceMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionYChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4InteractionChainingMode@3456@@Z
    virtual long get_PositionYChainingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionYSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4InteractionSourceMode@3456@@Z
    virtual long get_PositionYSourceMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Scale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4InteractionChainingMode@3456@@Z
    virtual long get_ScaleChainingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4InteractionSourceMode@3456@@Z
    virtual long get_ScaleSourceMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleVelocity@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_ScaleVelocity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long get_Source(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPositionXRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsPositionXRailsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPositionYRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsPositionYRailsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ManipulationRedirectionMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJW4VisualInteractionSourceRedirectionMode@3456@@Z
    virtual long put_ManipulationRedirectionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionXChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJW4InteractionChainingMode@3456@@Z
    virtual long put_PositionXChainingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionXSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJW4InteractionSourceMode@3456@@Z
    virtual long put_PositionXSourceMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionYChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJW4InteractionChainingMode@3456@@Z
    virtual long put_PositionYChainingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionYSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJW4InteractionSourceMode@3456@@Z
    virtual long put_PositionYSourceMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJW4InteractionChainingMode@3456@@Z
    virtual long put_ScaleChainingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Microsoft@@UEAAJW4InteractionSourceMode@3456@@Z
    virtual long put_ScaleSourceMode(int);
};
} // namespace Microsoft::UI::Composition::Interactions::VisualInteractionSource
