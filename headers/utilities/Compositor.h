#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition {
class Compositor {
public:
    class Api;
    class Internal;
    class LiftedOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Compositor@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Compositor@Composition@UI@Microsoft@@QEAA@XZ
    Compositor();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Compositor@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Compositor@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Compositor@Composition@UI@Microsoft@@QEAAJPEAUIDispatcherQueue@Dispatching@34@PEAUICoreWindow@Core@3Windows@@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@W4DeviceVersion@DirectComposition@@@Z
    long RuntimeClassInitialize(::Microsoft::UI::Dispatching::IDispatcherQueue *, ::Windows::UI::Core::ICoreWindow *, IUnknown *, WindissectOpaque *, int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupSession@Compositor@Composition@UI@Microsoft@@MEAAXXZ
    virtual void CleanupSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@Compositor@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticDisposeItemProc@Compositor@Composition@UI@Microsoft@@KAXPEAVContextRuntimeClass@WRL2@4@@Z
    static void StaticDisposeItemProc(::Microsoft::WRL2::ContextRuntimeClass *);
};
} // namespace Microsoft::UI::Composition
