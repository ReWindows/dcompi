#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class SurfaceBindPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SurfaceBindPoint@Composition@UI@Microsoft@@QEAAX_N@Z
    void Destroy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SurfaceBindPoint@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAUIOwner@1234@@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Microsoft@@QEAAXXZ
    void NotifyUnderlyingContentChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@SurfaceBindPoint@Composition@UI@Microsoft@@QEAAJPEAUICompositionSurface@234@@Z
    long SetSurface(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SurfaceBindPoint@Composition@UI@Microsoft@@QEAA@XZ
    ~SurfaceBindPoint();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachSurface@SurfaceBindPoint@Composition@UI@Microsoft@@AEAAJPEAUICompositionSurface@234@@Z
    long AttachSurface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachSurface@SurfaceBindPoint@Composition@UI@Microsoft@@AEAAXXZ
    void DetachSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@SurfaceBindPoint@Composition@UI@Microsoft@@EEAAXPEAVCDirtyNotifier@DirectComposition@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void Invalidate(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSurface@SurfaceBindPoint@Composition@UI@Microsoft@@AEAAXPEAUICompositionSurface@234@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void MarshalSurface(WindissectOpaque *, WindissectOpaque const *);
};
} // namespace Microsoft::UI::Composition
