#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 16 member(s).
namespace Microsoft::UI::Composition {
class AnimationController {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeyFrameAnimator@AnimationController@Composition@UI@Microsoft@@QEAAJPEAVKeyFrameAnimator@234@@Z
    long AddKeyFrameAnimator(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationController@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@AnimationController@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@AnimationController@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@AnimationController@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@AnimationController@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationController@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@AnimationController@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationController@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveKeyFrameAnimator@AnimationController@Composition@UI@Microsoft@@QEAAXPEAVKeyFrameAnimator@234@@Z
    void RemoveKeyFrameAnimator(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@AnimationController@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@AnimationController@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV1234@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@AnimationController@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
};
} // namespace Microsoft::UI::Composition
