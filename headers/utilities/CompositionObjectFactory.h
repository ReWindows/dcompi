#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 23 member(s).
namespace Microsoft::UI::Composition {
class CompositionObjectFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionObjectFactory@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CompositionObjectFactory@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroupWithIAnimationObject@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAJPEAUIAnimationObject@234@PEAUICompositionAnimationBase@234@@Z
    virtual long StartAnimationGroupWithIAnimationObject(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Microsoft@@SAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAVCompositionAnimation@234@PEAPEAVCompositionPropertyAnimator@234@@Z
    static long StartAnimationWithIAnimationObject(WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithIAnimationObject@CompositionObjectFactory@Composition@UI@Microsoft@@UEAAJPEAUIAnimationObject@234@PEAUHSTRING__@@PEAUICompositionAnimation@234@@Z
    virtual long StartAnimationWithIAnimationObject(WindissectOpaque *, HSTRING__*, WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
