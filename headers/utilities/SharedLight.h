#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::Private {
class SharedLight {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedLight@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@SharedLight@Private@Composition@UI@Microsoft@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z
    virtual long AddVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedLight@Private@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedLight@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllVisuals@SharedLight@Private@Composition@UI@Microsoft@@UEAAJPEAVVisualUnorderedCollectionImpl@345@@Z
    virtual long RemoveAllVisuals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@SharedLight@Private@Composition@UI@Microsoft@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z
    virtual long RemoveVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Microsoft@@UEAAJPEAVVisual@345@W4LightBehavior@345@@Z
    virtual long RemoveVisualByLightBehavior(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@SharedLight@Private@Composition@UI@Microsoft@@UEAAJ_N@Z
    virtual long SetEnabled(bool);
};
} // namespace Microsoft::UI::Composition::Private
