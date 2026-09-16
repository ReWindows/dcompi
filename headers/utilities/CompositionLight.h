#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 22 member(s).
namespace Microsoft::UI::Composition {
class CompositionLight {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorAddRef@CompositionLight@Composition@UI@Microsoft@@UEAAXXZ
    virtual void AccessorAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorEnsureValidState@CompositionLight@Composition@UI@Microsoft@@UEAAJXZ
    virtual long AccessorEnsureValidState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorGetSession@CompositionLight@Composition@UI@Microsoft@@UEAAPEAVContextSession@WRL2@4@XZ
    virtual ::Microsoft::WRL2::ContextSession * AccessorGetSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorRelease@CompositionLight@Composition@UI@Microsoft@@UEAAXXZ
    virtual void AccessorRelease();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionLight@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@CompositionLight@Composition@UI@Microsoft@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z
    virtual long AddVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionLight@Composition@UI@Microsoft@@QEAA@XZ
    CompositionLight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionLight@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionVersionId@CompositionLight@Composition@UI@Microsoft@@UEBAIPEAVVisualUnorderedCollectionImpl@234@@Z
    virtual unsigned int GetCollectionVersionId(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCountOfVisuals@CompositionLight@Composition@UI@Microsoft@@UEBAHPEAVVisualUnorderedCollectionImpl@234@@Z
    virtual int GetCountOfVisuals(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualAtIndexNoRef@CompositionLight@Composition@UI@Microsoft@@UEBAXPEAVVisualUnorderedCollectionImpl@234@IPEAPEAVVisual@234@@Z
    virtual void GetVisualAtIndexNoRef(WindissectOpaque *, unsigned int, WindissectOpaque * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionLight@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionLight@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllVisuals@CompositionLight@Composition@UI@Microsoft@@UEAAJPEAVVisualUnorderedCollectionImpl@234@@Z
    virtual long RemoveAllVisuals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@CompositionLight@Composition@UI@Microsoft@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z
    virtual long RemoveVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Microsoft@@UEAAJPEAVVisual@234@W4LightBehavior@234@@Z
    virtual long RemoveVisualByLightBehavior(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionLight@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@I_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CompositionLight@Composition@UI@Microsoft@@UEAAJ_N@Z
    virtual long SetEnabled(bool);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightBehavior@CompositionLight@Composition@UI@Microsoft@@IEAA?AW4LightBehavior@234@PEAVVisualUnorderedCollectionImpl@234@@Z
    int GetLightBehavior(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargets@CompositionLight@Composition@UI@Microsoft@@AEAAJW4LightBehavior@234@@Z
    long UpdateTargets(int);
};
} // namespace Microsoft::UI::Composition
