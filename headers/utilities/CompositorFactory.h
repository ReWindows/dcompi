#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 37 member(s).
namespace Microsoft::UI::Composition {
class CompositorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositorFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckEnabled@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEA_N0@Z
    virtual long CheckEnabled(bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDwmCompositor@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z
    virtual long CreateDwmCompositor(IUnknown *, WindissectOpaque *, _GUID const &, void * *, IDwmChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteropCompositor@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInteropCompositor(IUnknown *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositorFactory@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CompositorFactory@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositorFactory@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositorFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxGlobalPlaybackRate@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MaxGlobalPlaybackRate(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinGlobalPlaybackRate@CompositorFactory@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_MinGlobalPlaybackRate(float *);
};
} // namespace Microsoft::UI::Composition
