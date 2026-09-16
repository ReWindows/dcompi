#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 15 member(s).
namespace Microsoft::UI::Composition {
class CompositionPath {
public:
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPath@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachConsumer@CompositionPath@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z
    long AttachConsumer(WindissectOpaque *, WindissectOpaque * *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionPath@Composition@UI@Microsoft@@QEAA@XZ
    CompositionPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionPathFromData@CompositionPath@Composition@UI@Microsoft@@SAJV?$span@$$CBE$0?0@gsl@@PEAPEAV1234@@Z
    static long CreateCompositionPathFromData(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@CompositionPath@Composition@UI@Microsoft@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    long Deserialize(ID2D1Factory *, ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachConsumer@CompositionPath@Composition@UI@Microsoft@@QEAAXPEAVCompositor@234@@Z
    void DetachConsumer(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlPointCount@CompositionPath@Composition@UI@Microsoft@@QEBAIXZ
    unsigned int GetControlPointCount() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPath@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPath@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionPath@Composition@UI@Microsoft@@QEAAJPEAUID2D1Geometry@@@Z
    long RuntimeClassInitialize(ID2D1Geometry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionPath@Composition@UI@Microsoft@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z
    long RuntimeClassInitialize(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedQueryInterface@CompositionPath@Composition@UI@Microsoft@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ExtendedQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionPath@Composition@UI@Microsoft@@MEAA@XZ
    virtual ~CompositionPath();
};
} // namespace Microsoft::UI::Composition
