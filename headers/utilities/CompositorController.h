#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition::Core {
class CompositorController {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositorController@Core@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositorController@Core@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Microsoft@@QEAAXXZ
    void FireCommitNeeded_Callback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositorController@Core@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositorController@Core@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositorController@Core@Composition@UI@Microsoft@@QEAAJPEAUIDispatcherQueue@Dispatching@45@PEAUICoreWindow@24Windows@@@Z
    long RuntimeClassInitialize(::Microsoft::UI::Dispatching::IDispatcherQueue *, ::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CommitNeeded@CompositorController@Core@Composition@UI@Microsoft@@QEAAJUEventRegistrationToken@@@Z
    long remove_CommitNeeded(EventRegistrationToken);
};
} // namespace Microsoft::UI::Composition::Core
