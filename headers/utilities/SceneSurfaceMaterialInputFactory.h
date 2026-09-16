#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 21 member(s).
namespace Microsoft::UI::Composition::Scenes {
class SceneSurfaceMaterialInputFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAJPEAUICompositor@345@PEAPEAUISceneSurfaceMaterialInput@2345@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition::Scenes
