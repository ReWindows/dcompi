#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition {
class BindableSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBindPoint@BindableSurface@Composition@UI@Microsoft@@QEAAXPEAVSurfaceBindPoint@234@@Z
    void AddBindPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBindPoint@BindableSurface@Composition@UI@Microsoft@@QEAAXPEAVSurfaceBindPoint@234@@Z
    void RemoveBindPoint(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@BindableSurface@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BindableSurface@Composition@UI@Microsoft@@MEAA@XZ
    virtual ~BindableSurface();
};
} // namespace Microsoft::UI::Composition
