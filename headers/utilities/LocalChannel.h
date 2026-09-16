#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 20 member(s).
namespace DirectComposition {
class LocalChannel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCrossDeviceVisualChild@LocalChannel@DirectComposition@@UEAAJIPEAVChannel@2@IH0I@Z
    virtual long AddCrossDeviceVisualChild(unsigned int, WindissectOpaque *, unsigned int, int, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitChannel@LocalChannel@DirectComposition@@UEAAJPEAKPEAEKPEAXPEBXPEBII@Z
    virtual long CommitChannel(unsigned long *, unsigned char *, unsigned long, void *, void const *, unsigned int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndBindSharedSection@LocalChannel@DirectComposition@@UEAAJI_KPEAPEAX@Z
    virtual long CreateAndBindSharedSection(unsigned int, uint64_t, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedResourceHandle@LocalChannel@DirectComposition@@UEAAJIPEAPEAX@Z
    virtual long CreateSharedResourceHandle(unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatchId@LocalChannel@DirectComposition@@UEAAJW4DCOMPOSITIONBATCHSELECTOR@@PEAK@Z
    virtual long GetBatchId(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeletedResources@LocalChannel@DirectComposition@@UEAAJKPEAPEAXPEAK@Z
    virtual long GetDeletedResources(unsigned long, void * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameIdFromBatchId@LocalChannel@DirectComposition@@UEAAJKPEA_K@Z
    virtual long GetFrameIdFromBatchId(unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@LocalChannel@DirectComposition@@UEAAIXZ
    virtual unsigned int GetID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySuperWetInkWork@LocalChannel@DirectComposition@@UEAAJXZ
    virtual long NotifySuperWetInkWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessChannelBatchBuffer@LocalChannel@DirectComposition@@UEAAJIPEAKPEAE@Z
    virtual long ProcessChannelBatchBuffer(unsigned int, unsigned long *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllResources@LocalChannel@DirectComposition@@UEAAJPEAE@Z
    virtual long ReleaseAllResources(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCrossDeviceVisualChild@LocalChannel@DirectComposition@@UEAAJIPEAVChannel@2@I@Z
    virtual long RemoveCrossDeviceVisualChild(unsigned int, WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChannelCommitCompletionEvent@LocalChannel@DirectComposition@@UEAAJPEAXH@Z
    virtual long SetChannelCommitCompletionEvent(void *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChannelConnectionId@LocalChannel@DirectComposition@@UEAAJH_K@Z
    virtual long SetChannelConnectionId(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Synchronize@LocalChannel@DirectComposition@@UEAAJPEA_K@Z
    virtual long Synchronize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetrySetApplicationId@LocalChannel@DirectComposition@@UEAAJ_KPEBX@Z
    virtual long TelemetrySetApplicationId(uint64_t, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForChannel@LocalChannel@DirectComposition@@UEAAJH@Z
    virtual long WaitForChannel(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalChannel@DirectComposition@@UEAA@XZ
    virtual ~LocalChannel();
};
} // namespace DirectComposition
