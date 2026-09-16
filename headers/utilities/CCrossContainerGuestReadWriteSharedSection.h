#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CCrossContainerGuestReadWriteSharedSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAAXPEAVCSharedAllocationBase@2@@Z
    virtual void Free(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEBA?AW4SharedSectionType@2@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ
    virtual ~CCrossContainerGuestReadWriteSharedSection();
};
} // namespace DirectComposition
