#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::SystemVisualTarget {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputReadyEvent@Partner@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJ_K@Z
    virtual long SetInputReadyEvent(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HintSize@Partner@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJPEAUSizeInt32@Graphics@Windows@@@Z
    virtual long get_HintSize(::Windows::Graphics::SizeInt32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OutputDisplay@Partner@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJPEAUDisplayId@45@@Z
    virtual long get_OutputDisplay(::Microsoft::UI::DisplayId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualTreeId@Partner@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJPEAUTreeLuid@Internal@345@@Z
    virtual long get_VisualTreeId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HintSize@Partner@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJUSizeInt32@Graphics@Windows@@@Z
    virtual long put_HintSize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OutputDisplay@Partner@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJUDisplayId@45@@Z
    virtual long put_OutputDisplay(::Microsoft::UI::DisplayId);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisualTreeId@Partner@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJUTreeLuid@Internal@345@@Z
    virtual long put_VisualTreeId(WindissectOpaque);
};
} // namespace Microsoft::UI::Composition::SystemVisualTarget
