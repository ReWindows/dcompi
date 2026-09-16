#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CProxyTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateProxy@CProxyTable@DirectComposition@@QEAAPEAXXZ
    void * AllocateProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z
    void FreeProxy(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z
    static WindissectOpaque * FromProxy(void *);
};
} // namespace DirectComposition
