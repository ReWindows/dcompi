#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
class CSparseStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindData@CSparseStorage@@QEBAXIIPEAX@Z
    void FindData(unsigned int, unsigned int, void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReference@CSparseStorage@@QEBAPEAXI@Z
    void * GetReference(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CSparseStorage@@QEAAXIIPEBX@Z
    void SetData(unsigned int, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z
    void SetReference(unsigned int, void *, WindissectOpaque const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSparseStorage@@QEAA@XZ
    ~CSparseStorage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z
    WindissectOpaque & FindSlotForData(unsigned int, unsigned int);
};
