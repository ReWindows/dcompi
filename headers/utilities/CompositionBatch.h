#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition {
class CompositionBatch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionBatch@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionBatch@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVBatchController@234@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@CompositionBatch@Composition@UI@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Microsoft@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@CompositionBatch@Composition@UI@Microsoft@@QEAAJUEventRegistrationToken@@@Z
    long remove_Completed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionBatch@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionBatch();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletion_Callback@CompositionBatch@Composition@UI@Microsoft@@AEAAXXZ
    void FireCompletion_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOnOwningThread@CompositionBatch@Composition@UI@Microsoft@@AEAAJXZ
    long ValidateOnOwningThread();
};
} // namespace Microsoft::UI::Composition
