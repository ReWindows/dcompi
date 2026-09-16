#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition::Internal {
class CompositionSynchronousSuperWetInkSource {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@QEAAJIIPEBE@Z
    long AddTipPoints(unsigned int, unsigned int, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@QEAAJI_NIPEBE@Z
    long SetPropertiesForPresentCount(unsigned int, bool, unsigned int, unsigned char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionSynchronousSuperWetInkSource();
};
} // namespace Microsoft::UI::Composition::Internal
