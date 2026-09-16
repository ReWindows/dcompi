#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 23 member(s).
namespace Microsoft::UI::Composition::Compositor {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorBrush@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionColorBrush@345@@Z
    virtual long CreateColorBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorBrushWithColor@Api@Compositor@Composition@UI@Microsoft@@UEAAJUColor@4Windows@@PEAPEAUICompositionColorBrush@345@@Z
    virtual long CreateColorBrushWithColor(::Windows::UI::Color, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorKeyFrameAnimation@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIColorKeyFrameAnimation@345@@Z
    virtual long CreateColorKeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainerVisual@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIContainerVisual@345@@Z
    virtual long CreateContainerVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCubicBezierEasingFunction@Api@Compositor@Composition@UI@Microsoft@@UEAAJUVector2@Numerics@Foundation@Windows@@0PEAPEAUICubicBezierEasingFunction@345@@Z
    virtual long CreateCubicBezierEasingFunction(::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectFactory@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@Windows@@PEAPEAUICompositionEffectFactory@345@@Z
    virtual long CreateEffectFactory(::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectFactoryWithProperties@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@Windows@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@9@PEAPEAUICompositionEffectFactory@345@@Z
    virtual long CreateEffectFactoryWithProperties(::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpressionAnimation@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIExpressionAnimation@345@@Z
    virtual long CreateExpressionAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z
    virtual long CreateExpressionAnimationWithExpression(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsetClip@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIInsetClip@345@@Z
    virtual long CreateInsetClip(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsetClipWithInsets@Api@Compositor@Composition@UI@Microsoft@@UEAAJMMMMPEAPEAUIInsetClip@345@@Z
    virtual long CreateInsetClipWithInsets(float, float, float, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearEasingFunction@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUILinearEasingFunction@345@@Z
    virtual long CreateLinearEasingFunction(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertySet@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionPropertySet@345@@Z
    virtual long CreatePropertySet(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQuaternionKeyFrameAnimation@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIQuaternionKeyFrameAnimation@345@@Z
    virtual long CreateQuaternionKeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalarKeyFrameAnimation@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIScalarKeyFrameAnimation@345@@Z
    virtual long CreateScalarKeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScopedBatch@Api@Compositor@Composition@UI@Microsoft@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionScopedBatch@345@@Z
    virtual long CreateScopedBatch(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSpriteVisual@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUISpriteVisual@345@@Z
    virtual long CreateSpriteVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceBrush@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionSurfaceBrush@345@@Z
    virtual long CreateSurfaceBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAUICompositionSurface@345@PEAPEAUICompositionSurfaceBrush@345@@Z
    virtual long CreateSurfaceBrushWithSurface(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector2KeyFrameAnimation@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIVector2KeyFrameAnimation@345@@Z
    virtual long CreateVector2KeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector3KeyFrameAnimation@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIVector3KeyFrameAnimation@345@@Z
    virtual long CreateVector3KeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector4KeyFrameAnimation@Api@Compositor@Composition@UI@Microsoft@@UEAAJPEAPEAUIVector4KeyFrameAnimation@345@@Z
    virtual long CreateVector4KeyFrameAnimation(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitBatch@Api@Compositor@Composition@UI@Microsoft@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionCommitBatch@345@@Z
    virtual long GetCommitBatch(int, WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::Compositor
