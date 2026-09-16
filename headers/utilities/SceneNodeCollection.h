#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition::Scenes {
class SceneNodeCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneNodeCollection@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneNodeCollection@Scenes@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@SceneNodeCollection@Scenes@Composition@UI@Microsoft@@UEAAXXZ
    virtual void OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddItem@SceneNodeCollection@Scenes@Composition@UI@Microsoft@@UEAAJAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Microsoft@@@WRL2@5@@Z
    virtual long PreAddItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRemoveItem@SceneNodeCollection@Scenes@Composition@UI@Microsoft@@UEAAXAEBV?$RefPtr@VSceneNode@Scenes@Composition@UI@Microsoft@@@WRL2@5@@Z
    virtual void PreRemoveItem(WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneNodeCollection@Scenes@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneNodeCollection@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition::Scenes
