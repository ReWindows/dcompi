#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition::Scenes {
class SceneMeshRendererComponent {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentType@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEBA?AW4SceneComponentType@2345@XZ
    virtual int GetComponentType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SceneMeshRendererComponent@Scenes@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~SceneMeshRendererComponent();
};
} // namespace Microsoft::UI::Composition::Scenes
