#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class PathKeyFrameAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PathKeyFrameAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PathKeyFrameAnimation@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Microsoft@@QEAAJMPEAVCompositionPath@234@PEAVCompositionEasingFunction@234@@Z
    long InsertPathKeyFrame(float, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z
    virtual long MarshalTypeSpecificData(unsigned int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PathKeyFrameAnimation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PathKeyFrameAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::UI::Composition
