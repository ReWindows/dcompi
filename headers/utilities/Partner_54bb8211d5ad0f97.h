#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::Desktop::LocalDesktopWindowTarget {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputReadyEvent@Partner@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJ_K@Z
    virtual long SetInputReadyEvent(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HintSize@Partner@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJPEAUSizeInt32@Graphics@Windows@@@Z
    virtual long get_HintSize(::Windows::Graphics::SizeInt32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OutputDisplay@Partner@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJPEAUDisplayId@56@@Z
    virtual long get_OutputDisplay(::Microsoft::UI::DisplayId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualTreeId@Partner@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJPEAUTreeLuid@Internal@456@@Z
    virtual long get_VisualTreeId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HintSize@Partner@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJUSizeInt32@Graphics@Windows@@@Z
    virtual long put_HintSize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OutputDisplay@Partner@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJUDisplayId@56@@Z
    virtual long put_OutputDisplay(::Microsoft::UI::DisplayId);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisualTreeId@Partner@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJUTreeLuid@Internal@456@@Z
    virtual long put_VisualTreeId(WindissectOpaque);
};
} // namespace Microsoft::UI::Composition::Desktop::LocalDesktopWindowTarget
