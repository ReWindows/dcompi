#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::Private::SystemVisualProxyVisualPrivate {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJPEAUColor@5Windows@@@Z
    virtual long get_BackgroundColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAboveLiftedContent@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsAboveLiftedContent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemBorderMode@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJPEAW4CompositionBorderMode@456@@Z
    virtual long get_SystemBorderMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemVisualIsHitTestVisible@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_SystemVisualIsHitTestVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundColor@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJUColor@5Windows@@@Z
    virtual long put_BackgroundColor(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsAboveLiftedContent@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsAboveLiftedContent(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemBorderMode@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJW4CompositionBorderMode@456@@Z
    virtual long put_SystemBorderMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemVisualIsHitTestVisible@Api@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_SystemVisualIsHitTestVisible(unsigned char);
};
} // namespace Microsoft::UI::Composition::Private::SystemVisualProxyVisualPrivate
