#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 27 member(s).
namespace Microsoft::UI::Composition::Interactions {
class VisualInteractionSourceFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@PEAPEAUIVisualInteractionSource@2345@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromIVisualElement@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAJPEAUIVisualElement@345@PEAPEAUIVisualInteractionSource@2345@@Z
    virtual long CreateFromIVisualElement(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualInteractionSourceFactory@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition::Interactions
