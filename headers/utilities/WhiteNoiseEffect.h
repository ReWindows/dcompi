#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::Effects {
class WhiteNoiseEffect {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WhiteNoiseEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition::Effects
