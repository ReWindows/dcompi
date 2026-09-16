#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace FastRegion {
class CRegion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ
    WindissectOpaque BeginIterator() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z
    long CopyData(::FastRegion::Internal::CRgnData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z
    long SaveResult(::FastRegion::Internal::CWorkBuffer *);
};
} // namespace FastRegion
