#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 14 member(s).
namespace Microsoft::UI::Composition {
class KeyFrameAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToControllerIfSupported@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJPEAVAnimationController@234@@Z
    virtual long AddToControllerIfSupported(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@KeyFrameAnimator@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_PersistentCache@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJIPEBEI@Z
    virtual long Message_PersistentCache(unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetController@KeyFrameAnimator@Composition@UI@Microsoft@@UEAAJPEAPEAVAnimationController@234@@Z
    virtual long TryGetController(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyFrameAnimator@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~KeyFrameAnimator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@KeyFrameAnimator@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@KeyFrameAnimator@Composition@UI@Microsoft@@AEAAXXZ
    void ReleaseResources();
};
} // namespace Microsoft::UI::Composition
