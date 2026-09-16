#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 19 member(s).
namespace Microsoft::UI::Composition {
class CompositionProjectedShadow {
public:
    class Api;
    class Velocity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReceiver@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z
    long AddReceiver(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCaster@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJPEAVCompositionProjectedShadowCaster@234@_N0@Z
    long InsertCaster(WindissectOpaque *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllCasters@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJXZ
    long RemoveAllCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJXZ
    long RemoveAllReceivers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaster@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJPEAVCompositionProjectedShadowCaster@234@@Z
    long RemoveCaster(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveReceiver@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z
    long RemoveReceiver(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionProjectedShadow@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLightSource@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJPEAVCompositionLight@234@@Z
    long SetLightSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCasters@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJXZ
    long UpdateCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceivers@CompositionProjectedShadow@Composition@UI@Microsoft@@QEAAJXZ
    long UpdateReceivers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionProjectedShadow@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionProjectedShadow();
};
} // namespace Microsoft::UI::Composition
