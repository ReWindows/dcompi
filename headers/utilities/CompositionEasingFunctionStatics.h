#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 30 member(s).
namespace Microsoft::UI::Composition {
class CompositionEasingFunctionStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIBackEasingFunction@234@@Z
    virtual long CreateBackEasingFunction(WindissectOpaque *, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBounceEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@HMPEAPEAUIBounceEasingFunction@234@@Z
    virtual long CreateBounceEasingFunction(WindissectOpaque *, int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCircleEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@PEAPEAUICircleEasingFunction@234@@Z
    virtual long CreateCircleEasingFunction(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCubicBezierEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@UVector2@Numerics@Foundation@Windows@@1PEAPEAUICubicBezierEasingFunction@234@@Z
    virtual long CreateCubicBezierEasingFunction(WindissectOpaque *, ::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElasticEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@HMPEAPEAUIElasticEasingFunction@234@@Z
    virtual long CreateElasticEasingFunction(WindissectOpaque *, int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExponentialEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIExponentialEasingFunction@234@@Z
    virtual long CreateExponentialEasingFunction(WindissectOpaque *, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@PEAPEAUILinearEasingFunction@234@@Z
    virtual long CreateLinearEasingFunction(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePowerEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIPowerEasingFunction@234@@Z
    virtual long CreatePowerEasingFunction(WindissectOpaque *, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSineEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@PEAPEAUISineEasingFunction@234@@Z
    virtual long CreateSineEasingFunction(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStepEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@PEAPEAUIStepEasingFunction@234@@Z
    virtual long CreateStepEasingFunction(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStepEasingFunctionWithStepCount@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAUICompositor@234@HPEAPEAUIStepEasingFunction@234@@Z
    virtual long CreateStepEasingFunctionWithStepCount(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionEasingFunctionStatics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
