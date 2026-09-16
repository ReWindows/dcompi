#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::WRL2 {
class ContextSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ
    void BeginApiEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ
    void EndApiEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnhandledExternalExceptionNL@ContextSession@WRL2@Microsoft@@QEAAXPEBU_EXCEPTION_POINTERS@@@Z
    void NotifyUnhandledExternalExceptionNL(_EXCEPTION_POINTERS const *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextSession@WRL2@Microsoft@@MEAA@XZ
    virtual ~ContextSession();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ
    void BeginApiCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ
    void EndApiCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueReleaseAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@@Z
    void EnqueueReleaseAndPassOwnershipWorker(IUnknown *);
};
} // namespace Microsoft::WRL2
