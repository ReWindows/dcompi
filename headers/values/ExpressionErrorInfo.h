#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition {
class ExpressionErrorInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ExpressionErrorInfo@Composition@UI@Microsoft@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Microsoft@@QEAAPEAGXZ
    unsigned short * GetErrorContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Microsoft@@QEAAXPEBG@Z
    void SetErrorContext(unsigned short const *);
};
} // namespace Microsoft::UI::Composition
