#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::Scenes {
class SceneMeshMaterialAttributeMap {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Microsoft@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Microsoft@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    long First(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Scenes
