#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 11 member(s).
namespace Microsoft::UI::Composition {
class ExpressionAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_PersistentCache@ExpressionAnimator@Composition@UI@Microsoft@@UEAAJIPEBEI@Z
    virtual long Message_PersistentCache(unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@ExpressionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ExpressionAnimator@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVCSharedAllocation@DirectComposition@@IPEBIIPEBUExpressionReferenceInfo@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationValueSynchronizationBehavior@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, unsigned int, unsigned int const *, unsigned int, ExpressionReferenceInfo const *, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@ExpressionAnimator@Composition@UI@Microsoft@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@ExpressionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ExpressionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressionAnimator@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~ExpressionAnimator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ExpressionAnimator@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@ExpressionAnimator@Composition@UI@Microsoft@@AEAAXXZ
    void ReleaseResources();
};
} // namespace Microsoft::UI::Composition
