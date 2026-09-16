#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition::Scenes {
class SceneMesh {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneMesh@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Microsoft@@QEAAJW4SceneAttributeSemantic@2345@W4DirectXPixelFormat@DirectX@Graphics@5@PEAUIMemoryBuffer@Foundation@Windows@@@Z
    long FillMeshAttribute(int, int, ::Windows::Foundation::IMemoryBuffer *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneMesh@Scenes@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneMesh@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneMesh@Scenes@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SceneMesh@Scenes@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~SceneMesh();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBounds@SceneMesh@Scenes@Composition@UI@Microsoft@@AEAAXXZ
    void UpdateBounds();
};
} // namespace Microsoft::UI::Composition::Scenes
