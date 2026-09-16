#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition {
class RectangleClip {
public:
    class Api;
    class Experimental;
    class Private;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RectangleClip@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@RectangleClip@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@RectangleClip@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RectangleClip@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RectangleClip@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RectangleClip@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@MMMMUVector2@Numerics@Foundation@Windows@@111@Z
    long RuntimeClassInitialize(WindissectOpaque *, float, float, float, float, ::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@RectangleClip@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyChangedListener@RectangleClip@Composition@UI@Microsoft@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUIExpCompositionPropertyChangedListener@Experimental@234@@Z
    virtual long SetPropertyChangedListener(int, WindissectOpaque *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@RectangleClip@Composition@UI@Microsoft@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@RectangleClip@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Microsoft::UI::Composition
