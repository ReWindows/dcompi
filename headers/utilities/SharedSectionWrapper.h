#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition {
class SharedSectionWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SharedSectionWrapper@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Microsoft@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z
    long MarshalSharedData(WindissectOpaque *, WindissectOpaque);
};
} // namespace Microsoft::UI::Composition
