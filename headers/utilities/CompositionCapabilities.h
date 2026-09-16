#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class CompositionCapabilities {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionCapabilities@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CompositionCapabilities@Composition@UI@Microsoft@@SAJPEAPEAV1234@@Z
    static long Create(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionCapabilities@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionCapabilities@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionCapabilities@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionCapabilities();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedQueryInterface@CompositionCapabilities@Composition@UI@Microsoft@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ExtendedQueryInterface(_GUID const &, void * *);
};
} // namespace Microsoft::UI::Composition
