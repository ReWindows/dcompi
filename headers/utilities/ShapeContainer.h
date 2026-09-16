#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition {
class ShapeContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@ShapeContainer@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@ShapeContainer@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShapeContainer@Composition@UI@Microsoft@@IEAAJPEAVCompositor@234@@Z
    long Initialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@ShapeContainer@Composition@UI@Microsoft@@IEAAXXZ
    void Uninitialize();
};
} // namespace Microsoft::UI::Composition
