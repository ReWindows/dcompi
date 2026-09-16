#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CManipulationTransformProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CManipulationTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CManipulationTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManipulationTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@CManipulationTransformProxy@DirectComposition@@UEAAJMMM@Z
    virtual long SetCenterPoint(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPan@CManipulationTransformProxy@DirectComposition@@UEAAJMMM@Z
    virtual long SetPan(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CManipulationTransformProxy@DirectComposition@@UEAAJMMM@Z
    virtual long SetScale(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTranslation@CManipulationTransformProxy@DirectComposition@@UEAAJMMM@Z
    virtual long SetTranslation(float, float, float);
};
} // namespace DirectComposition
