#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Composition::Diagnostics {
class CompositionDebugHeatMaps {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndHide@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Microsoft@@QEAAJPEAUIVisual@345@AEAV?$ComPtr@VVisual@Composition@UI@Microsoft@@@WRL@5@@Z
    long ValidateAndHide(WindissectOpaque *, WindissectOpaque &);
};
} // namespace Microsoft::UI::Composition::Diagnostics
