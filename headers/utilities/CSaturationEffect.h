#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 15 member(s).
namespace DirectComposition {
class CSaturationEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSaturationEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSaturationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSaturationEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSaturation@CSaturationEffect@DirectComposition@@UEAAJM@Z
    virtual long SetSaturation(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSaturation@CSaturationEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetSaturation(IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CSaturationEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
