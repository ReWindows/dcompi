#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition::CompositorCommon {
class DCPrivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z
    virtual long CreateBackEasingFunction(int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBounceEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAUICompositionEasingFunction@345@@Z
    virtual long CreateBounceEasingFunction(int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCircleEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@PEAPEAUICompositionEasingFunction@345@@Z
    virtual long CreateCircleEasingFunction(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForDCompositionSurface@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIDCompositionSurface@@PEAPEAUICompositionSurface@345@@Z
    virtual long CreateCompositionSurfaceForDCompositionSurface(IDCompositionSurface *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElasticEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAUICompositionEasingFunction@345@@Z
    virtual long CreateElasticEasingFunction(int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExponentialEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z
    virtual long CreateExponentialEasingFunction(int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePowerEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z
    virtual long CreatePowerEasingFunction(int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisualReferenceController@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@PEAPEAUIVisualReferenceController@Private@345@@Z
    virtual long CreateSharedVisualReferenceController(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSineEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@PEAPEAUICompositionEasingFunction@345@@Z
    virtual long CreateSineEasingFunction(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedInteractionFromHandle@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUICompositionInteractionPartner@345@@Z
    virtual long OpenSharedInteractionFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedLightFromHandle@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUISharedLight@Private@345@@Z
    virtual long OpenSharedLightFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedManipulationTransformFromHandle@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAXPEAPEAUICompositionManipulationTransformPartner@345@@Z
    virtual long OpenSharedManipulationTransformFromHandle(void *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximumExpressionLength@DCPrivate@CompositorCommon@Composition@UI@Microsoft@@UEAAJI@Z
    virtual long SetMaximumExpressionLength(unsigned int);
};
} // namespace Microsoft::UI::Composition::CompositorCommon
