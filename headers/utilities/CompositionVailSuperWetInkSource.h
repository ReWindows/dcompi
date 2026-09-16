#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::Internal {
class CompositionVailSuperWetInkSource {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@QEAAJAEBU_GUID@@III0III0@Z
    long EnableForVail(_GUID const &, unsigned int, unsigned int, unsigned int, _GUID const &, unsigned int, unsigned int, unsigned int, _GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionVailSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition::Internal
