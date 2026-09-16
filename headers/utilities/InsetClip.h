#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition {
class InsetClip {
public:
    class Api;
    class Experimental;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InsetClip@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@InsetClip@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@InsetClip@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InsetClip@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InsetClip@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InsetClip@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@MMMM@Z
    long RuntimeClassInitialize(WindissectOpaque *, float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@InsetClip@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyChangedListener@InsetClip@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUIExpCompositionPropertyChangedListener@Experimental@234@@Z
    virtual long SetPropertyChangedListener(int, WindissectOpaque *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@InsetClip@Composition@UI@Microsoft@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@InsetClip@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Microsoft::UI::Composition
