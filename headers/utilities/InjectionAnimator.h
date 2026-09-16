#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class InjectionAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@InjectionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InjectionAnimator@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVInjectionAnimation@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@InjectionAnimator@Composition@UI@Microsoft@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@InjectionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InjectionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Stop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InjectionAnimator@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
};
} // namespace Microsoft::UI::Composition
