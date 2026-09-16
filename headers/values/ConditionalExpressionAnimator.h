#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition {
class ConditionalExpressionAnimator {
public:
    class ExpressionAnimatorListEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@ConditionalExpressionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@ConditionalExpressionAnimator@Composition@UI@Microsoft@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@ConditionalExpressionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ConditionalExpressionAnimator@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConditionalExpressionAnimator@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~ConditionalExpressionAnimator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ConditionalExpressionAnimator@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@ConditionalExpressionAnimator@Composition@UI@Microsoft@@AEAAXXZ
    void ReleaseResources();
};
} // namespace Microsoft::UI::Composition
