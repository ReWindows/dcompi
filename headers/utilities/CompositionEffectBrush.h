#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition {
class CompositionEffectBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Microsoft@@QEBA_NXZ
    bool ContainsBackdropInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionEffectBrush@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVCompositionEffectFactory@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z
    long SetSourceParameter(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSetSourceParameter@CompositionEffectBrush@Composition@UI@Microsoft@@QEAAJPEAUICompositionBrush@234@PEAVContextSession@WRL2@4@PEAPEAVCompositionBrush@234@@Z
    long ValidateSetSourceParameter(WindissectOpaque *, ::Microsoft::WRL2::ContextSession *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionEffectBrush@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionEffectBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Microsoft@@AEAAJXZ
    long InitializePropertySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Microsoft@@AEAAXH@Z
    void UpdateTreeEffectCounter(int);
};
} // namespace Microsoft::UI::Composition
