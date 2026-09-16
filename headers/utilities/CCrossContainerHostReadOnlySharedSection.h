#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CCrossContainerHostReadOnlySharedSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAXPEAVCSharedAllocationBase@2@@Z
    virtual void Free(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEBA?AW4SharedSectionType@2@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ
    virtual ~CCrossContainerHostReadOnlySharedSection();
};
} // namespace DirectComposition
