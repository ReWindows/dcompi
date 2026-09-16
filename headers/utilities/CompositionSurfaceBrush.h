#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 16 member(s).
namespace Microsoft::UI::Composition {
class CompositionSurfaceBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSurfaceBrush@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Microsoft@@QEAAJXZ
    long EnsureComponentTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionSurfaceBrush@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Microsoft@@SAJPEAUICompositionSurface@234@PEAPEAU5234@1@Z
    static long GetRealSurface_NoLock(WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionSurfaceBrush@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionSurfaceBrush@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@CompositionSurfaceBrush@Composition@UI@Microsoft@@QEAAJPEAUICompositionSurface@234@0@Z
    long SetSurface(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@CompositionSurfaceBrush@Composition@UI@Microsoft@@QEAAJPEAUICompositionSurface@234@@Z
    long SetSurface(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionSurfaceBrush@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionSurfaceBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindDCompSurface@CompositionSurfaceBrush@Composition@UI@Microsoft@@AEAAJPEAUIDCompositionSurface@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long BindDCompSurface(IDCompositionSurface *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindDCompVirtualSurface@CompositionSurfaceBrush@Composition@UI@Microsoft@@AEAAJPEAUIDCompositionVirtualSurface@@@Z
    long BindDCompVirtualSurface(IDCompositionVirtualSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindSwapChainSurface@CompositionSurfaceBrush@Composition@UI@Microsoft@@AEAAJPEAVCompositionSwapChain@234@@Z
    long BindSwapChainSurface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Microsoft@@EEAAJPEAUICompositionSurface@234@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long MarshalSurface(WindissectOpaque *, WindissectOpaque const *);
};
} // namespace Microsoft::UI::Composition
