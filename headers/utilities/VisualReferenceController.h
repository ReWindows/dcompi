#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::Private {
class VisualReferenceController {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualReferenceController@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualReferenceController@Private@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualReferenceController@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@VisualReferenceController@Private@Composition@UI@Microsoft@@QEAAJPEAVVisual@345@@Z
    long SetVisual(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::Private
