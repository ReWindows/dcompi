#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::VisualCapture {
class AsyncOperation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@AsyncOperation@VisualCapture@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionSurface@345@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@AsyncOperation@VisualCapture@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Microsoft@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@AsyncOperation@VisualCapture@Composition@UI@Microsoft@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Microsoft@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::VisualCapture
