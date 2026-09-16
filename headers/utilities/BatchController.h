#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 14 member(s).
namespace Microsoft::UI::Composition {
class BatchController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatchController@Composition@UI@Microsoft@@QEAA@XZ
    BatchController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginNewCycle@BatchController@Composition@UI@Microsoft@@QEAAXXZ
    void BeginNewCycle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScopedBatch@BatchController@Composition@UI@Microsoft@@QEAAXPEAPEAVCompositionScopedBatch@234@@Z
    void CreateScopedBatch(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeliverCompletions_Callback@BatchController@Composition@UI@Microsoft@@QEAAXXZ
    void DeliverCompletions_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchEnded@BatchController@Composition@UI@Microsoft@@QEAAXPEAVCompositionBatch@234@_N1@Z
    void NotifyBatchEnded(WindissectOpaque *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchResumed@BatchController@Composition@UI@Microsoft@@QEAAXPEAVCompositionBatch@234@@Z
    void NotifyBatchResumed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@BatchController@Composition@UI@Microsoft@@QEAAXXZ
    void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatchController@Composition@UI@Microsoft@@QEAA@XZ
    ~BatchController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearList@BatchController@Composition@UI@Microsoft@@AEAAXAEAV?$RefPtr@VCompositionBatch@Composition@UI@Microsoft@@@WRL2@4@@Z
    void ClearList(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBatchSetImpl@BatchController@Composition@UI@Microsoft@@AEAAXPEAPEAUBatchSet@234@I@Z
    void CreateBatchSetImpl(WindissectOpaque * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenBatchCount@BatchController@Composition@UI@Microsoft@@AEAAIPEAPEAVCompositionBatch@234@@Z
    unsigned int GetOpenBatchCount(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateBatch@BatchController@Composition@UI@Microsoft@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Microsoft@@@WRL2@4@W4BatchState@234@@Z
    void MigrateBatch(WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleCompletionNotifications@BatchController@Composition@UI@Microsoft@@AEAAXXZ
    void ScheduleCompletionNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreBatchSetOnObject@BatchController@Composition@UI@Microsoft@@AEAAXPEAUBatchMember@234@@Z
    void StoreBatchSetOnObject(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition
