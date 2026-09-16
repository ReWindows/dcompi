#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::Scenes {
class SceneSurfaceMaterialInput {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@SceneSurfaceMaterialInput@Scenes@Composition@UI@Microsoft@@QEAAJPEAUICompositionSurface@345@@Z
    long SetSurface(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Scenes
