#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition::Scenes {
class SceneNode {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@SceneNode@Scenes@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneNode@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneNode@Scenes@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoot@SceneNode@Scenes@Composition@UI@Microsoft@@QEAAXPEAV12345@@Z
    void UpdateRoot(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@SceneNode@Scenes@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
};
} // namespace Microsoft::UI::Composition::Scenes
